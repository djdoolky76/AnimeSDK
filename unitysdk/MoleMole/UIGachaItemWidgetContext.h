#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DOJFNBKAOMN;

#define MOLEMOLE_UIGACHAITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18026BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetContext_TypeDefinitionIndex = 85354;

	class UIGachaItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DOJFNBKAOMN* Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
