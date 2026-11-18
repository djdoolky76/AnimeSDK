#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1837B6D0)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1837B710)
#define MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__ONUIINIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x1837B720)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex = 73332;

	class UIGeneralStaminaShowWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__1_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C1C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralStaminaShowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C1C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSTAMINASHOWWIDGETCONTROLLER___C__ONUIINIT_B__1_2_OFFSET))(this);
		}
	};
}
