#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JDJAHCLMBIO;
namespace MoleMole { class UIMainCityMenuPageController; }

#define MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19618D40)
#define MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS47_0__ONOPENACTIVITYCAROUSEL_B__0_OFFSET UNITYSDK_OFFSET(0x19618D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenuPageController___c__DisplayClass47_0_TypeDefinitionIndex = 73309;

	class UIMainCityMenuPageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::JDJAHCLMBIO* uiCarouselData; // 0x10
		::MoleMole::UIMainCityMenuPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpenActivityCarousel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS47_0__ONOPENACTIVITYCAROUSEL_B__0_OFFSET))(this);
		}
	};
}
