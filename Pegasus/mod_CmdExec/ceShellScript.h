/*
	ceShellScript.h
*/
#pragma once

#include <Windows.h>

typedef enum SHELLSCRIPT_SPECIFIC_ERROR_CODES {
//	ERR_NOVALUE = 0,
	ERR_CREATEPIPES_FAIL = 1,
	ERR_EMPTY_SHELLSCRIPT,
	ERR_STDIN_WRITE_FAILED,
	ERR_STDIN_WRITE_FAILED_2,
	ERR_PEEKPIPE_FAILED


//	ERR_EXEC_ERROR = 1000,
//	ERR_MAXVAL = MAXDWORD
};

BOOL cmdShellScript(DISPATCHER_CALLBACK_PARAMS *dcp);