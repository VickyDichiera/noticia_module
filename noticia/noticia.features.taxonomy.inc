<?php
/**
 * @file
 * noticia.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function noticia_taxonomy_default_vocabularies() {
  return array(
    'seccion' => array(
      'name' => 'Seccion',
      'machine_name' => 'seccion',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
