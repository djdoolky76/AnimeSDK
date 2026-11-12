#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
class CJAKLOAEGKK;
class DPOGMNFCMNN;
class MFBGPHGLFCD;
namespace RPG::Client::BlindBox::Trade { class BlindBoxOrderFilter; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD1FE150)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERAT_OFFSET UNITYSDK_OFFSET(0xD1FEB40)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERCOUNT_OFFSET UNITYSDK_OFFSET(0xD1FEAF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET_CURRENTFILTER_OFFSET UNITYSDK_OFFSET(0xD1FEAB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__CHIMERATYPE_OFFSET UNITYSDK_OFFSET(0xD1FFF60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RACCOONTYPE_OFFSET UNITYSDK_OFFSET(0xD1FFE60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RETURNEDORDERIDSCLEARINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0xD1FFC80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISFRIENDORDER_OFFSET UNITYSDK_OFFSET(0xD1FF3B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISORDERTRADABLEBYPLAYER_OFFSET UNITYSDK_OFFSET(0xD1FF580)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REBUILDCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xD1FE980)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xD1FE290)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHNEXTBATCH_OFFSET UNITYSDK_OFFSET(0xD1FE6F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVENONFRIENDORDERS_OFFSET UNITYSDK_OFFSET(0xD1FF210)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVEORDERANDREFILL_OFFSET UNITYSDK_OFFSET(0xD1FEBC0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_SETFILTER_OFFSET UNITYSDK_OFFSET(0xD1FE9D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_UPDATECURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xD1FE240)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__BUILDCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xD1FE4D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__CLEARRETURNEDORDERIDS_OFFSET UNITYSDK_OFFSET(0xD1FF910)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FETCHANDSYNCCACHEORDERS_OFFSET UNITYSDK_OFFSET(0xD1FE3C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FINDCACHEDORDER_OFFSET UNITYSDK_OFFSET(0xD1FEF40)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__ISCACHEEXPIRED_OFFSET UNITYSDK_OFFSET(0xD1FE830)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKANDLOG_OFFSET UNITYSDK_OFFSET(0xD1FFBF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKPREFERREDANDFILL_OFFSET UNITYSDK_OFFSET(0xD1FF780)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__RECORDRETURNEDORDERS_OFFSET UNITYSDK_OFFSET(0xD1FFA90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDERBYID_OFFSET UNITYSDK_OFFSET(0xD1FFD60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDER_OFFSET UNITYSDK_OFFSET(0xD1FEEB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__TRYCLEARRETURNEDORDERIDSBYINTERVAL_OFFSET UNITYSDK_OFFSET(0xD1FF5F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___FETCHANDSYNCCACHEORDERS_B__22_0_OFFSET UNITYSDK_OFFSET(0xD200060)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFriendMarketInfo_TypeDefinitionIndex = 77182;

	class BlindBoxTradeFriendMarketInfo : public ::System::Object
	{
	public:
		::MFBGPHGLFCD* _OrderPickContext; // 0x10
		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* _CurrentFilter; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* CacheOrders; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* CurrentOrders; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt64>* _ReturnedOrderIds; // 0x30
		::CJAKLOAEGKK* _NetworkService; // 0x38
		::System::UInt64 _LastUpdateTime; // 0x40
		::System::UInt64 _LastReturnedOrderIdsClearTime; // 0x48
		// static const ::System::Object _FetchCD; // 0x0
		// static const ::System::Object _OrderShowCount; // 0x0
		// static const ::System::Object _PreferRaccoonOrderCount; // 0x0
		// static const ::System::Object _PreferChimeraOrderCount; // 0x0
		// static const ::System::String* _ReturnedOrderIdsClearIntervalConstKey; // 0x0
		::System::Void _ctor(::CJAKLOAEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAKLOAEGKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* UpdateCurrentOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_UPDATECURRENTORDERS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshCurrentOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHCURRENTORDERS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshNextBatch()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHNEXTBATCH_OFFSET))(this);
		}

		::System::Void RebuildCurrentOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REBUILDCURRENTORDERS_OFFSET))(this);
		}

		::System::Void SetFilter(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_SETFILTER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* get_CurrentFilter()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET_CURRENTFILTER_OFFSET))(this);
		}

		::System::Int32 GetCurrentOrderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERCOUNT_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* GetCurrentOrderAt(::System::Int32 a1)
		{
			return ((::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERAT_OFFSET))(this, a1);
		}

		::System::Void RemoveOrderAndRefill(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVEORDERANDREFILL_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveNonFriendOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVENONFRIENDORDERS_OFFSET))(this);
		}

		::System::Boolean IsOrderTradableByPlayer(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISORDERTRADABLEBYPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean IsFriendOrder(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISFRIENDORDER_OFFSET))(this, a1);
		}

		::System::Void _BuildCurrentOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__BUILDCURRENTORDERS_OFFSET))(this);
		}

		::System::Void _PickPreferredAndFill(::MFBGPHGLFCD* a1, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MFBGPHGLFCD*, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKPREFERREDANDFILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RecordReturnedOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__RECORDRETURNEDORDERS_OFFSET))(this);
		}

		::System::Void _TryClearReturnedOrderIdsByInterval()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__TRYCLEARRETURNEDORDERIDSBYINTERVAL_OFFSET))(this);
		}

		::System::Void _ClearReturnedOrderIds(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__CLEARRETURNEDORDERIDS_OFFSET))(this, a1);
		}

		::System::Void _PickAndLog(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKANDLOG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* _FetchAndSyncCacheOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FETCHANDSYNCCACHEORDERS_OFFSET))(this);
		}

		::System::Boolean _IsCacheExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__ISCACHEEXPIRED_OFFSET))(this);
		}

		::System::Void _RemoveOrder(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDER_OFFSET))(this, a1);
		}

		static ::System::Void _RemoveOrderById(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDERBYID_OFFSET))(a1, a2);
		}

		::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* _FindCachedOrder(::System::Collections::Generic::HashSet_1<::System::UInt64>* a1, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* a2)
		{
			return ((::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FINDCACHEDORDER_OFFSET))(this, a1, a2);
		}

		static ::System::UInt64 get__ReturnedOrderIdsClearIntervalSeconds()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RETURNEDORDERIDSCLEARINTERVALSECONDS_OFFSET))();
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType get__RaccoonType()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RACCOONTYPE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType get__ChimeraType()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__CHIMERATYPE_OFFSET))(this);
		}

		::System::Void __FetchAndSyncCacheOrders_b__22_0(::DPOGMNFCMNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPOGMNFCMNN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___FETCHANDSYNCCACHEORDERS_B__22_0_OFFSET))(this, a1);
		}

	};
}
