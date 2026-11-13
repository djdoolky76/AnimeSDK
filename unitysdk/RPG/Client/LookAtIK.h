#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/RPG/Client/LookAtTiltData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/GNHDAPGOBAE.h"
class KHPADOCDNBD;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class LookAtAdditiveCurve; }
namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace RPG::Client { class LookAtSolver; }
namespace RPG::Client { class LookAtSolverConfigBase; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_APPLYCONSTRAINTONUPDATE_OFFSET UNITYSDK_OFFSET(0x19462A20)
#define RPG_CLIENT_LOOKATIK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1945EB30)
#define RPG_CLIENT_LOOKATIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0x1945DF50)
#define RPG_CLIENT_LOOKATIK_CTOR_OFFSET UNITYSDK_OFFSET(0x194674F0)
#define RPG_CLIENT_LOOKATIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0x1945E8A0)
#define RPG_CLIENT_LOOKATIK_FORCELOOKAT_OFFSET UNITYSDK_OFFSET(0x194617C0)
#define RPG_CLIENT_LOOKATIK_GETHEADFORWARDPOSITION_OFFSET UNITYSDK_OFFSET(0x19460030)
#define RPG_CLIENT_LOOKATIK_GETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x1945FD50)
#define RPG_CLIENT_LOOKATIK_GETPERFORMANCERUNTIMECACHE_OFFSET UNITYSDK_OFFSET(0x1945D840)
#define RPG_CLIENT_LOOKATIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1945DA40)
#define RPG_CLIENT_LOOKATIK_GET_CURRENTMINSPRINGHAIRANGLE_OFFSET UNITYSDK_OFFSET(0x1945E700)
#define RPG_CLIENT_LOOKATIK_GET_CURRENTSOLVERNAME_OFFSET UNITYSDK_OFFSET(0x194673A0)
#define RPG_CLIENT_LOOKATIK_GET_CURRENTSOLVER_OFFSET UNITYSDK_OFFSET(0x1945E520)
#define RPG_CLIENT_LOOKATIK_GET_HEAD_OFFSET UNITYSDK_OFFSET(0x19467090)
#define RPG_CLIENT_LOOKATIK_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19467180)
#define RPG_CLIENT_LOOKATIK_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x194670F0)
#define RPG_CLIENT_LOOKATIK_GET_ISFORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0x19462980)
#define RPG_CLIENT_LOOKATIK_GET_ISFULLWEIGHT_OFFSET UNITYSDK_OFFSET(0x19467220)
#define RPG_CLIENT_LOOKATIK_GET_ISINTURNINPLACEANIM_OFFSET UNITYSDK_OFFSET(0x194674D0)
#define RPG_CLIENT_LOOKATIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x194602D0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEBLEND_OFFSET UNITYSDK_OFFSET(0x19467430)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEENABLED_OFFSET UNITYSDK_OFFSET(0x19467410)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEWEIGHT_OFFSET UNITYSDK_OFFSET(0x19467450)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATDISABLECAUSE_OFFSET UNITYSDK_OFFSET(0x19467270)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATIKROTATION_OFFSET UNITYSDK_OFFSET(0x194672C0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x194673F0)
#define RPG_CLIENT_LOOKATIK_GET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0x194674B0)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0x1945E590)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x1945E5F0)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATSPEED_OFFSET UNITYSDK_OFFSET(0x1945E650)
#define RPG_CLIENT_LOOKATIK_HEADADDLOOKATCURVE_OFFSET UNITYSDK_OFFSET(0x19462250)
#define RPG_CLIENT_LOOKATIK_HEADLOOKATTILTBYCURVE_OFFSET UNITYSDK_OFFSET(0x19462520)
#define RPG_CLIENT_LOOKATIK_HEADLOOKATTILT_OFFSET UNITYSDK_OFFSET(0x19462380)
#define RPG_CLIENT_LOOKATIK_HEADLOOKAT_1_OFFSET UNITYSDK_OFFSET(0x19462000)
#define RPG_CLIENT_LOOKATIK_HEADLOOKAT_OFFSET UNITYSDK_OFFSET(0x19461DD0)
#define RPG_CLIENT_LOOKATIK_HEADREMOVELOOKATCURVE_OFFSET UNITYSDK_OFFSET(0x194622D0)
#define RPG_CLIENT_LOOKATIK_HEADSTOPLOOKAT_OFFSET UNITYSDK_OFFSET(0x19461620)
#define RPG_CLIENT_LOOKATIK_ISNEARLYLOOKAT_OFFSET UNITYSDK_OFFSET(0x1945F940)
#define RPG_CLIENT_LOOKATIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1945ECC0)
#define RPG_CLIENT_LOOKATIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1945EEA0)
#define RPG_CLIENT_LOOKATIK_ONLOOKATTARGETMOVEBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x19462A70)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0x19462750)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x194626F0)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATSPEED_OFFSET UNITYSDK_OFFSET(0x19462690)
#define RPG_CLIENT_LOOKATIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1945EDE0)
#define RPG_CLIENT_LOOKATIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x1945EE40)
#define RPG_CLIENT_LOOKATIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x1945EB80)
#define RPG_CLIENT_LOOKATIK_SETDISABLEWITHCAUSE_OFFSET UNITYSDK_OFFSET(0x19462820)
#define RPG_CLIENT_LOOKATIK_SETUPCURVEBLENDER_OFFSET UNITYSDK_OFFSET(0x194627B0)
#define RPG_CLIENT_LOOKATIK_SET_ISINTURNINPLACEANIM_OFFSET UNITYSDK_OFFSET(0x194674E0)
#define RPG_CLIENT_LOOKATIK_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x19467400)
#define RPG_CLIENT_LOOKATIK_SET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0x194674C0)
#define RPG_CLIENT_LOOKATIK_SWITCHSOLVER_OFFSET UNITYSDK_OFFSET(0x1945F580)
#define RPG_CLIENT_LOOKATIK_USEQUICKLYSLERPSPEED_OFFSET UNITYSDK_OFFSET(0x194629D0)
#define RPG_CLIENT_LOOKATIK__ADDSOLVERREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1945DD20)
#define RPG_CLIENT_LOOKATIK__COLLECTSOLVERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1945DBB0)
#define RPG_CLIENT_LOOKATIK__FILTERLOOKATTRACINGTARGET_OFFSET UNITYSDK_OFFSET(0x194633C0)
#define RPG_CLIENT_LOOKATIK__IKPREUPDATE_OFFSET UNITYSDK_OFFSET(0x19460440)
#define RPG_CLIENT_LOOKATIK__IKUPDATE_OFFSET UNITYSDK_OFFSET(0x19460810)
#define RPG_CLIENT_LOOKATIK__INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1945F0C0)
#define RPG_CLIENT_LOOKATIK__INTERNALSETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x19461F70)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_TypeDefinitionIndex = 70415;

	class LookAtIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FadeInTime; // 0x18
		::System::Single FadeOutTime; // 0x1C
		::System::Single Speed; // 0x20
		::System::Single StopSpeed; // 0x24
		::System::Single UpDownFilterIntensity; // 0x28
		::System::Single LeftRightFilterIntensity; // 0x2C
		::RPG::Client::LookAtSolver* LookAtSolver; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LookAtSolverConfigBase*>* SolverConfigs; // 0x38
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0x40
		::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x48
		::System::Boolean StopLookAtIkUpdate; // 0x50
		::System::Byte _padding0[0x7];
		::System::Action* OnIKLateUpdated; // 0x58
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* ExternalTraceTargetPositionModified; // 0x60
		::UnityChan::SpringManager* _SpringManager_k__BackingField; // 0x68
		::System::Single MinSpringHairAngle; // 0x70
		::System::Single OverrideMinSpringHairAngle; // 0x74
		::System::Boolean _IsInTurnInPlaceAnim_k__BackingField; // 0x78
		::System::Byte _padding1[0x7];
		::RPG::Client::LookAtSolver* _CurrentSolver; // 0x80
		::System::String* _CurrentSolverUniqueName; // 0x88
		::RPG::Client::LookAtTargetData _LookAtData; // 0x90
		::RPG::Client::LookAtAdditiveCurve* _LookAtAdditiveCurve; // 0x118
		::RPG::Client::LookAtTiltData _TiltData; // 0x120
		::UnityEngine::Vector3 _PrevTracePos; // 0x168
		::System::Single _OverrideLookAtSpeed; // 0x174
		::System::Single _OverrideLookAtFadeInTime; // 0x178
		::System::Single _OverrideLookAtFadeOutTime; // 0x17C
		::UnityEngine::Vector3 _LastModelPos; // 0x180
		::UnityEngine::Quaternion _LastModelRot; // 0x18C
		::System::Boolean _IsModelMoved; // 0x19C
		// static const ::System::String* _DefaultSolverName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_CTOR_OFFSET))(this);
		}

		::System::Boolean GetPerformanceRuntimeCache(::System::String* a1, ::KHPADOCDNBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KHPADOCDNBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETPERFORMANCERUNTIMECACHE_OFFSET))(this, a1, a2);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::GNHDAPGOBAE a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::GNHDAPGOBAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::GNHDAPGOBAE a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::GNHDAPGOBAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_FLUSHTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ONDESTROY_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean SwitchSolver(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SWITCHSOLVER_OFFSET))(this, a1);
		}

		::System::Boolean IsNearlyLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ISNEARLYLOOKAT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLookAtPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETLOOKATPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetHeadForwardPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETHEADFORWARDPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void HeadStopLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADSTOPLOOKAT_OFFSET))(this, a1);
		}

		::System::Void ForceLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_FORCELOOKAT_OFFSET))(this);
		}

		::System::Void HeadLookAt(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::RPG::GameCore::CharacterHeadConstraint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HeadLookAt_1(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::GameCore::CharacterHeadConstraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKAT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HeadAddLookAtCurve(::UnityEngine::AnimationCurve* a1, ::RPG::Client::LookAtAdditiveCurveConstraint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::RPG::Client::LookAtAdditiveCurveConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADADDLOOKATCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void HeadRemoveLookAtCurve(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADREMOVELOOKATCURVE_OFFSET))(this, a1);
		}

		::System::Void HeadLookAtTilt(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKATTILT_OFFSET))(this, a1, a2);
		}

		::System::Void HeadLookAtTiltByCurve(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKATTILTBYCURVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OverrideLookAtSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATSPEED_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtFadeOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEOUTTIME_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtFadeInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEINTIME_OFFSET))(this, a1);
		}

		::System::Void SetupCurveBlender(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SETUPCURVEBLENDER_OFFSET))(this, a1, a2);
		}

		::System::Void SetDisableWithCause(::RPG::Client::LookAtDisableCause a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SETDISABLEWITHCAUSE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsForceChangeTargetThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISFORCECHANGETARGETTHISFRAME_OFFSET))(this);
		}

		::System::Void UseQuicklySlerpSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_USEQUICKLYSLERPSPEED_OFFSET))(this);
		}

		::System::Void ApplyConstraintOnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_APPLYCONSTRAINTONUPDATE_OFFSET))(this);
		}

		::System::Void OnLookAtTargetMoveByPlatform(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ONLOOKATTARGETMOVEBYPLATFORM_OFFSET))(this, a1);
		}

		::System::Void _CollectSolverConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__COLLECTSOLVERCONFIGS_OFFSET))(this);
		}

		static ::System::Void _AddSolverReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1, ::RPG::Client::LookAtSolver* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::RPG::Client::LookAtSolver*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__ADDSOLVERREFERENCETRANSFORMS_OFFSET))(a1, a2);
		}

		::System::Void _Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__INITIALIZE_OFFSET))(this);
		}

		::System::Void _IKPreUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__IKPREUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean _IKUpdate(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__IKUPDATE_OFFSET))(this, a1);
		}

		::System::Void _InternalSetLookAtTarget(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__INTERNALSETLOOKATTARGET_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _FilterLookAtTracingTarget(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__FILTERLOOKATTRACINGTARGET_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* get_Head()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_HEAD_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsFullWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISFULLWEIGHT_OFFSET))(this);
		}

		::RPG::Client::LookAtDisableCause get_LookAtDisableCause()
		{
			return ((::RPG::Client::LookAtDisableCause(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATDISABLECAUSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LookAtIKRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATIKROTATION_OFFSET))(this);
		}

		::RPG::Client::LookAtSolver* get_CurrentSolver()
		{
			return ((::RPG::Client::LookAtSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_CURRENTSOLVER_OFFSET))(this);
		}

		::System::String* get_CurrentSolverName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_CURRENTSOLVERNAME_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_LOOKATTARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_LookAtAdditiveCurveEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEENABLED_OFFSET))(this);
		}

		::System::Single get_LookAtAdditiveCurveBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEBLEND_OFFSET))(this);
		}

		::System::Single get_LookAtAdditiveCurveWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEWEIGHT_OFFSET))(this);
		}

		::UnityChan::SpringManager* get_SpringManager()
		{
			return ((::UnityChan::SpringManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_SPRINGMANAGER_OFFSET))(this);
		}

		::System::Void set_SpringManager(::UnityChan::SpringManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_SPRINGMANAGER_OFFSET))(this, a1);
		}

		::System::Single get_CurrentMinSpringHairAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_CURRENTMINSPRINGHAIRANGLE_OFFSET))(this);
		}

		::System::Boolean get_IsInTurnInPlaceAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISINTURNINPLACEANIM_OFFSET))(this);
		}

		::System::Void set_IsInTurnInPlaceAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_ISINTURNINPLACEANIM_OFFSET))(this, a1);
		}

		::System::Single get__CurrentLookAtSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATSPEED_OFFSET))(this);
		}

		::System::Single get__CurrentLookAtFadeInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEINTIME_OFFSET))(this);
		}

		::System::Single get__CurrentLookAtFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEOUTTIME_OFFSET))(this);
		}

	};
}
