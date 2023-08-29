#pragma once
/**
 * This file contains the options for the rootkit.
 * Make sure to rebuild the rootkit after changing any of these options.
*/

// enables the debug messages. 1 = enabled, 0 = disabled. Disable this in release mode.
#define ENABLE_DEBUG_MESSAGES 1
// enables the rootkit persistence module. 1 = enabled, 0 = disabled. Nonfunctional.
#define ENABLE_ROOTKIT_PERSISTENCE 1
// enables the rootkit file hiding module. 1 = enabled, 0 = disabled. Nonfunctional.
#define ENABLE_HIDE_USERSPACE_PROCESS 1
// enables the rootkit file hiding module. 1 = enabled, 0 = disabled. Nonfunctional.
#define ENABLE_HIDE_ROOTKIT_FILE 1