<?php
/**
 * @file
 * ebi_features_core.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ebi_features_core_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ebi_jobs-jobs_listing_filter'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'jobs_listing_filter',
    'module' => 'ebi_jobs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ebi_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ebi_framework',
        'weight' => 0,
      ),
      'ebicompliance' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ebicompliance',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-jobs_main_listing-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'jobs_main_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ebi_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ebi_framework',
        'weight' => 0,
      ),
      'ebicompliance' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ebicompliance',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
