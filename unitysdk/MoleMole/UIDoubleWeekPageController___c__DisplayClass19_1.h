#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABDHCFFLLEH;

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184B06F0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__ONSELECTGRID_B__1_OFFSET UNITYSDK_OFFSET(0x184B0700)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c__DisplayClass19_1_TypeDefinitionIndex = 51935;

	template <typename T>
	class UIDoubleWeekPageController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::ABDHCFFLLEH* weeklyQuestConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectGrid_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__ONSELECTGRID_B__1_OFFSET))(this);
		}
	};
}
