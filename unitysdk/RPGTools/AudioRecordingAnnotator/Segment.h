#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_AUDIORECORDINGANNOTATOR_SEGMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xF36C760)
#define RPGTOOLS_AUDIORECORDINGANNOTATOR_SEGMENT_GET_FINALDURATION_OFFSET UNITYSDK_OFFSET(0xF36C950)
#define RPGTOOLS_AUDIORECORDINGANNOTATOR_SEGMENT_GET_SOURCEDURATION_OFFSET UNITYSDK_OFFSET(0xF36C900)

namespace RPGTools::AudioRecordingAnnotator
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 50039;

	class Segment : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double sourceStartSec; // 0x18
		::System::Double sourceEndSec; // 0x20
		::System::Double finalStartSec; // 0x28
		::System::Double finalEndSec; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_AUDIORECORDINGANNOTATOR_SEGMENT_CTOR_OFFSET))(this);
		}

		::System::Double get_SourceDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_AUDIORECORDINGANNOTATOR_SEGMENT_GET_SOURCEDURATION_OFFSET))(this);
		}

		::System::Double get_FinalDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_AUDIORECORDINGANNOTATOR_SEGMENT_GET_FINALDURATION_OFFSET))(this);
		}

	};
}
