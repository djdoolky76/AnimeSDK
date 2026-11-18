#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovWarehousePageController; }

#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE543040)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__DISPLAYCLASS57_0__ONTABINDEXCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0xE543050)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWarehousePageController___c__DisplayClass57_0_TypeDefinitionIndex = 92269;

	class UIZenkovWarehousePageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovWarehousePageController* __4__this; // 0x10
		::System::Boolean tipsWasOpen; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTabIndexChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__DISPLAYCLASS57_0__ONTABINDEXCHANGED_B__0_OFFSET))(this);
		}
	};
}
