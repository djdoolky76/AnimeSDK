#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIHIPJNFDIA.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BFLPANDDGHG;
class DKGJEDOGPJP;
class ECLJMDNAIPP;
class ENGKPGFGGLM;
class GEIHCPAOKKK;
class KNFJOHOBJPA;
class MNKAABDAOKL;
namespace MoleMole { class SummerTideTreasuresSubSystem_RecodeData; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimeAreaInfo; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimePointInfo; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDASSERTHANDLE_OFFSET UNITYSDK_OFFSET(0x14B3A2D0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDSUMMERTIDEMONSTER_OFFSET UNITYSDK_OFFSET(0x14B3E900)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_APPLYSIMPLEDROPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x14B36D20)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BORNMONSTERBYLST_OFFSET UNITYSDK_OFFSET(0x14B3E370)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BYSUMMERTIDESEAFOODSTAR_OFFSET UNITYSDK_OFFSET(0x14B393A0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_CHECKMONSTERNUM_OFFSET UNITYSDK_OFFSET(0x14B373D0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DESTROYEFFECTSBYREMOVEDCASTER_OFFSET UNITYSDK_OFFSET(0x14B40970)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B334E0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ENABLEHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x14B40D00)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURMAXSCORE_OFFSET UNITYSDK_OFFSET(0x14B37CB0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURTIME_OFFSET UNITYSDK_OFFSET(0x14B374E0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BAG_OFFSET UNITYSDK_OFFSET(0x14B2D430)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BUFFAREAS_OFFSET UNITYSDK_OFFSET(0x14B2D450)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x14B2D480)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_DROPCOUNT_OFFSET UNITYSDK_OFFSET(0x14B2D4B0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_EFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x14B2D490)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_GUARANTEELIST_OFFSET UNITYSDK_OFFSET(0x14B2D4A0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_MONSTERAREAS_OFFSET UNITYSDK_OFFSET(0x14B2D440)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_RUNTIMERESTOCKINGAREAS_OFFSET UNITYSDK_OFFSET(0x14B2D460)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x14B2D470)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_INITTIDETREASUREDATA_OFFSET UNITYSDK_OFFSET(0x14B2FED0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ISOLATEENTITY_OFFSET UNITYSDK_OFFSET(0x14B3F330)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_KILLTHEMALL_OFFSET UNITYSDK_OFFSET(0x14B405F0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_MAKEITEMTOBATTLEBAG_OFFSET UNITYSDK_OFFSET(0x14B38280)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_NOTIFYEFFECTMANAGERENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x14B40290)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x14B2E130)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14B2D910)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONMONSTERENABLE_OFFSET UNITYSDK_OFFSET(0x14B3F1C0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B2E620)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PACKRECODEDATA_OFFSET UNITYSDK_OFFSET(0x14B37440)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PAUSEMONSTER_OFFSET UNITYSDK_OFFSET(0x14B37770)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x14B3B1D0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMDROPSTAR_OFFSET UNITYSDK_OFFSET(0x14B39450)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMITEMTOBATTLEBAG_OFFSET UNITYSDK_OFFSET(0x14B37E90)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REALBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x14B36EB0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHAREAVALID_OFFSET UNITYSDK_OFFSET(0x14B2F700)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHPOINTVALID_OFFSET UNITYSDK_OFFSET(0x14B3F700)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B2D4C0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RESUMEENTITY_OFFSET UNITYSDK_OFFSET(0x14B3FEF0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x14B3DDA0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEKILLMONSTER_OFFSET UNITYSDK_OFFSET(0x14B3FFE0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNBUFF_OFFSET UNITYSDK_OFFSET(0x14B2FE30)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x14B2FD70)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNRESTOCKITEM_OFFSET UNITYSDK_OFFSET(0x14B2FCD0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFEVER_OFFSET UNITYSDK_OFFSET(0x14B37E30)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFORCEBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x14B3A130)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTSHOWITEMREWARD_OFFSET UNITYSDK_OFFSET(0x14B3A0C0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNBUFF_OFFSET UNITYSDK_OFFSET(0x14B3C0B0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x14B3CF20)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNRESTOCKINGITEM_OFFSET UNITYSDK_OFFSET(0x14B3A360)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B2D730)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B41030)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14B41600)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B41690)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B41720)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B417B0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_TypeDefinitionIndex = 69663;

	class SummerTideTreasuresSubSystem
	{
	public:
		// static const ::System::String* SUMMERTIDETREASURE_FEVER_NAME; // 0x0
		// static const ::System::Int32 GUARANTEE_NUM = 0xA; // 0x0
		// static const ::System::String* HIDEKEY; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _guaranteeList; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _runtimeGuaranteeTriggers; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _dicRuntimeRestockingAreas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _dicRuntimeBuffAreas; // 0x28
		::System::Threading::CancellationTokenSource* _rewardShowCancellationTokenSource; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* _aliveEntityHandles; // 0x38
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetRequestHandles; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>*>* _dicRuntimeItemDrops; // 0x48
		::KNFJOHOBJPA* _config; // 0x50
		::System::Threading::CancellationTokenSource* _monsterBornCancellationTokenSource; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _dicRuntimeMonsterPools; // 0x60
		::System::Threading::CancellationTokenSource* _monsterCehckCancellationTokenSource; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _dicRuntimeBuffPools; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::MoleMole::EntityHandle>*>* _cachedEntityHandles; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _dicRuntimeMonsterAreas; // 0x80
		::System::Threading::CancellationTokenSource* _bornCancellationTokenSource; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _dicMonsterMaxDropItemStar; // 0x90
		::MoleMole::SummerTideTreasuresSubSystem_RecodeData* Recode; // 0x98
		::System::Collections::Generic::List_1<::System::Object*>* _curRewardListForShow; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _bag; // 0xA8
		::DKGJEDOGPJP* _effectConfig; // 0xB0
		::ECLJMDNAIPP* _monsterPoolConfig; // 0xB8
		::System::Int32 _curScore; // 0xC0
		::System::Single _curBornRestockItemInterval; // 0xC4
		::System::Single _curBornBuffInterval; // 0xC8
		::System::Single _curFeverTime; // 0xCC
		::System::Single _curBornMonsterInterval; // 0xD0
		::System::Int32 _curDropCount; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_Bag()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BAG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get_MonsterAreas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_MONSTERAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get_BuffAreas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BUFFAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get_RuntimeRestockingAreas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_RUNTIMERESTOCKINGAREAS_OFFSET))(this);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_SCORE_OFFSET))(this);
		}

		::KNFJOHOBJPA* get_Config()
		{
			return ((::KNFJOHOBJPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_CONFIG_OFFSET))(this);
		}

		::DKGJEDOGPJP* get_EffectConfig()
		{
			return ((::DKGJEDOGPJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_EFFECTCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_GuaranteeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_GUARANTEELIST_OFFSET))(this);
		}

		::System::Int32 get_DropCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_DROPCOUNT_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::MNKAABDAOKL* evt)
		{
			return ((::System::Void(*)(::PVOID, ::MNKAABDAOKL*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void InitTideTreasureData(::System::Int32 stageID, ::System::Int32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_INITTIDETREASUREDATA_OFFSET))(this, stageID, effectID);
		}

		::MoleMole::SummerTideTreasuresSubSystem_RecodeData* PackRecodeData()
		{
			return ((::MoleMole::SummerTideTreasuresSubSystem_RecodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PACKRECODEDATA_OFFSET))(this);
		}

		::System::Int32 GetCurTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURTIME_OFFSET))(this);
		}

		::System::Void PauseMonster(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PAUSEMONSTER_OFFSET))(this, isPause);
		}

		::System::Void GetCurMaxScore(::System::Int32 currentScore, ::System::Int32& lastMaxScore, ::System::Int32& maxScore, ::System::Int32& curRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURMAXSCORE_OFFSET))(this, currentScore, lastMaxScore, maxScore, curRank);
		}

		::System::Void StartFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFEVER_OFFSET))(this, feverTime);
		}

		::System::Void RandomItemToBattleBag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMITEMTOBATTLEBAG_OFFSET))(this);
		}

		::System::Boolean BySummerTideSeaFoodStar(::System::UInt32 entityID, ::System::Int32 star)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BYSUMMERTIDESEAFOODSTAR_OFFSET))(this, entityID, star);
		}

		::System::Void RandomDropStar(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* starDict, ::System::Int32& star, ::System::Boolean& fromGuarantee)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMDROPSTAR_OFFSET))(this, starDict, star, fromGuarantee);
		}

		::System::Void MakeItemToBattleBag(::System::Int32 monsterID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_MAKEITEMTOBATTLEBAG_OFFSET))(this, monsterID, entityID);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartBornRestockItem(::System::Int32 num, ::System::Single bornInterval, ::System::Boolean checkDis)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNRESTOCKITEM_OFFSET))(this, num, bornInterval, checkDis);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartBornBuff(::System::Int32 num, ::System::Single bornInterval, ::System::Boolean checkDis)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNBUFF_OFFSET))(this, num, bornInterval, checkDis);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartBornMonster(::System::Int32 num, ::System::Single bornInterval, ::System::Int32 intervalNum, ::System::Boolean checkDis)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNMONSTER_OFFSET))(this, num, bornInterval, intervalNum, checkDis);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartForceBornMonster(::UnityEngine::Vector3 center, ::System::Single radius, ::System::Single bornInterval, ::System::Int32 intervalNum, ::System::Collections::Generic::List_1<::System::Int32>* blackLst, ::System::Collections::Generic::List_1<::System::Int32>* containsLst, ::System::Single ignoreRadius, ::System::Boolean forceBorn)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFORCEBORNMONSTER_OFFSET))(this, center, radius, bornInterval, intervalNum, blackLst, containsLst, ignoreRadius, forceBorn);
		}

		::System::Void AddAssertHandle(::Foundation::AssetRequestHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDASSERTHANDLE_OFFSET))(this, h);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void ApplySimpleDropItemConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_APPLYSIMPLEDROPITEMCONFIG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CheckMonsterNum()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_CHECKMONSTERNUM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartShowItemReward()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTSHOWITEMREWARD_OFFSET))(this);
		}

		::System::Boolean TryBornRestockingItem(::System::Boolean checkDis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNRESTOCKINGITEM_OFFSET))(this, checkDis);
		}

		::System::Boolean TryBornBuff(::System::Boolean checkDis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNBUFF_OFFSET))(this, checkDis);
		}

		::System::Boolean TryBornMonster(::System::Boolean checkDis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNMONSTER_OFFSET))(this, checkDis);
		}

		::System::Boolean RandomBornMonster(::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo* curArea, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo* curPoint, ::System::Collections::Generic::List_1<::System::Int32>* blackLst, ::System::Boolean checkNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMBORNMONSTER_OFFSET))(this, curArea, curPoint, blackLst, checkNum);
		}

		::System::Boolean BornMonsterByLst(::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo* curArea, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo* curPoint, ::System::Collections::Generic::List_1<::System::Int32>* containsLst)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BORNMONSTERBYLST_OFFSET))(this, curArea, curPoint, containsLst);
		}

		::MoleMole::EntityHandle RealBornMonster(::System::Int32 monsterID, ::UnityEngine::Vector3 pos)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REALBORNMONSTER_OFFSET))(this, monsterID, pos);
		}

		::System::Void OnMonsterEnable(::System::Boolean enable, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONMONSTERENABLE_OFFSET))(this, enable, monster);
		}

		::System::Void RefreshAreaValid(::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo* a)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHAREAVALID_OFFSET))(this, a);
		}

		::System::Void RefreshPointValid(::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo* p, ::FIHIPJNFDIA areaType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*, ::FIHIPJNFDIA))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHPOINTVALID_OFFSET))(this, p, areaType);
		}

		::MoleMole::EntityHandle AddSummerTideMonster(::BFLPANDDGHG* fighterData, ::System::Boolean freezeAI, ::System::Boolean isLoadModelAsync)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::BFLPANDDGHG*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDSUMMERTIDEMONSTER_OFFSET))(this, fighterData, freezeAI, isLoadModelAsync);
		}

		::MoleMole::EntityHandle SimulateBornMonster(::System::Int32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotAngle)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEBORNMONSTER_OFFSET))(this, id, position, rotAngle);
		}

		::System::Void SimulateKillMonster(::System::UInt32 deaderID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEKILLMONSTER_OFFSET))(this, deaderID);
		}

		::System::Void KillThemAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_KILLTHEMALL_OFFSET))(this);
		}

		::System::Void NotifyEffectManagerEntityRemoved(::MoleMole::EntityHandle e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_NOTIFYEFFECTMANAGERENTITYREMOVED_OFFSET))(this, e);
		}

		::System::Void DestroyEffectsByRemovedCaster(::System::UInt32 casterEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DESTROYEFFECTSBYREMOVEDCASTER_OFFSET))(this, casterEntityID);
		}

		::System::Void IsolateEntity(::MoleMole::EntityHandle e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ISOLATEENTITY_OFFSET))(this, e);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ResumeEntity(::MoleMole::EntityHandle e, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RESUMEENTITY_OFFSET))(this, e, pos, q);
		}

		::System::Void EnableHullCollider(::GEIHCPAOKKK* modelComponent, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ENABLEHULLCOLLIDER_OFFSET))(this, modelComponent, enable);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
