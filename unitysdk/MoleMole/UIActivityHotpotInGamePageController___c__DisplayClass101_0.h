#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GILOMLEHBPP;
class LCLDDKEIDNF;

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20A090)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__ONSELECTSOUVENIREND_B__0_OFFSET UNITYSDK_OFFSET(0x1A20D6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass101_0_TypeDefinitionIndex = 43525;

	class UIActivityHotpotInGamePageController___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::GILOMLEHBPP* souvenir; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSelectSouvenirEnd_b__0(::LCLDDKEIDNF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCLDDKEIDNF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__ONSELECTSOUVENIREND_B__0_OFFSET))(this, x);
		}
	};
}
