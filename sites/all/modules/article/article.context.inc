<?php
/**
 * @file
 * article.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function article_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'display_article_basic_page';
  $context->description = 'Displays articles on basic page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-display_articles-block' => array(
          'module' => 'views',
          'delta' => 'display_articles-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays articles on basic page');
  $export['display_article_basic_page'] = $context;

  return $export;
}
