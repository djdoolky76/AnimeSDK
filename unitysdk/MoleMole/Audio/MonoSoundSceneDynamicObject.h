#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x1C5A7000)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_DLIDBNKMKCO_OFFSET UNITYSDK_OFFSET(0x1C5A6C60)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x1C5A6FA0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x1C5A6710)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5A6BA0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C5A6650)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A6E70)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneDynamicObject_TypeDefinitionIndex = 47789;

	class MonoSoundSceneDynamicObject : public ::UnityEngine::MonoBehaviour
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void DLIDBNKMKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_DLIDBNKMKCO_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_AJEEBNCNHMN_OFFSET))(this);
		}
	};
}
