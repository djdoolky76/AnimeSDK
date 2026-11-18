#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHSKINCARDWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE53CB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchSkinCardWidgetController_Data_TypeDefinitionIndex = 54667;

	class UIZKFriendMarketSwitchSkinCardWidgetController_Data : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* CurrentSelectedSkin; // 0x10
		::JIOLFCAGOFH_1<::System::Int32>* CurrentConfirmSelectedSkin; // 0x18
		::PNIHGNDLMIN* SkinData; // 0x20
		::System::Boolean Locked; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHSKINCARDWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
