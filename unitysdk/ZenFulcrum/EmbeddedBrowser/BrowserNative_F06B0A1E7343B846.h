#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F06B0A1E7343B846_TypeDefinitionIndex = 19483;

	enum class BrowserNative_F06B0A1E7343B846 : ::System::Int32
	{
		DLT_HIDE = 0,
		DLT_ALERT = 1,
		DLT_CONFIRM = 2,
		DLT_PROMPT = 3,
		DLT_PAGE_UNLOAD = 4,
		DLT_PAGE_RELOAD = 5,
		DLT_GET_AUTH = 6,
	};
}
