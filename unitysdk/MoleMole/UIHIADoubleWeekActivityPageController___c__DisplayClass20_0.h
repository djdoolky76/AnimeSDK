#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIBCMAJOLIM;
namespace MoleMole { class UIHIADoubleWeekActivityPageController; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEE750)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS20_0__ONSELECTGRID_B__0_OFFSET UNITYSDK_OFFSET(0x16EEE760)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c__DisplayClass20_0_TypeDefinitionIndex = 55981;

	class UIHIADoubleWeekActivityPageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::KIBCMAJOLIM* grid; // 0x10
		::MoleMole::UIHIADoubleWeekActivityPageController* __4__this; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectGrid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS20_0__ONSELECTGRID_B__0_OFFSET))(this);
		}
	};
}
