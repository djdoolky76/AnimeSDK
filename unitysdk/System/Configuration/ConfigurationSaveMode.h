#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration
{
	enum class ConfigurationSaveMode : ::System::Int32
	{
		Full = 2,
		Minimal = 1,
		Modified = 0,
	};
}
