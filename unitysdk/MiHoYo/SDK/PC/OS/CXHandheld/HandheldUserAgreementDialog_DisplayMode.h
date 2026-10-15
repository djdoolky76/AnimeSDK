#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	enum class HandheldUserAgreementDialog_DisplayMode : ::System::Int32
	{
		DisplayForAccountBinding = 0,
		DisplayForFirstAcceptLocally = 1,
		DisplayForAgreementUpdated = 2,
	};
}
