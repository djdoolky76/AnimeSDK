#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class NELNIMNNGCK;

#define MOLEMOLE_UIZENKOVBADGEINFOROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170C4410)
#define MOLEMOLE_UIZENKOVBADGEINFOROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ISCURRENTMEDAL_B__0_OFFSET UNITYSDK_OFFSET(0x170C4420)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBadgeInfoRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 62167;

	class UIZenkovBadgeInfoRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::NELNIMNNGCK* seasonConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBADGEINFOROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsCurrentMedal_b__0(::DJPEEJFNCHL* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBADGEINFOROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ISCURRENTMEDAL_B__0_OFFSET))(this, m);
		}
	};
}
