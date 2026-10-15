#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MessageContentTradeBlock_TradeDisplayType : ::System::Int32
	{
		None = 0,
		Publish = 1,
		Cancel = 2,
		Reject = 3,
		Expire = 4,
		Confirm = 5,
		Complete = 6,
	};
}
