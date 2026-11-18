#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BFLPANDDGHG;

#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAC4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopRoleWidgetContext_TypeDefinitionIndex = 76225;

	class UIAreaShopRoleWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BFLPANDDGHG* DBattleFighter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
