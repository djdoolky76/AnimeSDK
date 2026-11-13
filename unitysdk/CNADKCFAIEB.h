#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CNADKCFAIEB_LFLEPFGFFOO;
class DCGIDEKLGAJ;
class EFJCLCMOLGO;
class HLEMIOKBLML;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CNADKCFAIEB_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x1B1AF460)
#define CNADKCFAIEB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B1AFB90)
#define CNADKCFAIEB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B1AFD70)
#define CNADKCFAIEB_BEEBDJMGFGM_OFFSET UNITYSDK_OFFSET(0x1B1AE910)
#define CNADKCFAIEB_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0x1B1AEF10)
#define CNADKCFAIEB_CEIAALNGOOF_OFFSET UNITYSDK_OFFSET(0x1B1AF370)
#define CNADKCFAIEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AFF20)
#define CNADKCFAIEB_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0x1B1AECC0)
#define CNADKCFAIEB_EIBNHJJJMBN_OFFSET UNITYSDK_OFFSET(0x1B1AF260)
#define CNADKCFAIEB_FFPBAHMKAIO_OFFSET UNITYSDK_OFFSET(0x1B1AF890)
#define CNADKCFAIEB_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0x1B1AF7A0)
#define CNADKCFAIEB_HDFDOEIMOLF_OFFSET UNITYSDK_OFFSET(0x1B1AE790)
#define CNADKCFAIEB_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x1B1AF950)
#define CNADKCFAIEB_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x1B1AF3C0)
#define CNADKCFAIEB_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x1B1AFAD0)
#define CNADKCFAIEB_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0x1B1AF410)
#define CNADKCFAIEB_LPKHKCLOHPH_OFFSET UNITYSDK_OFFSET(0x1B1AF610)
#define CNADKCFAIEB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B1AE6B0)
#define CNADKCFAIEB_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B1AE840)
#define CNADKCFAIEB_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0x1B1AEF60)
#define CNADKCFAIEB_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0x1B1AFA10)
#define CNADKCFAIEB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B1AEB10)
#define CNADKCFAIEB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1AEA40)
#define CNADKCFAIEB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B1AEB70)

inline static constexpr unsigned int CNADKCFAIEB_TypeDefinitionIndex = 73547;

	class CNADKCFAIEB : public ::FMPCODLIOLG
	{
	public:
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x60
		::System::String* EOFIAELCCDB; // 0x68
		::UnityEngine::Animation* DEKAILBIHEM; // 0x70
		::CNADKCFAIEB_LFLEPFGFFOO* OFLEHGPIFFG; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::HLEMIOKBLML* AICNOLOLJMN; // 0x88
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0x90
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_ONRETURN_OFFSET))(this);
		}

		::System::Void BEEBDJMGFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_BEEBDJMGFGM_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CNADKCFAIEB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EGAOMMJKKKM(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_EGAOMMJKKKM_OFFSET))(this, a1);
		}

		::System::Void CEIAALNGOOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_CEIAALNGOOF_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPOMPHJDCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_KPOMPHJDCCD_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void HDFDOEIMOLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_HDFDOEIMOLF_OFFSET))(this);
		}

		::System::Void EIBNHJJJMBN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CNADKCFAIEB_EIBNHJJJMBN_OFFSET))(this, a1);
		}

		::System::Void PDNNFNEDIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_PDNNFNEDIHN_OFFSET))(this);
		}

		::System::Void LPKHKCLOHPH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CNADKCFAIEB_LPKHKCLOHPH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint CDBIMDODKIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_CDBIMDODKIL_OFFSET))(this);
		}

		::System::Void HDFBOEFIJHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_HDFBOEFIJHP_OFFSET))(this, a1);
		}

		::System::Void FFPBAHMKAIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_FFPBAHMKAIO_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void PGJCICOEMID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_PGJCICOEMID_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
