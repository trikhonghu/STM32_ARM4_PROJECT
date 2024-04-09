/*
 * screen.c
 *
 *  Created on: Nov 28, 2023
 *      Author: Admin
 */

#include "screen.h"

void screen_init(){
	lcd_ShowStr(60,90,"SNAKE GAME",WHITE,WHITE,24,1);
	lcd_ShowStr(40,120,"Player ID:",WHITE,BLACK,16,0);
	lcd_ShowIntNum(120, 120, ID, 4, WHITE, BLACK, 16);
	lcd_Fill(50, 200, 190, 300, GREEN);
	lcd_ShowStr(40, 140, "Mode (B):", WHITE, BLACK, 16, 0);
	if(mode == NORMAL)
		lcd_ShowStr(120, 140, "NORMAL", WHITE, BLACK, 16, 0);
	if(mode == WALL)
		lcd_ShowStr(120, 140, "WALL", WHITE, BLACK, 16, 0);
	if(mode == WALLS)
		lcd_ShowStr(120, 140, "WALLS", WHITE, BLACK, 16, 0);
	if(mode == TIMER)
		lcd_ShowStr(120, 140, "TIMER", WHITE, BLACK, 16, 0);
	lcd_ShowStr(40, 160, "Speed (E):", WHITE, BLACK, 16, 0);
	if(speed == 1000)
		lcd_ShowStr(120, 160, "EASY", WHITE, BLACK, 16, 0);
	if(speed == 500)
		lcd_ShowStr(120, 160, "MEDIUM", WHITE, BLACK, 16, 0);
	if(speed == 100)
		lcd_ShowStr(120, 160, "HARD", WHITE, BLACK, 16, 0);

	lcd_ShowStr(40,180,"Leaderboard (<)",WHITE,BLACK,16,0);
	lcd_ShowStr(90,235,"START",BLACK,BLACK,24,1);
}

void screen_play(){
	lcd_Fill(0, 0, 240, 200, WHITE);
	lcd_Fill(90, 210, 150, 250, BLUE);//UP
	lcd_Fill(90, 260, 150, 300, BLUE);//DOWN
	lcd_Fill(20, 260, 80, 300, BLUE);//LEFT
	lcd_Fill(160, 260, 220, 300, BLUE);//RIGHT
}

void screen_score(){
	lcd_ShowStr(0, 205, "Score: ", WHITE, WHITE, 24, 1);
	lcd_ShowIntNum(0, 230, score, 4, WHITE, BLACK, 24);
}

void screen_game_over(){
	lcd_ShowStr(70,90,"GAME OVER",WHITE,WHITE,24,1);
	lcd_ShowStr(80, 220, "Score: ", WHITE, WHITE, 24, 1);
	lcd_ShowStr(40,120,"Player ID:",WHITE,BLACK,16,0);
	lcd_ShowIntNum(120, 120, ID, 4, WHITE, BLACK, 16);
	lcd_ShowStr(40, 140, "Mode (B):", WHITE, BLACK, 16, 0);
	if(mode == NORMAL)
		lcd_ShowStr(120, 140, "NORMAL", WHITE, BLACK, 16, 0);
	if(mode == WALL)
		lcd_ShowStr(120, 140, "WALL", WHITE, BLACK, 16, 0);
	if(mode == WALLS)
		lcd_ShowStr(120, 140, "WALLS", WHITE, BLACK, 16, 0);
	if(mode == TIMER)
		lcd_ShowStr(120, 140, "TIMER", WHITE, BLACK, 16, 0);
	lcd_ShowStr(40, 160, "Speed (E):", WHITE, BLACK, 16, 0);
	if(speed == 1000)
		lcd_ShowStr(120, 160, "EASY", WHITE, BLACK, 16, 0);
	if(speed == 500)
		lcd_ShowStr(120, 160, "MEDIUM", WHITE, BLACK, 16, 0);
	if(speed == 100)
		lcd_ShowStr(120, 160, "HARD", WHITE, BLACK, 16, 0);
	lcd_ShowStr(40, 180, "Leaderboard (<)", WHITE, BLACK, 16, 0);
	lcd_ShowStr(40, 200, "Time:", WHITE, BLACK, 16, 0);
	lcd_ShowIntNum(90, 200, count/60, 2, WHITE, BLACK, 16);
	lcd_ShowStr(110, 200, ":", WHITE, BLACK, 16, 0);
	lcd_ShowIntNum(120, 200, count%60, 2, WHITE, BLACK, 16);
	lcd_ShowIntNum(150, 220, score, 2, WHITE, BLACK, 24);
	lcd_Fill(50, 250, 190, 300, GREEN);
	lcd_ShowStr(80,260,"RESTART",BLACK,BLACK,24,1);
}

