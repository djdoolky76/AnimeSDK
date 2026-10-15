#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNEEDEDGCOI.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDKJEIAABG_CTOR_OFFSET UNITYSDK_OFFSET(0xB963A70)
#define MJDKJEIAABG_GET_FIRSTFINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xB9639B0)
#define MJDKJEIAABG_GET_ISTUTORIALMATCH_OFFSET UNITYSDK_OFFSET(0xB963A10)
#define MJDKJEIAABG_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0xB963930)
#define MJDKJEIAABG_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xB963950)
#define MJDKJEIAABG_GET_PLAYERSCOREDELTATEXT_OFFSET UNITYSDK_OFFSET(0xB963990)
#define MJDKJEIAABG_GET_PLAYERTEAMID_OFFSET UNITYSDK_OFFSET(0xB963A30)
#define MJDKJEIAABG_GET_RACERANKING_OFFSET UNITYSDK_OFFSET(0xB963970)
#define MJDKJEIAABG_GET_RANKFINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xB9639D0)
#define MJDKJEIAABG_GET_RANKSCORELIST_OFFSET UNITYSDK_OFFSET(0xB9639F0)
#define MJDKJEIAABG_GET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xB963A50)
#define MJDKJEIAABG_SET_FIRSTFINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xB9639C0)
#define MJDKJEIAABG_SET_ISTUTORIALMATCH_OFFSET UNITYSDK_OFFSET(0xB963A20)
#define MJDKJEIAABG_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0xB963940)
#define MJDKJEIAABG_SET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xB963960)
#define MJDKJEIAABG_SET_PLAYERSCOREDELTATEXT_OFFSET UNITYSDK_OFFSET(0xB9639A0)
#define MJDKJEIAABG_SET_PLAYERTEAMID_OFFSET UNITYSDK_OFFSET(0xB963A40)
#define MJDKJEIAABG_SET_RACERANKING_OFFSET UNITYSDK_OFFSET(0xB963980)
#define MJDKJEIAABG_SET_RANKFINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xB9639E0)
#define MJDKJEIAABG_SET_RANKSCORELIST_OFFSET UNITYSDK_OFFSET(0xB963A00)
#define MJDKJEIAABG_SET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xB963A60)

inline static constexpr unsigned int MJDKJEIAABG_TypeDefinitionIndex = 81937;

	class MJDKJEIAABG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _RankScoreList_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* _RankFinishTimeSeconds_k__BackingField; // 0x18
		::System::String* _PlayerScoreDeltaText_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::GNEEDEDGCOI>* _RaceRanking_k__BackingField; // 0x28
		::RPG::Client::B51Racing::EB51RacingResultState _ResultState_k__BackingField; // 0x30
		::System::Boolean _IsTutorialMatch_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 _PlayerTeamId_k__BackingField; // 0x38
		::System::Single _FirstFinishTimeSeconds_k__BackingField; // 0x3C
		::System::UInt32 _MatchId_k__BackingField; // 0x40
		::System::Int32 _PlayerRank_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MatchId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_MATCHID_OFFSET))(this);
		}

		::System::Void set_MatchId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_MATCHID_OFFSET))(this, a1);
		}

		::System::Int32 get_PlayerRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_PLAYERRANK_OFFSET))(this);
		}

		::System::Void set_PlayerRank(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_PLAYERRANK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GNEEDEDGCOI>* get_RaceRanking()
		{
			return ((::System::Collections::Generic::List_1<::GNEEDEDGCOI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_RACERANKING_OFFSET))(this);
		}

		::System::Void set_RaceRanking(::System::Collections::Generic::List_1<::GNEEDEDGCOI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>*))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_RACERANKING_OFFSET))(this, a1);
		}

		::System::String* get_PlayerScoreDeltaText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_PLAYERSCOREDELTATEXT_OFFSET))(this);
		}

		::System::Void set_PlayerScoreDeltaText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_PLAYERSCOREDELTATEXT_OFFSET))(this, a1);
		}

		::System::Single get_FirstFinishTimeSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_FIRSTFINISHTIMESECONDS_OFFSET))(this);
		}

		::System::Void set_FirstFinishTimeSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_FIRSTFINISHTIMESECONDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_RankFinishTimeSeconds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_RANKFINISHTIMESECONDS_OFFSET))(this);
		}

		::System::Void set_RankFinishTimeSeconds(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_RANKFINISHTIMESECONDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_RankScoreList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_RANKSCORELIST_OFFSET))(this);
		}

		::System::Void set_RankScoreList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_RANKSCORELIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorialMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_ISTUTORIALMATCH_OFFSET))(this);
		}

		::System::Void set_IsTutorialMatch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_ISTUTORIALMATCH_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerTeamId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_PLAYERTEAMID_OFFSET))(this);
		}

		::System::Void set_PlayerTeamId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_PLAYERTEAMID_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::EB51RacingResultState get_ResultState()
		{
			return ((::RPG::Client::B51Racing::EB51RacingResultState(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDKJEIAABG_GET_RESULTSTATE_OFFSET))(this);
		}

		::System::Void set_ResultState(::RPG::Client::B51Racing::EB51RacingResultState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::EB51RacingResultState))((::PBYTE)hIl2Cpp + MJDKJEIAABG_SET_RESULTSTATE_OFFSET))(this, a1);
		}

	};
