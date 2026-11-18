#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFDOBPGOEI;
class FAOCFLLEKPN;

#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D03450)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITTAB_B__0_OFFSET UNITYSDK_OFFSET(0x19D03460)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssBackstageRelicInfoPopWindowController___c__DisplayClass7_0_TypeDefinitionIndex = 86709;

	class UIAbyssBackstageRelicInfoPopWindowController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::CAFDOBPGOEI* relicConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTab_b__0(::FAOCFLLEKPN* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAOCFLLEKPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__INITTAB_B__0_OFFSET))(this, x);
		}
	};
}
