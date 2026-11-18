#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_HOLLOWCARDOPTIONITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162D0F40)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardOptionItemWidgetContext_TypeDefinitionIndex = 63829;

	class HollowCardOptionItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean canSelected; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDOPTIONITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
