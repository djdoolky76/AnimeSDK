#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class GameObject; }

#define RBDDESTRUCTION_VISUALEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF73D10)

namespace RBDDestruction
{
	inline static constexpr unsigned int VisualEffectConfig_TypeDefinitionIndex = 26695;

	class VisualEffectConfig : public ::System::Object
	{
	public:
		::System::Boolean enableHitEffect; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* hitVisualEffect; // 0x18
		::System::Boolean enableGroundedEffect; // 0x20
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* groundedVisualEffect; // 0x28
		::System::Boolean enableDestroyEffect; // 0x30
		::System::Byte _padding2[0x7];
		::UnityEngine::GameObject* destroyVisualEffect; // 0x38
		::System::Boolean enableSound; // 0x40
		::System::Byte _padding3[0x7];
		::UnityEngine::AudioClip* hitSoundClip; // 0x48
		::System::Boolean enableGroundedSound; // 0x50
		::System::Byte _padding4[0x7];
		::UnityEngine::AudioClip* groundedSoundClip; // 0x58
		::System::Boolean enableDestroySound; // 0x60
		::System::Byte _padding5[0x7];
		::UnityEngine::AudioClip* destroySoundClip; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_VISUALEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
