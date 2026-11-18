#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17690890)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176908D0)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__REFRESHBUTTON_B__10_1_OFFSET UNITYSDK_OFFSET(0x176908E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestItemWidgetController___c_TypeDefinitionIndex = 43479;

	class UIHandBookProxyQuestItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48A00);
		}
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshButton_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__REFRESHBUTTON_B__10_1_OFFSET))(this);
		}
	};
}
