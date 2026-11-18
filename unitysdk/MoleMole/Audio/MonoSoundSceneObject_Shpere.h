#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_AWAKE_OFFSET UNITYSDK_OFFSET(0x12189FC0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1218A200)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE__CTOR_OFFSET UNITYSDK_OFFSET(0x1218A330)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_Shpere_TypeDefinitionIndex = 58605;

	class MonoSoundSceneObject_Shpere : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::Vector3 offset; // 0x24
		::System::Single radius; // 0x30
		::System::Boolean isForceToLOD0; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::GameObject* soundEmitter; // 0x38
		::System::Boolean isUseDoppler; // 0x40
		::System::Byte _padding1[0x7];
		::System::String* dopplerRTPCName; // 0x48
		::System::Single dopplerScale; // 0x50
		::System::Single maxDopplerVelocity; // 0x54
		::System::Single maxExpectedVelocity; // 0x58
		::System::Single triggerDistance; // 0x5C
		::System::Single triggerCooldown; // 0x60
		::System::Byte _padding2[0x4];
		::System::String* triggerEvent; // 0x68
		::System::String* soundActionKey; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_ONDESTROY_OFFSET))(this);
		}
	};
}
