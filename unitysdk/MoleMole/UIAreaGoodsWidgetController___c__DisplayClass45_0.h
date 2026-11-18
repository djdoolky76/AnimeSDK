#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAGPIKLBMMJ;

#define MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EC560)
#define MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1A0EC570)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsWidgetController___c__DisplayClass45_0_TypeDefinitionIndex = 51809;

	class UIAreaGoodsWidgetController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::BAGPIKLBMMJ* buy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__0(::BAGPIKLBMMJ* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAGPIKLBMMJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
