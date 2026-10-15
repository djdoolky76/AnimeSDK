#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBGPHGLFCD;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFriendMarketInfo; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC89A030)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0___BUILDCURRENTORDERS_B__0_OFFSET UNITYSDK_OFFSET(0xC89ABD0)

namespace RPG::Client::BlindBox::Trade
{
	class BlindBoxTradeFriendMarketInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo* __4__this; // 0x10
		::MFBGPHGLFCD* ctx; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildCurrentOrders_b__0(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0___BUILDCURRENTORDERS_B__0_OFFSET))(this, a1);
		}

	};
}
