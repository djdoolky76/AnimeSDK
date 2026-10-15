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

#define LEKIHHNOPJO_ADDHCLFCACC_OFFSET UNITYSDK_OFFSET(0xB65BD90)
#define LEKIHHNOPJO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB65CBC0)
#define LEKIHHNOPJO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB65CD20)
#define LEKIHHNOPJO_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xB65C980)
#define LEKIHHNOPJO_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xB65BC50)
#define LEKIHHNOPJO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB65CE80)
#define LEKIHHNOPJO_CGKMHCBNOFD_OFFSET UNITYSDK_OFFSET(0xB65C830)
#define LEKIHHNOPJO_CPLAEGIONDN_OFFSET UNITYSDK_OFFSET(0xB65C550)
#define LEKIHHNOPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB65CE50)
#define LEKIHHNOPJO_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xB65C1C0)
#define LEKIHHNOPJO_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xB65BE50)
#define LEKIHHNOPJO_EIDLBJENLAH_OFFSET UNITYSDK_OFFSET(0xB65C090)
#define LEKIHHNOPJO_EKAPIINMCDJ_OFFSET UNITYSDK_OFFSET(0xB65C690)
#define LEKIHHNOPJO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB65BD20)
#define LEKIHHNOPJO_IBNHMFAPDIG_OFFSET UNITYSDK_OFFSET(0xB65C910)
#define LEKIHHNOPJO_JFOJNKKHIKE_OFFSET UNITYSDK_OFFSET(0xB65C710)
#define LEKIHHNOPJO_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xB65C400)
#define LEKIHHNOPJO_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xB65CB00)
#define LEKIHHNOPJO_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xB65CA40)
#define LEKIHHNOPJO_OGKGKPDCKIH_OFFSET UNITYSDK_OFFSET(0xB65C8A0)
#define LEKIHHNOPJO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB65BBA0)

inline static constexpr unsigned int LEKIHHNOPJO_TypeDefinitionIndex = 72331;

	class LEKIHHNOPJO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::Animation* BGIPIKNGPKC; // 0x70
		::UnityEngine::Transform* LJFPHPILBJH; // 0x78
		::System::Boolean AAGKIPFCNHO; // 0x80
		static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_DDCODEFIJCJ()
		{
			return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)UnitySDK::FromName("", "LEKIHHNOPJO")->GetStaticField(0x59680);
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIHHNOPJO_EKGCGIDIFJJ_OFFSET))(this);
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
