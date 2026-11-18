#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigColor.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceSummon.h"
#include "unitysdk/MoleMole/Config/WeaponEuler.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2C980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_TypeDefinitionIndex = 41173;

	class ConfigGachaPerformMisc : public ::System::Object
	{
	public:
		::System::String* CamShakeKey; // 0x10
		::System::String* UITextMoveCurve; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>* TvRarityEffAnimShowOffset; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::Config::ConfigColor>* UITextColors; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::WeaponEuler>* WeaponEulers; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake* WeaponShakeConfig; // 0x38
		::System::String* CamRarityEff_ItemStage; // 0x40
		::UnityEngine::AnimationCurve* ActivateAnimCurve; // 0x48
		::MoleMole::Config::ConfigEntityGaussianBlurEffect* GaussianBlurResetParams; // 0x50
		::System::String* BlackCurtainCurve; // 0x58
		::System::String* TvCommonEffAnim_ItemStage; // 0x60
		::System::String* UITextTwinkleCurve; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* StageRotateScreenEffects; // 0x70
		::System::String* CamRotAxisYCurve_HalfCircle; // 0x78
		::System::String* WeaponCamShakeKey; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects_ItemStage; // 0x88
		::System::String* CamEff_Rotate; // 0x90
		::System::String* CamRarityEff_Common; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* TvRarityEffAnimations; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Color>* ItemLightColors; // 0xA8
		::System::String* CamRotAxisYCurve_Circle; // 0xB0
		::System::String* NonGachaCamFovCurve; // 0xB8
		::System::String* WeaponRotCurve; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* WeaponTriggerAnimDelayOffsets; // 0xC8
		::System::String* BangbooCamShakeKey; // 0xD0
		::System::String* UITextFadeInCurve; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>* PlatformHeights; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceSummon>*>* Summons; // 0xE8
		::System::String* SpeedUpCurve; // 0xF0
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects; // 0xF8
		::System::String* WeaponLightColorIntensityCurve; // 0x100
		::System::String* UITextIntensityCurve; // 0x108
		::System::String* CamRarityEff_Openning; // 0x110
		::System::String* GachaRewardWindowEffect; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>* TvRarityEffShowOffset; // 0x120
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* PersistentScreenEffects; // 0x128
		::System::String* NonGachaFadeInBlackCurtainCurve; // 0x130
		::System::Single ShowRewardInterval; // 0x138
		::System::Single WeaponPerlinScale; // 0x13C
		::System::Single NonGachaRarityScreenEffTLStartOffset; // 0x140
		::System::Single UITextMoveDuration; // 0x144
		::System::Single WeaponAnglePerlinScale; // 0x148
		::System::Single WeaponScale; // 0x14C
		::System::Single DelayShowRewardsTime; // 0x150
		::System::Single CommonWeaponTriggerAnimDelayOffset; // 0x154
		::System::Single CamRotAxisYDuartion_Circle; // 0x158
		::System::Single NonGachaFovDuration; // 0x15C
		::System::Single AvatarAnimationPlayOffset; // 0x160
		::System::Single SkipAllSRarityStartRotTimeOffset; // 0x164
		::System::Single GaussianBlurTilling; // 0x168
		::System::Single UITextTwinkleDuration; // 0x16C
		::System::Single RewardItemPlaySoundDelay; // 0x170
		::System::Single SkipAllDelay; // 0x174
		::System::Single WeaponAngleFloatingDelay; // 0x178
		::System::Single BangbooScale; // 0x17C
		::System::Single NonGachaAnimationKeyDelay; // 0x180
		::System::Single CamRotAxisYDuartion_HalfCircle; // 0x184
		::System::Single UITextMoveDistance1; // 0x188
		::System::Single OpenningDelayEnd; // 0x18C
		::System::Single UITextMoveThinkInterval; // 0x190
		::System::Single UITextSpeedUpScale; // 0x194
		::System::Single NonGachaCamFromFov; // 0x198
		::System::Single RolePoolBlackMaskTime; // 0x19C
		::UnityEngine::Vector3 WeaponStayEuler; // 0x1A0
		::System::Single OpenningFirst3TvInterval; // 0x1AC
		::System::Single AnimationKeyDelay_Circle; // 0x1B0
		::System::Boolean MainLightsUseCutscene; // 0x1B4
		::System::Boolean ClockwiseRot; // 0x1B5
		::System::Byte _padding0[0x2];
		::System::Single ShowConfirmBtnDelay; // 0x1B8
		::System::Single NextItemProtectTime; // 0x1BC
		::System::Single AnimationKeyDelay_HalfCircle; // 0x1C0
		::System::Single CamEff_Rotate_Delay_Circle; // 0x1C4
		::System::Single CamEff_Rotate_Delay_HalfCircle; // 0x1C8
		::System::Single RaritySScreenEffectsOffset; // 0x1CC
		::System::Single AvatarTextshotTLDelay; // 0x1D0
		::System::Single UITextIntensityDuration; // 0x1D4
		::System::Single WeaponFloatingStrength; // 0x1D8
		::System::Single WeaponPosY; // 0x1DC
		::System::Single ShowGachaRewardWindowEffectDelay; // 0x1E0
		::UnityEngine::Vector3 WeaponInitEuler; // 0x1E4
		::System::Single WeaponLightColorIntensityDuration; // 0x1F0
		::System::Int32 GachaPerformTemplateID; // 0x1F4
		::System::Single UITextMoveDistance3; // 0x1F8
		::System::Single WeaponRotDuration; // 0x1FC
		::System::Single TvShowInterval; // 0x200
		::System::Single UITextMoveDistance2; // 0x204
		::System::Single WeaponLightColorIntensity; // 0x208
		::System::Single First4ShotsProtectTime; // 0x20C
		::System::Single NonGachaFadeInBlackCurtainDuration; // 0x210
		::System::Single BlackCurtainDuration; // 0x214
		::System::Single WeaponAngleFloatingStrength; // 0x218
		::System::Single NonGachaCamToFov; // 0x21C
		::System::Single WeaponFloatingDelay; // 0x220
		::System::Single ActivateAnimInterval; // 0x224

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMMISC__CTOR_OFFSET))(this);
		}
	};
}
