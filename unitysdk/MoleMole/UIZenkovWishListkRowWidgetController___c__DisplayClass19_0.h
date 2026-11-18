#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
class KOIDMLPJGML;
namespace MoleMole { class UIZenkovWishListkRowWidgetController; }

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E58710)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__REFRESHREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x14E58820)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 75755;

	class UIZenkovWishListkRowWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::KOIDMLPJGML* viewData; // 0x10
		::MoleMole::UIZenkovWishListkRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewardItems_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__REFRESHREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
