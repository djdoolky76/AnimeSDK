#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	enum class RegistryValueOptions : ::System::Int32
	{
		None = 0,
		DoNotExpandEnvironmentNames = 1,
	};
}
