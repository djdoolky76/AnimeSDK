#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJINPFNEHMG.h"
#include "unitysdk/GHJBICIBNEL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVMARKETFRIENDINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAAB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMarketFriendInfoWidgetController_Context_TypeDefinitionIndex = 63749;

	class UIZenkovMarketFriendInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* OnUpdateScrollViewSwitchPlatformUI; // 0x28
		::AJINPFNEHMG TabType; // 0x30
		::System::UInt32 InitialSocialCircleUID; // 0x34
		::System::UInt32 InitialFriendUID; // 0x38
		::GHJBICIBNEL FunctionType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETFRIENDINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
