#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJBICIBNEL.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class FBHPDPBIGPK;
class FPFDFMDKEFE;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVPRICEFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBEE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPriceFriendCardContext_TypeDefinitionIndex = 51344;

	class UIZenkovPriceFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::System::Action_1<::FBHPDPBIGPK*>* onClickTrans; // 0x68
		::System::Action_1<::FBHPDPBIGPK*>* onClickShare; // 0x70
		::FPFDFMDKEFE* PurchaseHistoryRecord; // 0x78
		::GHJBICIBNEL FunctionType; // 0x80
		::System::Boolean ShowShareTip; // 0x84
		::System::Boolean IsSelfCardRow; // 0x85
		::System::Boolean IsCurrentSelectFriend; // 0x86
		::System::Boolean IsFriendHighestPrice; // 0x87

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRICEFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
