/* File: bbc_m_usb.h
 * 
 * Authors: Ben Kramer <krab@seas.upenn.edu> Cameron Zawacki,
 *          Ben Bernstein <bernsb@seas.upenn.edu>
 *
 * Printing routines for robockey.
 */

#ifndef __BBC_M_USB_H__
#define __BBC_M_USB_H__

#include "m_general.h"
#include "m_usb.h"
#include "bbc_definitions.h"
#include "bbc_m_rf.h"
#include "bbc_m_wii.h"
#include "bbc_localize.h"

/* Initializes usb. If usb initializes properly, the green and red 
 * leds blink once */
void init_usb();

void print_wlss_message(WirelessMessage m);

void print_puck_angle(float angle);

void print_adc_values(int adc_array[9]);

void print_mWii_data(mWiiReading m);

void print_constellation(constellation constel);

void print_localize(loc_state current);

void print_motor_duty(float duty_l, float duty_r);

void print_main_loop(int play_mode, int goalie, int goal_to_defend);

#endif
