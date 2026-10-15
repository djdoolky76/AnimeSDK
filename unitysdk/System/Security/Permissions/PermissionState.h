#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Permissions
{
	enum class PermissionState : ::System::Int32
	{
		Unrestricted = 1,
		None = 0,
	};
}
