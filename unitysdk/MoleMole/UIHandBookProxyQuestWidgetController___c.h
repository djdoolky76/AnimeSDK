#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANPJANGHICC;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F224E0)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F22520)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x18F22530)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET UNITYSDK_OFFSET(0x18F22650)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__11_0_OFFSET UNITYSDK_OFFSET(0x18F22770)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex = 65089;

	class UIHandBookProxyQuestWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AB90);
		}
		static ::System::Comparison_1<::ANPJANGHICC*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::ANPJANGHICC*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AB98);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ABA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ABA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET))(this);
		}

		::System::Int32 _RefreshProxyQuest_b__11_0(::ANPJANGHICC* a, ::ANPJANGHICC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::ANPJANGHICC*, ::ANPJANGHICC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__11_0_OFFSET))(this, a, b);
		}
	};
}
