#pragma once
#include "unitysdk/unitysdk.h"

#define TA_SCENELIGHTCOMPONENT_LIGHTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x28E3280)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int LightBlock_TypeDefinitionIndex = 16388;

	class LightBlock
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTBLOCK__CTOR_OFFSET))(this);
		}
	};
}
