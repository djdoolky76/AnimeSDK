#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_AUDIORECORDINGANNOTATOR_AUDIONODE_CTOR_OFFSET UNITYSDK_OFFSET(0xF36B750)

namespace RPGTools::AudioRecordingAnnotator
{
	inline static constexpr unsigned int AudioNode_TypeDefinitionIndex = 50040;

	class AudioNode : public ::System::Object
	{
	public:
		::System::Int32 segmentIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* timelineName; // 0x18
		::System::Int32 timelineFrame; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* audioType; // 0x28
		::System::String* eventName; // 0x30
		::System::Int32 voiceId; // 0x38
		::System::Int32 sfxId; // 0x3C
		::System::String* playMode; // 0x40
		::System::String* subMissionId; // 0x48
		::System::String* chineseDialogueName; // 0x50
		::System::Double sourceTriggerSec; // 0x58
		::System::Double finalTriggerSec; // 0x60
		::System::String* videoNodeText; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_AUDIORECORDINGANNOTATOR_AUDIONODE_CTOR_OFFSET))(this);
		}

	};
}
