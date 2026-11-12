#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMGCEMNNPBM;
class JBHLNAHOJOH;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class CakeRaceFriendRankingData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xD2753C0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD275D50)
#define RPG_CLIENT_CAKERACEFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD273B20)
#define RPG_CLIENT_CAKERACEFRIENDINFO_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0xD275650)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xD2755B0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xD275630)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD274C40)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_RANKINGDATALIST_OFFSET UNITYSDK_OFFSET(0xD2755D0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_SELFRANKINGDATA_OFFSET UNITYSDK_OFFSET(0xD275610)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xD275950)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET__LIKEREWARDTIMEONCECOUNT_OFFSET UNITYSDK_OFFSET(0xD274B30)
#define RPG_CLIENT_CAKERACEFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD273AA0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xD2755C0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEREWARDCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xD275640)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_SELFRANKINGDATA_OFFSET UNITYSDK_OFFSET(0xD275620)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0xD275290)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEDATA_OFFSET UNITYSDK_OFFSET(0xD274D50)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEUIDLIST_OFFSET UNITYSDK_OFFSET(0xD274270)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCRANKDATA_OFFSET UNITYSDK_OFFSET(0xD273D90)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD273C20)
#define RPG_CLIENT_CAKERACEFRIENDINFO__GETFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0xD275A70)
#define RPG_CLIENT_CAKERACEFRIENDINFO__ONFRIENDLISTREFRESHED_OFFSET UNITYSDK_OFFSET(0xD275C80)
#define RPG_CLIENT_CAKERACEFRIENDINFO__SORTFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xD2748D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendInfo_TypeDefinitionIndex = 64465;

	class CakeRaceFriendInfo : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _FriendRankingInfoPromise; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUidSet_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceFriendRankingData*>* _RankingDataList; // 0x20
		::RPG::Client::CakeRaceFriendRankingData* _SelfRankingData_k__BackingField; // 0x28
		::System::UInt32 _LikeRewardCurrentCount_k__BackingField; // 0x30
		::System::UInt32 _RankRspTimeStamp; // 0x34
		// static const ::System::Object _RANK_REQUEST_INTERVAL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::GMGCEMNNPBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncRankData(::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCRANKDATA_OFFSET))(this, a1);
		}

		::System::Void SyncLikeUidList(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEUIDLIST_OFFSET))(this, a1);
		}

		::System::Void SyncLikeData(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEDATA_OFFSET))(this, a1);
		}

		::System::Void SyncAccumulateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCACCUMULATECOIN_OFFSET))(this, a1);
		}

		::System::Void _SortFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__SORTFRIENDRANK_OFFSET))(this);
		}

		::System::Void AddLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_ADDLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LikedUidSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEDUIDSET_OFFSET))(this);
		}

		::System::Void set_LikedUidSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEDUIDSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceFriendRankingData*>* get_RankingDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceFriendRankingData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_RANKINGDATALIST_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFriendRankingData* get_SelfRankingData()
		{
			return ((::RPG::Client::CakeRaceFriendRankingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_SELFRANKINGDATA_OFFSET))(this);
		}

		::System::Void set_SelfRankingData(::RPG::Client::CakeRaceFriendRankingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFriendRankingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_SELFRANKINGDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_LikeRewardCurrentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDCURRENTCOUNT_OFFSET))(this);
		}

		::System::Void set_LikeRewardCurrentCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEREWARDCURRENTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get__LikeRewardTimeOnceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET__LIKEREWARDTIMEONCECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LikeRewardMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDMAXCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FriendRankingInfoPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_FRIENDRANKINGINFOPROMISED_OFFSET))(this);
		}

		::System::Void _OnFriendListRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__ONFRIENDLISTREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _GetFriendRankingInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__GETFRIENDRANKINGINFOLIST_OFFSET))(this);
		}

		::System::Boolean get__IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET__ISEXPIRED_OFFSET))(this);
		}

	};
}
