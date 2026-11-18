#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x127531E0)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_DACAOBLMGCL_OFFSET UNITYSDK_OFFSET(0x12753810)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_FPNOMADHGDB_OFFSET UNITYSDK_OFFSET(0x127535B0)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_START_OFFSET UNITYSDK_OFFSET(0x12753220)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12753260)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12753D10)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSound_Doppler_TypeDefinitionIndex = 74865;

	class MonoSound_Doppler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3, ::System::Single>>* PAAGLKKBPGI; // 0x18
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3, ::System::Single>>* FGNCADDHLGB; // 0x20
		::System::Int32 FKPOMODCMEA; // 0x28
		::UnityEngine::Vector3 FKMMCPKCNBJ; // 0x2C
		::UnityEngine::Vector3 DEEIJEBOCOH; // 0x38
		::System::Single KMJGHDMJAPH; // 0x44
		::System::Single AALCGPAEFHO; // 0x48
		::System::Single BOHEDCAOJOC; // 0x4C
		::System::Single MCAKIKNJEOA; // 0x50
		::System::Byte _padding0[0x4];
		::System::String* dopplerRTPCName; // 0x58
		::System::Single dopplerScale; // 0x60
		::System::Single maxDopplerVelocity; // 0x64
		::System::Single KOILCHEHGBF; // 0x68
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* audioEmitter; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_UPDATE_OFFSET))(this);
		}

		::System::Void FPNOMADHGDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_FPNOMADHGDB_OFFSET))(this);
		}

		::System::Void DACAOBLMGCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_DACAOBLMGCL_OFFSET))(this);
		}
	};
}
