#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightServerConnectionType_TypeDefinitionIndex = 28855;

enum class UFightServerConnectionType : ::System::Int32
{
	FCT_LOGIN_SUCCESSFUL = 4,
	FCT_CONNECT_FAILED = 1,
	FCT_LOGIN_FAILED = 3,
	FCT_NONE = 0,
	FCT_CONNECT_SUCCESSFUL = 2,
};
