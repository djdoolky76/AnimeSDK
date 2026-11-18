#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPersonalInfoEditPopWindowController; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D688D0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__DOUPDATESTRATEGY_B__0_OFFSET UNITYSDK_OFFSET(0x17D688E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 60652;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPersonalInfoEditPopWindowController* __4__this; // 0x10
		::EFIFKJHLKCF oldIdentityType; // 0x18
		::System::Int32 newModuleID; // 0x1C
		::System::Int32 oldModuleID; // 0x20
		::EFIFKJHLKCF newIdentityType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoUpdateStrategy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__DOUPDATESTRATEGY_B__0_OFFSET))(this);
		}
	};
}
