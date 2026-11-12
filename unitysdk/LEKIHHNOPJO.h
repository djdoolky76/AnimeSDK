#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define LEKIHHNOPJO_ADDHCLFCACC_OFFSET UNITYSDK_OFFSET(0xBEEF3F0)
#define LEKIHHNOPJO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEF0130)
#define LEKIHHNOPJO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEF02B0)
#define LEKIHHNOPJO_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xBEEFEF0)
#define LEKIHHNOPJO_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xBEEF2B0)
#define LEKIHHNOPJO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEF0440)
#define LEKIHHNOPJO_CGKMHCBNOFD_OFFSET UNITYSDK_OFFSET(0xBEEFD40)
#define LEKIHHNOPJO_CPLAEGIONDN_OFFSET UNITYSDK_OFFSET(0xBEEFAD0)
#define LEKIHHNOPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF0410)
#define LEKIHHNOPJO_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xBEEF7A0)
#define LEKIHHNOPJO_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xBEEF4F0)
#define LEKIHHNOPJO_EIDLBJENLAH_OFFSET UNITYSDK_OFFSET(0xBEEF6D0)
#define LEKIHHNOPJO_EKAPIINMCDJ_OFFSET UNITYSDK_OFFSET(0xBEEFBA0)
#define LEKIHHNOPJO_IBNHMFAPDIG_OFFSET UNITYSDK_OFFSET(0xBEEFE60)
#define LEKIHHNOPJO_JFOJNKKHIKE_OFFSET UNITYSDK_OFFSET(0xBEEFC20)
#define LEKIHHNOPJO_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xBEEF980)
#define LEKIHHNOPJO_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xBEF0070)
#define LEKIHHNOPJO_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xBEEFFB0)
#define LEKIHHNOPJO_OGKGKPDCKIH_OFFSET UNITYSDK_OFFSET(0xBEEFDD0)
#define LEKIHHNOPJO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEEF170)
#define LEKIHHNOPJO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBEEF380)

inline static constexpr unsigned int LEKIHHNOPJO_TypeDefinitionIndex = 74410;

	class LEKIHHNOPJO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* LJFPHPILBJH; // 0x60
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0x68
		::UnityEngine::Animation* BGIPIKNGPKC; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::System::Boolean AAGKIPFCNHO; // 0x80
		static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_DDCODEFIJCJ()
		{
			return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)UnitySDK::FromName("", "LEKIHHNOPJO")->GetStaticField(0x592D0);
		}

		// static const ::System::String* GGMHCPICENN; // 0x0
		// static const ::System::String* CLGDGMLIHKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKIHHNOPJO_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO__ONBIND_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void EIDLBJENLAH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_EIDLBJENLAH_OFFSET))(this, a1);
		}

		::System::Void CPLAEGIONDN(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_CPLAEGIONDN_OFFSET))(this, a1);
		}

		::System::Void IBNHMFAPDIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_IBNHMFAPDIG_OFFSET))(this);
		}

		::System::Void ADDHCLFCACC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_ADDHCLFCACC_OFFSET))(this);
		}

		::System::Void CGKMHCBNOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_CGKMHCBNOFD_OFFSET))(this);
		}

		::System::Void OGKGKPDCKIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_OGKGKPDCKIH_OFFSET))(this);
		}

		::System::Boolean JFOJNKKHIKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_JFOJNKKHIKE_OFFSET))(this);
		}

		::System::Boolean EKAPIINMCDJ(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_EKAPIINMCDJ_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
