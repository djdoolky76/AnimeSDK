#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class TrafficLane; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_F6CA298A64DF8F80_F6F4D7E82967CD93_OFFSET UNITYSDK_OFFSET(0x193A750)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_F6CA298A64DF8F80__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SceneObject_F6CA298A64DF8F80_TypeDefinitionIndex = 18911;

	class SceneObject_F6CA298A64DF8F80 : public ::System::Object
	{
	public:
		::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_F6CA298A64DF8F80__CTOR_OFFSET))(this);
		}

		::System::Boolean F6F4D7E82967CD93(::PampelGames::RoadConstructor::TrafficLane* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::TrafficLane*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_F6CA298A64DF8F80_F6F4D7E82967CD93_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
