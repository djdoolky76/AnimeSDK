#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJINPFNEHMG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
class IDGDIFDMIDP;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0A430)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMarketShareWidgetController_Context_TypeDefinitionIndex = 67399;

	class UIZenkovMarketShareWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::IDGDIFDMIDP*>* OnClickCircle; // 0x28
		::System::Action_1<::FBHPDPBIGPK*>* OnClickFriend; // 0x30
		::System::Action_1<::System::Boolean>* OnUpdateScrollViewSwitchPlatformUI; // 0x38
		::System::Action* OnClickCopy; // 0x40
		::AJINPFNEHMG TabType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
