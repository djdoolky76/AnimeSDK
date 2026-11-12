#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RoadGenerator/TrackSamplePointDetector_TrackEventType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_EVENTPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xF381D80)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int TrackSamplePointDetector_EventPoint_TypeDefinitionIndex = 49926;

	class TrackSamplePointDetector_EventPoint : public ::System::Object
	{
	public:
		::System::String* Label; // 0x10
		::System::Single Percentage; // 0x18
		::System::Single Distance; // 0x1C
		::RPGTools::RoadGenerator::TrackSamplePointDetector_TrackEventType EventType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* CustomString; // 0x28
		::System::String* CameraAlias; // 0x30
		::System::Boolean EnableSpeedLineEffect; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single TargetFov; // 0x3C
		::System::Single FovBlendTime; // 0x40
		::System::Boolean TriggerOnce; // 0x44
		::System::Boolean Triggered; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_EVENTPOINT_CTOR_OFFSET))(this);
		}

	};
}
