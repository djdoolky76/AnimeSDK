#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class NELNIMNNGCK;

#define MOLEMOLE_UIZENKOVSEASONSHAREWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C16040)
#define MOLEMOLE_UIZENKOVSEASONSHAREWIDGETCONTROLLER___C__DISPLAYCLASS14_1__SETUPSHARECONTENT_B__1_OFFSET UNITYSDK_OFFSET(0x18C16050)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonShareWidgetController___c__DisplayClass14_1_TypeDefinitionIndex = 40254;

	template <typename T>
	class UIZenkovSeasonShareWidgetController___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::NELNIMNNGCK* curSeasonConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONSHAREWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetupShareContent_b__1(::DJPEEJFNCHL* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONSHAREWIDGETCONTROLLER___C__DISPLAYCLASS14_1__SETUPSHARECONTENT_B__1_OFFSET))(this, m);
		}
	};
}
