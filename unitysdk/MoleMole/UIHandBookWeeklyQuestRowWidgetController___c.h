#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C481A0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C481E0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__14_0_OFFSET UNITYSDK_OFFSET(0x19C481F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex = 58400;

	class UIHandBookWeeklyQuestRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35390);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnRewardBtnClick_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTROWWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__14_0_OFFSET))(this);
		}
	};
}
