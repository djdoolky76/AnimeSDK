#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAPCHBBOFN;
class CJAKLOAEGKK;
class MIECIEKKIMJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_CANSENDPRIVATEORDERTOFRIEND_OFFSET UNITYSDK_OFFSET(0xC89C520)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xC894F60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_ENSURECACHE_OFFSET UNITYSDK_OFFSET(0xC89C1A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_MARKFRIENDREJECTAPPLYORDER_OFFSET UNITYSDK_OFFSET(0xC890710)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__ENSURECACHE_B__1_0_OFFSET UNITYSDK_OFFSET(0xC89CAA0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__FETCHANDSYNC_OFFSET UNITYSDK_OFFSET(0xC89C410)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__ISCACHEEXPIRED_OFFSET UNITYSDK_OFFSET(0xC89C2C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__SYNCFRIENDSETTINGS_OFFSET UNITYSDK_OFFSET(0xC89C5C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS___FETCHANDSYNC_B__5_0_OFFSET UNITYSDK_OFFSET(0xC89CAB0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderFriendSettings_TypeDefinitionIndex = 74885;

	class BlindBoxTradePublishOrderFriendSettings : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPromise* _PendingFetchPromise; // 0x10
		::CJAKLOAEGKK* _NetworkService; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Boolean>* _FriendRejectApplyOrderMap; // 0x20
		::System::UInt64 _LastUpdateTime; // 0x28
		// static const ::System::Object _FetchCD; // 0x0
		::System::Void _ctor(::CJAKLOAEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAKLOAEGKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* EnsureCache()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_ENSURECACHE_OFFSET))(this);
		}

		::System::Boolean CanSendPrivateOrderToFriend(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_CANSENDPRIVATEORDERTOFRIEND_OFFSET))(this, a1);
		}

		::System::Void MarkFriendRejectApplyOrder(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS_MARKFRIENDREJECTAPPLYORDER_OFFSET))(this, a1);
		}

		::System::Boolean _IsCacheExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__ISCACHEEXPIRED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _FetchAndSync()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__FETCHANDSYNC_OFFSET))(this);
		}

		::System::Void _SyncFriendSettings(::Google::Protobuf::Collections::RepeatedField_1<::CEAPCHBBOFN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::CEAPCHBBOFN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__SYNCFRIENDSETTINGS_OFFSET))(this, a1);
		}

		::System::Void _EnsureCache_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS__ENSURECACHE_B__1_0_OFFSET))(this);
		}

		::System::Void __FetchAndSync_b__5_0(::MIECIEKKIMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIECIEKKIMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERFRIENDSETTINGS___FETCHANDSYNC_B__5_0_OFFSET))(this, a1);
		}

	};
}
