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

#define BJNKANPCBEB_AGBFAOFEIEA_OFFSET UNITYSDK_OFFSET(0xC0FA1C0)
#define BJNKANPCBEB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC0FA4B0)
#define BJNKANPCBEB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC0FA610)
#define BJNKANPCBEB_CNKONPDIPFG_OFFSET UNITYSDK_OFFSET(0xC0F96A0)
#define BJNKANPCBEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC0FA740)
#define BJNKANPCBEB_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xC0FA420)
#define BJNKANPCBEB_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xC0FA390)
#define BJNKANPCBEB_EBNJHHIGNKG_OFFSET UNITYSDK_OFFSET(0xC0F9CF0)
#define BJNKANPCBEB_EODEABGNFPM_OFFSET UNITYSDK_OFFSET(0xC0F9F60)
#define BJNKANPCBEB_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0xC0FA2D0)
#define BJNKANPCBEB_IEOONJFCCEE_OFFSET UNITYSDK_OFFSET(0xC0F9ED0)
#define BJNKANPCBEB_IPGJIOKKEHO_OFFSET UNITYSDK_OFFSET(0xC0FA270)
#define BJNKANPCBEB_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xC0FA110)
#define BJNKANPCBEB_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xC0F9C20)
#define BJNKANPCBEB_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0xC0F9A60)
#define BJNKANPCBEB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC0F94D0)
#define BJNKANPCBEB_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC0F95A0)
#define BJNKANPCBEB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0F9790)
#define BJNKANPCBEB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC0F99D0)
#define BJNKANPCBEB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC0F95F0)
#define BJNKANPCBEB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC0F9550)

inline static constexpr unsigned int BJNKANPCBEB_TypeDefinitionIndex = 73823;

	class BJNKANPCBEB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
		::HAOCAPILIGF* HIDPNDPKDLG; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::HAOCAPILIGF_NKKNFAPIBOL* PMECLILMEDH; // 0x78
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x80
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
