/*
 * Copyright (C) 2015 The PASTA Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <wchar.h>
#include "configuration.h"

#define STR_MAX_LEN 128

enum {
	STR_LANG_NAME,
	STR_BACKING_UP,
	STR_DELETING,
	STR_DOWNGRADE,
	STR_DOWNGRADING,
	STR_DOWNGRADING_NOT_NEEDED,
	STR_DUMP,
	STR_DUMPING,
	STR_INJECT,
	STR_INJECTING,
	STR_DECRYPT,
	STR_DECRYPTING,
	STR_DECRYPTING_TO,
	STR_DECRYPTED,
	STR_GENERATE,
	STR_GENERATING,
	STR_PROCESSING,
	STR_OPENING,
	STR_RESTORE,
	STR_RESTORING,
	STR_MISSING,
	STR_ERROR_OPENING,
	STR_ERROR_CREATING,
	STR_ERROR_READING,
	STR_ERROR_WRITING,
	STR_ERROR_COPYING,
	STR_WRONG,
	STR_GOT,
	STR_EXPECTED,
	STR_VERSION,
	STR_VERSION_OF,
	STR_ENTRIES_COUNT,
	STR_SIZE,
	STR_CONTENT,
	STR_CRYPTO_TYPE,
	STR_CHOOSE,
	STR_NAND,
	STR_SYSNAND,
	STR_EMUNAND,
	STR_NAND_PARTITIONS,
	STR_NAND_XORPAD,
	STR_XORPAD,
	STR_EXHEADER,
	STR_EXEFS,
	STR_ROMFS,
	STR_TITLE_KEYS,
	STR_TITLE_KEYS_FILE,
	STR_FILES,
	STR_PAD,
	STR_DOWNGRADE_PACK,
	STR_FBI,
	STR_HEALTH_AND_SAFETY,
	STR_TMD_VERSION,
	STR_TMD_SIZE,
	STR_HASH,
	STR_CHECK_TMD_ONLY,
	STR_INJECT_FBI,
	STR_SYSTEM_TITLES,
	STR_SYSTEM_TITLES_WARNING,
	STR_SYSTEM_TITLES_DECRYPT,
	STR_KEYS_MISMATCH,
	STR_NO_EMUNAND,
	STR_TWLN,
	STR_TWLP,
	STR_AGB_SAVE,
	STR_FIRM0,
	STR_FIRM1,
	STR_CTRNAND,
	STR_CTR,
	STR_TMD,
	STR_KEY7,
	STR_SECURE,
	STR_NONE,
	STR_JAPAN,
	STR_USA,
	STR_EUROPE,
	STR_CHINA,
	STR_KOREA,
	STR_TAIWAN,
	STR_BLANK_BUTTON_ACTION,
	STR_PRESS_BUTTON_ACTION,
	STR_HOLD_BUTTON_ACTION,
	STR_BUTTON_A,
	STR_BUTTON_B,
	STR_BUTTON_X,
	STR_BUTTON_Y,
	STR_BUTTON_L,
	STR_BUTTON_R,
	STR_BUTTON_ZL,
	STR_BUTTON_ZR,
	STR_BUTTON_SELECT,
	STR_BUTTON_HOME,
	STR_BUTTON_START,
	STR_CANCEL,
	STR_CONTINUE,
	STR_OPEN_MENU,
	STR_FAILED,
	STR_COMPLETED,
	STR_SETTINGS,
	STR_FORCE_UI_BOOT,
	STR_SELECTED_THEME,
	STR_SHOW_AGB,
	STR_ENABLE_3D_UI,
	STR_QUICK_BOOT,
	STR_MENU_LANGUAGE,
	STR_AUTOBOOT,
	STR_INITIALIZING,
	STR_LOADING,
	STR_WARNING,
	STR_WARNING_KEYFILE,
	STR_PROGRESS,
	STR_PROGRESS_OK,
	STR_PROGRESS_FAIL,
	STR_CURSOR,
	STR_NO_CURSOR,
	STR_ENABLED,
	STR_DISABLED,
	STR_REGION_,
	STR_REGION,
	STR_MSET,
	STR_MSET4,
	STR_MSET6,
	STR_YES,
	STR_NO,
	STR_NUM
};

extern const char langPath[];
extern wchar_t strings[STR_NUM][STR_MAX_LEN];

void preloadStringsA(void);
void preloadStringsU(void);
void preloadStringsOnSwitch(void);
int loadStrings(void);
