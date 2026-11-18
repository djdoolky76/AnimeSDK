#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Audio { class SpineAnimationAudioSetting; }
namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_AWAKE_OFFSET UNITYSDK_OFFSET(0x18B76A90)
#define MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_IAOELFKOBNI_OFFSET UNITYSDK_OFFSET(0x18B77160)
#define MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_IIIACNCJLAD_OFFSET UNITYSDK_OFFSET(0x18B773B0)
#define MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_KNMPABBEMCL_OFFSET UNITYSDK_OFFSET(0x18B776F0)
#define MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B76DC0)
#define MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B77110)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSpineAnimationAudio_TypeDefinitionIndex = 61083;

	class MonoSpineAnimationAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Audio::SpineAnimationAudioSetting* audioSetting; // 0x18
		::UnityEngine::GameObject* soundEmitter; // 0x20
		::Spine::Unity::SkeletonAnimation* HEGFMHCDCBF; // 0x28
		::Spine::AnimationState* CCIADLGJKIO; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_ONDESTROY_OFFSET))(this);
		}

		::System::Void IAOELFKOBNI(::Spine::TrackEntry* LLBMMGGKAEE)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_IAOELFKOBNI_OFFSET))(this, LLBMMGGKAEE);
		}

		::UnityEngine::GameObject* IIIACNCJLAD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_IIIACNCJLAD_OFFSET))(this);
		}

		::System::Void KNMPABBEMCL(::Spine::TrackEntry* LLBMMGGKAEE)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSPINEANIMATIONAUDIO_KNMPABBEMCL_OFFSET))(this, LLBMMGGKAEE);
		}
	};
}
