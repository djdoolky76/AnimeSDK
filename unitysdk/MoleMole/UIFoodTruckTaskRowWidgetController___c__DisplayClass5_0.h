#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class KOIDMLPJGML;
class PLDJFGCHMKK;

#define MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184BAC50)
#define MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x184BB2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckTaskRowWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 68993;

	class UIFoodTruckTaskRowWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::AOJKLCGGPAK* task; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _OnScrollItemUpdate_b__0(::PLDJFGCHMKK* x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::PLDJFGCHMKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
