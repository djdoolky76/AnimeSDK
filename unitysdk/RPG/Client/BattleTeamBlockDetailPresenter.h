#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEPJAMMBEFC;
class MLCANOMBLNG;
class NEADDHNBPHB;
namespace RPG::Client { class BattleTeamBlockDetailPresenter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_ADDITEM_OFFSET UNITYSDK_OFFSET(0xC861870)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_CREATE_OFFSET UNITYSDK_OFFSET(0xC861750)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_CTOR_OFFSET UNITYSDK_OFFSET(0xC861820)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC861960)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__HIDEREDUNDANTITEMPRESENTERS_OFFSET UNITYSDK_OFFSET(0xC862020)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHDESC_OFFSET UNITYSDK_OFFSET(0xC8619C0)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0xC861B50)

namespace RPG::Client
{
	class BattleTeamBlockDetailPresenter : public ::System::Object
	{
	public:
		::NEADDHNBPHB* _Data; // 0x10
		::CEPJAMMBEFC* _Binder; // 0x18
		::System::Collections::Generic::List_1<::MLCANOMBLNG*>* _ItemPresenters; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleTeamBlockDetailPresenter* Create(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::BattleTeamBlockDetailPresenter*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_CREATE_OFFSET))(a1);
		}

		::System::Void AddItem(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_ADDITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshView(::NEADDHNBPHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEADDHNBPHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_REFRESHVIEW_OFFSET))(this, a1);
		}

		::System::Void _RefreshDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHDESC_OFFSET))(this);
		}

		::System::Void _RefreshItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHITEMLIST_OFFSET))(this);
		}

		::System::Void _HideRedundantItemPresenters(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__HIDEREDUNDANTITEMPRESENTERS_OFFSET))(this, a1);
		}

	};
}
