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

#define BJNKANPCBEB_AGBFAOFEIEA_OFFSET UNITYSDK_OFFSET(0xB7AA050)
#define BJNKANPCBEB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7AA2A0)
#define BJNKANPCBEB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7AA400)
#define BJNKANPCBEB_CNKONPDIPFG_OFFSET UNITYSDK_OFFSET(0xB7A9640)
#define BJNKANPCBEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AA530)
#define BJNKANPCBEB_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xB7AA210)
#define BJNKANPCBEB_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xB7AA180)
#define BJNKANPCBEB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB7A9590)
#define BJNKANPCBEB_EBNJHHIGNKG_OFFSET UNITYSDK_OFFSET(0xB7A9B80)
#define BJNKANPCBEB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB7A94F0)
#define BJNKANPCBEB_EODEABGNFPM_OFFSET UNITYSDK_OFFSET(0xB7A9DF0)
#define BJNKANPCBEB_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0xB7AA0C0)
#define BJNKANPCBEB_IEOONJFCCEE_OFFSET UNITYSDK_OFFSET(0xB7A9D60)
#define BJNKANPCBEB_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xB7A9FA0)
#define BJNKANPCBEB_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xB7A9AB0)
#define BJNKANPCBEB_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0xB7A98F0)
#define BJNKANPCBEB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB7A9470)
#define BJNKANPCBEB_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB7A9540)
#define BJNKANPCBEB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7A96F0)

inline static constexpr unsigned int BJNKANPCBEB_TypeDefinitionIndex = 71803;

	class BJNKANPCBEB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::FJIOPLMGCGH* HCBHHMHIMEB; // 0x68
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
		::HAOCAPILIGF* HIDPNDPKDLG; // 0x78
		::HAOCAPILIGF_NKKNFAPIBOL* PMECLILMEDH; // 0x80
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x88
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BJNKANPCBEB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKANPCBEB__ONBIND_OFFSET))(this);
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
