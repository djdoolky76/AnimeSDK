#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuddyDIYComponentWidgetController; }

#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5530)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__GETCOMPONENTWIDGET_B__0_OFFSET UNITYSDK_OFFSET(0x17EC5540)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDIYWidgetWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 89264;

	class UIBangbooDIYWidgetWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 componentID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetComponentWidget_b__0(::MoleMole::UIBuddyDIYComponentWidgetController* com)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS4_0__GETCOMPONENTWIDGET_B__0_OFFSET))(this, com);
		}
	};
}
