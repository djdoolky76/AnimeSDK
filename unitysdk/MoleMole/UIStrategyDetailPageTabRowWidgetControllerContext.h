#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTRATEGYDETAILPAGETABROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188ACEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyDetailPageTabRowWidgetControllerContext_TypeDefinitionIndex = 85168;

	class UIStrategyDetailPageTabRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 AvatarId; // 0x28
		::System::Boolean IsTeam; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGETABROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
