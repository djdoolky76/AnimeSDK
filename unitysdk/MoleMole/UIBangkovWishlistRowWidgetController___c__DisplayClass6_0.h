#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIBangkovWishlistRowWidgetController; }

#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF9960)
#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x17FF9970)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 65564;

	class UIBangkovWishlistRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovWishlistRowWidgetController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, ctrl);
		}
	};
}
