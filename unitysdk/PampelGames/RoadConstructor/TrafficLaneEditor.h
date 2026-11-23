#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A92CA8C5CE7ED303.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/System/Object.h"

#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANEEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3DB83A0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int TrafficLaneEditor_TypeDefinitionIndex = 18898;

	class TrafficLaneEditor : public ::System::Object
	{
	public:
		::B223EC95048EAAE0::B3CC6E5519497EE3 trafficLaneType; // 0x10
		::System::Single position; // 0x14
		::System::Single width; // 0x18
		::B223EC95048EAAE0::A92CA8C5CE7ED303 direction; // 0x1C
		::System::Single maxSpeed; // 0x20
		::System::Boolean mirror; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANEEDITOR__CTOR_OFFSET))(this);
		}
	};
}
