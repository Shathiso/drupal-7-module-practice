<?php 

/*
* implementing hook form 
*/

function event_form_form($node, &$form_state){
    
    $form['name'] = array(
    '#type' => 'textfield',
    '#required' => 'True',
    '#title' => t('Name'),
    '#maxlength' => 127,
  );
    
     $form['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone'),
    '#maxlength' => 127,
  );
    
     $form['email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#maxlength' => 127,
  );
    
     $form['submit'] = array(
    '#type' => 'submit',
    '#title' => t('submit'),
    '#value' => 'submit',
  );
    return $form;
}


function event_form_form_submit($node, &$form_state){
    
    if($form_state['values']['name'] != " "){
        drupal_set_message('Hello' .' '.$form_state['values']['name']);
    }
    else{
        drupal_set_message('Please enter your username');
    }
    
}
