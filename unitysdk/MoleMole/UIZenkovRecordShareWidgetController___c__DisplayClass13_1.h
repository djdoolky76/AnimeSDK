#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class NELNIMNNGCK;

#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0E3B0)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__SETUPSHARECONTENT_B__1_OFFSET UNITYSDK_OFFSET(0x12C0E3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRecordShareWidgetController___c__DisplayClass13_1_TypeDefinitionIndex = 49962;

	template <typename T>
	class UIZenkovRecordShareWidgetController___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::NELNIMNNGCK* curSeasonConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetupShareContent_b__1(::DJPEEJFNCHL* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___C__DISPLAYCLASS13_1__SETUPSHARECONTENT_B__1_OFFSET))(this, m);
		}
	};
}
