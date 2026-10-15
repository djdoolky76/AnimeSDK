#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::GameCore { class CharacterInputData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }

#define EELDKELPIEO_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0x13A36980)
#define EELDKELPIEO_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0x13A35500)
#define EELDKELPIEO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A36A80)
#define EELDKELPIEO_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0x13A35220)
#define EELDKELPIEO_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0x13A35270)
#define EELDKELPIEO_GKKEGIFCLHF_OFFSET UNITYSDK_OFFSET(0x13A35CD0)
#define EELDKELPIEO_IPCAPLLMHFP_OFFSET UNITYSDK_OFFSET(0x13A35AD0)
#define EELDKELPIEO_JOMMEOPIOBH_OFFSET UNITYSDK_OFFSET(0x13A35410)
#define EELDKELPIEO_KJPEONPIPPG_OFFSET UNITYSDK_OFFSET(0x13A36210)
#define EELDKELPIEO_LBIGFJGCLDE_OFFSET UNITYSDK_OFFSET(0x13A358A0)
#define EELDKELPIEO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x13A352C0)
#define EELDKELPIEO_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0x13A351D0)
#define EELDKELPIEO_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0x13A36590)
#define EELDKELPIEO_NJOEGNAHKHH_OFFSET UNITYSDK_OFFSET(0x13A356D0)
#define EELDKELPIEO_ODKKNOOOMMD_OFFSET UNITYSDK_OFFSET(0x13A35E90)
#define EELDKELPIEO_PFLPLEHIGIA_OFFSET UNITYSDK_OFFSET(0x13A35B30)
#define EELDKELPIEO_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0x13A35A70)

inline static constexpr unsigned int EELDKELPIEO_TypeDefinitionIndex = 53613;

	class EELDKELPIEO : public ::IECNEMPGKJL
	{
	public:
		::RPGTools::Timeline::Story::BaseStoryMoveWalkData* HLJPLFJOEEB; // 0x90
		::System::Single EIEPAMAPHAD; // 0x98
		::System::Int32 MPKKKHHCGNM; // 0x9C
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
