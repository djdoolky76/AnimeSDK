#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188A18E0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188A1920)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_0_OFFSET UNITYSDK_OFFSET(0x188A1930)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_1_OFFSET UNITYSDK_OFFSET(0x188A1A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex = 78560;

	class UIShoppingMallLimitedCardWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x452E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x452E8);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x452F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickReceiveBtn_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_0_OFFSET))(this);
		}

		::System::Void _OnClickReceiveBtn_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_1_OFFSET))(this);
		}
	};
}
