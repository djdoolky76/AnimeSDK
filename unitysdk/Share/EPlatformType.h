#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlatformType_TypeDefinitionIndex = 17747;

	enum class EPlatformType : ::System::Int32
	{
		Sony = 6,
		Android = 2,
		Xbox = 26,
		WEB = 4,
		EnumCount = 31,
		Unknown = 0,
		PS5 = 11,
		Xbox_HELD = 30,
		PC = 3,
		WAP = 5,
		Xbox_PC = 29,
		IOS = 1,
		CloudMacOS = 13,
		Nintendo = 7,
		CloudAndroid = 8,
		CloudPC = 9,
		MacOS = 12,
		CloudIOS = 10,
	};
}
