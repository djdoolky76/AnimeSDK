#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIFCJJKEO;
class IGDHPBBNEIC;
class JGJEICAELEB;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTournExpRewardDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXPDATA_CLEARSEENREWARDS_OFFSET UNITYSDK_OFFSET(0x1CEA70C0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA5E90)
#define RPG_CLIENT_ROGUETOURNEXPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CEA5ED0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA6F90)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GETTOURNEXPREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1CEA69F0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1CEA7540)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA7560)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_EXPICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEA7630)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x1CEA7580)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_REWARDDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1CEA7610)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1CEA7790)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMID_OFFSET UNITYSDK_OFFSET(0x1CEA7820)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWANYREWARDNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1CEA7370)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1CEA7260)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1CEA7160)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SETALLREWARDSSEEN_OFFSET UNITYSDK_OFFSET(0x1CEA6FE0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1CEA7550)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA7570)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_REWARDDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1CEA7620)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0x1CEA5F40)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1CEA6F10)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1CEA6AD0)
#define RPG_CLIENT_ROGUETOURNEXPDATA__GETCURLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA67F0)
#define RPG_CLIENT_ROGUETOURNEXPDATA__TRYINITREWARDROWS_OFFSET UNITYSDK_OFFSET(0x1CEA63A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpData_TypeDefinitionIndex = 69810;

	class RogueTournExpData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* _RewardDataItems_k__BackingField; // 0x10
		::System::UInt32 _RewardDataMainTournID; // 0x18
		::System::UInt32 _CurLevel_k__BackingField; // 0x1C
		::System::UInt32 _CurExp_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::System::UInt32 a1, ::JGJEICAELEB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JGJEICAELEB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCALL_OFFSET))(this, a1, a2);
		}

		::System::Void SyncUpdate(::FHNIFCJJKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNIFCJJKEO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate_1(::IGDHPBBNEIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGDHPBBNEIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_1_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournExpRewardDataItem* GetTournExpRewardData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournExpRewardDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GETTOURNEXPREWARDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GETMAXLEVEL_OFFSET))(this);
		}

		::System::Void SetAllRewardsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SETALLREWARDSSEEN_OFFSET))(this);
		}

		::System::Void ClearSeenRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_CLEARSEENREWARDS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNORMALREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNEWREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShowAnyRewardNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWANYREWARDNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _TryInitRewardRows(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__TRYINITREWARDROWS_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__GETCURLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_CUREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Void set_CurLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_CURLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_ISLEVELMAX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* get_RewardDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_REWARDDATAITEMS_OFFSET))(this);
		}

		::System::Void set_RewardDataItems(::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_REWARDDATAITEMS_OFFSET))(this, a1);
		}

		static ::System::String* get_ExpIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_EXPICONPATH_OFFSET))();
		}

		static ::System::UInt32 get__ExpItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMID_OFFSET))();
		}

		static ::RPG::Client::ItemData* get__ExpItemData()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMDATA_OFFSET))();
		}

	};
}
