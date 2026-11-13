#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeScope.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class CJAKLOAEGKK;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFlowService; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFriendMarketInfo; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeOrderRepository; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradePublishOrderFriendSettings; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradePublishOrderInfo; }
namespace System { class Object; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C564230)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_ISHISTORYGOTPET_OFFSET UNITYSDK_OFFSET(0x1C563C70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEFLOWSERVICE_OFFSET UNITYSDK_OFFSET(0x1C564170)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEFRIENDMARKETINFO_OFFSET UNITYSDK_OFFSET(0x1C5641D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADENETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x1C564190)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEORDERREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1C5641B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEPUBLISHORDERFRIENDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C564210)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEPUBLISHORDERINFO_OFFSET UNITYSDK_OFFSET(0x1C5641F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C562AE0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISPLAYERFORBIDRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C563F60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISPRIVATEORDERPUBLISHRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C55D9D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISPUBLICORDERPUBLISHRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C55BC20)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISSHOWINVENTORYTRADEENTRY_OFFSET UNITYSDK_OFFSET(0x1C563E40)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISSHOWTRADEENTRY_OFFSET UNITYSDK_OFFSET(0x1C563DF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISTRADEACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C563C90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1C563BB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_ISHISTORYGOTPET_OFFSET UNITYSDK_OFFSET(0x1C563C80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEFLOWSERVICE_OFFSET UNITYSDK_OFFSET(0x1C564180)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEFRIENDMARKETINFO_OFFSET UNITYSDK_OFFSET(0x1C5641E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADENETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x1C5641A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEORDERREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1C5641C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEPUBLISHORDERFRIENDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C564220)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEPUBLISHORDERINFO_OFFSET UNITYSDK_OFFSET(0x1C564200)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SHOWTRADERESTRICTEDTOAST_OFFSET UNITYSDK_OFFSET(0x1C55BC90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SYNCHISTORYGOTPET_OFFSET UNITYSDK_OFFSET(0x1C563870)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_TRYBLOCKBYPLAYERFORBID_OFFSET UNITYSDK_OFFSET(0x1C55BB80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_TRYSHOWTRADEPAGE_OFFSET UNITYSDK_OFFSET(0x1C563FF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__CANENTERTRADE_OFFSET UNITYSDK_OFFSET(0x1C563EB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__CREATENETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x1C5638E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__INITSERVICES_OFFSET UNITYSDK_OFFSET(0x1C562C70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__ONBLINDBOXTRADECHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C562EC0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__ONPETDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C5633C0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeModule_TypeDefinitionIndex = 77180;

	class BlindBoxTradeModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings* _TradePublishOrderFriendSettings_k__BackingField; // 0x10
		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo* _TradePublishOrderInfo_k__BackingField; // 0x18
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* _TradeFlowService_k__BackingField; // 0x20
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo* _TradeFriendMarketInfo_k__BackingField; // 0x28
		::CJAKLOAEGKK* _TradeNetworkService_k__BackingField; // 0x30
		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* _TradeOrderRepository_k__BackingField; // 0x38
		::System::Boolean _IsHistoryGotPet_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _OnBlindBoxTradeChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__ONBLINDBOXTRADECHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__ONPETDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitServices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__INITSERVICES_OFFSET))(this);
		}

		static ::CJAKLOAEGKK* _CreateNetworkService()
		{
			return ((::CJAKLOAEGKK*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__CREATENETWORKSERVICE_OFFSET))();
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsHistoryGotPet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_ISHISTORYGOTPET_OFFSET))(this);
		}

		::System::Void set_IsHistoryGotPet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_ISHISTORYGOTPET_OFFSET))(this, a1);
		}

		::System::Void SyncHistoryGotPet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SYNCHISTORYGOTPET_OFFSET))(this, a1);
		}

		::System::Boolean IsTradeActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISTRADEACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsShowTradeEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISSHOWTRADEENTRY_OFFSET))(this);
		}

		::System::Boolean IsShowInventoryTradeEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISSHOWINVENTORYTRADEENTRY_OFFSET))(this);
		}

		::System::Boolean _CanEnterTrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE__CANENTERTRADE_OFFSET))(this);
		}

		::System::Boolean IsPublicOrderPublishRestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISPUBLICORDERPUBLISHRESTRICTED_OFFSET))(this);
		}

		::System::Boolean IsPrivateOrderPublishRestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISPRIVATEORDERPUBLISHRESTRICTED_OFFSET))(this);
		}

		::System::Void ShowTradeRestrictedToast(::RPG::Client::BlindBox::Trade::BlindBoxTradeScope a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeScope))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SHOWTRADERESTRICTEDTOAST_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayerForbidRestricted(::RPG::Client::BlindBox::Trade::BlindBoxTradeScope a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeScope))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_ISPLAYERFORBIDRESTRICTED_OFFSET))(this, a1);
		}

		::System::Boolean TryBlockByPlayerForbid(::RPG::Client::BlindBox::Trade::BlindBoxTradeScope a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeScope))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_TRYBLOCKBYPLAYERFORBID_OFFSET))(this, a1);
		}

		::System::Boolean TryShowTradePage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_TRYSHOWTRADEPAGE_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* get_TradeFlowService()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEFLOWSERVICE_OFFSET))(this);
		}

		::System::Void set_TradeFlowService(::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEFLOWSERVICE_OFFSET))(this, a1);
		}

		::CJAKLOAEGKK* get_TradeNetworkService()
		{
			return ((::CJAKLOAEGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADENETWORKSERVICE_OFFSET))(this);
		}

		::System::Void set_TradeNetworkService(::CJAKLOAEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAKLOAEGKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADENETWORKSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* get_TradeOrderRepository()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEORDERREPOSITORY_OFFSET))(this);
		}

		::System::Void set_TradeOrderRepository(::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEORDERREPOSITORY_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo* get_TradeFriendMarketInfo()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEFRIENDMARKETINFO_OFFSET))(this);
		}

		::System::Void set_TradeFriendMarketInfo(::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEFRIENDMARKETINFO_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo* get_TradePublishOrderInfo()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEPUBLISHORDERINFO_OFFSET))(this);
		}

		::System::Void set_TradePublishOrderInfo(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEPUBLISHORDERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings* get_TradePublishOrderFriendSettings()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_GET_TRADEPUBLISHORDERFRIENDSETTINGS_OFFSET))(this);
		}

		::System::Void set_TradePublishOrderFriendSettings(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEMODULE_SET_TRADEPUBLISHORDERFRIENDSETTINGS_OFFSET))(this, a1);
		}

	};
}
