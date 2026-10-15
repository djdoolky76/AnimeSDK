#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonoEffectPluginCharaPropRimLight_FilterType : ::System::Int32
	{
		None = 0,
		Body = 1,
		Face = 2,
		Hair = 4,
		Others = 8,
	};
}
