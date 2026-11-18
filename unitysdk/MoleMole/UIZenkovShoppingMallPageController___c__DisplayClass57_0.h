#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALKLCLEAPDM;
namespace MoleMole { class UIZenkovShoppingMallPageController; }

#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170DB000)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONTABSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x170DB010)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShoppingMallPageController___c__DisplayClass57_0_TypeDefinitionIndex = 92333;

	class UIZenkovShoppingMallPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovShoppingMallPageController* __4__this; // 0x10
		::ALKLCLEAPDM* kovTab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnTabScrollItemUpdate_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONTABSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
