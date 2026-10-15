#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNKHNOMEMFD;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFlowService; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC8962B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS12_0__PUBLISHPRIVATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0xC8985D0)

namespace RPG::Client::BlindBox::Trade
{
	class BlindBoxTradeFlowService___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* __4__this; // 0x10
		::System::UInt32 buyerUid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PublishPrivateOrder_b__0(::FNKHNOMEMFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNKHNOMEMFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS12_0__PUBLISHPRIVATEORDER_B__0_OFFSET))(this, a1);
		}

	};
}
