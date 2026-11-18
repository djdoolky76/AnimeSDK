#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/MoleMole/WanderMove_MoveState.h"
#include "unitysdk/MoleMole/WanderMove_SideType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class ALMMGOFACDF;
class BEMJBLHDDOP;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class EIMHGJELHGN;
class GEIHCPAOKKK;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigWanderMove; }
namespace MoleMole::Config { class ConfigWanderMove_ConfigWanderMoveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_WANDERMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x12871B30)
#define MOLEMOLE_WANDERMOVE_BUILDBUCKETPOOL_OFFSET UNITYSDK_OFFSET(0x12874130)
#define MOLEMOLE_WANDERMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0x12874FC0)
#define MOLEMOLE_WANDERMOVE_CHECKARRIVETARGETPOINT_OFFSET UNITYSDK_OFFSET(0x12875200)
#define MOLEMOLE_WANDERMOVE_CHECKNAVMESHCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x12874AC0)
#define MOLEMOLE_WANDERMOVE_CHECKSAMELEVELAREA_OFFSET UNITYSDK_OFFSET(0x128746F0)
#define MOLEMOLE_WANDERMOVE_CLEARCACHEINPUTDATA_OFFSET UNITYSDK_OFFSET(0x12870290)
#define MOLEMOLE_WANDERMOVE_CONSUMEINPUTDATA_OFFSET UNITYSDK_OFFSET(0x12872BC0)
#define MOLEMOLE_WANDERMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x12873B90)
#define MOLEMOLE_WANDERMOVE_DRAWAREADEBUG_OFFSET UNITYSDK_OFFSET(0x12874F20)
#define MOLEMOLE_WANDERMOVE_DRAWMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x12874F80)
#define MOLEMOLE_WANDERMOVE_DRAWSELECTDEBUG_OFFSET UNITYSDK_OFFSET(0x12874670)
#define MOLEMOLE_WANDERMOVE_ENTERSTAYWAIT_OFFSET UNITYSDK_OFFSET(0x12874E90)
#define MOLEMOLE_WANDERMOVE_EXITSTAY_OFFSET UNITYSDK_OFFSET(0x12875CB0)
#define MOLEMOLE_WANDERMOVE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x12875A60)
#define MOLEMOLE_WANDERMOVE_GETCONFIGENTRY_OFFSET UNITYSDK_OFFSET(0x12873D60)
#define MOLEMOLE_WANDERMOVE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x12873F90)
#define MOLEMOLE_WANDERMOVE_GETINT_OFFSET UNITYSDK_OFFSET(0x128740A0)
#define MOLEMOLE_WANDERMOVE_GETSIDEBYANGLE_OFFSET UNITYSDK_OFFSET(0x12874530)
#define MOLEMOLE_WANDERMOVE_GETSPAWNCENTER_OFFSET UNITYSDK_OFFSET(0x12871900)
#define MOLEMOLE_WANDERMOVE_GETSTUCKOFFSET_OFFSET UNITYSDK_OFFSET(0x12875BA0)
#define MOLEMOLE_WANDERMOVE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x12875C40)
#define MOLEMOLE_WANDERMOVE_ISINLEGALAREA_OFFSET UNITYSDK_OFFSET(0x128745D0)
#define MOLEMOLE_WANDERMOVE_ISSTREAMINGGAME_OFFSET UNITYSDK_OFFSET(0x12871A10)
#define MOLEMOLE_WANDERMOVE_LOGICTICK_OFFSET UNITYSDK_OFFSET(0x12871D90)
#define MOLEMOLE_WANDERMOVE_ONARRIVETARGET_OFFSET UNITYSDK_OFFSET(0x12875970)
#define MOLEMOLE_WANDERMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1286FA40)
#define MOLEMOLE_WANDERMOVE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x12873D20)
#define MOLEMOLE_WANDERMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x12873AC0)
#define MOLEMOLE_WANDERMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x128733B0)
#define MOLEMOLE_WANDERMOVE_ONMOVEFAILSAFETRIGGERED_OFFSET UNITYSDK_OFFSET(0x128730A0)
#define MOLEMOLE_WANDERMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12870300)
#define MOLEMOLE_WANDERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12871C40)
#define MOLEMOLE_WANDERMOVE_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x128741E0)
#define MOLEMOLE_WANDERMOVE_PICKBUCKETINDEX_OFFSET UNITYSDK_OFFSET(0x12874230)
#define MOLEMOLE_WANDERMOVE_RECORDMOVEINPUT_OFFSET UNITYSDK_OFFSET(0x128759C0)
#define MOLEMOLE_WANDERMOVE_RECORDSTOPINPUT_OFFSET UNITYSDK_OFFSET(0x12875B50)
#define MOLEMOLE_WANDERMOVE_RESETMOVEFAILSAFE_OFFSET UNITYSDK_OFFSET(0x12871990)
#define MOLEMOLE_WANDERMOVE_RESOLVENEGATIVETOCONFIG_OFFSET UNITYSDK_OFFSET(0x12874020)
#define MOLEMOLE_WANDERMOVE_RESOLVEPARAMS_OFFSET UNITYSDK_OFFSET(0x128706D0)
#define MOLEMOLE_WANDERMOVE_SELECTPATROLPOINT_OFFSET UNITYSDK_OFFSET(0x12871EB0)
#define MOLEMOLE_WANDERMOVE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x12875F70)
#define MOLEMOLE_WANDERMOVE_SQRDISTANCETOSEGMENT_OFFSET UNITYSDK_OFFSET(0x12875D20)
#define MOLEMOLE_WANDERMOVE_STAYWAIT_OFFSET UNITYSDK_OFFSET(0x12873110)
#define MOLEMOLE_WANDERMOVE_TICKMOVEFAILSAFE_OFFSET UNITYSDK_OFFSET(0x12872CB0)
#define MOLEMOLE_WANDERMOVE_TICKMOVING_OFFSET UNITYSDK_OFFSET(0x12873410)
#define MOLEMOLE_WANDERMOVE_UPDATEMOVING_OFFSET UNITYSDK_OFFSET(0x12872AE0)
#define MOLEMOLE_WANDERMOVE_UPDATESIDEACCUMULATOR_OFFSET UNITYSDK_OFFSET(0x12874E20)
#define MOLEMOLE_WANDERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12875FF0)
#define MOLEMOLE_WANDERMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12876220)
#define MOLEMOLE_WANDERMOVE___BASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x128762B0)
#define MOLEMOLE_WANDERMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x12876340)
#define MOLEMOLE_WANDERMOVE___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x128763D0)
#define MOLEMOLE_WANDERMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12876460)
#define MOLEMOLE_WANDERMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x128764F0)
#define MOLEMOLE_WANDERMOVE___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x12876580)

namespace MoleMole
{
	inline static constexpr unsigned int WanderMove_TypeDefinitionIndex = 63426;

	class WanderMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		// static const ::System::Single SelectFailRetryTime; // 0x0
		// static const ::System::Int32 FailsafeLogThreshold = 0x3; // 0x0
		// static const ::System::Double Const_ExpectTickDeltaTime; // 0x0
		// static const ::System::Single WanderDebugDrawDuration; // 0x0
		// static const ::System::Single WanderDebugKeepDuration; // 0x0
		// static const ::System::Single WanderDebugArrowLength; // 0x0
		::BehaviorDesigner::Runtime::SharedInt* ConfigID; // 0x58
		::JOOHBDMHGCA* characterMovement; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* SideSwitchCount; // 0x68
		::NLNIIPDCABP* animCharacter; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* bucketPool; // 0x78
		::GEIHCPAOKKK* modelComponent; // 0x80
		::BehaviorDesigner::Runtime::SharedInt* MoveType; // 0x88
		::MoleMole::Config::ConfigWanderMove_ConfigWanderMoveEntry* _cachedConfigEntry; // 0x90
		::DKPJAEANAPO* steerComponent; // 0x98
		::EIMHGJELHGN* aiComponent; // 0xA0
		::BEMJBLHDDOP* wanderMoveTask; // 0xA8
		::BehaviorDesigner::Runtime::SharedBool* WanderMoveSuccess; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* pathPosList; // 0xB8
		::LACHKEHCGNO* characterNavmeshAgentComponent; // 0xC0
		::ACNLKLCDALA* inputComp; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0xD0
		::ALMMGOFACDF* timeSlowEffectComponent; // 0xD8
		::BehaviorDesigner::Runtime::SharedFloat* PatrolRadius; // 0xE0
		::BehaviorDesigner::Runtime::SharedFloat* ArrivalDistance; // 0xE8
		::BehaviorDesigner::Runtime::SharedFloat* MaxPatrolDistance; // 0xF0
		::BehaviorDesigner::Runtime::SharedFloat* MinPatrolDistance; // 0xF8
		::MoleMole::Config::ConfigWanderMove* _cachedConfigSO; // 0x100
		::BehaviorDesigner::Runtime::SharedFloat* MaxRestTime; // 0x108
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x110
		::BehaviorDesigner::Runtime::SharedFloat* SectorAngle; // 0x118
		::BehaviorDesigner::Runtime::SharedFloat* MinRestTime; // 0x120
		::MoleMole::Battle::Entity* ownerEntity; // 0x128
		::BehaviorDesigner::Runtime::SharedBool* Enable; // 0x130
		::BehaviorDesigner::Runtime::SharedFloat* RotateSpeed; // 0x138
		::DIAEPBNFKBO* dataComponent; // 0x140
		::BehaviorDesigner::Runtime::SharedInt* MaxTryCount; // 0x148
		::UnityEngine::Vector3 lastTargetPosition; // 0x150
		::System::Single _minRestTime; // 0x15C
		::System::Single _stuckMoveThreshold; // 0x160
		::System::Single _rotateSpeedOverride; // 0x164
		::System::Int32 _cachedConfigID; // 0x168
		::System::Int32 _maxTryCount; // 0x16C
		::System::Single stayTimer; // 0x170
		::System::Single _legalSelectRadius; // 0x174
		::System::Int32 _lastUpdateMoveType; // 0x178
		::System::Int32 _sideSwitchCount; // 0x17C
		::MoleMole::WanderMove_SideType lastSide; // 0x180
		::System::Int32 _moveType; // 0x184
		::System::Int32 sameSideCount; // 0x188
		::UnityEngine::Vector3 currentTargetPos; // 0x18C
		::UnityEngine::Vector3 lastPosition; // 0x198
		::System::Single moveElapsedTimer; // 0x1A4
		::UnityEngine::Vector3 selectedStartPos; // 0x1A8
		::System::Boolean needApplyInputInUpdate; // 0x1B4
		::System::Boolean cacheStopMove; // 0x1B5
		::System::Byte cacheSteerType; // 0x1B6
		::System::Boolean patrolMuteOwned; // 0x1B7
		::System::Single stuckTimer; // 0x1B8
		::System::Single _minPatrolDistance; // 0x1BC
		::BehaviorDesigner::Runtime::Tasks::TaskStatus physicsTickMovingResult; // 0x1C0
		::UnityEngine::Vector3 centerPos; // 0x1C4
		::System::Single _maxPatrolDistance; // 0x1D0
		::System::Boolean nodeEnabled; // 0x1D4
		::System::Boolean isStreamingGame; // 0x1D5
		::System::Boolean isAnimatorFixedUpdate; // 0x1D6
		::System::Byte _padding0[0x1];
		::System::Single _patrolRadius; // 0x1D8
		::System::Single _sectorAngle; // 0x1DC
		::UnityEngine::Vector3 faceJoysticDir; // 0x1E0
		::System::Single _stuckCheckTime; // 0x1EC
		::System::Int32 failsafeTriggerCount; // 0x1F0
		::System::Single _maxRestTime; // 0x1F4
		::System::Single _moveTimeout; // 0x1F8
		::System::Single _arrivalDistance; // 0x1FC
		::UnityEngine::Vector3 stuckAnchorPos; // 0x200
		::System::Single rotationSpeed; // 0x20C
		::System::Single curStayTime; // 0x210
		::MoleMole::WanderMove_MoveState moveState; // 0x214

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus LogicTick()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_LOGICTICK_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONEND_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void ResolveParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_RESOLVEPARAMS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigWanderMove_ConfigWanderMoveEntry* GetConfigEntry()
		{
			return ((::MoleMole::Config::ConfigWanderMove_ConfigWanderMoveEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GETCONFIGENTRY_OFFSET))(this);
		}

		static ::System::Single GetFloat(::BehaviorDesigner::Runtime::SharedFloat* v)
		{
			return ((::System::Single(*)(::BehaviorDesigner::Runtime::SharedFloat*))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GETFLOAT_OFFSET))(v);
		}

		static ::System::Int32 GetInt(::BehaviorDesigner::Runtime::SharedInt* v)
		{
			return ((::System::Int32(*)(::BehaviorDesigner::Runtime::SharedInt*))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GETINT_OFFSET))(v);
		}

		static ::System::Single ResolveNegativeToConfig(::System::Single nodeValue, ::System::Single configValue)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_RESOLVENEGATIVETOCONFIG_OFFSET))(nodeValue, configValue);
		}

		::UnityEngine::Vector3 GetSpawnCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GETSPAWNCENTER_OFFSET))(this);
		}

		::System::Void SelectPatrolPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_SELECTPATROLPOINT_OFFSET))(this);
		}

		::System::Void BuildBucketPool(::System::Int32 bucketCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_BUILDBUCKETPOOL_OFFSET))(this, bucketCount);
		}

		::System::Int32 PickBucketIndex(::MoleMole::WanderMove_SideType forcedSide)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::WanderMove_SideType))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_PICKBUCKETINDEX_OFFSET))(this, forcedSide);
		}

		static ::MoleMole::WanderMove_SideType GetSideByAngle(::System::Single angle)
		{
			return ((::MoleMole::WanderMove_SideType(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GETSIDEBYANGLE_OFFSET))(angle);
		}

		static ::MoleMole::WanderMove_SideType Opposite(::MoleMole::WanderMove_SideType side)
		{
			return ((::MoleMole::WanderMove_SideType(*)(::MoleMole::WanderMove_SideType))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_OPPOSITE_OFFSET))(side);
		}

		::System::Void UpdateSideAccumulator(::MoleMole::WanderMove_SideType side)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::WanderMove_SideType))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_UPDATESIDEACCUMULATOR_OFFSET))(this, side);
		}

		::System::Boolean IsInLegalArea(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ISINLEGALAREA_OFFSET))(this, point);
		}

		::System::Boolean CheckSameLevelArea(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_CHECKSAMELEVELAREA_OFFSET))(this, point);
		}

		::System::Boolean IsStreamingGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ISSTREAMINGGAME_OFFSET))(this);
		}

		::System::Boolean CheckNavmeshConnectivity(::UnityEngine::Vector3 fromPos, ::UnityEngine::Vector3 toPos, ::System::Single agentRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_CHECKNAVMESHCONNECTIVITY_OFFSET))(this, fromPos, toPos, agentRadius);
		}

		::System::Void DrawSelectDebug(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 from, ::System::Boolean legal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_DRAWSELECTDEBUG_OFFSET))(this, point, from, legal);
		}

		::System::Void DrawAreaDebug(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_DRAWAREADEBUG_OFFSET))(this, duration);
		}

		::System::Void DrawMovingDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_DRAWMOVINGDEBUG_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus UpdateMoving()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_UPDATEMOVING_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus TickMoving()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_TICKMOVING_OFFSET))(this);
		}

		::System::Void OnArriveTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONARRIVETARGET_OFFSET))(this);
		}

		::System::Void FinishRound(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_FINISHROUND_OFFSET))(this, success);
		}

		::System::Void ResetMoveFailsafe(::UnityEngine::Vector3 curPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_RESETMOVEFAILSAFE_OFFSET))(this, curPos);
		}

		::UnityEngine::Vector3 GetStuckOffset(::UnityEngine::Vector3 curPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GETSTUCKOFFSET_OFFSET))(this, curPos);
		}

		::System::Boolean TickMoveFailsafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_TICKMOVEFAILSAFE_OFFSET))(this);
		}

		::System::Void OnMoveFailsafeTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ONMOVEFAILSAFETRIGGERED_OFFSET))(this);
		}

		::System::Void EnterStayWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ENTERSTAYWAIT_OFFSET))(this);
		}

		::System::Void StayWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_STAYWAIT_OFFSET))(this);
		}

		::System::Void ExitStay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_EXITSTAY_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculatePathInNavmesh(::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 lastTargetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_CALCULATEPATHINNAVMESH_OFFSET))(this, targetPos, lastTargetPos);
		}

		::System::Boolean CheckArriveTargetPoint(::UnityEngine::Vector3 sourcePos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_CHECKARRIVETARGETPOINT_OFFSET))(this, sourcePos);
		}

		::System::Single SqrDistanceToSegment(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_SQRDISTANCETOSEGMENT_OFFSET))(this, p0, p1, point);
		}

		::System::Void RecordMoveInput(::UnityEngine::Vector3 dir, ::System::Single rotationSpeed, ::System::Byte steerType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_RECORDMOVEINPUT_OFFSET))(this, dir, rotationSpeed, steerType);
		}

		::System::Void RecordStopInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_RECORDSTOPINPUT_OFFSET))(this);
		}

		::System::Void ClearCacheInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_CLEARCACHEINPUTDATA_OFFSET))(this);
		}

		::System::Void ConsumeInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_CONSUMEINPUTDATA_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + MOLEMOLE_WANDERMOVE___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
