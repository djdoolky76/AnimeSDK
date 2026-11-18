#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/MoleMole/PatrolMove_MoveState.h"
#include "unitysdk/MoleMole/PatrolMove_RotationType.h"
#include "unitysdk/MoleMole/PatrolMove_StartMode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class ALMMGOFACDF;
class CEKNEPGKKGI;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class EIMHGJELHGN;
class GEIHCPAOKKK;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole { class MonoWayPoint; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PATROLMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x10D4C3B0)
#define MOLEMOLE_PATROLMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0x10D4E540)
#define MOLEMOLE_PATROLMOVE_CHECKARRIVETARGETPOINT_OFFSET UNITYSDK_OFFSET(0x10D4E7F0)
#define MOLEMOLE_PATROLMOVE_CLEARCACHEINPUTDATA_OFFSET UNITYSDK_OFFSET(0x10D4C100)
#define MOLEMOLE_PATROLMOVE_CONSUMEINPUTDATA_OFFSET UNITYSDK_OFFSET(0x10D4D2A0)
#define MOLEMOLE_PATROLMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x10D51910)
#define MOLEMOLE_PATROLMOVE_ENTERSTAYWAIT_OFFSET UNITYSDK_OFFSET(0x10D51320)
#define MOLEMOLE_PATROLMOVE_EXITSTAY_OFFSET UNITYSDK_OFFSET(0x10D50AB0)
#define MOLEMOLE_PATROLMOVE_FINISHMOVE_OFFSET UNITYSDK_OFFSET(0x10D50E50)
#define MOLEMOLE_PATROLMOVE_GETHITDIRECTION_OFFSET UNITYSDK_OFFSET(0x10D4F710)
#define MOLEMOLE_PATROLMOVE_GETWAYPATHBYSPLINE_OFFSET UNITYSDK_OFFSET(0x10D4D4B0)
#define MOLEMOLE_PATROLMOVE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x10D512B0)
#define MOLEMOLE_PATROLMOVE_INITWAYPOINT_OFFSET UNITYSDK_OFFSET(0x10D4C600)
#define MOLEMOLE_PATROLMOVE_ISSTREAMINGGAME_OFFSET UNITYSDK_OFFSET(0x10D4D390)
#define MOLEMOLE_PATROLMOVE_LOGICTICK_OFFSET UNITYSDK_OFFSET(0x10D4C550)
#define MOLEMOLE_PATROLMOVE_NEEDSTEER_OFFSET UNITYSDK_OFFSET(0x10D51CF0)
#define MOLEMOLE_PATROLMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D4B6B0)
#define MOLEMOLE_PATROLMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x10D516F0)
#define MOLEMOLE_PATROLMOVE_ONENTERWAYPOINT_OFFSET UNITYSDK_OFFSET(0x10D4F0F0)
#define MOLEMOLE_PATROLMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x10D4DB00)
#define MOLEMOLE_PATROLMOVE_ONLEAVEWAYPOINT_OFFSET UNITYSDK_OFFSET(0x10D50DE0)
#define MOLEMOLE_PATROLMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10D4C180)
#define MOLEMOLE_PATROLMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D4C4A0)
#define MOLEMOLE_PATROLMOVE_RECORDMOVEINPUT_OFFSET UNITYSDK_OFFSET(0x10D50A10)
#define MOLEMOLE_PATROLMOVE_RECORDSTOPINPUT_OFFSET UNITYSDK_OFFSET(0x10D4E4F0)
#define MOLEMOLE_PATROLMOVE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x10D51E70)
#define MOLEMOLE_PATROLMOVE_SENDWAYPOINTEVT_OFFSET UNITYSDK_OFFSET(0x10D513B0)
#define MOLEMOLE_PATROLMOVE_SQRDISTANCETOSEGMENT_OFFSET UNITYSDK_OFFSET(0x10D51AA0)
#define MOLEMOLE_PATROLMOVE_STAYWAIT_OFFSET UNITYSDK_OFFSET(0x10D4CE70)
#define MOLEMOLE_PATROLMOVE_TICKMOVING_OFFSET UNITYSDK_OFFSET(0x10D4DB60)
#define MOLEMOLE_PATROLMOVE_UPDATEMOVING_OFFSET UNITYSDK_OFFSET(0x10D4CD80)
#define MOLEMOLE_PATROLMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D51EF0)
#define MOLEMOLE_PATROLMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D520D0)
#define MOLEMOLE_PATROLMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x10D52160)
#define MOLEMOLE_PATROLMOVE___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x10D521F0)
#define MOLEMOLE_PATROLMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10D52280)
#define MOLEMOLE_PATROLMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D52310)
#define MOLEMOLE_PATROLMOVE___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x10D523A0)

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_TypeDefinitionIndex = 89319;

	class PatrolMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		// static const ::System::Double Const_ExpectTickDeltaTime; // 0x0
		::System::String* pathName; // 0x58
		::JOOHBDMHGCA* characterMovement; // 0x60
		::DKPJAEANAPO* steerComponent; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _recheckcheckStartPos; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* CollisionCheckWidth; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* PatrolRotationSpeed; // 0x90
		::BehaviorDesigner::Runtime::SharedString* wayPathName; // 0x98
		::ACNLKLCDALA* inputComp; // 0xA0
		::GEIHCPAOKKK* modelComponent; // 0xA8
		::ALMMGOFACDF* timeSlowEffectComponent; // 0xB0
		::BehaviorDesigner::Runtime::SharedFloat* arrivalPrecision; // 0xB8
		::MoleMole::MonoWayPath* wayPath; // 0xC0
		::BehaviorDesigner::Runtime::SharedBool* ApplyAvoidObstacle; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* pathPosList; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* checkStartPos; // 0xD8
		::BehaviorDesigner::Runtime::SharedFloat* HitCheckRadius; // 0xE0
		::LACHKEHCGNO* characterNavmeshAgentComponent; // 0xE8
		::CEKNEPGKKGI* patrolMoveTask; // 0xF0
		::NLNIIPDCABP* animCharacter; // 0xF8
		::MoleMole::Battle::Entity* ownerEntity; // 0x100
		::DIAEPBNFKBO* dataComponent; // 0x108
		::MoleMole::MonoWayPoint* currentTarget; // 0x110
		::EIMHGJELHGN* aiComponent; // 0x118
		::BehaviorDesigner::Runtime::SharedFloat* reachPointStayTime; // 0x120
		::BehaviorDesigner::Runtime::SharedString* NextPatrolNode; // 0x128
		::System::Int32 inputFrameCount; // 0x130
		::UnityEngine::Vector3 faceJoysticDir; // 0x134
		::System::Single rotationSpeed; // 0x140
		::MoleMole::PatrolMove_MoveState moveState; // 0x144
		::System::Double lastTickTime; // 0x148
		::UnityEngine::Vector3 checkBefore; // 0x150
		::MoleMole::PatrolMove_RotationType rotationType; // 0x15C
		::System::Boolean IsDirectionalMove; // 0x160
		::System::Boolean isAnimatorFixedUpdate; // 0x161
		::System::Boolean needApplyInputInUpdate; // 0x162
		::System::Boolean isStreamingGame; // 0x163
		::UnityEngine::LayerMask _collisionLayerMask; // 0x164
		::UnityEngine::Vector3 TargetSourceVec; // 0x168
		::System::Single stayTimer; // 0x174
		::System::Boolean cacheStopMove; // 0x178
		::System::Boolean patrolMuteOwned; // 0x179
		::System::Byte cacheSteerType; // 0x17A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 lastPosition; // 0x17C
		::BehaviorDesigner::Runtime::Tasks::TaskStatus physicsTickMovingResult; // 0x188
		::MoleMole::PatrolMove_StartMode MoveStartType; // 0x18C
		::System::Single colliderRadius; // 0x190
		::UnityEngine::Vector3 lastTargetPosition; // 0x194

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus LogicTick()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_LOGICTICK_OFFSET))(this);
		}

		::System::Void InitWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_INITWAYPOINT_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus TickMoving()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_TICKMOVING_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus UpdateMoving()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_UPDATEMOVING_OFFSET))(this);
		}

		::System::Void ExitStay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_EXITSTAY_OFFSET))(this);
		}

		::System::Void StayWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_STAYWAIT_OFFSET))(this);
		}

		::System::Void EnterStayWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ENTERSTAYWAIT_OFFSET))(this);
		}

		::System::Void FinishMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_FINISHMOVE_OFFSET))(this);
		}

		::System::Void OnEnterWayPoint(::MoleMole::MonoWayPoint* wayPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoWayPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONENTERWAYPOINT_OFFSET))(this, wayPoint);
		}

		::System::Void OnLeaveWayPoint(::MoleMole::MonoWayPoint* wayPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoWayPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONLEAVEWAYPOINT_OFFSET))(this, wayPoint);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculatePathInNavmesh(::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 lastTargetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CALCULATEPATHINNAVMESH_OFFSET))(this, targetPos, lastTargetPos);
		}

		::System::Boolean CheckArriveTargetPoint(::UnityEngine::Vector3 sourcePos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CHECKARRIVETARGETPOINT_OFFSET))(this, sourcePos);
		}

		::System::Single SqrDistanceToSegment(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_SQRDISTANCETOSEGMENT_OFFSET))(this, p0, p1, point);
		}

		::System::Void SendWayPointEvt(::System::String* waypath, ::System::String* waypoint, ::System::Single waitTime, ::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_SENDWAYPOINTEVT_OFFSET))(this, waypath, waypoint, waitTime, isEnter);
		}

		::System::Boolean NeedSteer(::UnityEngine::Vector3 targetDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_NEEDSTEER_OFFSET))(this, targetDir);
		}

		::System::Void RecordMoveInput(::UnityEngine::Vector3 dir, ::System::Single rotationSpeed, ::System::Byte steerType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_RECORDMOVEINPUT_OFFSET))(this, dir, rotationSpeed, steerType);
		}

		::System::Void RecordStopInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_RECORDSTOPINPUT_OFFSET))(this);
		}

		::System::Void ClearCacheInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CLEARCACHEINPUTDATA_OFFSET))(this);
		}

		::System::Void ConsumeInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_CONSUMEINPUTDATA_OFFSET))(this);
		}

		::System::Boolean GetHitDirection(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward, ::System::Boolean check, ::UnityEngine::Vector3& newForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_GETHITDIRECTION_OFFSET))(this, sourceElf, forward, check, newForward);
		}

		::System::Boolean IsStreamingGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_ISSTREAMINGGAME_OFFSET))(this);
		}

		::System::Boolean GetWayPathBySpline(::System::String* pathName, ::MoleMole::MonoWayPath*& wayPathComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::MonoWayPath*&))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_GETWAYPATHBYSPLINE_OFFSET))(this, pathName, wayPathComponent);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + MOLEMOLE_PATROLMOVE___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
