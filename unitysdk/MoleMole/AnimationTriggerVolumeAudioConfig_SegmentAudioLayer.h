#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_SEGMENTAUDIOLAYER_GBILIJJOAMO_OFFSET UNITYSDK_OFFSET(0x131B6370)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_SEGMENTAUDIOLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x131B6560)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolumeAudioConfig_SegmentAudioLayer_TypeDefinitionIndex = 84657;

	class AnimationTriggerVolumeAudioConfig_SegmentAudioLayer : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* emitter; // 0x10
		::UnityEngine::Vector3 emitterWorldPosition; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* forwardEventName; // 0x28
		::System::String* reverseEventName; // 0x30
		::System::String* forwardStopEventName; // 0x38
		::System::String* reverseStopEventName; // 0x40
		::System::UInt32 pendingIdFwd; // 0x48
		::System::UInt32 pendingIdRev; // 0x4C
		::UnityEngine::GameObject* runtimeEmitter; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_SEGMENTAUDIOLAYER__CTOR_OFFSET))(this);
		}

		::System::Boolean GBILIJJOAMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_SEGMENTAUDIOLAYER_GBILIJJOAMO_OFFSET))(this);
		}
	};
}
