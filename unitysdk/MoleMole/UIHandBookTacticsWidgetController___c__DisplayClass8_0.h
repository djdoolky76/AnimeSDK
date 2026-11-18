#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF6870)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16EF6880)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 85835;

	class UIHandBookTacticsWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookTacticsWidgetController* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> kv; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
