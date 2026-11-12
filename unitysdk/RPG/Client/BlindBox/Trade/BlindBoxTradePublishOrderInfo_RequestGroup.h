#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradePublishOrderPetItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REQUESTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xD20E360)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderInfo_RequestGroup_TypeDefinitionIndex = 77218;

	class BlindBoxTradePublishOrderInfo_RequestGroup : public ::System::Object
	{
	public:
		::System::String* TitleTextId; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>* Items; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REQUESTGROUP_CTOR_OFFSET))(this);
		}

	};
}
