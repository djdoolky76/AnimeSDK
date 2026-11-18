#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x107921C0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_HAPJOKBNAIK_OFFSET UNITYSDK_OFFSET(0x107925E0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_NPPOCNNOCBG_OFFSET UNITYSDK_OFFSET(0x107929E0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10792E50)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_START_OFFSET UNITYSDK_OFFSET(0x10792240)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x10792310)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10793070)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundScene_OuteringDoor_TypeDefinitionIndex = 82502;

	class MonoSoundScene_OuteringDoor : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 BJNDPEAFGMN = 0xF; // 0x0
		::UnityEngine::Rigidbody* IIKPLPKCDBI; // 0x18
		::System::Single triggerAngularVelocity; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* triggerSoundEvent; // 0x28
		::System::String* convertRTPCName; // 0x30
		::System::Single convertRTPCUpper; // 0x38
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Single>* HMFBMKPEPDG; // 0x40
		::UnityEngine::GameObject* LIEPMJMCGBF; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void HAPJOKBNAIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_HAPJOKBNAIK_OFFSET))(this);
		}

		::System::Void NPPOCNNOCBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_NPPOCNNOCBG_OFFSET))(this);
		}
	};
}
