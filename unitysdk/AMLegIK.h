#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMLegIK_PelvisMotionState.h"
#include "unitysdk/AMLegIK_RayCastHeightState.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/ControlParamHandleWrapper.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/StringIDWrapper.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AMLegIK_PelvisLegConstraint.h"
#include "unitysdk/System/ValueTuple_7.h"

class AMLegIK_AnimageDelegate;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define AMLEGIK_APPLYPELVISMINKNEEANGLE_OFFSET UNITYSDK_OFFSET(0x113BEB80)
#define AMLEGIK_APPLYPLAYERMOTION_OFFSET UNITYSDK_OFFSET(0x17CEAD40)
#define AMLEGIK_BYPASS_OFFSET UNITYSDK_OFFSET(0x113C1960)
#define AMLEGIK_CALCULATEFOOTTARGET_OFFSET UNITYSDK_OFFSET(0x113BD1F0)
#define AMLEGIK_CALCULATEPELVISCONSTRAINTTARGET_OFFSET UNITYSDK_OFFSET(0x113BE3B0)
#define AMLEGIK_CALCULATEPELVISTARGETADCANCE_OFFSET UNITYSDK_OFFSET(0x113BF260)
#define AMLEGIK_CALCULATEPELVISTARGETLEGACY_OFFSET UNITYSDK_OFFSET(0x113BEEA0)
#define AMLEGIK_CALCULATEPELVISTARGET_OFFSET UNITYSDK_OFFSET(0x113BF650)
#define AMLEGIK_CALCULATEPREDICTFOOTTARGET_OFFSET UNITYSDK_OFFSET(0x17CEBC70)
#define AMLEGIK_CROSSCHECK_OFFSET UNITYSDK_OFFSET(0x17CED5D0)
#define AMLEGIK_DEBUGFOCUSEDFOOT_OFFSET UNITYSDK_OFFSET(0x17CEAB00)
#define AMLEGIK_DOCALCULATETARGET_OFFSET UNITYSDK_OFFSET(0x17CF2F30)
#define AMLEGIK_FINALIZEFOOTIK_OFFSET UNITYSDK_OFFSET(0x113BD980)
#define AMLEGIK_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17CEEE50)
#define AMLEGIK_GETPELVISREACHINTERVALWITHERROR_OFFSET UNITYSDK_OFFSET(0x113BE5A0)
#define AMLEGIK_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x17CEECA0)
#define AMLEGIK_GETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x17CE8EF0)
#define AMLEGIK_GET_ENABLEANIMDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9080)
#define AMLEGIK_GET_ENABLEFINALHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9020)
#define AMLEGIK_GET_ENABLEFOOTMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8FC0)
#define AMLEGIK_GET_ENABLELOCKFOOTDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8FA0)
#define AMLEGIK_GET_ENABLELOCKFOOTREAL_OFFSET UNITYSDK_OFFSET(0x17CE8CD0)
#define AMLEGIK_GET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8FE0)
#define AMLEGIK_GET_ENABLEPELVISDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8F80)
#define AMLEGIK_GET_ENABLEPIKDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE90A0)
#define AMLEGIK_GET_ENABLEPIKHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9000)
#define AMLEGIK_GET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE90C0)
#define AMLEGIK_GET_ENABLERAYCASTDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9060)
#define AMLEGIK_GET_ENABLETARGETDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9040)
#define AMLEGIK_GET_FOOTINDEXTOWATCH_OFFSET UNITYSDK_OFFSET(0x17CE9100)
#define AMLEGIK_GET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0x17CE90E0)
#define AMLEGIK_GET_HIPDELTA_OFFSET UNITYSDK_OFFSET(0x17CE8B30)
#define AMLEGIK_GET_IKWEIGHT_OFFSET UNITYSDK_OFFSET(0x17CE8B10)
#define AMLEGIK_GET_REALPREDICTRAYCASTHEIGHT_OFFSET UNITYSDK_OFFSET(0x17CE8A10)
#define AMLEGIK_GET_REALRAYCASTHEIGHT_OFFSET UNITYSDK_OFFSET(0x17CE8910)
#define AMLEGIK_HIPHEIGHTLIFTINGDELTABYMINDIST_OFFSET UNITYSDK_OFFSET(0x17CEE560)
#define AMLEGIK_HIPHEIGHTLIFTINGDELTA_OFFSET UNITYSDK_OFFSET(0x17CEE3D0)
#define AMLEGIK_HITGROUNDIMPL_OFFSET UNITYSDK_OFFSET(0x17CF01C0)
#define AMLEGIK_HITGROUNDSIMPLEIMPL_OFFSET UNITYSDK_OFFSET(0x17CEF160)
#define AMLEGIK_HITGROUND_OFFSET UNITYSDK_OFFSET(0x17CECFC0)
#define AMLEGIK_INITIALIZEFOOTLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x17CE8520)
#define AMLEGIK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17CE9120)
#define AMLEGIK_INITSCENEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x17CEA900)
#define AMLEGIK_ISFOOTMOVING_OFFSET UNITYSDK_OFFSET(0x17CEE7C0)
#define AMLEGIK_ISINPIKSTATE_OFFSET UNITYSDK_OFFSET(0x17CED210)
#define AMLEGIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x113C1BC0)
#define AMLEGIK_LOCKFOOT_OFFSET UNITYSDK_OFFSET(0x17CED780)
#define AMLEGIK_MAXHIPSDELTA_OFFSET UNITYSDK_OFFSET(0x113BDEF0)
#define AMLEGIK_MINHIPSDELTA_OFFSET UNITYSDK_OFFSET(0x113BDE10)
#define AMLEGIK_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x113C0ED0)
#define AMLEGIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x113C07B0)
#define AMLEGIK_ONFOOTPLANT_OFFSET UNITYSDK_OFFSET(0x113C02D0)
#define AMLEGIK_ORDINARYIKHITGROUND_OFFSET UNITYSDK_OFFSET(0x17CF1C00)
#define AMLEGIK_PELVISREACHMARGIN_OFFSET UNITYSDK_OFFSET(0x113BE500)
#define AMLEGIK_PREDICTDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x17CED190)
#define AMLEGIK_PREDICTFOOT_OFFSET UNITYSDK_OFFSET(0x17CEC500)
#define AMLEGIK_PREDICTIKHITGROUND_OFFSET UNITYSDK_OFFSET(0x17CF1F40)
#define AMLEGIK_PREPARE_OFFSET UNITYSDK_OFFSET(0x17CEAF50)
#define AMLEGIK_PREPROCESSANIMPOS_OFFSET UNITYSDK_OFFSET(0x17CEDFE0)
#define AMLEGIK_PREPROCESSPREDICTIONIK_OFFSET UNITYSDK_OFFSET(0x17CED4D0)
#define AMLEGIK_RESETPELVISCONSTRAINTSTATE_OFFSET UNITYSDK_OFFSET(0x17CE8480)
#define AMLEGIK_RESETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x17CE88A0)
#define AMLEGIK_SETFOOTCONTROLPARAM_OFFSET UNITYSDK_OFFSET(0x113BD750)
#define AMLEGIK_SETIKENABLED_OFFSET UNITYSDK_OFFSET(0x17CE8300)
#define AMLEGIK_SETPELVISZONEFOOTIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x17CE8D60)
#define AMLEGIK_SETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x17CE8DC0)
#define AMLEGIK_SET_DISABLEDAMPING_OFFSET UNITYSDK_OFFSET(0x17CE8B70)
#define AMLEGIK_SET_ENABLEANIMDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9090)
#define AMLEGIK_SET_ENABLEFINALHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9030)
#define AMLEGIK_SET_ENABLEFOOTMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8FD0)
#define AMLEGIK_SET_ENABLELOCKFOOTDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8FB0)
#define AMLEGIK_SET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8FF0)
#define AMLEGIK_SET_ENABLEPELVISDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE8F90)
#define AMLEGIK_SET_ENABLEPELVISIKROT_OFFSET UNITYSDK_OFFSET(0x17CE8D50)
#define AMLEGIK_SET_ENABLEPIKDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE90B0)
#define AMLEGIK_SET_ENABLEPIKHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9010)
#define AMLEGIK_SET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE90D0)
#define AMLEGIK_SET_ENABLERAYCASTDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9070)
#define AMLEGIK_SET_ENABLETARGETDEBUG_OFFSET UNITYSDK_OFFSET(0x17CE9050)
#define AMLEGIK_SET_FOOTINDEXTOWATCH_OFFSET UNITYSDK_OFFSET(0x17CE9110)
#define AMLEGIK_SET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0x17CE90F0)
#define AMLEGIK_SET_HIPDELTA_OFFSET UNITYSDK_OFFSET(0x17CE8B50)
#define AMLEGIK_SET_IKWEIGHT_OFFSET UNITYSDK_OFFSET(0x17CE8B20)
#define AMLEGIK_SET_ISONMOVINGPLATFORM_OFFSET UNITYSDK_OFFSET(0x17CE8B80)
#define AMLEGIK_SET_PELVISCASTDIST_OFFSET UNITYSDK_OFFSET(0x17CE8D40)
#define AMLEGIK_SET_PELVISIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x17CE8D30)
#define AMLEGIK_START_OFFSET UNITYSDK_OFFSET(0x113C0550)
#define AMLEGIK_TRYBUILDPELVISLEGCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x113BDFD0)
#define AMLEGIK_TRYCALCULATEPELVISPRIORITYTARGET_OFFSET UNITYSDK_OFFSET(0x113BE660)
#define AMLEGIK_UPDATEPELVISMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x17CEAB60)
#define AMLEGIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x113C0A10)
#define AMLEGIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x113C1D80)
#define AMLEGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x113C1C20)

inline static constexpr unsigned int AMLegIK_TypeDefinitionIndex = 57182;

class AMLegIK : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_castResults()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(AMLegIK_TypeDefinitionIndex)->GetStaticField(0x3A350);
	}
	static ::System::Single* StaticGet_RayCastHeightOnMovingPlatform()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AMLegIK_TypeDefinitionIndex)->GetStaticField(0xD6C0);
	}
	// static const ::System::Single FLOAT_MIN; // 0x0
	// static const ::System::Single FLOAT_MAX; // 0x0
	// static const ::System::Single LEG_REACH_EPSILON; // 0x0
	// static const ::System::Single PELVIS_VERTICAL_VELOCITY_FILTER_TIME; // 0x0
	// static const ::System::Single PELVIS_VERTICAL_VELOCITY_ENTER_THRESHOLD; // 0x0
	// static const ::System::Single PELVIS_VERTICAL_VELOCITY_EXIT_THRESHOLD; // 0x0
	// static const ::System::Single PELVIS_MOTION_STATE_CONFIRM_TIME; // 0x0
	// static const ::System::Single PELVIS_MOTION_STATE_EXIT_TIME; // 0x0
	// static const ::System::Single PELVIS_GROUNDING_LEG_OVERREACH_BUDGET; // 0x0
	// static const ::System::Int32 PELVIS_FAST_ASCENDING_CONFIRM_FRAMES = 0x2; // 0x0
	::System::Boolean IsDefaultEnabled; // 0x18
	::System::Byte _padding0[0x7];
	::UnityEngine::GameObject* pelvis; // 0x20
	::System::String* pelvisCpName; // 0x28
	::Il2CppArray<::UnityEngine::GameObject*>* feet; // 0x30
	::Il2CppArray<::UnityEngine::GameObject*>* toes; // 0x38
	::Il2CppArray<::System::String*>* PosQuatNames; // 0x40
	::System::Single BlendTime; // 0x48
	::System::Byte _padding1[0x4];
	::Il2CppArray<::UnityEngine::Quaternion>* FeetBindRotCompSpaceDelta; // 0x50
	::System::Single FootHeights; // 0x58
	::System::Single FootDisableIkHeight; // 0x5C
	::System::Single FootOnGroundHeight; // 0x60
	::System::Single FootOffGroundHeight; // 0x64
	::System::Single FootUpVelocityLimit; // 0x68
	::System::Single FootDownVelocityLimit; // 0x6C
	::System::Single FootRotVelocityLimit; // 0x70
	::System::Single RayCastHeight; // 0x74
	::System::Single RayCastHeightForNewScene; // 0x78
	::System::Single PredictRayCastHeight; // 0x7C
	::System::Single PredictRayCastHeightForNewScene; // 0x80
	::System::Single EffectorCastMaxDist; // 0x84
	::System::Single OffsetFromHeelToFoot; // 0x88
	::System::Single OffsetFromToeToTiptoe; // 0x8C
	::System::Single FootWidthRadius; // 0x90
	::System::Single PelvisMaxUpVelocity; // 0x94
	::System::Single PelvisMaxDownVelocity; // 0x98
	::System::Single PelvisFootMinDistance; // 0x9C
	::System::Single PelvisMinKneeAngle; // 0xA0
	::System::Boolean EnablePelvisPD; // 0xA4
	::System::Byte _padding2[0x3];
	::System::Single PelvisThreshold; // 0xA8
	::System::Single PelvisMaxStiffness; // 0xAC
	::System::Single PelvisMaxDamping; // 0xB0
	::System::Boolean PelvisAdjustmentAdvance; // 0xB4
	::System::Boolean EnableLockFoot; // 0xB5
	::System::Byte _padding3[0x2];
	::System::Single FootLockHeight; // 0xB8
	::System::Single FootLockSpeed; // 0xBC
	::System::Single FootLockRange; // 0xC0
	::System::Single FootLockDamping; // 0xC4
	::System::Single FootLockStiffness; // 0xC8
	::System::Boolean FootLockCrossCheck; // 0xCC
	::System::Byte _padding4[0x3];
	::System::Single FadeInHeight; // 0xD0
	::System::Single FadeinWeight; // 0xD4
	::System::Single FootMoveThreshold; // 0xD8
	::System::Single FootNormalForwardAngleThreshold; // 0xDC
	::System::Boolean EnablePIKWarp; // 0xE0
	::System::Boolean EnablePredictiveMoving; // 0xE1
	::System::Byte _padding5[0x2];
	::System::Single PredictiveMovingHeight; // 0xE4
	::System::Single PIKSmoothSpeed; // 0xE8
	::System::Single PredictPointXZDistanceThreshold; // 0xEC
	::System::Boolean EnableStrideWrapping; // 0xF0
	::System::Byte _padding6[0x3];
	::System::Single MinStrideScale; // 0xF4
	::UnityEngine::LayerMask IKLayerMask; // 0xF8
	::System::Boolean IKEnabled; // 0xFC
	::System::Byte _padding7[0x3];
	::AMLegIK_RayCastHeightState rayCastHeightState; // 0x100
	::System::Single _IKWeight_k__BackingField; // 0x104
	::System::Single forwardSpeed; // 0x108
	::System::Single downSpeed; // 0x10C
	::UnityEngine::Vector3 realVelocity; // 0x110
	::System::Single DownStairWeight; // 0x11C
	::UnityEngine::Vector3 _HipDelta_k__BackingField; // 0x120
	::System::Single deltaTime; // 0x12C
	::Il2CppArray<::System::Single>* lastFrameIKCastDist; // 0x130
	::Il2CppArray<::System::Single>* lastFrameIKCastDistBeforeWeight; // 0x138
	::Il2CppArray<::UnityEngine::Vector3>* lastFrameNormal; // 0x140
	::UnityEngine::StringIDWrapper pelvisNameWrapper; // 0x148
	::System::Byte _padding8[0x4];
	::Il2CppArray<::UnityEngine::StringIDWrapper>* footNameWrappers; // 0x150
	::Il2CppArray<::UnityEngine::StringIDWrapper>* toeNameWrappers; // 0x158
	::Il2CppArray<::UnityEngine::StringIDWrapper>* calfNameWrappers; // 0x160
	::Il2CppArray<::UnityEngine::StringIDWrapper>* thighNameWrappers; // 0x168
	::UnityEngine::ControlParamHandleWrapper pelvisCpHanleWrapper; // 0x170
	::Il2CppArray<::UnityEngine::ControlParamHandleWrapper>* controlParamHandleWrappers; // 0x188
	::UnityEngine::AnimageComponent* animageComponent; // 0x190
	::UnityEngine::Animator* animator; // 0x198
	::UnityEngine::Rigidbody* rigidbody; // 0x1A0
	::System::Single footToeLen; // 0x1A8
	::System::Single lastHeight; // 0x1AC
	::System::Single lastPelvisHeightDelta; // 0x1B0
	::System::Single lastPelvisHeightDeltaDiff; // 0x1B4
	::AMLegIK_PelvisMotionState pelvisMotionState; // 0x1B8
	::AMLegIK_PelvisMotionState pelvisPendingMotionState; // 0x1BC
	::System::Single pelvisFilteredVerticalVelocity; // 0x1C0
	::System::Single pelvisMotionStateTime; // 0x1C4
	::System::Boolean pelvisMotionStateInitialized; // 0x1C8
	::System::Byte _padding9[0x3];
	::System::Int32 pelvisFastAscendingFrameCount; // 0x1CC
	::System::Boolean isMoving; // 0x1D0
	::System::Boolean isRaising; // 0x1D1
	::System::Boolean isBlocking; // 0x1D2
	::System::Boolean isOnMovingPlatform; // 0x1D3
	::System::Byte _padding10[0x4];
	::Il2CppArray<::System::Boolean>* isLeavingMovingPlatformAndFootInAir; // 0x1D8
	::Il2CppArray<::System::Boolean>* isLeavingMovingPlatformAndFootOnGround; // 0x1E0
	::AMLegIK_RayCastHeightState tempRayCastHeightStateLeavingMovingPlatform; // 0x1E8
	::System::Byte _padding11[0x4];
	::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Boolean>>* hipsDelta; // 0x1F0
	::UnityEngine::Vector3 pelvisPosLocal; // 0x1F8
	::UnityEngine::Quaternion pelvisRotLocal; // 0x204
	::System::Byte _padding12[0x4];
	::Il2CppArray<::UnityEngine::Vector3>* currentFootAnimPosLocal; // 0x218
	::Il2CppArray<::UnityEngine::Vector3>* currentFootAnimPosForPelvisConstraintLocal; // 0x220
	::Il2CppArray<::UnityEngine::Vector3>* currentCalfAnimPosLocal; // 0x228
	::Il2CppArray<::UnityEngine::Vector3>* currentThighAnimPosLocal; // 0x230
	::Il2CppArray<::UnityEngine::Vector3>* currentFootTargetPosLocal; // 0x238
	::Il2CppArray<::UnityEngine::Vector3>* currentFootAnimPosGlobal; // 0x240
	::Il2CppArray<::UnityEngine::Vector3>* currentFootLockedPosGlobal; // 0x248
	::Il2CppArray<::UnityEngine::Quaternion>* currentFootAnimRotLocal; // 0x250
	::Il2CppArray<::UnityEngine::Quaternion>* currentFootAnimRotGlobal; // 0x258
	::Il2CppArray<::UnityEngine::Vector3>* currentToePosGlobal; // 0x260
	::Il2CppArray<::System::Object*>* footIkResults; // 0x268
	::Il2CppArray<::UnityEngine::Vector3>* lastOrdinaryHitPosGlobal; // 0x270
	::Il2CppArray<::UnityEngine::Vector3>* lastHitPosGlobal; // 0x278
	::Il2CppArray<::UnityEngine::Vector3>* lastHitNormalGlobal; // 0x280
	::Il2CppArray<::UnityEngine::Vector3>* lastAnimPosGlobal; // 0x288
	::Il2CppArray<::UnityEngine::Vector3>* lastTargetPosGlobal; // 0x290
	::Il2CppArray<::UnityEngine::Quaternion>* lastTargetRotGlobal; // 0x298
	::Il2CppArray<::UnityEngine::Quaternion>* footBindRots; // 0x2A0
	::Il2CppArray<::System::Boolean>* hasLegBoneChain; // 0x2A8
	::MoleMole::Battle::Entity* actor; // 0x2B0
	::System::Boolean hasToe; // 0x2B8
	::System::Boolean isRootPelvis; // 0x2B9
	::System::Boolean disableDamping; // 0x2BA
	::System::Byte _padding13[0x5];
	::Il2CppArray<::System::Object*>* footPredictState; // 0x2C0
	::AMLegIK_AnimageDelegate* OnLateUpdate; // 0x2C8
	::Il2CppArray<::System::Object*>* footLockInfos; // 0x2D0
	::UnityEngine::Vector3 lastPos; // 0x2D8
	::System::Byte _padding14[0x4];
	::Il2CppArray<::UnityEngine::RaycastHit>* predictMovingRaycastHitBuffer; // 0x2E8
	::System::Single pelvisIkWeight; // 0x2F0
	::System::Single pelvisIkWeightTarget; // 0x2F4
	::System::Single pelvisCastDist; // 0x2F8
	::System::Boolean enablePelvisIkRot; // 0x2FC
	::System::Boolean enablePelvisIkRotTarget; // 0x2FD
	::System::Byte _padding15[0x2];
	::System::Single pelvisZoneFootIkWeight; // 0x300
	::System::Single pelvisZoneFootIkWeightTarget; // 0x304
	::System::Boolean enableStrideWrapping; // 0x308
	::System::Byte _padding16[0x3];
	::System::Single footOnGroundHeight; // 0x30C
	::System::Single footOffGroundHeight; // 0x310
	::System::Single footUpVelocityLimit; // 0x314
	::System::Single footDownVelocityLimit; // 0x318
	::System::Single pelvisMaxUpVelocity; // 0x31C
	::System::Single pelvisMaxDownVelocity; // 0x320
	::System::Single AnimatorVel; // 0x324
	::System::Single FinalVel; // 0x328
	::System::Single VelFactor; // 0x32C
	::System::Boolean EnableLowQuality; // 0x330
	::System::Boolean _EnablePelvisDebug_k__BackingField; // 0x331
	::System::Boolean _EnableLockFootDebug_k__BackingField; // 0x332
	::System::Boolean _EnableFootMovingDebug_k__BackingField; // 0x333
	::System::Boolean _EnableOrdinaryHitGroundDebug_k__BackingField; // 0x334
	::System::Boolean _EnablePikHitGroundDebug_k__BackingField; // 0x335
	::System::Boolean _EnableFinalHitGroundDebug_k__BackingField; // 0x336
	::System::Boolean _EnableTargetDebug_k__BackingField; // 0x337
	::System::Boolean _EnableRaycastDebug_k__BackingField; // 0x338
	::System::Boolean _EnableAnimDebug_k__BackingField; // 0x339
	::System::Boolean _EnablePIKDrawDebug_k__BackingField; // 0x33A
	::System::Boolean _EnablePredictiveMovingDebug_k__BackingField; // 0x33B
	::System::Single _GizmosLastTime_k__BackingField; // 0x33C
	::System::Int32 _FootIndexToWatch_k__BackingField; // 0x340

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLEGIK__CCTOR_OFFSET))();
	}

	::System::Void SetIKEnabled(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SETIKENABLED_OFFSET))(this, enable);
	}

	::System::Single get_RealRayCastHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_REALRAYCASTHEIGHT_OFFSET))(this);
	}

	::System::Single get_RealPredictRayCastHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_REALPREDICTRAYCASTHEIGHT_OFFSET))(this);
	}

	::System::Single get_IKWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_IKWEIGHT_OFFSET))(this);
	}

	::System::Void set_IKWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_IKWEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_HipDelta()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_HIPDELTA_OFFSET))(this);
	}

	::System::Void set_HipDelta(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_SET_HIPDELTA_OFFSET))(this, value);
	}

	::System::Void set_DisableDamping(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_DISABLEDAMPING_OFFSET))(this, value);
	}

	::System::Void set_IsOnMovingPlatform(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ISONMOVINGPLATFORM_OFFSET))(this, value);
	}

	::System::Boolean get_EnableLockFootReal()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLELOCKFOOTREAL_OFFSET))(this);
	}

	::System::Void set_PelvisIkWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_PELVISIKWEIGHT_OFFSET))(this, value);
	}

	::System::Void set_PelvisCastDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_PELVISCASTDIST_OFFSET))(this, value);
	}

	::System::Void set_EnablePelvisIkRot(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPELVISIKROT_OFFSET))(this, value);
	}

	::System::Void SetPelvisZoneFootIkWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SETPELVISZONEFOOTIKWEIGHT_OFFSET))(this, value);
	}

	::System::Void SetStateDependParams(::System::Boolean enableStrideWrapping, ::System::Single footOnGroundHeight, ::System::Single footOffGroundHeight, ::System::Single footUpVelocityLimit, ::System::Single footDownVelocityLimit, ::System::Single pelvisUpVelLimit, ::System::Single pelvisDownVelLimit)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SETSTATEDEPENDPARAMS_OFFSET))(this, enableStrideWrapping, footOnGroundHeight, footOffGroundHeight, footUpVelocityLimit, footDownVelocityLimit, pelvisUpVelLimit, pelvisDownVelLimit);
	}

	::System::ValueTuple_7<::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single> GetStateDependParams()
	{
		return ((::System::ValueTuple_7<::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GETSTATEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Void ResetStateDependParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_RESETSTATEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Boolean get_EnablePelvisDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPELVISDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePelvisDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPELVISDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableLockFootDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLELOCKFOOTDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableLockFootDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLELOCKFOOTDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableFootMovingDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEFOOTMOVINGDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableFootMovingDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEFOOTMOVINGDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableOrdinaryHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableOrdinaryHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePikHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPIKHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePikHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPIKHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableFinalHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEFINALHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableFinalHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEFINALHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableTargetDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLETARGETDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableTargetDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLETARGETDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableRaycastDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLERAYCASTDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableRaycastDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLERAYCASTDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableAnimDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEANIMDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableAnimDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEANIMDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePIKDrawDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPIKDRAWDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePIKDrawDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPIKDRAWDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePredictiveMovingDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePredictiveMovingDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET))(this, value);
	}

	::System::Single get_GizmosLastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_GIZMOSLASTTIME_OFFSET))(this);
	}

	::System::Void set_GizmosLastTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_GIZMOSLASTTIME_OFFSET))(this, value);
	}

	::System::Int32 get_FootIndexToWatch()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_FOOTINDEXTOWATCH_OFFSET))(this);
	}

	::System::Void set_FootIndexToWatch(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_SET_FOOTINDEXTOWATCH_OFFSET))(this, value);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_INITIALIZE_OFFSET))(this);
	}

	::System::Void InitializeFootLockState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_INITIALIZEFOOTLOCKSTATE_OFFSET))(this);
	}

	::System::Void InitSceneDependParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_INITSCENEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Boolean DebugFocusedFoot(::System::Int32 footIndex)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_DEBUGFOCUSEDFOOT_OFFSET))(this, footIndex);
	}

	::System::Void ResetPelvisConstraintState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_RESETPELVISCONSTRAINTSTATE_OFFSET))(this);
	}

	::System::Void UpdatePelvisMotionState(::System::Single heightDelta)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_UPDATEPELVISMOTIONSTATE_OFFSET))(this, heightDelta);
	}

	::System::Void ApplyPlayerMotion()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_APPLYPLAYERMOTION_OFFSET))(this);
	}

	::System::Void Prepare()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_PREPARE_OFFSET))(this);
	}

	::UnityEngine::Vector3 CalculatePredictFootTarget(::System::Int32 footIndex)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPREDICTFOOTTARGET_OFFSET))(this, footIndex);
	}

	::System::Void PredictFoot(::System::Int32 currentFootIdx)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_PREDICTFOOT_OFFSET))(this, currentFootIdx);
	}

	::System::Void PredictDrawDebug()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_PREDICTDRAWDEBUG_OFFSET))(this);
	}

	::System::Boolean IsInPIKState(::System::Single& stateIKWeight)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIK_ISINPIKSTATE_OFFSET))(this, stateIKWeight);
	}

	::System::Boolean PreprocessPredictionIK(::System::Single& pIkWeight)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIK_PREPROCESSPREDICTIONIK_OFFSET))(this, pIkWeight);
	}

	::System::Boolean CrossCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CROSSCHECK_OFFSET))(this);
	}

	::System::Void LockFoot(::System::Int32 footIndex, ::UnityEngine::Vector3 footPosLocal, ::System::Boolean isCross, ::UnityEngine::Vector3& footLockXZLocalOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_LOCKFOOT_OFFSET))(this, footIndex, footPosLocal, isCross, footLockXZLocalOffset);
	}

	::System::Void PreprocessAnimPos(::System::Int32 footIndex, ::System::Boolean needPIK, ::System::Boolean isCross, ::System::Single pIkWeight)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_PREPROCESSANIMPOS_OFFSET))(this, footIndex, needPIK, isCross, pIkWeight);
	}

	::System::Single HipHeightLiftingDelta(::System::Single straightestLegLength, ::UnityEngine::Vector3 rootJointPos, ::UnityEngine::Vector3 endJointPos)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_HIPHEIGHTLIFTINGDELTA_OFFSET))(this, straightestLegLength, rootJointPos, endJointPos);
	}

	::System::ValueTuple_2<::System::Single, ::System::Boolean> HipHeightLiftingDeltaByMinDist(::System::Int32 footIndex, ::System::Single shortestAllowableDist, ::UnityEngine::Vector3 rootJointPos, ::UnityEngine::Vector3 endJointPos)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_HIPHEIGHTLIFTINGDELTABYMINDIST_OFFSET))(this, footIndex, shortestAllowableDist, rootJointPos, endJointPos);
	}

	::System::Boolean IsFootMoving(::System::Int32 footIndex, ::UnityEngine::Vector3 footPos, ::UnityEngine::Vector3& posDelta)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_ISFOOTMOVING_OFFSET))(this, footIndex, footPos, posDelta);
	}

	::UnityEngine::RaycastHit GetRaycastHit(::UnityEngine::Vector3 startPoint, ::System::Single castDistance)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_GETRAYCASTHIT_OFFSET))(this, startPoint, castDistance);
	}

	::UnityEngine::Vector3 GetDeltaFromRigidbodyToTransform(::UnityEngine::Transform* transform, ::UnityEngine::Rigidbody* rigidbody)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + AMLEGIK_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET))(this, transform, rigidbody);
	}

	::System::Void HitGround(::System::Int32 footIndex, ::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_HITGROUND_OFFSET))(this, footIndex, footGlobalPos, footGlobalRot, toeGlobalPos, castHeight, hitPos, hitNormal);
	}

	::System::Void HitGroundSimpleImpl(::System::Int32 footIndex, ::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_HITGROUNDSIMPLEIMPL_OFFSET))(this, footIndex, footGlobalPos, footGlobalRot, toeGlobalPos, castHeight, hitPos, hitNormal);
	}

	::System::Void HitGroundImpl(::System::Int32 footIndex, ::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_HITGROUNDIMPL_OFFSET))(this, footIndex, footGlobalPos, footGlobalRot, toeGlobalPos, castHeight, hitPos, hitNormal);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> OrdinaryIkHitGround(::System::Int32 footIndex)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_ORDINARYIKHITGROUND_OFFSET))(this, footIndex);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> PredictIkHitGround(::System::Int32 footIndex, ::System::Boolean needPIK, ::UnityEngine::Vector3 ordinaryHitPos, ::UnityEngine::Vector3 ordinaryHitNormal)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_PREDICTIKHITGROUND_OFFSET))(this, footIndex, needPIK, ordinaryHitPos, ordinaryHitNormal);
	}

	::System::Void DoCalculateTarget(::System::Int32 footIndex, ::UnityEngine::Vector3 hitPos, ::UnityEngine::Vector3 hitNormal, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + AMLEGIK_DOCALCULATETARGET_OFFSET))(this, footIndex, hitPos, hitNormal, targetPos, targetRot);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> CalculateFootTarget(::System::Int32 footIndex, ::UnityEngine::Vector3 finalHitPos, ::UnityEngine::Vector3 finalHitNormal)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEFOOTTARGET_OFFSET))(this, footIndex, finalHitPos, finalHitNormal);
	}

	::System::Void SetFootControlParam(::System::Int32 footIndex, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AMLEGIK_SETFOOTCONTROLPARAM_OFFSET))(this, footIndex, targetPos, targetRot);
	}

	::System::Void FinalizeFootIk(::System::Int32 footIndex, ::System::Boolean needPIK, ::UnityEngine::Vector3 ordinaryHitPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, ::UnityEngine::Vector3 finalHitPos, ::UnityEngine::Vector3 finalHitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_FINALIZEFOOTIK_OFFSET))(this, footIndex, needPIK, ordinaryHitPos, targetPos, targetRot, finalHitPos, finalHitNormal);
	}

	::System::Single MinHipsDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_MINHIPSDELTA_OFFSET))(this);
	}

	::System::Single MaxHipsDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_MAXHIPSDELTA_OFFSET))(this);
	}

	::System::Boolean TryBuildPelvisLegConstraint(::System::Int32 footIndex, ::System::Single targetHipDelta, ::AMLegIK_PelvisLegConstraint& constraint)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::AMLegIK_PelvisLegConstraint&))((::PBYTE)hIl2Cpp + AMLEGIK_TRYBUILDPELVISLEGCONSTRAINT_OFFSET))(this, footIndex, targetHipDelta, constraint);
	}

	::System::Single CalculatePelvisConstraintTarget(::System::Single targetHipDelta, ::AMLegIK_PelvisLegConstraint leftConstraint, ::AMLegIK_PelvisLegConstraint rightConstraint)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::AMLegIK_PelvisLegConstraint, ::AMLegIK_PelvisLegConstraint))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISCONSTRAINTTARGET_OFFSET))(this, targetHipDelta, leftConstraint, rightConstraint);
	}

	::System::Single PelvisReachMargin(::AMLegIK_PelvisLegConstraint constraint, ::System::Single candidate)
	{
		return ((::System::Single(*)(::PVOID, ::AMLegIK_PelvisLegConstraint, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_PELVISREACHMARGIN_OFFSET))(this, constraint, candidate);
	}

	::System::Void GetPelvisReachIntervalWithError(::AMLegIK_PelvisLegConstraint constraint, ::System::Single reachError, ::System::Single& intervalMin, ::System::Single& intervalMax)
	{
		return ((::System::Void(*)(::PVOID, ::AMLegIK_PelvisLegConstraint, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIK_GETPELVISREACHINTERVALWITHERROR_OFFSET))(this, constraint, reachError, intervalMin, intervalMax);
	}

	::System::Boolean TryCalculatePelvisPriorityTarget(::System::Single constrainedTarget, ::AMLegIK_PelvisLegConstraint leftConstraint, ::AMLegIK_PelvisLegConstraint rightConstraint, ::System::Single& priorityTarget)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AMLegIK_PelvisLegConstraint, ::AMLegIK_PelvisLegConstraint, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIK_TRYCALCULATEPELVISPRIORITYTARGET_OFFSET))(this, constrainedTarget, leftConstraint, rightConstraint, priorityTarget);
	}

	::System::Single ApplyPelvisMinKneeAngle(::System::Single targetHipDelta)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_APPLYPELVISMINKNEEANGLE_OFFSET))(this, targetHipDelta);
	}

	::System::Single CalculatePelvisTargetLegacy()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISTARGETLEGACY_OFFSET))(this);
	}

	::System::Single CalculatePelvisTargetAdcance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISTARGETADCANCE_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> CalculatePelvisTarget()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISTARGET_OFFSET))(this);
	}

	::System::Void OnFootPlant(::MoleMole::Config::AnimatorZoneFootPrint_FootType footType, ::System::Boolean isInZone, ::System::Boolean isSliding)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_ONFOOTPLANT_OFFSET))(this, footType, isInZone, isSliding);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_UPDATE_OFFSET))(this);
	}

	::System::Void OnAnimatorIK(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_ONANIMATORIK_OFFSET))(this, layerIndex);
	}

	::System::Void Bypass()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_BYPASS_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_LATEUPDATE_OFFSET))(this);
	}
};
