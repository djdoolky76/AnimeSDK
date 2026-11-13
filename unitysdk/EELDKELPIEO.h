#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::GameCore { class CharacterInputData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }

#define EELDKELPIEO_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0x1A31F030)
#define EELDKELPIEO_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0x1A31DBB0)
#define EELDKELPIEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A31F140)
#define EELDKELPIEO_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0x1A31D8D0)
#define EELDKELPIEO_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0x1A31D920)
#define EELDKELPIEO_GKKEGIFCLHF_OFFSET UNITYSDK_OFFSET(0x1A31E380)
#define EELDKELPIEO_IPCAPLLMHFP_OFFSET UNITYSDK_OFFSET(0x1A31E180)
#define EELDKELPIEO_JOMMEOPIOBH_OFFSET UNITYSDK_OFFSET(0x1A31DAC0)
#define EELDKELPIEO_KJPEONPIPPG_OFFSET UNITYSDK_OFFSET(0x1A31E8C0)
#define EELDKELPIEO_LBIGFJGCLDE_OFFSET UNITYSDK_OFFSET(0x1A31DF50)
#define EELDKELPIEO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x1A31D970)
#define EELDKELPIEO_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0x1A31D880)
#define EELDKELPIEO_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0x1A31EC40)
#define EELDKELPIEO_NJOEGNAHKHH_OFFSET UNITYSDK_OFFSET(0x1A31DD80)
#define EELDKELPIEO_ODKKNOOOMMD_OFFSET UNITYSDK_OFFSET(0x1A31E540)
#define EELDKELPIEO_PFLPLEHIGIA_OFFSET UNITYSDK_OFFSET(0x1A31E1E0)
#define EELDKELPIEO_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0x1A31E120)

inline static constexpr unsigned int EELDKELPIEO_TypeDefinitionIndex = 54777;

	class EELDKELPIEO : public ::IECNEMPGKJL
	{
	public:
		::RPGTools::Timeline::Story::BaseStoryMoveWalkData* HLJPLFJOEEB; // 0x90
		::System::Int32 MPKKKHHCGNM; // 0x98
		::System::Single EIEPAMAPHAD; // 0x9C
		::System::Int32 KFDJIJJEENC; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_CTOR_OFFSET))(this);
		}

		::System::Single LMNDPBPJPNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_LMNDPBPJPNC_OFFSET))(this);
		}

		::System::Single DNNFJCBMFHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_DNNFJCBMFHP_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void CNAPOOPIAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_CNAPOOPIAAI_OFFSET))(this);
		}

		::System::Void JOMMEOPIOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_JOMMEOPIOBH_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + EELDKELPIEO_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Boolean IPCAPLLMHFP(::UnityEngine::AnimatorStateInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + EELDKELPIEO_IPCAPLLMHFP_OFFSET))(this, a1);
		}

		::System::Void PFLPLEHIGIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_PFLPLEHIGIA_OFFSET))(this);
		}

		::System::Void GKKEGIFCLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_GKKEGIFCLHF_OFFSET))(this);
		}

		::System::Void NJOEGNAHKHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EELDKELPIEO_NJOEGNAHKHH_OFFSET))(this, a1);
		}

		::System::Void LBIGFJGCLDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EELDKELPIEO_LBIGFJGCLDE_OFFSET))(this, a1);
		}

		::System::Void ODKKNOOOMMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_ODKKNOOOMMD_OFFSET))(this);
		}

		::System::Void KJPEONPIPPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_KJPEONPIPPG_OFFSET))(this);
		}

		::System::Boolean MNKAPPBEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_MNKAPPBEJOK_OFFSET))(this);
		}

		::System::Boolean BHBBBKCILLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDKELPIEO_BHBBBKCILLA_OFFSET))(this);
		}

	};
