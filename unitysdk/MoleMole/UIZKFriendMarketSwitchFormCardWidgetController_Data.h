#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGCKDGJCNLH.h"
#include "unitysdk/System/Object.h"

template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xEB19210)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchFormCardWidgetController_Data_TypeDefinitionIndex = 41043;

	class UIZKFriendMarketSwitchFormCardWidgetController_Data : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* CurrentSelectedForm; // 0x10
		::JIOLFCAGOFH_1<::System::Int32>* CurrentConfirmSelectedForm; // 0x18
		::PGCKDGJCNLH FormData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
