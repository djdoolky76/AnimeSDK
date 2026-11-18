#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NBDLJECLJJO;

#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD1EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShopGoodsPriceWidgetController_Context_TypeDefinitionIndex = 83954;

	class UIShopGoodsPriceWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NBDLJECLJJO* GoodsData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
