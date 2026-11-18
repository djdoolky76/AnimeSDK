#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BDCKHDEBKKK;
class FBHPDPBIGPK;
class IDGDIFDMIDP;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183BF3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGamePlayerInviteWidgetController_Context_TypeDefinitionIndex = 89021;

	class UIInGamePlayerInviteWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::IDGDIFDMIDP*>* OnClickCircle; // 0x28
		::System::Action_1<::System::Boolean>* OnUpdateScrollViewSwitchPlatformUI; // 0x30
		::System::Collections::Generic::IEnumerable_1<::BDCKHDEBKKK*>* InRoomPlayerList; // 0x38
		::System::Action_1<::FBHPDPBIGPK*>* OnClickFriend; // 0x40
		::System::Action* OnCloseAnimFinished; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
