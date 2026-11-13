#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCNIDBKPPCK;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeOrderRepository; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C564BE0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS12_0__REFRESHMYORDERS_B__0_OFFSET UNITYSDK_OFFSET(0x1C56A440)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderRepository___c__DisplayClass12_0_TypeDefinitionIndex = 77198;

	class BlindBoxTradeOrderRepository___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* __4__this; // 0x10
		::System::UInt64 syncVersion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMyOrders_b__0(::DCNIDBKPPCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNIDBKPPCK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS12_0__REFRESHMYORDERS_B__0_OFFSET))(this, a1);
		}

	};
}
