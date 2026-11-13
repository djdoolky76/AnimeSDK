#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FJIOPLMGCGH;
class HAOCAPILIGF;
class HAOCAPILIGF_NKKNFAPIBOL;
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define BJNKANPCBEB_AGBFAOFEIEA_OFFSET UNITYSDK_OFFSET(0x1A63E8B0)
#define BJNKANPCBEB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A63EBA0)
#define BJNKANPCBEB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A63ED00)
#define BJNKANPCBEB_CNKONPDIPFG_OFFSET UNITYSDK_OFFSET(0x1A63DD90)
#define BJNKANPCBEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A63EE30)
#define BJNKANPCBEB_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x1A63EB10)
#define BJNKANPCBEB_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x1A63EA80)
#define BJNKANPCBEB_EBNJHHIGNKG_OFFSET UNITYSDK_OFFSET(0x1A63E3E0)
#define BJNKANPCBEB_EODEABGNFPM_OFFSET UNITYSDK_OFFSET(0x1A63E650)
#define BJNKANPCBEB_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0x1A63E9C0)
#define BJNKANPCBEB_IEOONJFCCEE_OFFSET UNITYSDK_OFFSET(0x1A63E5C0)
#define BJNKANPCBEB_IPGJIOKKEHO_OFFSET UNITYSDK_OFFSET(0x1A63E960)
#define BJNKANPCBEB_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x1A63E800)
#define BJNKANPCBEB_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x1A63E310)
#define BJNKANPCBEB_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0x1A63E150)
#define BJNKANPCBEB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1A63DBC0)
#define BJNKANPCBEB_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A63DC90)
#define BJNKANPCBEB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A63DE80)
#define BJNKANPCBEB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A63E0C0)
#define BJNKANPCBEB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A63DCE0)
#define BJNKANPCBEB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A63DC40)

inline static constexpr unsigned int BJNKANPCBEB_TypeDefinitionIndex = 73822;

	class BJNKANPCBEB : public ::FMPCODLIOLG
	{
	public:
		::HAOCAPILIGF_NKKNFAPIBOL* PMECLILMEDH; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::HAOCAPILIGF* HIDPNDPKDLG; // 0x70
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::FJIOPLMGCGH* HCBHHMHIMEB; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJNKANPCBEB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BJNKANPCBEB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB__ONBIND_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MPFBHIGKDHI(::RPG::GameCore::AbilityCurrentStanceChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + BJNKANPCBEB_MPFBHIGKDHI_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void IEOONJFCCEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_IEOONJFCCEE_OFFSET))(this);
		}

		::System::Void CNKONPDIPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_CNKONPDIPFG_OFFSET))(this);
		}

		::System::Boolean AGBFAOFEIEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_AGBFAOFEIEA_OFFSET))(this);
		}

		::System::Void EODEABGNFPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_EODEABGNFPM_OFFSET))(this);
		}

		::System::Boolean EBNJHHIGNKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_EBNJHHIGNKG_OFFSET))(this);
		}

		::System::Void IPGJIOKKEHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BJNKANPCBEB_IPGJIOKKEHO_OFFSET))(this, a1);
		}

		::System::Void EPPICCENEHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJNKANPCBEB_EPPICCENEHE_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJNKANPCBEB_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJNKANPCBEB_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
