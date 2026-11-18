#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEKALADDKJH;
namespace MoleMole { class UIAbyssArpeggioRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F665E0)
#define MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSTATE_B__3_OFFSET UNITYSDK_OFFSET(0x19F665F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioRowWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 93247;

	class UIAbyssArpeggioRowWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssArpeggioRowWidgetController* __4__this; // 0x10
		::PEKALADDKJH* chapterData; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Boolean isUnlock; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshState_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSTATE_B__3_OFFSET))(this);
		}
	};
}
