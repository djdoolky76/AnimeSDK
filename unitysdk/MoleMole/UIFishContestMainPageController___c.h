#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166A0190)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOFISHQTE_B__44_0_OFFSET UNITYSDK_OFFSET(0x166A0380)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOSTARTFISH_B__43_0_OFFSET UNITYSDK_OFFSET(0x166A02B0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOWAITFISH_B__42_0_OFFSET UNITYSDK_OFFSET(0x166A01E0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166A01D0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_4_OFFSET UNITYSDK_OFFSET(0x166A0450)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_5_OFFSET UNITYSDK_OFFSET(0x166A0520)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController___c_TypeDefinitionIndex = 49988;

	class UIFishContestMainPageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__49_5()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x351C0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__49_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x351C8);
		}
		static ::System::Action** StaticGet___9__42_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x351D0);
		}
		static ::System::Action** StaticGet___9__44_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x351D8);
		}
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x351E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFishContestMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x351E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeToWaitFish_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOWAITFISH_B__42_0_OFFSET))(this);
		}

		::System::Void _ChangeToStartFish_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOSTARTFISH_B__43_0_OFFSET))(this);
		}

		::System::Void _ChangeToFishQTE_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__CHANGETOFISHQTE_B__44_0_OFFSET))(this);
		}

		::System::Void _OnFishingStartSingleBattleHandle_b__49_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_4_OFFSET))(this);
		}

		::System::Void _OnFishingStartSingleBattleHandle_b__49_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__ONFISHINGSTARTSINGLEBATTLEHANDLE_B__49_5_OFFSET))(this);
		}
	};
}
