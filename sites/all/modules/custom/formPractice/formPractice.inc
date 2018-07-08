<?php
/*
*IMplementing hook_form
*/

function formPractice_form($node, &$form_state){

   $form['nickname'] = array(
    '#type' => 'textfield',
    '#required' => 'True',
    '#title' => t('nickname'),
    '#maxlength' => 127,
  );
   $form['password'] = array(
    '#type' => 'textfield',
    '#required' => 'True',
    '#title' => t('password'),
    '#maxlength' => 127,
  );

  $form['selected'] = array(
      '#type' => 'select',
      '#title' => t('Selected'),
      '#options' => array(
         0 => t('No'),
        1 => t('Yes'),
      ),
      '#default_value' => $category['selected'],
      '#description' => t('Set this to <em>Yes</em> if you would like this category to be selected by default.'),
  );
  $form['enter'] = array(
   '#type' => 'submit',
   '#value' => 'enter',
   '#title' => t('enter'),
 );
  return $form;
}

function formPractice_form_submit($node, &$form_state){
 if($form_state['values']['nickname'] !=  " "){

   drupal_set_message('Heloo' . " " . $form_state['values']['nickname']);
 }

}
