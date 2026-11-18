#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/HMENNFHKEOE_GLDNHBHMBDL.h"
#include "unitysdk/IBAHIJOBGBG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class FBHPDPBIGPK;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166B0160)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardContext_TypeDefinitionIndex = 83591;

	class UIFriendCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::FBHPDPBIGPK*>* onClickSendMessage; // 0x28
		::FBHPDPBIGPK* info; // 0x30
		::NodeGraph::VariantUnion subKey; // 0x38
		::HMENNFHKEOE_GLDNHBHMBDL FromModule; // 0x50
		::EFIFKJHLKCF IdentityType; // 0x54
		::System::Int32 ModuleID; // 0x58
		::Share::ENotificationBadgeType notificationBadgeType; // 0x5C
		::IBAHIJOBGBG DisplayTag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
