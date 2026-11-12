#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDLALFAMKO;
class LDJFPALJFEK;
class OJLCDCKIMON;
class PBNLNHAAAKF;
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xE2DFA30)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE2DFC90)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2DE2D0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xE2DFC40)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xE2DFC20)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xE2DE1C0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xE2DFC30)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET UNITYSDK_OFFSET(0xE2DEA40)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xE2DE430)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET UNITYSDK_OFFSET(0xE2DEF00)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET UNITYSDK_OFFSET(0xE2DF880)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET UNITYSDK_OFFSET(0xE2DF420)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xE2DE290)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo_TypeDefinitionIndex = 68193;

	class MonopolyFriendInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _TotalPlayerDisplayDataList; // 0x10
		::RPG::Client::MonopolyFriendRankingDisplayDataItem* SelfDisplayData; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUIDSet_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _DailyPlayerDisplayDataList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _PlayerDisplayDataList; // 0x30
		::System::Boolean IsDaily; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFriendRank(::PBNLNHAAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET))(this, a1);
		}

		::System::Void SyncLikeNotify(::OJLCDCKIMON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLCDCKIMON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET))(this, a1);
		}

		::System::Void SyncSocialInfo(::HDDLALFAMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDLALFAMKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET))(this, a1);
		}

		::System::Void SyncLikeRsp(::LDJFPALJFEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJFPALJFEK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET))(this, a1);
		}

		::System::Void AddLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Void SortFriendRankData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LikedUIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET))(this);
		}

		::System::Void set_LikedUIDSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* get_AllPlayerDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET))(this);
		}

	};
}
