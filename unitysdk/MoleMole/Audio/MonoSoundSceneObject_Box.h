#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_AWAKE_OFFSET UNITYSDK_OFFSET(0xFA857F0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFA85A30)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX__CTOR_OFFSET UNITYSDK_OFFSET(0xFA85B60)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_Box_TypeDefinitionIndex = 64223;

	class MonoSoundSceneObject_Box : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::Vector3 offset; // 0x24
		::UnityEngine::Vector3 extend; // 0x30
		::System::Boolean isForceToLOD0; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::GameObject* soundEmitter; // 0x40
		::System::Boolean isUseDoppler; // 0x48
		::System::Byte _padding1[0x7];
		::System::String* dopplerRTPCName; // 0x50
		::System::Single dopplerScale; // 0x58
		::System::Single maxDopplerVelocity; // 0x5C
		::System::Single maxExpectedVelocity; // 0x60
		::System::Single triggerDistance; // 0x64
		::System::Single triggerCooldown; // 0x68
		::System::Byte _padding2[0x4];
		::System::String* triggerEvent; // 0x70
		::System::String* soundActionKey; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_ONDESTROY_OFFSET))(this);
		}
	};
}
