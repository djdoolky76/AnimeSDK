#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FarmEntrySource_TypeDefinitionIndex = 67518;

	enum class FarmEntrySource : ::System::UInt32
	{
		None = 0,
		Handbook = 1,
		AvatarDetail = 2,
	};
}
