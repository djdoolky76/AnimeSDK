#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SHOPPINGMALLRECHARGEROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC3730)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRechargeRowWidgetContext_TypeDefinitionIndex = 64593;

	class ShoppingMallRechargeRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
