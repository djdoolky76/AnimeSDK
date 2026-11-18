#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIBCMAJOLIM;
namespace MoleMole { class UIHIADoubleWeekActivityPopWindowController; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1805D0A0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONSELECTGRID_B__0_OFFSET UNITYSDK_OFFSET(0x1805D0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 58676;

	class UIHIADoubleWeekActivityPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::KIBCMAJOLIM* grid; // 0x10
		::MoleMole::UIHIADoubleWeekActivityPopWindowController* __4__this; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectGrid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONSELECTGRID_B__0_OFFSET))(this);
		}
	};
}
