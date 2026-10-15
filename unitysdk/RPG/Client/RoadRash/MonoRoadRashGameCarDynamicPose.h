#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EKnockUpDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_AOEJOOMGAKE_OFFSET UNITYSDK_OFFSET(0xDEDBF20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_AWAKE_OFFSET UNITYSDK_OFFSET(0xDEDC410)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_CTOR_OFFSET UNITYSDK_OFFSET(0xDEDC5C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_ECCGJAHPFIO_OFFSET UNITYSDK_OFFSET(0xDEDC1F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_FENEPELKDKO_OFFSET UNITYSDK_OFFSET(0xDEDB4A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_FGHCBAGKMMM_OFFSET UNITYSDK_OFFSET(0xDEDC1A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_ISAIRBORNE_OFFSET UNITYSDK_OFFSET(0xDEDBF10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_ISINKNOCKUP_OFFSET UNITYSDK_OFFSET(0xDEDBC30)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_ISINLANDING_OFFSET UNITYSDK_OFFSET(0xDEDBE40)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORBACKWARDDISTANCE_OFFSET UNITYSDK_OFFSET(0xDEDBC60)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORDURATION_OFFSET UNITYSDK_OFFSET(0xDEDBC80)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORENABLED_OFFSET UNITYSDK_OFFSET(0xDEDBC50)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0xDEDBC70)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPDURATION_OFFSET UNITYSDK_OFFSET(0xDEDBC40)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPNONELOCKEXTRA_OFFSET UNITYSDK_OFFSET(0xDEDBC90)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPPROGRESS01_OFFSET UNITYSDK_OFFSET(0xDEDBCA0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_LANDINGDURATION_OFFSET UNITYSDK_OFFSET(0xDEDBE50)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GLMEMIOCLNO_OFFSET UNITYSDK_OFFSET(0xDEDC010)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_HILIJBADPJH_OFFSET UNITYSDK_OFFSET(0xDEDC550)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_HMIDNEOGPMD_OFFSET UNITYSDK_OFFSET(0xDEDC100)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_IAHPLMFOMJA_OFFSET UNITYSDK_OFFSET(0xDEDC150)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_INFFJMHAHCP_OFFSET UNITYSDK_OFFSET(0xDEDB8E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_JLLLDIDMLAK_OFFSET UNITYSDK_OFFSET(0xDEDC560)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_LEONDLEPJIP_OFFSET UNITYSDK_OFFSET(0xDEDC270)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0xDEDB620)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_NJAEGJLJOAM_OFFSET UNITYSDK_OFFSET(0xDEDB580)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_PGHNEPNFAAE_OFFSET UNITYSDK_OFFSET(0xDEDB3C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_PRINTDEBUGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xDEDB940)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_RESETPOSE_OFFSET UNITYSDK_OFFSET(0xDEDC2F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_SAMPLEPOSETHROTTLE_OFFSET UNITYSDK_OFFSET(0xDEDB9C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_SETAIRBORNE_OFFSET UNITYSDK_OFFSET(0xDEDBEB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TICK_OFFSET UNITYSDK_OFFSET(0xDED9D70)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TRIGGERKNOCKUP_OFFSET UNITYSDK_OFFSET(0xDEDBB30)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TRIGGERLANDINGIMPACT_OFFSET UNITYSDK_OFFSET(0xDEDBAB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TRIGGERLANDING_OFFSET UNITYSDK_OFFSET(0xDEDBD30)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameCarDynamicPose_TypeDefinitionIndex = 75855;

	class MonoRoadRashGameCarDynamicPose : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* BodyRoot; // 0x18
		::System::Single DefaultBodyYOffset; // 0x20
		::System::Boolean EnableRoll; // 0x24
		::System::Boolean EnablePitch; // 0x25
		::System::Boolean EnableLateral; // 0x26
		::System::Boolean EnableSquat; // 0x27
		::System::Boolean EnableHighSpeedShake; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single MaxRollDegrees; // 0x2C
		::System::Single RollStiffness; // 0x30
		::System::Single RollDamping; // 0x34
		::System::Single ReleaseChargingRollReturnHalfTime; // 0x38
		::System::Single MaxPitchDegrees; // 0x3C
		::System::Single PitchStiffness; // 0x40
		::System::Single PitchDamping; // 0x44
		::System::Single MaxLateralOffset; // 0x48
		::System::Single LateralStiffness; // 0x4C
		::System::Single LateralDamping; // 0x50
		::System::Single MaxVerticalShift; // 0x54
		::System::Single SquatStiffness; // 0x58
		::System::Single SquatDamping; // 0x5C
		::System::Single SpeedFactorMultiplier; // 0x60
		::System::Single LandingImpactForce; // 0x64
		::System::Single HighSpeedShakeThreshold; // 0x68
		::System::Single HighSpeedShakeRollDegrees; // 0x6C
		::System::Single HighSpeedShakePitchRatio; // 0x70
		::System::Single HighSpeedShakeFrequency; // 0x74
		::System::Single KnockUpMaxVerticalLift; // 0x78
		::System::Single KnockUpMaxBackwardOffset; // 0x7C
		::System::Single KnockUpMaxLateralOffset; // 0x80
		::System::Single KnockUpDurationSec; // 0x84
		::UnityEngine::AnimationCurve* KnockUpLiftCurve; // 0x88
		::UnityEngine::AnimationCurve* KnockUpBackwardCurve; // 0x90
		::UnityEngine::AnimationCurve* KnockUpLateralCurve; // 0x98
		::System::Single KnockUpRotationPitchTotalDeg; // 0xA0
		::System::Single KnockUpRotationRollTotalDeg; // 0xA4
		::UnityEngine::AnimationCurve* KnockUpRotationCurve; // 0xA8
		::System::Single KnockUpInitialUpwardImpulse; // 0xB0
		::System::Single KnockUpInitialBackwardImpulse; // 0xB4
		::System::Single KnockUpInitialLateralImpulse; // 0xB8
		::System::Single KnockUpImpulseMaxLift; // 0xBC
		::System::Single KnockUpImpulseMaxBackward; // 0xC0
		::System::Single KnockUpImpulseMaxLateral; // 0xC4
		::System::Single KnockUpImpulseStiffness; // 0xC8
		::System::Single KnockUpImpulseDamping; // 0xCC
		::System::Single KnockUpRecoveryHalfTime; // 0xD0
		::System::Boolean EnableKnockUpAnchor; // 0xD4
		::System::Byte _padding1[0x3];
		::System::Single KnockUpAnchorBackwardDist; // 0xD8
		::System::Single KnockUpAnchorTransitionTimeSec; // 0xDC
		::System::Single KnockUpAnchorDurationSec; // 0xE0
		::System::Single KnockUpNoneLockExtraSec; // 0xE4
		::System::Single LandingMaxSquatDepth; // 0xE8
		::System::Single LandingMaxPitchDegrees; // 0xEC
		::System::Single LandingDefaultDurationSec; // 0xF0
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* LandingSquatCurve; // 0xF8
		::UnityEngine::AnimationCurve* LandingPitchCurve; // 0x100
		::System::Single LandingTailDropDegrees; // 0x108
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* LandingTailDropCurve; // 0x110
		::System::Single LandingMainRollAmplitudeDeg; // 0x118
		::System::Single LandingCoupledImpactSpeed; // 0x11C
		::System::Single LandingShakeAmplitude; // 0x120
		::System::Single LandingShakePitchAmplitudeDeg; // 0x124
		::System::Single LandingShakeRollAmplitudeDeg; // 0x128
		::System::Single LandingShakeFrequency; // 0x12C
		::System::Single LandingShakeRollFreqRatio; // 0x130
		::System::Single LandingShakeDecayHalfTime; // 0x134
		::System::Single AirborneMaxPitchDeg; // 0x138
		::System::Single AirbornePitchStiffness; // 0x13C
		::System::Single AirbornePitchDamping; // 0x140
		::System::Single AirborneExitDecayHalfTime; // 0x144
		::System::Single MaxDeltaTime; // 0x148
		::System::Single InputSmoothHalfTime; // 0x14C
		::System::Boolean EnableDebugLog; // 0x150
		::System::Byte _padding4[0x3];
		::System::Single DebugLogInterval; // 0x154
		::System::Single PHGCLMIHONC; // 0x158
		::System::Single JLLAFHLNOGB; // 0x15C
		::System::Single BKNNNNAHGPB; // 0x160
		::System::Single ILEAEKFPHMN; // 0x164
		::System::Single BGMALCODJGH; // 0x168
		::System::Single AGPLODOMOJH; // 0x16C
		::System::Single EGBNJPFLEAP; // 0x170
		::System::Single LDLKIMKEAJJ; // 0x174
		::System::Single DPOMOFKNJAE; // 0x178
		::System::Single EDIEOLJNMLF; // 0x17C
		::System::Boolean DMHLAFIHJBG; // 0x180
		::System::Byte _padding5[0x3];
		::System::Single PJIEHEEMFOA; // 0x184
		::System::Single EGGEEPDBNJC; // 0x188
		::System::Single CFDLCMGPHGF; // 0x18C
		::System::Single CGEFCAFCLMG; // 0x190
		::System::Single MOENNEKJJHJ; // 0x194
		::System::Single GOCKHHBDCIN; // 0x198
		::UnityEngine::Vector3 MICBAOBIOLO; // 0x19C
		::UnityEngine::Quaternion APPNCPHKJNM; // 0x1A8
		::System::Boolean HGIJNEEKOGG; // 0x1B8
		::System::Byte _padding6[0x3];
		::System::Single HBNMIJOBJJC; // 0x1BC
		::System::Single OCODLAGACDH; // 0x1C0
		::System::Single EIJEJLHPJJE; // 0x1C4
		::System::Boolean BIJGPDCPBHI; // 0x1C8
		::System::Byte _padding7[0x3];
		::System::Single LJPFKBAONIK; // 0x1CC
		::System::Single BKMNPHKHMDC; // 0x1D0
		::System::Single KKDDAAOOKDB; // 0x1D4
		::System::Single KLLEOIFFGBA; // 0x1D8
		::System::Single GBFKBPKPBLJ; // 0x1DC
		::System::Single KJEDPDFOABP; // 0x1E0
		::System::Single LKIAMFBILOH; // 0x1E4
		::System::Single CKCLNKFCHFN; // 0x1E8
		::System::Single BPNKKHAKIHO; // 0x1EC
		::System::Single HGIPNFDGHFD; // 0x1F0
		::System::Single IFGAJMNPKMD; // 0x1F4
		::System::Single AFMAGNHICEM; // 0x1F8
		::System::Boolean NFHJIANILCL; // 0x1FC
		::System::Byte _padding8[0x3];
		::System::Single CLBCAJMJJAN; // 0x200
		::System::Single IJLMNMHIKBA; // 0x204
		::System::Single EOMCBEBJGAE; // 0x208
		::System::Boolean BNDCIFFIDAF; // 0x20C
		::System::Byte _padding9[0x3];
		::System::Single HDFAOGOFCEJ; // 0x210
		::System::Single EACEJNAOLDF; // 0x214
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::RoadRash::EEngineState a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TICK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PrintDebugSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_PRINTDEBUGSNAPSHOT_OFFSET))(this);
		}

		::System::Single SamplePoseThrottle(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_SAMPLEPOSETHROTTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerLandingImpact(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TRIGGERLANDINGIMPACT_OFFSET))(this, a1);
		}

		::System::Void TriggerKnockUp(::RPG::Client::LittleGame::RoadRash::EKnockUpDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::EKnockUpDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TRIGGERKNOCKUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInKnockUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_ISINKNOCKUP_OFFSET))(this);
		}

		::System::Single get_KnockUpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPDURATION_OFFSET))(this);
		}

		::System::Boolean get_KnockUpAnchorEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORENABLED_OFFSET))(this);
		}

		::System::Single get_KnockUpAnchorBackwardDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORBACKWARDDISTANCE_OFFSET))(this);
		}

		::System::Single get_KnockUpAnchorTransitionTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORTRANSITIONTIME_OFFSET))(this);
		}

		::System::Single get_KnockUpAnchorDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPANCHORDURATION_OFFSET))(this);
		}

		::System::Single get_KnockUpNoneLockExtra()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPNONELOCKEXTRA_OFFSET))(this);
		}

		::System::Single get_KnockUpProgress01()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_KNOCKUPPROGRESS01_OFFSET))(this);
		}

		::System::Void TriggerLanding(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_TRIGGERLANDING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLanding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_ISINLANDING_OFFSET))(this);
		}

		::System::Single get_LandingDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_LANDINGDURATION_OFFSET))(this);
		}

		::System::Void SetAirborne(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_SETAIRBORNE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAirborne()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GET_ISAIRBORNE_OFFSET))(this);
		}

		::System::Void AOEJOOMGAKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_AOEJOOMGAKE_OFFSET))(this);
		}

		::System::Void GLMEMIOCLNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_GLMEMIOCLNO_OFFSET))(this);
		}

		::System::Void HMIDNEOGPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_HMIDNEOGPMD_OFFSET))(this);
		}

		::System::Void IAHPLMFOMJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_IAHPLMFOMJA_OFFSET))(this);
		}

		::System::Void FGHCBAGKMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_FGHCBAGKMMM_OFFSET))(this);
		}

		::System::Void ECCGJAHPFIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_ECCGJAHPFIO_OFFSET))(this);
		}

		::System::Void LEONDLEPJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_LEONDLEPJIP_OFFSET))(this);
		}

		::System::Void ResetPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_RESETPOSE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_AWAKE_OFFSET))(this);
		}

		::System::Void PGHNEPNFAAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_PGHNEPNFAAE_OFFSET))(this);
		}

		::System::Boolean HILIJBADPJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_HILIJBADPJH_OFFSET))(this);
		}

		::System::Boolean JLLLDIDMLAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_JLLLDIDMLAK_OFFSET))(this);
		}

		::System::Void INFFJMHAHCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_INFFJMHAHCP_OFFSET))(this);
		}

		static ::System::Void FENEPELKDKO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_FENEPELKDKO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void NJAEGJLJOAM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_NJAEGJLJOAM_OFFSET))(a1, a2, a3);
		}

		::System::Void NAJOPNMPHPF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECARDYNAMICPOSE_NAJOPNMPHPF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
}
