#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDUELBATTLEPROGRESSROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF1610)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleProgressRowWidgetContext_TypeDefinitionIndex = 63575;

	class UIDuelBattleProgressRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Number; // 0x28
		::System::Boolean IsCurrent; // 0x2C
		::System::Boolean IsElite; // 0x2D
		::System::Boolean IsBoss; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEPROGRESSROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
