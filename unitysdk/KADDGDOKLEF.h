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

#define KADDGDOKLEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB55F10)
#define KADDGDOKLEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB560F0)
#define KADDGDOKLEF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xBB55B00)
#define KADDGDOKLEF_BENGPLCLPNH_OFFSET UNITYSDK_OFFSET(0xBB55E80)
#define KADDGDOKLEF_BLGECIEGEBJ_OFFSET UNITYSDK_OFFSET(0xBB550B0)
#define KADDGDOKLEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB562A0)
#define KADDGDOKLEF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xBB55290)
#define KADDGDOKLEF_FIOAAECBDCK_OFFSET UNITYSDK_OFFSET(0xBB55D40)
#define KADDGDOKLEF_GMDCIEPAMOL_OFFSET UNITYSDK_OFFSET(0xBB556B0)
#define KADDGDOKLEF_HNMCIPPMMGI_OFFSET UNITYSDK_OFFSET(0xBB55900)
#define KADDGDOKLEF_IOCGFCADMEM_OFFSET UNITYSDK_OFFSET(0xBB55960)
#define KADDGDOKLEF_JJGCMGGNMAF_OFFSET UNITYSDK_OFFSET(0xBB55C80)
#define KADDGDOKLEF_LDJCGFGIGGL_OFFSET UNITYSDK_OFFSET(0xBB55BC0)
#define KADDGDOKLEF_MBCDGBDNLNI_OFFSET UNITYSDK_OFFSET(0xBB55540)
#define KADDGDOKLEF_OEEPLMMNGOG_1_OFFSET UNITYSDK_OFFSET(0xBB557C0)
#define KADDGDOKLEF_OEEPLMMNGOG_OFFSET UNITYSDK_OFFSET(0xBB55400)
#define KADDGDOKLEF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBB55040)
#define KADDGDOKLEF_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBB55100)
#define KADDGDOKLEF__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB55200)
#define KADDGDOKLEF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBB55150)

inline static constexpr unsigned int KADDGDOKLEF_TypeDefinitionIndex = 73531;

	class KADDGDOKLEF : public ::FMPCODLIOLG
	{
	public:
		::System::String* JAHEBAJDKNG; // 0x60
		::OBHLNIJOPDH* ODMGBEOIEEB; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::OOMJGNGJNKG* GBIGNDNMENE; // 0x78
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KADDGDOKLEF__ONINITPARAMS_OFFSET))(this, a1);
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
