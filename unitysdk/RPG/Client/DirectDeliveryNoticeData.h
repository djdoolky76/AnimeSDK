#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLIOFILACMC;
namespace Proto { class ItemList; }
namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCCCB8A0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDAVATARID_OFFSET UNITYSDK_OFFSET(0xCCCAD40)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xCCCB080)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCCCB7F0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_REWARDITEMLISTCOUNT_OFFSET UNITYSDK_OFFSET(0xCCCB840)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0xCCCB7D0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_SET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0xCCCB7E0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_TRYSETAVATARNEW_OFFSET UNITYSDK_OFFSET(0xCCCB8B0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__GETNEWAVATARID_OFFSET UNITYSDK_OFFSET(0xCCCB930)

namespace RPG::Client
{
	class DirectDeliveryNoticeData : public ::System::Object
	{
	public:
		::CLIOFILACMC* _ServerData; // 0x10
		::RPG::Client::DirectDeliveryNoticeToastConfig* _ToastConfig_k__BackingField; // 0x18
		::System::Void _ctor(::CLIOFILACMC* a1, ::RPG::Client::DirectDeliveryNoticeToastConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CLIOFILACMC*, ::RPG::Client::DirectDeliveryNoticeToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DirectDeliveryNoticeToastConfig* get_ToastConfig()
		{
			return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_TOASTCONFIG_OFFSET))(this);
		}

		::System::Void set_ToastConfig(::RPG::Client::DirectDeliveryNoticeToastConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_SET_TOASTCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_RewardItemListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_REWARDITEMLISTCOUNT_OFFSET))(this);
		}

		::Proto::ItemList* GetRewardItemList(::System::Int32 a1)
		{
			return ((::Proto::ItemList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDITEMLIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetRewardAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDAVATARID_OFFSET))(this);
		}

		::System::Void TrySetAvatarNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_TRYSETAVATARNEW_OFFSET))(this);
		}

		::System::UInt32 _GetNewAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__GETNEWAVATARID_OFFSET))(this);
		}

	};
}
