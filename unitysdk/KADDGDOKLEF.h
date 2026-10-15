#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GOJNGCCBOGI;
class OBHLNIJOPDH;
class OOMJGNGJNKG;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }

#define KADDGDOKLEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2CBB10)
#define KADDGDOKLEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2CBCF0)
#define KADDGDOKLEF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xB2CB700)
#define KADDGDOKLEF_BENGPLCLPNH_OFFSET UNITYSDK_OFFSET(0xB2CBA80)
#define KADDGDOKLEF_BLGECIEGEBJ_OFFSET UNITYSDK_OFFSET(0xB2CACB0)
#define KADDGDOKLEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CBEA0)
#define KADDGDOKLEF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB2CAD50)
#define KADDGDOKLEF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xB2CAE90)
#define KADDGDOKLEF_FIOAAECBDCK_OFFSET UNITYSDK_OFFSET(0xB2CB940)
#define KADDGDOKLEF_GMDCIEPAMOL_OFFSET UNITYSDK_OFFSET(0xB2CB2B0)
#define KADDGDOKLEF_HNMCIPPMMGI_OFFSET UNITYSDK_OFFSET(0xB2CB500)
#define KADDGDOKLEF_IOCGFCADMEM_OFFSET UNITYSDK_OFFSET(0xB2CB560)
#define KADDGDOKLEF_JJGCMGGNMAF_OFFSET UNITYSDK_OFFSET(0xB2CB880)
#define KADDGDOKLEF_LDJCGFGIGGL_OFFSET UNITYSDK_OFFSET(0xB2CB7C0)
#define KADDGDOKLEF_MBCDGBDNLNI_OFFSET UNITYSDK_OFFSET(0xB2CB140)
#define KADDGDOKLEF_OEEPLMMNGOG_1_OFFSET UNITYSDK_OFFSET(0xB2CB3C0)
#define KADDGDOKLEF_OEEPLMMNGOG_OFFSET UNITYSDK_OFFSET(0xB2CB000)
#define KADDGDOKLEF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB2CAC40)
#define KADDGDOKLEF_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB2CAD00)
#define KADDGDOKLEF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2CAE00)

inline static constexpr unsigned int KADDGDOKLEF_TypeDefinitionIndex = 71546;

	class KADDGDOKLEF : public ::FMPCODLIOLG
	{
	public:
		::OBHLNIJOPDH* ODMGBEOIEEB; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::OOMJGNGJNKG* GBIGNDNMENE; // 0x70
		::System::String* JAHEBAJDKNG; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDGDOKLEF_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDGDOKLEF_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KADDGDOKLEF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDGDOKLEF__ONBIND_OFFSET))(this);
		}

		::System::Void BLGECIEGEBJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_BLGECIEGEBJ_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void MBCDGBDNLNI(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_MBCDGBDNLNI_OFFSET))(this, a1);
		}

		::System::Void GMDCIEPAMOL(::RPG::Client::BattleBuffToastNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_GMDCIEPAMOL_OFFSET))(this, a1);
		}

		::System::Void HNMCIPPMMGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KADDGDOKLEF_HNMCIPPMMGI_OFFSET))(this, a1);
		}

		::System::Void IOCGFCADMEM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_IOCGFCADMEM_OFFSET))(this, a1);
		}

		::GOJNGCCBOGI* OEEPLMMNGOG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_OEEPLMMNGOG_OFFSET))(this, a1);
		}

		::GOJNGCCBOGI* OEEPLMMNGOG_1(::RPG::Client::BattleBuffToastNotify* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_OEEPLMMNGOG_1_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void LDJCGFGIGGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_LDJCGFGIGGL_OFFSET))(this, a1);
		}

		::System::Void JJGCMGGNMAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_JJGCMGGNMAF_OFFSET))(this, a1);
		}

		::System::Void FIOAAECBDCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_FIOAAECBDCK_OFFSET))(this, a1);
		}

		::System::Void BENGPLCLPNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KADDGDOKLEF_BENGPLCLPNH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDGDOKLEF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDGDOKLEF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
