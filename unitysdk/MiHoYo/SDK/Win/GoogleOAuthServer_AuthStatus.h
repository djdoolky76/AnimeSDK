#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	enum class GoogleOAuthServer_AuthStatus : ::System::Int32
	{
		AuthHttpServerError = -1,
		AuthUserNoAction = 0,
		AuthError = 1,
		AuthMalformed = 2,
		AuthPermissionMiss = 3,
		AuthFinish = 4,
	};
}
