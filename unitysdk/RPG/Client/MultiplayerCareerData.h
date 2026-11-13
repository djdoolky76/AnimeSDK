#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class DLCJPINDIAC;
class PNEGDOHOLDN;
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x1A1909A0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET UNITYSDK_OFFSET(0x1A191B40)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A191A90)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A190960)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0x1A190A60)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0x1A191B90)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A191BD0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1A190C70)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET UNITYSDK_OFFSET(0x1A190E70)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x1A190A00)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET UNITYSDK_OFFSET(0x1A1910C0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A191000)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0x1A1918B0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET UNITYSDK_OFFSET(0x1A191850)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET UNITYSDK_OFFSET(0x1A191EA0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET UNITYSDK_OFFSET(0x1A190D90)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET UNITYSDK_OFFSET(0x1A190EF0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET UNITYSDK_OFFSET(0x1A191C90)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData_TypeDefinitionIndex = 68243;

	class MultiplayerCareerData : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::MatchPlayRecord*>* OnMatchPlayDataUpdated; // 0x10
		::RPG::Client::MatchPlayRecord* _MatchPlayData; // 0x18
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* _FriendRankingInfoPromise; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* _RankInfoList; // 0x28
		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* _MatchPlayDataPromise; // 0x30
		::RPG::Client::FriendRankingInfo* _SelfRankingInfo; // 0x38
		::System::UInt32 _RankRspTimeStamp; // 0x40
		::FJPMJPEKLJL _GameMode; // 0x44
		::System::Boolean _needsSort; // 0x48
		// static const ::System::Object _RANK_REQUEST_INTERVAL; // 0x0
		::System::Void _ctor(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void add_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* FriendRankingInfoPromised()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* MatchPlayDataRefreshed()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET))(this);
		}

		::System::Void UpdateMatchPlayData(::PNEGDOHOLDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNEGDOHOLDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateFriendRankingList(::System::Collections::Generic::IEnumerable_1<::DLCJPINDIAC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::DLCJPINDIAC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET))(this, a1);
		}

		::System::Void UpdateSelfRankingInfo(::DLCJPINDIAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCJPINDIAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET))(this);
		}

		::System::Void ClearMatchPlayDataUpdatedListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET))(this);
		}

		::RPG::Client::FriendRankingInfo* GetSelfRankingInfo()
		{
			return ((::RPG::Client::FriendRankingInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* GetSortedFriendRankingInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET))(this);
		}

		::System::Void _SendGetFriendRankingInfoReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET))(this);
		}

		::System::Void _SendGetMatchPlayDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET))(this);
		}

		::System::Void _EnsureSorted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET))(this);
		}

		::System::Void _SortAndSetRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET))(this);
		}

		::System::Void _OnGetFriendRankingInfoRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean get__IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET))(this);
		}

	};
}
