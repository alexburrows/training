<?php
/**
 * @file
 * template.php
 */

/**
 * Implements theme_preprocess_page().
 * @param $variables
 */
function play_preprocess_page(&$variables) {

}

/**
 * Implements theme_preprocess_node().
 */
function play_preprocess_node(&$variables) {
  $variables['title'] = '<h3>' . $variables['title'] . '</h3>';

  $variables['field_name'] = $node->field_name[LANGUAGE_NONE][0]['value'];
  $field_name;
  //krumo($variables);
}

/**
 * Implements theme_preprocess_image().
 */
function play_preprocess_image(&$vars) {
  //$vars['attributes']['class'][] = 'img-responsive';
}