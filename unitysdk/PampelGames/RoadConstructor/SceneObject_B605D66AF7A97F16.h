#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A92CA8C5CE7ED303.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class TrafficLane; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B605D66AF7A97F16_F6F4D7E82967CD93_OFFSET UNITYSDK_OFFSET(0x3DB89B0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B605D66AF7A97F16__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SceneObject_B605D66AF7A97F16_TypeDefinitionIndex = 18912;

	class SceneObject_B605D66AF7A97F16 : public ::System::Object
	{
	public:
		::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C; // 0x10
		::B223EC95048EAAE0::A92CA8C5CE7ED303 BB0DD9F3C08DCF88; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B605D66AF7A97F16__CTOR_OFFSET))(this);
		}

		::System::Boolean F6F4D7E82967CD93(::PampelGames::RoadConstructor::TrafficLane* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::TrafficLane*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B605D66AF7A97F16_F6F4D7E82967CD93_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
