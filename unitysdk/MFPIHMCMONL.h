#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class EMPHGLJADFP;
class LACLKDPNNLH;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }

#define MFPIHMCMONL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17C9C730)
#define MFPIHMCMONL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17C9C800)
#define MFPIHMCMONL_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x17C9C140)
#define MFPIHMCMONL_CTOR_OFFSET UNITYSDK_OFFSET(0x17C9C8A0)
#define MFPIHMCMONL_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0x17C9C0F0)
#define MFPIHMCMONL_FMIDDLKMHGM_OFFSET UNITYSDK_OFFSET(0x17C9C490)
#define MFPIHMCMONL_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17C9C600)
#define MFPIHMCMONL_KABMIIPEOBB_OFFSET UNITYSDK_OFFSET(0x17C9C010)
#define MFPIHMCMONL_LCFNCHEHDNC_OFFSET UNITYSDK_OFFSET(0x17C9C060)
#define MFPIHMCMONL_MBJLJPKHDFE_OFFSET UNITYSDK_OFFSET(0x17C9C190)
#define MFPIHMCMONL_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0x17C9C610)
#define MFPIHMCMONL_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0x17C9C3A0)
#define MFPIHMCMONL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x17C9BE50)
#define MFPIHMCMONL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17C9BF90)

inline static constexpr unsigned int MFPIHMCMONL_TypeDefinitionIndex = 73402;

	class MFPIHMCMONL : public ::FMPCODLIOLG
	{
	public:
		::LACLKDPNNLH* CMEJGFPKMAC; // 0x60
		::System::Action* LKMLFIPPEML; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::EMPHGLJADFP* HHKKDMAKFDC; // 0x78
		::System::Int32 _Priority_k__BackingField; // 0x80
		::System::Boolean KICAHMGNMED; // 0x84
		::System::Boolean EINNACFPAEN; // 0x85
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MFPIHMCMONL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean KABMIIPEOBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL_KABMIIPEOBB_OFFSET))(this);
		}

		::System::Void LCFNCHEHDNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFPIHMCMONL_LCFNCHEHDNC_OFFSET))(this, a1);
		}

		::System::Void FKMDEFDJPAI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFPIHMCMONL_FKMDEFDJPAI_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFPIHMCMONL_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + MFPIHMCMONL_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void MBJLJPKHDFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL_MBJLJPKHDFE_OFFSET))(this);
		}

		::EMPHGLJADFP* FMIDDLKMHGM(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::EMPHGLJADFP*(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + MFPIHMCMONL_FMIDDLKMHGM_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void NFGHPHBFEGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFPIHMCMONL_NFGHPHBFEGE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPIHMCMONL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
