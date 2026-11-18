#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D58720)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D58760)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x15D58770)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_3_OFFSET UNITYSDK_OFFSET(0x15D58950)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_4_OFFSET UNITYSDK_OFFSET(0x15D58890)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingPageController___c_TypeDefinitionIndex = 38743;

	class UISettingPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F260);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F268);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F270);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_0_OFFSET))(this);
		}

		::System::Void _InitView_b__12_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_4_OFFSET))(this);
		}

		::System::Void _InitView_b__12_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_3_OFFSET))(this);
		}
	};
}
