#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x11A35870)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A35C10)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A35D40)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_TypeDefinitionIndex = 87239;

	class MonoSoundSceneObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* soundEmitter; // 0x28
		::System::Boolean isForceToLOD0; // 0x30
		::System::Boolean multiplePosition; // 0x31
		::System::Boolean isUseDoppler; // 0x32
		::System::Byte _padding1[0x5];
		::System::String* dopplerRTPCName; // 0x38
		::System::Single dopplerScale; // 0x40
		::System::Single maxDopplerVelocity; // 0x44
		::System::Single maxExpectedVelocity; // 0x48
		::System::Single triggerDistance; // 0x4C
		::System::Single triggerCooldown; // 0x50
		::System::Byte _padding2[0x4];
		::System::String* triggerEvent; // 0x58
		::System::String* soundActionKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_ONDESTROY_OFFSET))(this);
		}
	};
}
