#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_SPEEDPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xF381DA0)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int TrackSamplePointDetector_SpeedPoint_TypeDefinitionIndex = 49924;

	class TrackSamplePointDetector_SpeedPoint : public ::System::Object
	{
	public:
		::System::String* Label; // 0x10
		::System::Single Percentage; // 0x18
		::System::Single Distance; // 0x1C
		::System::Single Speed; // 0x20
		::System::Boolean AutoSpeed; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_SPEEDPOINT_CTOR_OFFSET))(this);
		}

	};
}
