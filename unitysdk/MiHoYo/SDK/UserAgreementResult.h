#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class UserAgreementResult : ::System::Int32
	{
		Agree = 0,
		Refuse = -1,
		UnShow = 1,
	};
}
