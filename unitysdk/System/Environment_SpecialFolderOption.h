#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class Environment_SpecialFolderOption : ::System::Int32
	{
		None = 0,
		DoNotVerify = 16384,
		Create = 32768,
	};
}
