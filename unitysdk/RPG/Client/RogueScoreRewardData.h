#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class PHINPOJOJGD;
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84FA20)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C84FA30)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET UNITYSDK_OFFSET(0x1C84FCD0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1C850380)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C850430)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C850890)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C8508B0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0x1C850820)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x1C850750)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x1C8507A0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0x1C850800)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET UNITYSDK_OFFSET(0x1C8507E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1C8507C0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0x1C850840)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C8502D0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C8500E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET UNITYSDK_OFFSET(0x1C850210)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET UNITYSDK_OFFSET(0x1C850480)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C84FBE0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C84FAE0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C8508A0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C8508C0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0x1C850830)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0x1C8507B0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0x1C850810)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET UNITYSDK_OFFSET(0x1C8507F0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1C8507D0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x1C850500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData_TypeDefinitionIndex = 69413;

	class RogueScoreRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenScoreRewardRowIDs; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* _CacheScoreRewardRows; // 0x18
		::System::UInt32 _PreScore_k__BackingField; // 0x20
		::System::Boolean _HasTakenInitialScore_k__BackingField; // 0x24
		::System::Nullable_1<::System::Boolean> _HasRewaradCanTake; // 0x25
		::System::Boolean _PoolRefreshed_k__BackingField; // 0x27
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x28
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x30
		::System::UInt32 _Score_k__BackingField; // 0x38
		::System::UInt32 _PoolID_k__BackingField; // 0x3C
		// static const ::System::Object _StriperRemainTimeOffset; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::PHINPOJOJGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHINPOJOJGD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void RefreshHasRewardCanTake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* GetCurScoreRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET))(this);
		}

		::System::Boolean IsRewardRowTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsRewardRowCanTake(::RPG::GameCore::RogueScoreRewardRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt64 GetStriperTipTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean NeedShowStriperTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET))(this);
		}

		::System::Boolean _IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET))(this);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PreScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET))(this);
		}

		::System::Void set_PreScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_PoolRefreshed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET))(this);
		}

		::System::Void set_PoolRefreshed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTakenInitialScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET))(this);
		}

		::System::Void set_HasTakenInitialScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_WillScoreBeMerged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

	};
}
