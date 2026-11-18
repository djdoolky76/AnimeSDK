#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINGAMEINVITEFRIENDROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7F390)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGameInviteFriendRowContext_TypeDefinitionIndex = 54070;

	class UIInGameInviteFriendRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::FBHPDPBIGPK*>* OnClickFriend; // 0x28
		::FBHPDPBIGPK* friendBriefInfo; // 0x30
		::System::Boolean IsFriendInRoom; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEINVITEFRIENDROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
