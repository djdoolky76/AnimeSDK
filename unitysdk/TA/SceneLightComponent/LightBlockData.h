#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define TA_SCENELIGHTCOMPONENT_LIGHTBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int LightBlockData_TypeDefinitionIndex = 16040;

	class LightBlockData : public ::System::Object
	{
	public:
		::System::Int32 allLightNumber; // 0x10
		::System::Int32 EngineLights; // 0x14
		::System::Int32 PointLights; // 0x18
		::System::Int32 SpotLights; // 0x1C
		::System::Int32 Lightbillboards; // 0x20
		::System::Int32 LocalSphereFogs; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTBLOCKDATA__CTOR_OFFSET))(this);
		}
	};
}
