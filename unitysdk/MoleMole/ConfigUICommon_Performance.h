#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigMobileSetting; }
namespace MoleMole { class ConfigSummerMainPageGyro; }
namespace MoleMole { class ConfigWeakPanel; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class RoleHudSpColorConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_TRYGETITEMRTROTATESPEED_OFFSET UNITYSDK_OFFSET(0x1A05E950)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05EA00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Performance_TypeDefinitionIndex = 40969;

	class ConfigUICommon_Performance : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Color grayRampColorA; // 0x58
		::UnityEngine::Color grayRampColorB; // 0x68
		::MoleMole::RoleHudSpColorConfig* secondStageSpColorConfig; // 0x78
		::MoleMole::RoleHudSpColorConfig* fullStageSpColorConfig; // 0x80
		::UnityEngine::Color rpGrayRampColorA; // 0x88
		::UnityEngine::Color rpGrayRampColorB; // 0x98
		::MoleMole::RoleHudSpColorConfig* secondStageRpColorConfig; // 0xA8
		::MoleMole::RoleHudSpColorConfig* fullStageRpColorConfig; // 0xB0
		::UnityEngine::Color epGrayRampColorA; // 0xB8
		::UnityEngine::Color epGrayRampColorB; // 0xC8
		::MoleMole::RoleHudSpColorConfig* secondStageEpColorConfig; // 0xD8
		::MoleMole::RoleHudSpColorConfig* fullStageEpColorConfig; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>* IconOverrideSizeMap; // 0xE8
		::MoleMole::PropBgLevel* CustomPropConfig; // 0xF0
		::System::Single perfectSwitchLine; // 0xF8
		::System::Byte _padding0[0x4];
		::MoleMole::RoleHudSpColorConfig* firstStageSpColorConfig; // 0x100
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>* payConfigs; // 0x108
		::UnityEngine::Color ActiveRampColorA; // 0x110
		::UnityEngine::Color ActiveRampColorB; // 0x120
		::UnityEngine::Color UnActiveRampColorA; // 0x130
		::UnityEngine::Color UnActiveRampColorB; // 0x140
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadStartEffect; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadEndEffect; // 0x158
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadLoopEffect; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>* virtualCameraConfig; // 0x168
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>* generalIconColorConfig; // 0x170
		::System::Single MinLoadingTime; // 0x178
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* RamenPerformDict; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CafePerformDict; // 0x188
		::System::String* CoffeeBindingTrackName; // 0x190
		::System::String* CoffeeBindingCupMaterialTrackName; // 0x198
		::System::String* CoffeeBindingSaucerMaterialTrackName; // 0x1A0
		::System::String* CoffeeBindingCoffeeMaterialTrackName; // 0x1A8
		::System::String* CoffeeDynamicLayer; // 0x1B0
		::System::Single CafePerformanceBMFadeInTime; // 0x1B8
		::System::Single CafePerformanceBMFadeOutTime; // 0x1BC
		::System::Single EquipRTRotateSpeed; // 0x1C0
		::System::Single WeaponRTRotateSpeed; // 0x1C4
		::System::Single WeaponRTTriggerPerformRotateAngle; // 0x1C8
		::System::Int32 ZhenzhenSpecialWeaponItemID; // 0x1CC
		::System::Single ZhenzhenWeaponRootRotateSpeed; // 0x1D0
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* ItemRTRotateSpeedMap; // 0x1D8
		::System::Single ToPageFadeInTime; // 0x1E0
		::System::Single SkipTime; // 0x1E4
		::System::Single GamepadSliderPressSpeedUpMaxSpeedRatio; // 0x1E8
		::System::Single GamepadSliderPressSpeedUpStartTime; // 0x1EC
		::System::Single GamepadSliderPressSpeedUpReachMaxSpeedTime; // 0x1F0
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* GamepadSliderPressSpeedUpAnimationCurve; // 0x1F8
		::System::Single GamepadSliderPressSpeedUpResetTimerMaxTime; // 0x200
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>* MainCityLogicInputAccessDict; // 0x208
		::System::String* ManualQTEOffVideoPath; // 0x210
		::System::String* ManualQTEOnVideoPath; // 0x218
		::System::String* MainQuestDifficultyNormalImagePath; // 0x220
		::System::String* MainQuestDifficultyChallengeImagePath; // 0x228
		::System::Single GeneralSmallTipsLifeTime; // 0x230
		::System::Single MaskWaitTime; // 0x234
		::System::Single InLevelVirtualJoystickFadeOutDelayTime; // 0x238
		::System::Byte _padding5[0x4];
		::System::String* infoBox; // 0x240
		::System::Single DirectionSkillPhaseChangeCDTime; // 0x248
		::System::Single DirectionSkillDirectionChangeCDTime; // 0x24C
		::Foundation::AssetPath DirectionSkillUpBtnIconPath; // 0x250
		::Foundation::AssetPath DirectionSkillDownBtnIconPath; // 0x260
		::Foundation::AssetPath DirectionSkillLeftBtnIconPath; // 0x270
		::Foundation::AssetPath DirectionSkillRightBtnIconPath; // 0x280
		::System::Single DirectionSkillUpHoldTime; // 0x290
		::System::Single DirectionSkillDownHoldTime; // 0x294
		::System::Single DirectionSkillLeftHoldTime; // 0x298
		::System::Single DirectionSkillRightHoldTime; // 0x29C
		::Foundation::AssetPath DirectionSkillButtonSelectProgressMatPath; // 0x2A0
		::Foundation::AssetPath SupportAttackBtnIconPath; // 0x2B0
		::Foundation::AssetPath RemielleSupportAttackBtnIconPath; // 0x2C0
		::Foundation::AssetPath LindverneSupportAttackBtnIconPath; // 0x2D0
		::Foundation::AssetPath ForbiddenAreaSwordBtnIconPath; // 0x2E0
		::Foundation::AssetPath GoldenBangbooCommonBtnIconPath; // 0x2F0
		::System::Single HudDynamicOffsetYSpeed; // 0x300
		::System::Single HudDynamicOffsetThresholdY; // 0x304
		::System::Single HudDynamicOffsetXSpeed; // 0x308
		::System::Single HudDynamicOffsetThresholdX; // 0x30C
		::System::Single ShieldHudDynamicOffsetYSpeed; // 0x310
		::System::Single ShieldHudDynamicOffsetThresholdY; // 0x314
		::System::Single ShieldHudDynamicOffsetXSpeed; // 0x318
		::System::Single ShieldHudDynamicOffsetThresholdX; // 0x31C
		::System::Int32 MalePhoneDelay; // 0x320
		::System::Int32 FemalePhoneDelay; // 0x324
		::MoleMole::ConfigMobileSetting* ConfigMobileSetting; // 0x328
		::MoleMole::ConfigWeakPanel* ConfigWeakPanel; // 0x330
		::Foundation::AssetPath HitBackAttackCommonBtnIconPath; // 0x338
		::System::String* HitBackAttackCommonBtnReadyMaterialPath; // 0x348
		::System::String* HitBackAttackCommonBtnCoolDownMaterialPath; // 0x350
		::MoleMole::ConfigSummerMainPageGyro* ConfigSummerMainPageGyro; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetItemRTRotateSpeed(::System::Int32 itemID, ::System::Single& rotateSpeed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_TRYGETITEMRTROTATESPEED_OFFSET))(this, itemID, rotateSpeed);
		}
	};
}
