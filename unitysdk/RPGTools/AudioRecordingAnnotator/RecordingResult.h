#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::AudioRecordingAnnotator { class AudioNode; }
namespace RPGTools::AudioRecordingAnnotator { class Segment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_AUDIORECORDINGANNOTATOR_RECORDINGRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD435F0)

namespace RPGTools::AudioRecordingAnnotator
{
	inline static constexpr unsigned int RecordingResult_TypeDefinitionIndex = 50038;

	class RecordingResult : public ::System::Object
	{
	public:
		::System::Int32 schemaVersion; // 0x10
		::System::UInt32 mainMissionId; // 0x14
		::System::String* sourceVideoPath; // 0x18
		::System::String* finalVideoPath; // 0x20
		::System::Double finalVideoDurationSec; // 0x28
		::System::Collections::Generic::List_1<::RPGTools::AudioRecordingAnnotator::Segment*>* segments; // 0x30
		::System::Collections::Generic::List_1<::RPGTools::AudioRecordingAnnotator::AudioNode*>* audioNodes; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_AUDIORECORDINGANNOTATOR_RECORDINGRESULT_CTOR_OFFSET))(this);
		}

	};
}
