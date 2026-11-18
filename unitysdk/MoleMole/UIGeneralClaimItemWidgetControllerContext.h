#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKJHIDKOHEL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173C9C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClaimItemWidgetControllerContext_TypeDefinitionIndex = 44308;

	class UIGeneralClaimItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BKJHIDKOHEL ClaimType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
