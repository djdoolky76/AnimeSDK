#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class FGPNCGAPKAL;
class KJDNGKLPAFB;
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJDNGKLPAFB_FJEMLLFEANF_BAGFJGCLLCK_OFFSET UNITYSDK_OFFSET(0xB4446A0)
#define KJDNGKLPAFB_FJEMLLFEANF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4427D0)
#define KJDNGKLPAFB_FJEMLLFEANF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB444000)
#define KJDNGKLPAFB_FJEMLLFEANF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB4443A0)
#define KJDNGKLPAFB_FJEMLLFEANF_MFHFDBLBKMC_OFFSET UNITYSDK_OFFSET(0xB444620)
#define KJDNGKLPAFB_FJEMLLFEANF_OBNDBPAFEOK_OFFSET UNITYSDK_OFFSET(0xB4452D0)
#define KJDNGKLPAFB_FJEMLLFEANF_PIIAFPHMEFG_OFFSET UNITYSDK_OFFSET(0xB445BA0)
#define KJDNGKLPAFB_FJEMLLFEANF_PJOKKNNMKEC_OFFSET UNITYSDK_OFFSET(0xB444050)

inline static constexpr unsigned int KJDNGKLPAFB_FJEMLLFEANF_TypeDefinitionIndex = 57237;

	class KJDNGKLPAFB_FJEMLLFEANF : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* JDEDPAMDIPL; // 0x10
		::RPG::GameCore::PropSoundAttenuation* PMEHHHNOBJO; // 0x18
		::FGPNCGAPKAL* JNKHDGPMPDP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::KJDNGKLPAFB* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::System::Single))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

		::System::Void BAGFJGCLLCK(::KJDNGKLPAFB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_BAGFJGCLLCK_OFFSET))(this, a1, a2);
		}

		::System::Void OBNDBPAFEOK(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_OBNDBPAFEOK_OFFSET))(this, a1);
		}

		::System::Void PIIAFPHMEFG(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_PIIAFPHMEFG_OFFSET))(this, a1);
		}

		::System::Void MFHFDBLBKMC(::RPG::GameCore::DistrictAudioRTPCConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DistrictAudioRTPCConfig*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_MFHFDBLBKMC_OFFSET))(this, a1);
		}

		::System::Void PJOKKNNMKEC(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FJEMLLFEANF_PJOKKNNMKEC_OFFSET))(this, a1);
		}

	};
