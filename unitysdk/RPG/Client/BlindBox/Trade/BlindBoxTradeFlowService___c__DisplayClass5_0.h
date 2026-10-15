#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHNMJPLALEC;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFlowService; }
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC8949E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS5_0__CONFIRMCHANGEPUBLICORDER_B__0_OFFSET UNITYSDK_OFFSET(0xC8989E0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFlowService___c__DisplayClass5_0_TypeDefinitionIndex = 74900;

	class BlindBoxTradeFlowService___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* order; // 0x10
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* _ConfirmChangePublicOrder_b__0(::CHNMJPLALEC* a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID, ::CHNMJPLALEC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS5_0__CONFIRMCHANGEPUBLICORDER_B__0_OFFSET))(this, a1);
		}

	};
}
