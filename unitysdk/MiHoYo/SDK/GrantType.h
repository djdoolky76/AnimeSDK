#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class GrantType : ::System::Int32
	{
		Way_BindMobile = 0,
		Way_SafeMobile = 1,
		Way_Email = 2,
	};
}
