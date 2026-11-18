#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173F7B00)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173F7B40)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__ONCLICKDELITEM_B__9_1_OFFSET UNITYSDK_OFFSET(0x173F7B50)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupListRowWidgetController___c_TypeDefinitionIndex = 38870;

	class UILineupListRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILineupListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickDelItem_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__ONCLICKDELITEM_B__9_1_OFFSET))(this);
		}
	};
}
