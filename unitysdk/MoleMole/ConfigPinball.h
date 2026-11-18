#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigPinball_PinballEntityTemplate; }
namespace MoleMole { class ConfigPinball_PinballTargetPresentationConfig; }
namespace MoleMole { class ConfigPinball_PinballTelemetryAbilityGroup; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGPINBALL_GETTARGETPRESENTATIONENABLEDBYTEMPLATEKEY_OFFSET UNITYSDK_OFFSET(0x1A05BFF0)
#define MOLEMOLE_CONFIGPINBALL_GET_AIMLINEHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A05B970)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINHALFLIFE_OFFSET UNITYSDK_OFFSET(0x1A05BAD0)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINMAXANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1A05BAC0)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINMINTANGENTSPEED_OFFSET UNITYSDK_OFFSET(0x1A05BAB0)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A05BAA0)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLROLLMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A05BA80)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLROLLPRESENTATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1A05BA60)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLROLLTELEPORTRESETDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A05BA90)
#define MOLEMOLE_CONFIGPINBALL_GET_BALLROLLVISUALROOTNAME_OFFSET UNITYSDK_OFFSET(0x1A05BA70)
#define MOLEMOLE_CONFIGPINBALL_GET_COLLISIONSEPARATIONSKIN_OFFSET UNITYSDK_OFFSET(0x1A05B9C0)
#define MOLEMOLE_CONFIGPINBALL_GET_COUNTDOWNWARNINGSECONDS_OFFSET UNITYSDK_OFFSET(0x1A05B910)
#define MOLEMOLE_CONFIGPINBALL_GET_DASHPREVIEWLOCKTARGETID_OFFSET UNITYSDK_OFFSET(0x1A05BBF0)
#define MOLEMOLE_CONFIGPINBALL_GET_DEFAULTMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1A05B860)
#define MOLEMOLE_CONFIGPINBALL_GET_DRAWDETAILEDDEBUGLINES_OFFSET UNITYSDK_OFFSET(0x1A05B980)
#define MOLEMOLE_CONFIGPINBALL_GET_ENTITYTEMPLATES_OFFSET UNITYSDK_OFFSET(0x1A05BB10)
#define MOLEMOLE_CONFIGPINBALL_GET_KNOCKBACKHALFLIFE_OFFSET UNITYSDK_OFFSET(0x1A05B8A0)
#define MOLEMOLE_CONFIGPINBALL_GET_LAUNCHANGLEMAX_OFFSET UNITYSDK_OFFSET(0x1A05B8F0)
#define MOLEMOLE_CONFIGPINBALL_GET_LAUNCHANGLEMIN_OFFSET UNITYSDK_OFFSET(0x1A05B8E0)
#define MOLEMOLE_CONFIGPINBALL_GET_LAUNCHERAIMLINEEFFECTPATTERN_OFFSET UNITYSDK_OFFSET(0x1A05B950)
#define MOLEMOLE_CONFIGPINBALL_GET_LAUNCHERAIMLINELENGTH_OFFSET UNITYSDK_OFFSET(0x1A05B930)
#define MOLEMOLE_CONFIGPINBALL_GET_LAUNCHSPEED_OFFSET UNITYSDK_OFFSET(0x1A05B8D0)
#define MOLEMOLE_CONFIGPINBALL_GET_LOWHPWARNINGRATIO_OFFSET UNITYSDK_OFFSET(0x1A05B920)
#define MOLEMOLE_CONFIGPINBALL_GET_MINSPEEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A05B870)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEAIMDISPLAYSKIN_OFFSET UNITYSDK_OFFSET(0x1A05BA30)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEAIMLINEEFFECTPATTERN_OFFSET UNITYSDK_OFFSET(0x1A05B960)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEAIMLINELENGTH_OFFSET UNITYSDK_OFFSET(0x1A05B940)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTSPEED_OFFSET UNITYSDK_OFFSET(0x1A05BA20)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTTRIGGEREFFECTCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1A05BB00)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTTRIGGEREFFECTDURATION_OFFSET UNITYSDK_OFFSET(0x1A05BAF0)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTTRIGGEREFFECTKEY_OFFSET UNITYSDK_OFFSET(0x1A05BAE0)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEFALLTIME_OFFSET UNITYSDK_OFFSET(0x1A05B9F0)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLELOCALRIGHTCATCHDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A05BA40)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLERAISETIME_OFFSET UNITYSDK_OFFSET(0x1A05B9E0)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLEROOTANGLE_OFFSET UNITYSDK_OFFSET(0x1A05BA00)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLESURFACEENDTOLERANCERATIO_OFFSET UNITYSDK_OFFSET(0x1A05BA50)
#define MOLEMOLE_CONFIGPINBALL_GET_PADDLETIPANGLE_OFFSET UNITYSDK_OFFSET(0x1A05BA10)
#define MOLEMOLE_CONFIGPINBALL_GET_RELAUNCHDELAY_OFFSET UNITYSDK_OFFSET(0x1A05B900)
#define MOLEMOLE_CONFIGPINBALL_GET_SAMETAGTARGETCOLLISIONIGNORETAGS_OFFSET UNITYSDK_OFFSET(0x1A05BB20)
#define MOLEMOLE_CONFIGPINBALL_GET_SLIDECONSTRAINTSKIN_OFFSET UNITYSDK_OFFSET(0x1A05B9D0)
#define MOLEMOLE_CONFIGPINBALL_GET_SLIDECORNERSTOPNORMALMINDOT_OFFSET UNITYSDK_OFFSET(0x1A05B890)
#define MOLEMOLE_CONFIGPINBALL_GET_SLIDECORNERSTOPSPEEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A05B880)
#define MOLEMOLE_CONFIGPINBALL_GET_TABLEACCELERATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A05B840)
#define MOLEMOLE_CONFIGPINBALL_GET_TABLEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A05B830)
#define MOLEMOLE_CONFIGPINBALL_GET_TARGETIMPULSEPROTECTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A05B8C0)
#define MOLEMOLE_CONFIGPINBALL_GET_TARGETKNOCKBACKMINSPEED_OFFSET UNITYSDK_OFFSET(0x1A05B8B0)
#define MOLEMOLE_CONFIGPINBALL_GET_TARGETPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1A05BB30)
#define MOLEMOLE_CONFIGPINBALL_GET_TELEMETRYABILITYGROUP_OFFSET UNITYSDK_OFFSET(0x1A04A870)
#define MOLEMOLE_CONFIGPINBALL_GET_WRITEDETAILEDDEBUGLOGS_OFFSET UNITYSDK_OFFSET(0x1A05B9A0)
#define MOLEMOLE_CONFIGPINBALL_HASUNIQUETEMPLATEKEYS_OFFSET UNITYSDK_OFFSET(0x1A05C500)
#define MOLEMOLE_CONFIGPINBALL_HASVALIDTABLEACCELERATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A05C320)
#define MOLEMOLE_CONFIGPINBALL_ISFINITEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A05C450)
#define MOLEMOLE_CONFIGPINBALL_ISTARGETPRESENTATIONENABLEDFORTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A05BDD0)
#define MOLEMOLE_CONFIGPINBALL_ISVALIDTEMPLATEKEY_OFFSET UNITYSDK_OFFSET(0x1A05BC00)
#define MOLEMOLE_CONFIGPINBALL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A05C2D0)
#define MOLEMOLE_CONFIGPINBALL_REBUILDTARGETPRESENTATIONENABLEDBYTEMPLATEKEY_OFFSET UNITYSDK_OFFSET(0x1A05C050)
#define MOLEMOLE_CONFIGPINBALL_SET_DRAWDETAILEDDEBUGLINES_OFFSET UNITYSDK_OFFSET(0x1A05B990)
#define MOLEMOLE_CONFIGPINBALL_SET_WRITEDETAILEDDEBUGLOGS_OFFSET UNITYSDK_OFFSET(0x1A05B9B0)
#define MOLEMOLE_CONFIGPINBALL_TRYGETENTITYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A04AD50)
#define MOLEMOLE_CONFIGPINBALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05C730)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPinball_TypeDefinitionIndex = 92184;

	class ConfigPinball : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* entityTemplates; // 0x58
		::MoleMole::ConfigPinball_PinballTelemetryAbilityGroup* telemetryAbilityGroup; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* targetPresentationEnabledByTemplateKey; // 0x68
		::MoleMole::ConfigPinball_PinballTargetPresentationConfig* targetPresentation; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* sameTagTargetCollisionIgnoreTags; // 0x78
		::System::Boolean ballRollPresentationEnabled; // 0x80
		::System::Byte _padding0[0x7];
		::System::String* ballRollVisualRootName; // 0x88
		::System::Single ballRollMultiplier; // 0x90
		::System::Single ballRollTeleportResetDistance; // 0x94
		::System::Single ballGlanceSpinMultiplier; // 0x98
		::System::Single ballGlanceSpinMinTangentSpeed; // 0x9C
		::System::Single ballGlanceSpinMaxAngularSpeed; // 0xA0
		::System::Single ballGlanceSpinHalfLife; // 0xA4
		::System::String* paddleEjectTriggerEffectKey; // 0xA8
		::System::Single paddleEjectTriggerEffectDuration; // 0xB0
		::System::Single paddleEjectTriggerEffectCooldown; // 0xB4
		::System::String* dashPreviewLockTargetId; // 0xB8
		::System::Single tableAcceleration; // 0xC0
		::UnityEngine::Vector3 tableAccelerationDirection; // 0xC4
		::System::Single defaultMaxSpeed; // 0xD0
		::System::Single minSpeedThreshold; // 0xD4
		::System::Single slideCornerStopSpeedThreshold; // 0xD8
		::System::Single slideCornerStopNormalMinDot; // 0xDC
		::System::Single knockbackHalfLife; // 0xE0
		::System::Single targetKnockbackMinSpeed; // 0xE4
		::System::Single targetImpulseProtectionDuration; // 0xE8
		::System::Single launchSpeed; // 0xEC
		::System::Single launchAngleMin; // 0xF0
		::System::Single launchAngleMax; // 0xF4
		::System::Single relaunchDelay; // 0xF8
		::System::Int32 countdownWarningSeconds; // 0xFC
		::System::Single lowHpWarningRatio; // 0x100
		::System::Single launcherAimLineLength; // 0x104
		::System::Single paddleAimLineLength; // 0x108
		::System::Byte _padding1[0x4];
		::System::String* launcherAimLineEffectPattern; // 0x110
		::System::String* paddleAimLineEffectPattern; // 0x118
		::System::Single aimLineHeightOffset; // 0x120
		::System::Boolean drawDetailedDebugLines; // 0x124
		::System::Boolean writeDetailedDebugLogs; // 0x125
		::System::Byte _padding2[0x2];
		::System::Single collisionSeparationSkin; // 0x128
		::System::Single slideConstraintSkin; // 0x12C
		::System::Single paddleRaiseTime; // 0x130
		::System::Single paddleFallTime; // 0x134
		::System::Single paddleRootAngle; // 0x138
		::System::Single paddleTipAngle; // 0x13C
		::System::Single paddleEjectSpeed; // 0x140
		::System::Single paddleAimDisplaySkin; // 0x144
		::System::Single paddleLocalRightCatchDistance; // 0x148
		::System::Single paddleSurfaceEndToleranceRatio; // 0x14C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL__CTOR_OFFSET))(this);
		}

		::System::Single get_TableAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_TABLEACCELERATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_TableAccelerationDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_TABLEACCELERATIONDIRECTION_OFFSET))(this);
		}

		::System::Single get_DefaultMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_DEFAULTMAXSPEED_OFFSET))(this);
		}

		::System::Single get_MinSpeedThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_MINSPEEDTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_SlideCornerStopSpeedThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_SLIDECORNERSTOPSPEEDTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_SlideCornerStopNormalMinDot()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_SLIDECORNERSTOPNORMALMINDOT_OFFSET))(this);
		}

		::System::Single get_KnockbackHalfLife()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_KNOCKBACKHALFLIFE_OFFSET))(this);
		}

		::System::Single get_TargetKnockbackMinSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_TARGETKNOCKBACKMINSPEED_OFFSET))(this);
		}

		::System::Single get_TargetImpulseProtectionDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_TARGETIMPULSEPROTECTIONDURATION_OFFSET))(this);
		}

		::System::Single get_LaunchSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_LAUNCHSPEED_OFFSET))(this);
		}

		::System::Single get_LaunchAngleMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_LAUNCHANGLEMIN_OFFSET))(this);
		}

		::System::Single get_LaunchAngleMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_LAUNCHANGLEMAX_OFFSET))(this);
		}

		::System::Single get_RelaunchDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_RELAUNCHDELAY_OFFSET))(this);
		}

		::System::Int32 get_CountdownWarningSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_COUNTDOWNWARNINGSECONDS_OFFSET))(this);
		}

		::System::Single get_LowHpWarningRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_LOWHPWARNINGRATIO_OFFSET))(this);
		}

		::System::Single get_LauncherAimLineLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_LAUNCHERAIMLINELENGTH_OFFSET))(this);
		}

		::System::Single get_PaddleAimLineLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEAIMLINELENGTH_OFFSET))(this);
		}

		::System::String* get_LauncherAimLineEffectPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_LAUNCHERAIMLINEEFFECTPATTERN_OFFSET))(this);
		}

		::System::String* get_PaddleAimLineEffectPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEAIMLINEEFFECTPATTERN_OFFSET))(this);
		}

		::System::Single get_AimLineHeightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_AIMLINEHEIGHTOFFSET_OFFSET))(this);
		}

		::System::Boolean get_DrawDetailedDebugLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_DRAWDETAILEDDEBUGLINES_OFFSET))(this);
		}

		::System::Void set_DrawDetailedDebugLines(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_SET_DRAWDETAILEDDEBUGLINES_OFFSET))(this, value);
		}

		::System::Boolean get_WriteDetailedDebugLogs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_WRITEDETAILEDDEBUGLOGS_OFFSET))(this);
		}

		::System::Void set_WriteDetailedDebugLogs(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_SET_WRITEDETAILEDDEBUGLOGS_OFFSET))(this, value);
		}

		::System::Single get_CollisionSeparationSkin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_COLLISIONSEPARATIONSKIN_OFFSET))(this);
		}

		::System::Single get_SlideConstraintSkin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_SLIDECONSTRAINTSKIN_OFFSET))(this);
		}

		::System::Single get_PaddleRaiseTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLERAISETIME_OFFSET))(this);
		}

		::System::Single get_PaddleFallTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEFALLTIME_OFFSET))(this);
		}

		::System::Single get_PaddleRootAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEROOTANGLE_OFFSET))(this);
		}

		::System::Single get_PaddleTipAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLETIPANGLE_OFFSET))(this);
		}

		::System::Single get_PaddleEjectSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTSPEED_OFFSET))(this);
		}

		::System::Single get_PaddleAimDisplaySkin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEAIMDISPLAYSKIN_OFFSET))(this);
		}

		::System::Single get_PaddleLocalRightCatchDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLELOCALRIGHTCATCHDISTANCE_OFFSET))(this);
		}

		::System::Single get_PaddleSurfaceEndToleranceRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLESURFACEENDTOLERANCERATIO_OFFSET))(this);
		}

		::System::Boolean get_BallRollPresentationEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLROLLPRESENTATIONENABLED_OFFSET))(this);
		}

		::System::String* get_BallRollVisualRootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLROLLVISUALROOTNAME_OFFSET))(this);
		}

		::System::Single get_BallRollMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLROLLMULTIPLIER_OFFSET))(this);
		}

		::System::Single get_BallRollTeleportResetDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLROLLTELEPORTRESETDISTANCE_OFFSET))(this);
		}

		::System::Single get_BallGlanceSpinMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINMULTIPLIER_OFFSET))(this);
		}

		::System::Single get_BallGlanceSpinMinTangentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINMINTANGENTSPEED_OFFSET))(this);
		}

		::System::Single get_BallGlanceSpinMaxAngularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINMAXANGULARSPEED_OFFSET))(this);
		}

		::System::Single get_BallGlanceSpinHalfLife()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_BALLGLANCESPINHALFLIFE_OFFSET))(this);
		}

		::System::String* get_PaddleEjectTriggerEffectKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTTRIGGEREFFECTKEY_OFFSET))(this);
		}

		::System::Single get_PaddleEjectTriggerEffectDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTTRIGGEREFFECTDURATION_OFFSET))(this);
		}

		::System::Single get_PaddleEjectTriggerEffectCooldown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_PADDLEEJECTTRIGGEREFFECTCOOLDOWN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_EntityTemplates()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_ENTITYTEMPLATES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_SameTagTargetCollisionIgnoreTags()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_SAMETAGTARGETCOLLISIONIGNORETAGS_OFFSET))(this);
		}

		::MoleMole::ConfigPinball_PinballTelemetryAbilityGroup* get_TelemetryAbilityGroup()
		{
			return ((::MoleMole::ConfigPinball_PinballTelemetryAbilityGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_TELEMETRYABILITYGROUP_OFFSET))(this);
		}

		::MoleMole::ConfigPinball_PinballTargetPresentationConfig* get_TargetPresentation()
		{
			return ((::MoleMole::ConfigPinball_PinballTargetPresentationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_TARGETPRESENTATION_OFFSET))(this);
		}

		::System::String* get_DashPreviewLockTargetId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GET_DASHPREVIEWLOCKTARGETID_OFFSET))(this);
		}

		::System::Boolean TryGetEntityTemplate(::System::String* key, ::MoleMole::ConfigPinball_PinballEntityTemplate*& template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::ConfigPinball_PinballEntityTemplate*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_TRYGETENTITYTEMPLATE_OFFSET))(this, key, template_);
		}

		::System::Boolean IsTargetPresentationEnabledForTemplate(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_ISTARGETPRESENTATIONENABLEDFORTEMPLATE_OFFSET))(this, key);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* GetTargetPresentationEnabledByTemplateKey()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_GETTARGETPRESENTATIONENABLEDBYTEMPLATEKEY_OFFSET))(this);
		}

		::System::Void RebuildTargetPresentationEnabledByTemplateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_REBUILDTARGETPRESENTATIONENABLEDBYTEMPLATEKEY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean HasValidTableAccelerationDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_HASVALIDTABLEACCELERATIONDIRECTION_OFFSET))(this);
		}

		::System::Boolean HasUniqueTemplateKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_HASUNIQUETEMPLATEKEYS_OFFSET))(this);
		}

		static ::System::Boolean IsValidTemplateKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_ISVALIDTEMPLATEKEY_OFFSET))(key);
		}

		static ::System::Boolean IsFiniteVector(::UnityEngine::Vector3 value)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_ISFINITEVECTOR_OFFSET))(value);
		}
	};
}
