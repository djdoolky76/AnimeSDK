#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/BaseMoveType.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"
#include "unitysdk/MoleMole/BaseMove_AroundAxis.h"
#include "unitysdk/MoleMole/BaseMove_AroundUpdateMode.h"
#include "unitysdk/MoleMole/BaseMove_EAroundMoveMode.h"
#include "unitysdk/MoleMole/BaseMove_MoveDirectionMode.h"
#include "unitysdk/MoleMole/BaseMove_TypeOfAngleCheck.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ACNLKLCDALA;
class BFALGJKKGCH;
class CAPAFILOMGC;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class EIMHGJELHGN;
class GEIHCPAOKKK;
class HAFLGNENJDI;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NBNJNBOMFOJ;
class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x11E5BCC0)
#define MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0x11E5F1D0)
#define MOLEMOLE_BASEMOVE_CANMOVE_OFFSET UNITYSDK_OFFSET(0x11E5C2B0)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET UNITYSDK_OFFSET(0x11E5F2F0)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET UNITYSDK_OFFSET(0x11E65700)
#define MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x11E62180)
#define MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET UNITYSDK_OFFSET(0x11E63C70)
#define MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET UNITYSDK_OFFSET(0x11E64BB0)
#define MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET UNITYSDK_OFFSET(0x11E64E30)
#define MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x11E621F0)
#define MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET UNITYSDK_OFFSET(0x11E62C20)
#define MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET UNITYSDK_OFFSET(0x11E64030)
#define MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET UNITYSDK_OFFSET(0x11E64A10)
#define MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x11E64F60)
#define MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x11E64220)
#define MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x11E60650)
#define MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET UNITYSDK_OFFSET(0x11E5F430)
#define MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x11E64AB0)
#define MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET UNITYSDK_OFFSET(0x11E62410)
#define MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET UNITYSDK_OFFSET(0x11E62830)
#define MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x11E622E0)
#define MOLEMOLE_BASEMOVE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x11E62390)
#define MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET UNITYSDK_OFFSET(0x11E5F020)
#define MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11E59E50)
#define MOLEMOLE_BASEMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x11E62060)
#define MOLEMOLE_BASEMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11E5A980)
#define MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E5C490)
#define MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET UNITYSDK_OFFSET(0x11E5B200)
#define MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x11E5BA70)
#define MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x11E5F4B0)
#define MOLEMOLE_BASEMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E65D10)
#define MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x11E5B740)
#define MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x11E619B0)
#define MOLEMOLE_BASEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E66320)
#define MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_143_0_OFFSET UNITYSDK_OFFSET(0x11E65670)
#define MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11E66530)
#define MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x11E665C0)
#define MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11E66650)
#define MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E666E0)
#define MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E66770)

namespace MoleMole
{
	inline static constexpr unsigned int BaseMove_TypeDefinitionIndex = 68890;

	class BaseMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMax; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* AroundFaceToAttackTarget; // 0x60
		::MoleMole::SkillCharacterScriptConfig* config; // 0x68
		::BFALGJKKGCH* baseMoveTask; // 0x70
		::NLNIIPDCABP* animCharacter; // 0x78
		::EIMHGJELHGN* aiComponent; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* SkipPointDistance; // 0x88
		::BehaviorDesigner::Runtime::SharedBool* bSkipNearPoint; // 0x90
		::BehaviorDesigner::Runtime::SharedFloat* moveTime; // 0x98
		::ACNLKLCDALA* inputComp; // 0xA0
		::System::String* AsideVerticalCurveKey; // 0xA8
		::BehaviorDesigner::Runtime::SharedString* targetAttachPoint; // 0xB0
		::NBNJNBOMFOJ* levelaiComponent; // 0xB8
		::BehaviorDesigner::Runtime::SharedVariable* steerVar; // 0xC0
		::BehaviorDesigner::Runtime::SharedVector3* OverrideBornPos; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0xD0
		::System::String* AsideHorizontalCurveKey; // 0xD8
		::CAPAFILOMGC* attackTargetComponent; // 0xE0
		::DIAEPBNFKBO* characterData; // 0xE8
		::BehaviorDesigner::Runtime::SharedVariable* steerLengthVar; // 0xF0
		::BehaviorDesigner::Runtime::SharedBool* ApplyAvoidObstacle; // 0xF8
		::HAFLGNENJDI* characterBattle; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _checkStartPos; // 0x108
		::MoleMole::AnimatorBlendData* _blendData; // 0x110
		::BehaviorDesigner::Runtime::SharedFloat* minDistanceNegtive; // 0x118
		::BehaviorDesigner::Runtime::SharedFloat* CollisionCheckWidth; // 0x120
		::BehaviorDesigner::Runtime::SharedString* targetFloorPoint; // 0x128
		::System::String* SavePointTargetCustomKey; // 0x130
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMax; // 0x138
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMin; // 0x140
		::GEIHCPAOKKK* characterModel; // 0x148
		::BehaviorDesigner::Runtime::SharedVariable* canIdleVar; // 0x150
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMin; // 0x158
		::System::String* TargetAngleCurve; // 0x160
		::BehaviorDesigner::Runtime::SharedFloat* AroundRange; // 0x168
		::UnityEngine::Transform* _selfForwardPoint; // 0x170
		::LACHKEHCGNO* navmeshAgentComponent; // 0x178
		::JOOHBDMHGCA* characterMovement; // 0x180
		::BehaviorDesigner::Runtime::SharedFloat* minDistancePositive; // 0x188
		::BehaviorDesigner::Runtime::SharedFloat* HitCheckRadius; // 0x190
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x198
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _recheckcheckStartPos; // 0x1A0
		::BehaviorDesigner::Runtime::SharedFloat* SteerMinThinkTime; // 0x1A8
		::MoleMole::Battle::Entity* ownerEntity; // 0x1B0
		::BehaviorDesigner::Runtime::SharedString* selfForwardAttachPoint; // 0x1B8
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0x1C0
		::BehaviorDesigner::Runtime::SharedString* targetGroupPoint; // 0x1C8
		::BehaviorDesigner::Runtime::SharedFloat* SteerMaxThinkTime; // 0x1D0
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0x1D8
		::BehaviorDesigner::Runtime::SharedString* TargetSavePointName; // 0x1E0
		::DKPJAEANAPO* steerComponent; // 0x1E8
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0x1F0
		::UnityEngine::Vector3 AroundTargetPos; // 0x1F8
		::System::Single AroundDirRefreshInterval; // 0x204
		::System::Single AroundDirRefreshMaxDistance; // 0x208
		::System::Single randomCurveMirror; // 0x20C
		::System::Single _targetDistance; // 0x210
		::MoleMole::BaseMove_TypeOfAngleCheck TypeOfChecking; // 0x214
		::System::Single angleOffsetB; // 0x218
		::System::Single _moveTimer; // 0x21C
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMaxRst; // 0x220
		::UnityEngine::Vector3 TargetSourceVec; // 0x224
		::System::Single AngleMin; // 0x230
		::BehaviorDesigner::Runtime::Tasks::TaskStatus ExitAngleRst; // 0x234
		::MoleMole::Config::BaseMoveType MoveType; // 0x238
		::System::Single AngleMax; // 0x23C
		::System::Single _lerpAngle; // 0x240
		::MoleMole::BaseMove_MoveDirectionMode directionMode; // 0x244
		::MoleMole::BaseMove_AroundUpdateMode AroundMode; // 0x248
		::System::Single _selectTargetDir; // 0x24C
		::System::Int32 _slotIndex; // 0x250
		::UnityEngine::Vector3 lastVect; // 0x254
		::UnityEngine::RaycastHit _hitInfo; // 0x260
		::System::Single _idleThinkTimer; // 0x294
		::System::Boolean _isHitted; // 0x298
		::System::Boolean IsOverrideBornPos; // 0x299
		::System::Boolean TestSteerMode; // 0x29A
		::System::Boolean applyMoveTime; // 0x29B
		::System::Single _fixMinDistance; // 0x29C
		::System::Single angleOffsetA; // 0x2A0
		::System::Int32 _moveType; // 0x2A4
		::MoleMole::BaseMove_AroundAxis Axis; // 0x2A8
		::UnityEngine::LayerMask _collisionLayerMask; // 0x2AC
		::System::Single _curTargetAngle; // 0x2B0
		::System::Single RandomAroundRange; // 0x2B4
		::UnityEngine::Vector3 _slotTargetPos; // 0x2B8
		::System::Single _followCheckTimer; // 0x2C4
		::System::Single _asideTimer; // 0x2C8
		::System::Boolean IsSymmetry; // 0x2CC
		::System::Boolean IsTargetAngleCurveMirror; // 0x2CD
		::System::Boolean ApplyAngleExitCheck; // 0x2CE
		::System::Byte _padding0[0x1];
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMoveTimeRst; // 0x2D0
		::MoleMole::BaseMove_AIMoveTargetState _moveState; // 0x2D4
		::System::Single _currentLerp; // 0x2D8
		::System::Single TestSteerAngle; // 0x2DC
		::System::Single _freeTimer; // 0x2E0
		::System::Boolean _targetDirLocked; // 0x2E4
		::System::Boolean TestSteerLog; // 0x2E5
		::System::Boolean _isBlendMoving; // 0x2E6
		::System::Boolean applyMinDistanceRange; // 0x2E7
		::MoleMole::BaseMove_EAroundMoveMode AroundMoveMode; // 0x2E8
		::UnityEngine::Vector3 _lastForce; // 0x2EC
		::MoleMole::AIMoveTargetType type; // 0x2F8
		::System::Single _currentLerpK; // 0x2FC
		::UnityEngine::Vector3 _checkBefore; // 0x300
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMinRst; // 0x30C
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x310
		::System::Single _lastAngle; // 0x314
		::System::Single RandomAroundAngle; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONSTART_OFFSET))(this);
		}

		::System::Boolean CanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CANMOVE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET))(this);
		}

		::MGHNAPKHBOG GetTarget()
		{
			return ((::MGHNAPKHBOG(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSelfForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSelfRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GetAITargetPos()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET))(this);
		}

		::System::Boolean IsFreeStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET))(this);
		}

		::System::Void SetBlendData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET))(this);
		}

		::System::Boolean TargetDirectionPostProcess(::UnityEngine::Vector3& targetDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET))(this, targetDir);
		}

		::System::Void GetNearestDirection(::UnityEngine::Vector3 source, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* dirs, ::System::Int32& matchValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET))(this, source, dirs, matchValue);
		}

		::UnityEngine::Vector3 CorrectDirection(::UnityEngine::Vector3 source, ::System::Boolean& res)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET))(this, source, res);
		}

		::System::Void ClearLerpParameter(::System::Boolean clearLerp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET))(this, clearLerp);
		}

		::UnityEngine::Vector2 GetAngleXY(::System::Single angle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET))(this, angle);
		}

		::System::Single GetAngle360(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET))(this, force, forward);
		}

		::MoleMole::AnimatorBlendGroup* GetBlendData(::System::Single& angle, ::MoleMole::AnimatorClipBlendData*& data1, ::MoleMole::AnimatorClipBlendData*& data2)
		{
			return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET))(this, angle, data1, data2);
		}

		::System::Void UpdateLerpParameter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET))(this);
		}

		::System::Single CustomLerpAngle(::System::Single currentAngle, ::System::Single targetAngle, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET))(this, currentAngle, targetAngle, t);
		}

		::System::Single CustomLerp(::System::Single currentValue, ::System::Single targetValue, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET))(this, currentValue, targetValue, t);
		}

		::System::Void CalculatePathInNavmesh(::UnityEngine::Vector3& targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET))(this, targetPos);
		}

		::System::Boolean GetHittedDirection(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward, ::System::Boolean check, ::UnityEngine::Vector3& newForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET))(this, sourceElf, forward, check, newForward);
		}

		::System::Void UpdateAroundTargetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET))(this);
		}

		::System::Void SetAroundTargetRangeAndAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAroundTargetPos(::UnityEngine::Vector3 targetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET))(this, targetPos);
		}

		::System::Single GetMirrorAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET))(this, angle);
		}

		::System::Boolean CheckHittedState(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET))(this, sourceElf, forward);
		}

		::System::Boolean CheckHittedState_1(::MoleMole::Battle::Entity* sourceElf)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET))(this, sourceElf);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 _GetAroundTargetPos_g__RandomPos_143_0(::System::Single targetRange, ::UnityEngine::Vector3 pos)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_143_0_OFFSET))(targetRange, pos);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
