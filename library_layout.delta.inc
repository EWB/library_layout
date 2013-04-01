<?php
/**
 * @file
 * library_layout.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function library_layout_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'front_page';
  $delta->name = 'Front Page';
  $delta->description = '';
  $delta->theme = 'slu_omega';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_slu_omega_settings' => array(
      'logo_upload' => '',
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_content_zone' => NULL,
      'alpha_region_content_equal_height_element' => FALSE,
      'alpha_zone_content_section' => NULL,
      'alpha_zone_content_primary' => NULL,
      'alpha_region_user_first_columns' => '12',
      'alpha_region_user_second_zone' => NULL,
      'alpha_zone_content_grid_columns' => '16',
      'alpha_region_content_grid_second_zone' => 'content_grid',
      'alpha_region_content_grid_second_columns' => '3',
      'alpha_region_content_grid_second_equal_height_element' => 0,
      'alpha_region_content_grid_first_zone' => 'content_grid',
      'alpha_region_content_grid_first_columns' => '3',
      'alpha_region_content_grid_first_equal_height_element' => 0,
      'alpha_region_content_grid_third_zone' => 'content_grid',
      'alpha_region_content_grid_third_columns' => '3',
      'alpha_region_content_grid_third_equal_height_element' => 0,
      'alpha_region_content_grid_fourth_zone' => 'content_grid',
      'alpha_region_content_grid_fourth_columns' => '3',
      'alpha_region_content_grid_fourth_equal_height_element' => 0,
      'alpha_region_sidebar_second_zone' => 'content_grid',
      'alpha_region_sidebar_second_columns' => '4',
    ),
  );
  $export['front_page'] = $delta;

  return $export;
}
