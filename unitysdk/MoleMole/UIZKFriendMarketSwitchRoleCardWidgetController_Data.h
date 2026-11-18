#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13BF6610)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchRoleCardWidgetController_Data_TypeDefinitionIndex = 68736;

	class UIZKFriendMarketSwitchRoleCardWidgetController_Data : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* CurrentConfirmSelectedAvatar; // 0x10
		::BPHGNMNLLHF* AvatarData; // 0x18
		::JIOLFCAGOFH_1<::System::Int32>* CurrentSelectedAvatar; // 0x20
		::System::Boolean Locked; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
