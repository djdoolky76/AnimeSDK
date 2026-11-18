#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINGAMEINVITECIRCLEWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1901BD90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGameInviteCircleWidgetController_Data_TypeDefinitionIndex = 84799;

	class UIInGameInviteCircleWidgetController_Data : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEINVITECIRCLEWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
