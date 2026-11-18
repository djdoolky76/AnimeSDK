#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_SEGMENTAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A35130)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolumeAudioConfig_SegmentAudio_TypeDefinitionIndex = 84656;

	class AnimationTriggerVolumeAudioConfig_SegmentAudio : public ::System::Object
	{
	public:
		::System::String* segmentKey; // 0x10
		::System::String* displayName; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* layers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_SEGMENTAUDIO__CTOR_OFFSET))(this);
		}
	};
}
