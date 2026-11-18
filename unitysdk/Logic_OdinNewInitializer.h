#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/MoleMole/Battle/BulletHoleUpdateStrategy.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Battle/FocusCameraTargetActivePolicy.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/MoleMole/Battle/SideScrollingHeatKillMonsterType.h"
#include "unitysdk/MoleMole/Battle/SideScrollingScoreGetType.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayBoundsCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayCaseCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayManualCfg.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/AttackEffectTriggerAt.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/MoleMole/Config/CauseDisorderConfig.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineConfig.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/MoleMole/Config/ConfigAttackPatternType.h"
#include "unitysdk/MoleMole/Config/ConfigAutoMoveMode.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicAttachmentAnimSync.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraPieceAudioVolumeRank.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraSafeZone.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/MoleMole/Config/ConfigMedalGuide.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ETrainingRoomItemType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/MoleMole/Config/FeverBeingHitType.h"
#include "unitysdk/MoleMole/Config/FeverModifyType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"
#include "unitysdk/MoleMole/Config/GalSplitScreenParam.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/MoleMole/Config/HitWallEffectNormalEnum.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/Config/LevelPointType.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/Config/RayByAxis.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/MoleMole/Config/WallColliderLayerType.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkelem.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkweapon.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Imactlevel.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/MoleMole/GalGame/ArgueGeneralUIState.h"
#include "unitysdk/MoleMole/GalGame/ArgueScreenShiftMode.h"
#include "unitysdk/MoleMole/GalGame/ChatSetAvatarVisible.h"
#include "unitysdk/MoleMole/GalGame/DoubleScreenShiftState.h"
#include "unitysdk/MoleMole/GalGame/GalArgueGoalMode.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalGameImgExchangeType.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatCameraPassThroughTarget.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatIKType.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSectionHelperType.h"
#include "unitysdk/MoleMole/HollowChessboard/ShowEntryType.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityTemplateConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeConfig.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeTemplate.h"
#include "unitysdk/MoleMole/Level/LevelZeroMonsterWaveLimit.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/AbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/AvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/DistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/LightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MatCapType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueDistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueLightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValuePointSpace.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueScreenMaskUVType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueSecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/OverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/PointSpace.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ScreenMaskUVType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/SecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/VertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerAddedTextureStatus.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerMainStatus.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseSpineEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseTrackHeadEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSpineEmojiData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseTrackHeadEmojiData.h"
#include "unitysdk/MoleMole/Timeline/CallCameraEffectActionType.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/MoleMole/ActivityResSettingTag.h"
#include "unitysdk/MoleMole/ActivityRhythmClickCurveParamsStruct.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/MoleMole/BladeIllusionNPCInfo.h"
#include "unitysdk/MoleMole/BulletDamageDecalType.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/CinemaCameraFogEffectOffset.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaDistanceRatioRotationStruct.h"
#include "unitysdk/MoleMole/CinemaProjectorStruct.h"
#include "unitysdk/MoleMole/CinemaSingleClickCurveParamsStruct.h"
#include "unitysdk/MoleMole/ConfigCinemaDepthOfFieldParam.h"
#include "unitysdk/MoleMole/ConfigCinemaFogParam.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/EtherEyesHintInfoType.h"
#include "unitysdk/MoleMole/FuncSwitchType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/I18nImageCollection.h"
#include "unitysdk/MoleMole/InLevelChatConfig.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/LightbarCurveEntry.h"
#include "unitysdk/MoleMole/LightbarPresetEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/MonoEffectExtensionEnum.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/MoleMole/VoidFrontSubGameType.h"
#include "unitysdk/MoleMole/WeaponDamageDecalType.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusConfig.h"
#include "unitysdk/NPCCrowd/AI/ReactionConfig.h"
#include "unitysdk/NPCCrowd/Animation/MontageTransitionConfig.h"
#include "unitysdk/NPCCrowd/Animation/StateMachineTransitionConfig.h"
#include "unitysdk/NapStreaming/PVSUnloadData.h"
#include "unitysdk/NapStreaming/SceneDensityInfo.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/ProtoScript/ChessUIColor.h"
#include "unitysdk/ProtoScript/DirectType.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Share/EPerformInterruptType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class BubbleProgressColor;
class MainCityObjectState_ScriptConfig;
class NumberBlinkConfig;
class VideoFrameColor;
namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace MoleMole { class ActivitBGAnimationSequence; }
namespace MoleMole { class ActivitBGSpineSequence; }
namespace MoleMole { class ActivityColorImageSetting; }
namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class AvatarShowSettingDefault; }
namespace MoleMole { class AvatarUIElementColor; }
namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace MoleMole { class BaseInputActionEventConfig; }
namespace MoleMole { class BattleEvaluteConfigs; }
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class CameraChangeType; }
namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CardOptionConfigs; }
namespace MoleMole { class CardOptionRarityConfigs; }
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigCinemaMoveCurve; }
namespace MoleMole { class ConfigCurveDataInfo; }
namespace MoleMole { class ConfigEnvironmentFeatureModifier; }
namespace MoleMole { class ConfigGalgameShakeData; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigGroundPositionBlendModifier; }
namespace MoleMole { class ConfigLinearSlopeDamper; }
namespace MoleMole { class ConfigLinearStepStairDamper; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole { class ConfigStairVelocityModifier; }
namespace MoleMole { class ConfigTempleLevelUpSetting; }
namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class HollowCardCombineAnimationConfigs; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class IScreenLayout; }
namespace MoleMole { class InterknotPostHeightDic; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class ItemRarityConfigs; }
namespace MoleMole { class LightOverrideShowSetting; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class QTECameraBaseInfo; }
namespace MoleMole { class QTECameraInfo; }
namespace MoleMole { class RandomTextureSheetData; }
namespace MoleMole { class RoleRarityIconConfigs; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class SkinOverrideShowSetting; }
namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class Traffic_Area; }
namespace MoleMole { class UIAdaptorParams; }
namespace MoleMole { class UIAdataporRectTransform; }
namespace MoleMole { class UIAvatarAnimationSetting; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace MoleMole { class UIAvatarCommonLigtOpenType; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace MoleMole { class UIModelBgSetting; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace MoleMole { class UIVolumeOpenType_Select; }
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Battle { class MorphBallConfig; }
namespace MoleMole::Battle { class MorphBallPhysicsSwitch; }
namespace MoleMole::Battle { class MorphBallSwitchChecker; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::ChessStateMachine { class LayerConfig; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }
namespace MoleMole::ChessStateMachine { class TransitionConfig; }
namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZone; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class AttackPropWrap; }
namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class AudioBasePath; }
namespace MoleMole::Config { class AudioRTPCConvert; }
namespace MoleMole::Config { class BaseConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class BlackMaskFadeConfig; }
namespace MoleMole::Config { class BuddyOutlineConfig; }
namespace MoleMole::Config { class BuffAttackProperty; }
namespace MoleMole::Config { class BuffVariantElementAttack; }
namespace MoleMole::Config { class CameraStoryDataEntry; }
namespace MoleMole::Config { class ChessBoardCutSceneKeyConfig; }
namespace MoleMole::Config { class ChessboardCoinSoundConfig; }
namespace MoleMole::Config { class ChessboardEffectConfig; }
namespace MoleMole::Config { class ChessboardFrontViewConfig; }
namespace MoleMole::Config { class ChessboardGIConfig; }
namespace MoleMole::Config { class ChessboardJoystickConfig; }
namespace MoleMole::Config { class ChessboardPathConfig; }
namespace MoleMole::Config { class ChessboardScreenEffectConfigV2; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class CollisionDetect; }
namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace MoleMole::Config { class ConfigAttackActiveFrameDynamicProp; }
namespace MoleMole::Config { class ConfigAudioFetchAnimatorParam; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace MoleMole::Config { class ConfigBlockedChessPiece; }
namespace MoleMole::Config { class ConfigBurnBuff; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigCatalysisBuff; }
namespace MoleMole::Config { class ConfigChaosBuff; }
namespace MoleMole::Config { class ConfigChessSkin; }
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigCommonBuff; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace MoleMole::Config { class ConfigElectricBuff; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace MoleMole::Config { class ConfigErosionBuff; }
namespace MoleMole::Config { class ConfigFeverLevel; }
namespace MoleMole::Config { class ConfigFeverMode; }
namespace MoleMole::Config { class ConfigFinishedChessPiece; }
namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace MoleMole::Config { class ConfigFocusCameraEntry; }
namespace MoleMole::Config { class ConfigFrontVideoChessPiece; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace MoleMole::Config { class ConfigGachaPerformanceLight; }
namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace MoleMole::Config { class ConfigHitInhalationEffect; }
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace MoleMole::Config { class ConfigHollowCameraDrag; }
namespace MoleMole::Config { class ConfigHollowCameraEasing; }
namespace MoleMole::Config { class ConfigHollowCameraFollow; }
namespace MoleMole::Config { class ConfigHollowCameraInit; }
namespace MoleMole::Config { class ConfigHollowCameraLight; }
namespace MoleMole::Config { class ConfigHollowCameraMoveToCenter; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace MoleMole::Config { class ConfigHollowCameraTranslation; }
namespace MoleMole::Config { class ConfigHollowLevelEnd; }
namespace MoleMole::Config { class ConfigHollowPlayerMove; }
namespace MoleMole::Config { class ConfigIgniteBuff; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace MoleMole::Config { class ConfigLevelResultPerform; }
namespace MoleMole::Config { class ConfigOverloadBuff; }
namespace MoleMole::Config { class ConfigPageCameraBase; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace MoleMole::Config { class ConfigSoundAction_SwitchAction; }
namespace MoleMole::Config { class ConfigSpecialTraining; }
namespace MoleMole::Config { class ConfigStrikeBuff; }
namespace MoleMole::Config { class ConfigTeamComboSetting; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace MoleMole::Config { class ConfigTriDiceAnimationCurveGroup; }
namespace MoleMole::Config { class ConfigTurnback; }
namespace MoleMole::Config { class ConfigUICameraStretch; }
namespace MoleMole::Config { class ConfigUIGachaConfigContainer; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace MoleMole::Config { class ConfigUISettings; }
namespace MoleMole::Config { class ConfigVariantElementOverrideBuff; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace MoleMole::Config { class ConfigWindBuff; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class DevicePerformanceConfig; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }
namespace MoleMole::Config { class EtherEyesOutlineConfig; }
namespace MoleMole::Config { class FootPrintConfig; }
namespace MoleMole::Config { class HackObjectTrait; }
namespace MoleMole::Config { class HitEffectMapItem; }
namespace MoleMole::Config { class HitGroundWrap; }
namespace MoleMole::Config { class HitRotationOverrideMapItem; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace MoleMole::Config { class HollowBigWorldConfig; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace MoleMole::Config { class HollowChessboardUvAnimConfig; }
namespace MoleMole::Config { class HollowEffectConfig; }
namespace MoleMole::Config { class HollowNapEffectConfig; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace MoleMole::Config { class InputActionTextIconConfig; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace MoleMole::Config { class LightBreathData; }
namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarUIShowInfo; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace MoleMole::Config { class ScreenUIAtlasRectData; }
namespace MoleMole::Config { class ShakeWrap; }
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace MoleMole::Config { class SpaceEffectBaseConfig; }
namespace MoleMole::Config { class UICameraSettingData; }
namespace MoleMole::Config { class VirtualSpaceLineEffectConfig; }
namespace MoleMole::Config { class ZoneEffectConfig; }
namespace MoleMole::GalGame { class ArgueGeneralUIStateConfig; }
namespace MoleMole::GalGame { class ArgueSplitScreenMoveConfig; }
namespace MoleMole::GalGame { class ArgueStoryNodeConfig; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class BranchItem; }
namespace MoleMole::GalGame { class ChatPlusInitCfg; }
namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class GalGameActionBase; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalPlayableSegment; }
namespace MoleMole::GalGame { class GalSingleSpeakerData; }
namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class MainCityChatActionBase; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatCameraParam; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatQuestTrackItem; }
namespace MoleMole::GalGame { class MainCityChatRandomChoiceDisplayItem; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace MoleMole::GalGame { class PlayerAccessoryCfg; }
namespace MoleMole::GalGame { class SetGroupMemberTransformCfg; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace MoleMole::GalGame { class SwitchSceneConfig; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace MoleMole::GalGame { class TagStringPair; }
namespace MoleMole::GalGame { class TimelinePair; }
namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }
namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }
namespace MoleMole::HollowChessboard { class HollowEntityRenderTrack; }
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IHollowEntitySection; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace MoleMole::HollowChessboard { class LightRenderConfig; }
namespace MoleMole::Level { class BangbooFindObjConfig; }
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ImageEffectConfig; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PlayerExtraSheetConfigData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PlayerSheetConfigData; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace MoleMole::Timeline::TimelineComponent { class NoSeamlessBaseReferenceCompInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SeamlessBaseReferenceCompInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SeamlessTrackBindInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SyncReferenceInfo; }
namespace MoleMole::Utils::CameraSequence { class CameraSequence_VideoItem_ComposeObject; }
namespace NPCCrowd::AI { class AttractorClusterConfig; }
namespace NPCCrowd::AI { class AttractorInstance; }
namespace NPCCrowd::AI { class AttractorLinkConfig; }
namespace NPCCrowd::AI { class AttractorTemplate; }
namespace NPCCrowd::AI { class PathGraphFeaturePointConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphStateGlobalConfig; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace NapStreaming { class SceneAssetDensityCell; }
namespace Sirenix::Serialization { class Serializer; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define LOGIC_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x125A5490)
#define LOGIC_ODINNEWINITIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1778F2C0)
#define LOGIC_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1778F2B0)

inline static constexpr unsigned int Logic_OdinNewInitializer_TypeDefinitionIndex = 88954;

class Logic_OdinNewInitializer : public ::System::Object
{
public:
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>** StaticGet_CachedSerializer477()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E10);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>*>** StaticGet_CachedSerializer307()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E18);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>** StaticGet_CachedSerializer326()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E20);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderSequence*>** StaticGet_CachedSerializer560()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderSequence*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E28);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigTriDiceAnimationCurveGroup*>*>** StaticGet_CachedSerializer365()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigTriDiceAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E30);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>*>** StaticGet_CachedSerializer407()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E38);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>*>** StaticGet_CachedSerializer142()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E40);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>*>** StaticGet_CachedSerializer255()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E48);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>** StaticGet_CachedSerializer485()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E50);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>*>** StaticGet_CachedSerializer298()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E58);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>*>** StaticGet_CachedSerializer270()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E60);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>*>** StaticGet_CachedSerializer311()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E68);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>** StaticGet_CachedSerializer59()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E70);
	}
	static ::Sirenix::Serialization::Serializer** StaticGet_CachedSerializer271()
	{
		return (::Sirenix::Serialization::Serializer**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E78);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallSwitchChecker*>** StaticGet_CachedSerializer619()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallSwitchChecker*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E80);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::BulletHoleConfigObject*>*>** StaticGet_CachedSerializer610()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::BulletHoleConfigObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E88);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType>** StaticGet_CachedSerializer580()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>*>** StaticGet_CachedSerializer597()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32E98);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarShowSettingDefault*>** StaticGet_CachedSerializer439()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarShowSettingDefault*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>*>** StaticGet_CachedSerializer557()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>*>** StaticGet_CachedSerializer236()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>*>** StaticGet_CachedSerializer201()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>*>** StaticGet_CachedSerializer444()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>*>** StaticGet_CachedSerializer210()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>** StaticGet_CachedSerializer64()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32ED0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>*>** StaticGet_CachedSerializer547()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32ED8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAdataporRectTransform*>** StaticGet_CachedSerializer632()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAdataporRectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HollowBigWorldConfig*>** StaticGet_CachedSerializer251()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HollowBigWorldConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*>** StaticGet_CachedSerializer160()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>** StaticGet_CachedSerializer330()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32EF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>** StaticGet_CachedSerializer469()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>*>** StaticGet_CachedSerializer596()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>*>** StaticGet_CachedSerializer294()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F10);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>*>** StaticGet_CachedSerializer250()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F18);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*>** StaticGet_CachedSerializer664()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F20);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::PhysicMaterialCombine>** StaticGet_CachedSerializer96()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::PhysicMaterialCombine>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F28);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*>** StaticGet_CachedSerializer189()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F30);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackPatternType>** StaticGet_CachedSerializer177()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackPatternType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F38);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>** StaticGet_CachedSerializer385()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F40);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueStoryNodeConfig*>** StaticGet_CachedSerializer520()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueStoryNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F48);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>*>** StaticGet_CachedSerializer266()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F50);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Byte>** StaticGet_CachedSerializer591()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F58);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSpecialTraining*>*>** StaticGet_CachedSerializer359()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSpecialTraining*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F60);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*>** StaticGet_CachedSerializer28()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F68);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer14()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F70);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType>** StaticGet_CachedSerializer588()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F78);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameImgExchangeType>** StaticGet_CachedSerializer515()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameImgExchangeType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F80);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>** StaticGet_CachedSerializer455()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F88);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>*>** StaticGet_CachedSerializer658()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>*>** StaticGet_CachedSerializer334()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32F98);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimType>** StaticGet_CachedSerializer103()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>*>** StaticGet_CachedSerializer244()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>*>** StaticGet_CachedSerializer108()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigEnvironmentFeatureModifier*>** StaticGet_CachedSerializer75()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigEnvironmentFeatureModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>** StaticGet_CachedSerializer465()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>** StaticGet_CachedSerializer4()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*>** StaticGet_CachedSerializer286()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FD0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>*>** StaticGet_CachedSerializer442()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FD8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenEffectType>** StaticGet_CachedSerializer533()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenEffectType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>*>** StaticGet_CachedSerializer65()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>*>** StaticGet_CachedSerializer614()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>** StaticGet_CachedSerializer453()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x32FF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>*>** StaticGet_CachedSerializer243()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33000);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameActionBase*>*>** StaticGet_CachedSerializer506()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33008);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>*>** StaticGet_CachedSerializer248()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33010);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AniamtorParamsSetting*>** StaticGet_CachedSerializer171()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AniamtorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33018);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AnimatorClipBlendData*>*>** StaticGet_CachedSerializer15()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AnimatorClipBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33020);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Cubemap*>** StaticGet_CachedSerializer642()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Cubemap*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33028);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>** StaticGet_CachedSerializer20()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33030);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>*>** StaticGet_CachedSerializer656()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33038);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>*>** StaticGet_CachedSerializer436()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33040);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>*>** StaticGet_CachedSerializer78()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33048);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_CachedSerializer88()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33050);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitAnimDirectionType>** StaticGet_CachedSerializer203()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitAnimDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33058);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>*>** StaticGet_CachedSerializer159()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33060);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>*>** StaticGet_CachedSerializer98()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33068);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>*>** StaticGet_CachedSerializer663()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33070);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>** StaticGet_CachedSerializer297()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33078);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardCoinSoundConfig*>** StaticGet_CachedSerializer246()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardCoinSoundConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33080);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer574()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33088);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>*>** StaticGet_CachedSerializer109()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33090);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_CachedSerializer346()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33098);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraSetting*>** StaticGet_CachedSerializer19()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>*>** StaticGet_CachedSerializer228()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenUIAtlasRectData*>** StaticGet_CachedSerializer278()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenUIAtlasRectData*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityRhythmClickCurveParamsStruct>*>** StaticGet_CachedSerializer438()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityRhythmClickCurveParamsStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>*>** StaticGet_CachedSerializer435()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330C0);
	}
	static ::Sirenix::Serialization::Serializer** StaticGet_CachedSerializer647()
	{
		return (::Sirenix::Serialization::Serializer**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>*>** StaticGet_CachedSerializer370()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_CachedSerializer338()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*>** StaticGet_CachedSerializer473()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType>** StaticGet_CachedSerializer563()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>*>** StaticGet_CachedSerializer661()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimFixedParam>** StaticGet_CachedSerializer104()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimFixedParam>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x330F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>** StaticGet_CachedSerializer176()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33100);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendGroup*>** StaticGet_CachedSerializer11()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33108);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraChangeType*>** StaticGet_CachedSerializer636()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraChangeType*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33110);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>*>** StaticGet_CachedSerializer162()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33118);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>** StaticGet_CachedSerializer454()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33120);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_CachedSerializer531()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33128);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>** StaticGet_CachedSerializer71()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33130);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_CachedSerializer76()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33138);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBurnBuff*>** StaticGet_CachedSerializer132()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBurnBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33140);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*>** StaticGet_CachedSerializer611()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33148);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearStepStairDamper*>** StaticGet_CachedSerializer402()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearStepStairDamper*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33150);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode>** StaticGet_CachedSerializer589()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33158);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>*>** StaticGet_CachedSerializer321()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33160);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet_CachedSerializer350()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33168);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>** StaticGet_CachedSerializer457()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33170);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>*>** StaticGet_CachedSerializer631()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33178);
	}
	static ::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>** StaticGet_CachedSerializer501()
	{
		return (::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33180);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>** StaticGet_CachedSerializer232()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33188);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_CachedSerializer157()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33190);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>*>** StaticGet_CachedSerializer223()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33198);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>*>** StaticGet_CachedSerializer144()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrozenBuff*>** StaticGet_CachedSerializer130()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrozenBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RunStateType>** StaticGet_CachedSerializer100()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RunStateType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace>** StaticGet_CachedSerializer424()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer13()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer373()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RayByAxis>** StaticGet_CachedSerializer380()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RayByAxis>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_CachedSerializer69()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_CachedSerializer29()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>*>** StaticGet_CachedSerializer308()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>*>** StaticGet_CachedSerializer259()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Vector3Range>** StaticGet_CachedSerializer41()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Vector3Range>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x331F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableNodeBase*>*>*>** StaticGet_CachedSerializer521()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableNodeBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33200);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackProperty*>** StaticGet_CachedSerializer181()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackProperty*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33208);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>** StaticGet_CachedSerializer327()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33210);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>*>** StaticGet_CachedSerializer526()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33218);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>*>** StaticGet_CachedSerializer310()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33220);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>** StaticGet_CachedSerializer194()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33228);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer417()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33230);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>*>** StaticGet_CachedSerializer363()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33238);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer12()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33240);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>*>** StaticGet_CachedSerializer348()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33248);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Byte>*>** StaticGet_CachedSerializer392()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33250);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatSyncServerDataConfig*>** StaticGet_CachedSerializer546()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatSyncServerDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33258);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>*>** StaticGet_CachedSerializer240()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33260);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueStageLocation>** StaticGet_CachedSerializer516()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueStageLocation>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33268);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>** StaticGet_CachedSerializer164()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33270);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackEffect*>** StaticGet_CachedSerializer182()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33278);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RaycastHitWallEffectConfig*>** StaticGet_CachedSerializer32()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RaycastHitWallEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33280);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowPlayerMove*>** StaticGet_CachedSerializer280()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowPlayerMove*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33288);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>*>** StaticGet_CachedSerializer552()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33290);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE>** StaticGet_CachedSerializer386()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33298);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Object*>*>** StaticGet_CachedSerializer304()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>** StaticGet_CachedSerializer467()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>** StaticGet_CachedSerializer524()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitEffect*>** StaticGet_CachedSerializer202()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer82()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*>** StaticGet_CachedSerializer486()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>*>** StaticGet_CachedSerializer141()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>** StaticGet_CachedSerializer668()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_CachedSerializer494()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_CachedSerializer449()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_CachedSerializer318()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_CachedSerializer505()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x332F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::SecondaryCharacterShowSetting*>** StaticGet_CachedSerializer24()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::SecondaryCharacterShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33300);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>** StaticGet_CachedSerializer671()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33308);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>** StaticGet_CachedSerializer495()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33310);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>** StaticGet_CachedSerializer646()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33318);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode>** StaticGet_CachedSerializer584()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33320);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>*>** StaticGet_CachedSerializer484()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33328);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>*>** StaticGet_CachedSerializer655()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33330);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>*>** StaticGet_CachedSerializer212()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33338);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*>** StaticGet_CachedSerializer358()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33340);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::AudioBasePath*>*>** StaticGet_CachedSerializer124()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::AudioBasePath*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33348);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraInit*>** StaticGet_CachedSerializer254()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraInit*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33350);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraLight*>** StaticGet_CachedSerializer261()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraLight*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33358);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>*>** StaticGet_CachedSerializer602()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33360);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::LightOverrideShowSetting*>** StaticGet_CachedSerializer624()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::LightOverrideShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33368);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffAttackPropertType, ::MoleMole::Config::BuffAttackProperty*>*>*>** StaticGet_CachedSerializer208()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffAttackPropertType, ::MoleMole::Config::BuffAttackProperty*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33370);
	}
	static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::ICPUAnimationLib*>** StaticGet_CachedSerializer670()
	{
		return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::ICPUAnimationLib*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33378);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>** StaticGet_CachedSerializer17()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33380);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>*>** StaticGet_CachedSerializer335()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33388);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_CachedSerializer77()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33390);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>*>** StaticGet_CachedSerializer440()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33398);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>*>** StaticGet_CachedSerializer529()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>*>** StaticGet_CachedSerializer496()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaskChannelType>** StaticGet_CachedSerializer583()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>** StaticGet_CachedSerializer61()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>** StaticGet_CachedSerializer169()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>** StaticGet_CachedSerializer384()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>*>** StaticGet_CachedSerializer220()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::WallColliderLayerType>** StaticGet_CachedSerializer107()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::WallColliderLayerType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>** StaticGet_CachedSerializer509()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>** StaticGet_CachedSerializer371()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>** StaticGet_CachedSerializer58()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraPassThroughTarget>** StaticGet_CachedSerializer535()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraPassThroughTarget>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x333F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>*>** StaticGet_CachedSerializer666()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33400);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatIKType>** StaticGet_CachedSerializer528()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatIKType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33408);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>** StaticGet_CachedSerializer74()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33410);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>*>** StaticGet_CachedSerializer483()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33418);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitStrengthType>>** StaticGet_CachedSerializer102()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitStrengthType>>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33420);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>*>** StaticGet_CachedSerializer273()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33428);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>*>** StaticGet_CachedSerializer657()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33430);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAttackProperty*>*>** StaticGet_CachedSerializer207()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAttackProperty*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33438);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_CachedSerializer336()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33440);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIModelBgSetting*>** StaticGet_CachedSerializer21()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIModelBgSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33448);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>*>** StaticGet_CachedSerializer80()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33450);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode>** StaticGet_CachedSerializer421()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33458);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>** StaticGet_CachedSerializer430()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33460);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Object*>*>** StaticGet_CachedSerializer305()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33468);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>** StaticGet_CachedSerializer450()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33470);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>** StaticGet_CachedSerializer325()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33478);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>*>** StaticGet_CachedSerializer343()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33480);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>*>** StaticGet_CachedSerializer369()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33488);
	}
	static ::Sirenix::Serialization::Serializer_1<::NumberBlinkConfig*>** StaticGet_CachedSerializer650()
	{
		return (::Sirenix::Serialization::Serializer_1<::NumberBlinkConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33490);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer51()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33498);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_CachedSerializer320()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>** StaticGet_CachedSerializer478()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>** StaticGet_CachedSerializer577()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource>** StaticGet_CachedSerializer423()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>** StaticGet_CachedSerializer476()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>*>** StaticGet_CachedSerializer79()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigVirtualJoystickParam*>** StaticGet_CachedSerializer368()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigVirtualJoystickParam*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>** StaticGet_CachedSerializer114()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>*>** StaticGet_CachedSerializer559()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer46()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>** StaticGet_CachedSerializer299()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>*>** StaticGet_CachedSerializer651()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x334F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::MontageTransitionConfig>** StaticGet_CachedSerializer672()
	{
		return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::MontageTransitionConfig>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33500);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>** StaticGet_CachedSerializer643()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33508);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>*>** StaticGet_CachedSerializer649()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33510);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputActionTextIconConfig*>** StaticGet_CachedSerializer287()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputActionTextIconConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33518);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>** StaticGet_CachedSerializer434()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33520);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>*>** StaticGet_CachedSerializer353()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33528);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>*>** StaticGet_CachedSerializer487()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33530);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>*>** StaticGet_CachedSerializer448()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33538);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer9()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33540);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>** StaticGet_CachedSerializer498()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33548);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>** StaticGet_CachedSerializer312()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33550);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>*>** StaticGet_CachedSerializer252()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33558);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>*>** StaticGet_CachedSerializer313()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33560);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>*>** StaticGet_CachedSerializer292()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33568);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::RenderSequenceSectionType>** StaticGet_CachedSerializer556()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::RenderSequenceSectionType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33570);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TransitionDisplayItem*>*>** StaticGet_CachedSerializer527()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TransitionDisplayItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33578);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDataType>** StaticGet_CachedSerializer195()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDataType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33580);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>*>** StaticGet_CachedSerializer27()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33588);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>*>** StaticGet_CachedSerializer323()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33590);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>*>** StaticGet_CachedSerializer50()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33598);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_CachedSerializer301()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>*>** StaticGet_CachedSerializer627()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorRandomIntConfig*>** StaticGet_CachedSerializer23()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorRandomIntConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>** StaticGet_CachedSerializer470()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>** StaticGet_CachedSerializer396()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_CachedSerializer536()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>*>** StaticGet_CachedSerializer324()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::TeamGroupDataItem*>** StaticGet_CachedSerializer565()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::TeamGroupDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::EAvatarLightChangeType>** StaticGet_CachedSerializer640()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::EAvatarLightChangeType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>*>** StaticGet_CachedSerializer659()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>*>** StaticGet_CachedSerializer143()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>** StaticGet_CachedSerializer231()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x335F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>** StaticGet_CachedSerializer463()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33600);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer36()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33608);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightChangeSettings>** StaticGet_CachedSerializer641()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightChangeSettings>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33610);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>** StaticGet_CachedSerializer425()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33618);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>*>** StaticGet_CachedSerializer140()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33620);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>*>** StaticGet_CachedSerializer337()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33628);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>*>** StaticGet_CachedSerializer481()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33630);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>** StaticGet_CachedSerializer576()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33638);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapType>** StaticGet_CachedSerializer585()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33640);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffVariantElementAttack*>*>** StaticGet_CachedSerializer209()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffVariantElementAttack*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33648);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>** StaticGet_CachedSerializer121()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33650);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>*>** StaticGet_CachedSerializer303()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33658);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>*>** StaticGet_CachedSerializer229()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33660);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>*>** StaticGet_CachedSerializer654()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33668);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>** StaticGet_CachedSerializer508()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33670);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::PlayerAccessoryCfg*>*>** StaticGet_CachedSerializer550()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::PlayerAccessoryCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33678);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::SceneMark::SceneMarkNode*>** StaticGet_CachedSerializer620()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::SceneMark::SceneMarkNode*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33680);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>** StaticGet_CachedSerializer227()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33688);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>*>** StaticGet_CachedSerializer300()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::System::Object*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33690);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>** StaticGet_CachedSerializer56()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33698);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ZoneEffectConfig*>*>** StaticGet_CachedSerializer85()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ZoneEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>** StaticGet_CachedSerializer431()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>*>** StaticGet_CachedSerializer352()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>*>** StaticGet_CachedSerializer279()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigChaosBuff*>** StaticGet_CachedSerializer134()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigChaosBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*>** StaticGet_CachedSerializer542()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionWithActionsCfg*>** StaticGet_CachedSerializer548()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionWithActionsCfg*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>*>** StaticGet_CachedSerializer5()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>*>** StaticGet_CachedSerializer151()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardJoystickConfig*>** StaticGet_CachedSerializer253()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardJoystickConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitDataType>>** StaticGet_CachedSerializer101()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitDataType>>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>*>** StaticGet_CachedSerializer598()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x336F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>*>** StaticGet_CachedSerializer599()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33700);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarSetting*>** StaticGet_CachedSerializer18()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33708);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>*>** StaticGet_CachedSerializer333()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33710);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_CachedSerializer6()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33718);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>*>** StaticGet_CachedSerializer211()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33720);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>*>** StaticGet_CachedSerializer70()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33728);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer416()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33730);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueGoalMode>** StaticGet_CachedSerializer518()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueGoalMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33738);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_CachedSerializer302()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33740);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode>** StaticGet_CachedSerializer586()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33748);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*>** StaticGet_CachedSerializer245()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33750);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_CachedSerializer514()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33758);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType>>** StaticGet_CachedSerializer562()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType>>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33760);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>*>** StaticGet_CachedSerializer437()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33768);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>** StaticGet_CachedSerializer497()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33770);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>** StaticGet_CachedSerializer554()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33778);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>*>** StaticGet_CachedSerializer215()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33780);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>*>** StaticGet_CachedSerializer219()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33788);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>** StaticGet_CachedSerializer175()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33790);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraOrbit>** StaticGet_CachedSerializer47()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraOrbit>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33798);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ColliderLayerType>** StaticGet_CachedSerializer94()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ColliderLayerType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>** StaticGet_CachedSerializer262()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>*>** StaticGet_CachedSerializer600()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_CachedSerializer458()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Action*>** StaticGet_CachedSerializer652()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatShowUIConfig*>** StaticGet_CachedSerializer545()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatShowUIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_CachedSerializer267()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>*>** StaticGet_CachedSerializer388()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Imactlevel>** StaticGet_CachedSerializer190()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Imactlevel>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallConfig*>** StaticGet_CachedSerializer617()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>** StaticGet_CachedSerializer428()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShaderCustomType>** StaticGet_CachedSerializer534()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShaderCustomType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x337F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>** StaticGet_CachedSerializer183()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33800);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>** StaticGet_CachedSerializer63()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33808);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneEntityCutSceneConfig*>** StaticGet_CachedSerializer382()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneEntityCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33810);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AvatarShaderBlendMode>** StaticGet_CachedSerializer579()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33818);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMedalGuide>** StaticGet_CachedSerializer282()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMedalGuide>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33820);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>*>** StaticGet_CachedSerializer42()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33828);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>** StaticGet_CachedSerializer530()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33830);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>** StaticGet_CachedSerializer464()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33838);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>** StaticGet_CachedSerializer512()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33840);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitEffectMapItem*>** StaticGet_CachedSerializer375()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitEffectMapItem*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33848);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>** StaticGet_CachedSerializer475()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33850);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatPlayableNodeBase*>*>*>** StaticGet_CachedSerializer543()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatPlayableNodeBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33858);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchPoseData*>** StaticGet_CachedSerializer525()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchPoseData*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33860);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType>** StaticGet_CachedSerializer427()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33868);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>*>** StaticGet_CachedSerializer366()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33870);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::CameraOrbit>*>** StaticGet_CachedSerializer48()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::CameraOrbit>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33878);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigOverloadBuff*>** StaticGet_CachedSerializer136()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigOverloadBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33880);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>*>** StaticGet_CachedSerializer322()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33888);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EffectAutoDynamicValue*>** StaticGet_CachedSerializer395()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EffectAutoDynamicValue*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33890);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer503()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33898);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::LightSource>** StaticGet_CachedSerializer582()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::LightSource>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer7()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>*>** StaticGet_CachedSerializer117()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::SpeakerActionCfg*>** StaticGet_CachedSerializer539()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::SpeakerActionCfg*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>** StaticGet_CachedSerializer89()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_CachedSerializer329()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer81()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ColorModifyInfo>** StaticGet_CachedSerializer283()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ColorModifyInfo>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>*>** StaticGet_CachedSerializer224()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessBoardCutSceneKeyConfig*>** StaticGet_CachedSerializer387()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessBoardCutSceneKeyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>** StaticGet_CachedSerializer460()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>** StaticGet_CachedSerializer419()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x338F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>*>** StaticGet_CachedSerializer179()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33900);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraAnimationSetting*>** StaticGet_CachedSerializer22()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraAnimationSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33908);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>*>** StaticGet_CachedSerializer125()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33910);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>*>** StaticGet_CachedSerializer372()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33918);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>** StaticGet_CachedSerializer120()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33920);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageHitType>** StaticGet_CachedSerializer200()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageHitType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33928);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>** StaticGet_CachedSerializer340()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33930);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>*>** StaticGet_CachedSerializer623()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33938);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueSplitScreenMoveConfig*>** StaticGet_CachedSerializer492()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueSplitScreenMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33940);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer414()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33948);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::SkinOverrideShowSettingConfigs*>** StaticGet_CachedSerializer25()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::SkinOverrideShowSettingConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33950);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigElectricBuff*>** StaticGet_CachedSerializer131()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigElectricBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33958);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_CachedSerializer30()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33960);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>** StaticGet_CachedSerializer398()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33968);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkelem>** StaticGet_CachedSerializer192()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkelem>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33970);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigUISettings*>** StaticGet_CachedSerializer317()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigUISettings*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33978);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33980);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>*>** StaticGet_CachedSerializer665()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33988);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>*>** StaticGet_CachedSerializer216()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33990);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ETrainingRoomItemType, ::System::String*>*>** StaticGet_CachedSerializer357()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ETrainingRoomItemType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33998);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitStrengthType>** StaticGet_CachedSerializer196()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitStrengthType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MonoEffectContrllerModule::SetupModule>** StaticGet_CachedSerializer603()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MonoEffectContrllerModule::SetupModule>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>** StaticGet_CachedSerializer615()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>** StaticGet_CachedSerializer383()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>*>** StaticGet_CachedSerializer555()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>** StaticGet_CachedSerializer49()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>*>** StaticGet_CachedSerializer608()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>*>** StaticGet_CachedSerializer290()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>*>** StaticGet_CachedSerializer447()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>** StaticGet_CachedSerializer128()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*>** StaticGet_CachedSerializer3()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>** StaticGet_CachedSerializer60()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x339F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardScreenEffectConfigV2*>** StaticGet_CachedSerializer247()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardScreenEffectConfigV2*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>** StaticGet_CachedSerializer569()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>*>** StaticGet_CachedSerializer205()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A10);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>** StaticGet_CachedSerializer573()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A18);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>** StaticGet_CachedSerializer105()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A20);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>** StaticGet_CachedSerializer170()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A28);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BlackMaskFadeConfig*>** StaticGet_CachedSerializer390()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BlackMaskFadeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A30);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimatorStateInfo>** StaticGet_CachedSerializer37()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimatorStateInfo>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A38);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>** StaticGet_CachedSerializer553()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A40);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigPageCameraBase*>*>** StaticGet_CachedSerializer360()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigPageCameraBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A48);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigGalgameShakeData*>*>** StaticGet_CachedSerializer408()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigGalgameShakeData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A50);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer466()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A58);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>*>** StaticGet_CachedSerializer378()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A60);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>*>** StaticGet_CachedSerializer622()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A68);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>*>** StaticGet_CachedSerializer595()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A70);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>*>** StaticGet_CachedSerializer616()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A78);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatQuestTrackItem*>*>** StaticGet_CachedSerializer540()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatQuestTrackItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A80);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>*>** StaticGet_CachedSerializer226()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A88);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>** StaticGet_CachedSerializer471()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>*>** StaticGet_CachedSerializer139()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33A98);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>*>** StaticGet_CachedSerializer289()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>*>** StaticGet_CachedSerializer235()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraZoom*>** StaticGet_CachedSerializer187()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraZoom*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer38()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraBounce*>** StaticGet_CachedSerializer258()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraBounce*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueScreenShiftMode>** StaticGet_CachedSerializer491()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueScreenShiftMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType>** StaticGet_CachedSerializer420()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AD0);
	}
	static ::Sirenix::Serialization::Serializer_1<::Share::EPerformInterruptType>** StaticGet_CachedSerializer507()
	{
		return (::Sirenix::Serialization::Serializer_1<::Share::EPerformInterruptType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AD8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>*>** StaticGet_CachedSerializer389()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>*>** StaticGet_CachedSerializer149()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>** StaticGet_CachedSerializer472()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShakeType>** StaticGet_CachedSerializer154()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShakeType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33AF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallCameraShakeConfig*>** StaticGet_CachedSerializer609()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallCameraShakeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>*>** StaticGet_CachedSerializer263()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*>** StaticGet_CachedSerializer541()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B10);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrontVideoChessPiece*>** StaticGet_CachedSerializer239()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrontVideoChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B18);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>** StaticGet_CachedSerializer456()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B20);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>*>** StaticGet_CachedSerializer97()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B28);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkweapon>** StaticGet_CachedSerializer191()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkweapon>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B30);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*>** StaticGet_CachedSerializer374()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B38);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*>** StaticGet_CachedSerializer613()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B40);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>** StaticGet_CachedSerializer575()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B48);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>** StaticGet_CachedSerializer328()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B50);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer16()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B58);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>** StaticGet_CachedSerializer411()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B60);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAutoMoveMode>** StaticGet_CachedSerializer281()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAutoMoveMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B68);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>*>** StaticGet_CachedSerializer148()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B70);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>** StaticGet_CachedSerializer186()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B78);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>** StaticGet_CachedSerializer185()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B80);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_CachedSerializer112()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B88);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallPhysicsSwitch*>** StaticGet_CachedSerializer618()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallPhysicsSwitch*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::AniamtorParamsSetting*>*>** StaticGet_CachedSerializer118()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::AniamtorParamsSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33B98);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Boolean>** StaticGet_CachedSerializer95()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>*>** StaticGet_CachedSerializer163()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>*>** StaticGet_CachedSerializer399()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>*>** StaticGet_CachedSerializer180()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Quaternion>*>** StaticGet_CachedSerializer367()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Quaternion>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BulletHoleUpdateStrategy>** StaticGet_CachedSerializer33()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BulletHoleUpdateStrategy>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*>** StaticGet_CachedSerializer432()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BD0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>** StaticGet_CachedSerializer152()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BD8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EntitySkillType>** StaticGet_CachedSerializer206()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EntitySkillType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>*>** StaticGet_CachedSerializer607()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>** StaticGet_CachedSerializer568()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitInhalationEffect*>** StaticGet_CachedSerializer234()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitInhalationEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33BF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraRotType>** StaticGet_CachedSerializer637()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraRotType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>*>** StaticGet_CachedSerializer242()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>*>** StaticGet_CachedSerializer612()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C10);
	}
	static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::AI::PathGraphStateGlobalConfig*>** StaticGet_CachedSerializer662()
	{
		return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::AI::PathGraphStateGlobalConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C18);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::PointSpace>** StaticGet_CachedSerializer587()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::PointSpace>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C20);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>** StaticGet_CachedSerializer571()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C28);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioBasePath*>** StaticGet_CachedSerializer123()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioBasePath*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C30);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigIgniteBuff*>** StaticGet_CachedSerializer135()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigIgniteBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C38);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>*>** StaticGet_CachedSerializer275()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C40);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer83()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C48);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer40()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C50);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>** StaticGet_CachedSerializer513()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C58);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraDrag*>** StaticGet_CachedSerializer256()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraDrag*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C60);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>** StaticGet_CachedSerializer155()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C68);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_CachedSerializer111()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C70);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer461()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C78);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>*>** StaticGet_CachedSerializer264()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C80);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityGaussianBlurEffect*>** StaticGet_CachedSerializer222()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityGaussianBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C88);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFinishedChessPiece*>** StaticGet_CachedSerializer238()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFinishedChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>*>** StaticGet_CachedSerializer604()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33C98);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>** StaticGet_CachedSerializer572()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_CachedSerializer10()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer412()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>*>** StaticGet_CachedSerializer376()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>*>** StaticGet_CachedSerializer72()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AimIKLockTargetType>** StaticGet_CachedSerializer106()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AimIKLockTargetType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>** StaticGet_CachedSerializer570()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CD0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BuddyMoveStatus>** StaticGet_CachedSerializer86()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BuddyMoveStatus>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CD8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::WeaponDamageDecalType>** StaticGet_CachedSerializer39()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::WeaponDamageDecalType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>*>** StaticGet_CachedSerializer601()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>** StaticGet_CachedSerializer511()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigWaveMorphParam*>** StaticGet_CachedSerializer394()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigWaveMorphParam*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33CF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>*>** StaticGet_CachedSerializer433()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>*>** StaticGet_CachedSerializer488()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>*>** StaticGet_CachedSerializer274()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D10);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>*>** StaticGet_CachedSerializer293()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D18);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachmentAnimSync>*>** StaticGet_CachedSerializer91()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachmentAnimSync>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D20);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_CachedSerializer54()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D28);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>*>** StaticGet_CachedSerializer73()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D30);
	}
	static ::Sirenix::Serialization::Serializer_1<::AkCurveInterpolation>** StaticGet_CachedSerializer339()
	{
		return (::Sirenix::Serialization::Serializer_1<::AkCurveInterpolation>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D38);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>*>** StaticGet_CachedSerializer377()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D40);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_CachedSerializer422()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D48);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>*>** StaticGet_CachedSerializer667()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D50);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackEffectTriggerAt>** StaticGet_CachedSerializer193()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackEffectTriggerAt>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D58);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageElementType>** StaticGet_CachedSerializer92()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D60);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputType>** StaticGet_CachedSerializer93()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D68);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraStretch*>** StaticGet_CachedSerializer188()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraStretch*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D70);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>*>** StaticGet_CachedSerializer309()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D78);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*>** StaticGet_CachedSerializer551()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D80);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>*>** StaticGet_CachedSerializer645()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D88);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>** StaticGet_CachedSerializer62()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D90);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelZeroMonsterWaveLimit>** StaticGet_CachedSerializer567()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelZeroMonsterWaveLimit>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33D98);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigStairVelocityModifier*>** StaticGet_CachedSerializer403()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigStairVelocityModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>*>** StaticGet_CachedSerializer306()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UICameraSettingData*>*>** StaticGet_CachedSerializer362()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UICameraSettingData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearSlopeDamper*>** StaticGet_CachedSerializer401()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearSlopeDamper*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSingleSpeakerData*>*>** StaticGet_CachedSerializer519()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSingleSpeakerData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>*>** StaticGet_CachedSerializer172()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer474()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DD0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>*>** StaticGet_CachedSerializer127()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DD8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigInteractionFanCylinder>** StaticGet_CachedSerializer564()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigInteractionFanCylinder>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>*>** StaticGet_CachedSerializer626()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>*>** StaticGet_CachedSerializer153()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_CachedSerializer418()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33DF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>** StaticGet_CachedSerializer544()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>*>** StaticGet_CachedSerializer676()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>*>** StaticGet_CachedSerializer355()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E10);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer26()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E18);
	}
	static ::Sirenix::Serialization::Serializer** StaticGet_CachedSerializer648()
	{
		return (::Sirenix::Serialization::Serializer**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E20);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>*>** StaticGet_CachedSerializer593()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E28);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigStrikeBuff*>** StaticGet_CachedSerializer137()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigStrikeBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E30);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraMiscSetting*>** StaticGet_CachedSerializer44()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraMiscSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E38);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>*>** StaticGet_CachedSerializer268()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E40);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>*>** StaticGet_CachedSerializer119()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E48);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>** StaticGet_CachedSerializer538()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E50);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableSegment*>*>*>** StaticGet_CachedSerializer522()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableSegment*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E58);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>*>** StaticGet_CachedSerializer277()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E60);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>** StaticGet_CachedSerializer426()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E68);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>*>** StaticGet_CachedSerializer173()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E70);
	}
	static ::Sirenix::Serialization::Serializer_1<::NapStreaming::SceneAssetDensityCell*>** StaticGet_CachedSerializer653()
	{
		return (::Sirenix::Serialization::Serializer_1<::NapStreaming::SceneAssetDensityCell*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E78);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>*>** StaticGet_CachedSerializer446()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E80);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SpecialDamageTextType>** StaticGet_CachedSerializer199()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SpecialDamageTextType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E88);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>*>** StaticGet_CachedSerializer441()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>*>** StaticGet_CachedSerializer482()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33E98);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFeverMode*>** StaticGet_CachedSerializer354()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFeverMode*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>*>** StaticGet_CachedSerializer332()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>*>** StaticGet_CachedSerializer630()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>** StaticGet_CachedSerializer35()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>*>** StaticGet_CachedSerializer605()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>*>** StaticGet_CachedSerializer660()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>*>** StaticGet_CachedSerializer606()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33ED0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarPresetEntry>*>** StaticGet_CachedSerializer409()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarPresetEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33ED8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>*>** StaticGet_CachedSerializer592()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCommonLightSetting*>** StaticGet_CachedSerializer405()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCommonLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatSetAvatarVisible>** StaticGet_CachedSerializer549()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatSetAvatarVisible>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::CameraOverrideOption>** StaticGet_CachedSerializer639()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::CameraOverrideOption>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33EF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_CachedSerializer99()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F00);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>*>** StaticGet_CachedSerializer629()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F08);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*>** StaticGet_CachedSerializer116()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F10);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>** StaticGet_CachedSerializer351()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F18);
	}
	static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::StateMachineTransitionConfig>** StaticGet_CachedSerializer673()
	{
		return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::StateMachineTransitionConfig>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F20);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer415()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F28);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>*>** StaticGet_CachedSerializer147()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F30);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueGeneralUIState>** StaticGet_CachedSerializer489()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueGeneralUIState>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F38);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>*>** StaticGet_CachedSerializer145()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F40);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardGIConfig*>** StaticGet_CachedSerializer272()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardGIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F48);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::String*>*>** StaticGet_CachedSerializer349()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F50);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicFloat*>** StaticGet_CachedSerializer197()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F58);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarUIElementColorConfigs*>** StaticGet_CachedSerializer68()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarUIElementColorConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F60);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>** StaticGet_CachedSerializer452()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F68);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::VertexStretchDirectionType>** StaticGet_CachedSerializer590()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::VertexStretchDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F70);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>*>** StaticGet_CachedSerializer379()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F78);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>** StaticGet_CachedSerializer31()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F80);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Timeline::CallCameraEffectActionType>** StaticGet_CachedSerializer532()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Timeline::CallCameraEffectActionType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F88);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>*>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F90);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>** StaticGet_CachedSerializer233()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33F98);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ShowEntryType>** StaticGet_CachedSerializer561()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ShowEntryType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallEffectNormalEnum>** StaticGet_CachedSerializer381()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallEffectNormalEnum>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BuddyOutlineConfig*>** StaticGet_CachedSerializer129()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BuddyOutlineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FB0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*>** StaticGet_CachedSerializer285()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FB8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTurnback*>** StaticGet_CachedSerializer314()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTurnback*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::BulletDamageDecalType>** StaticGet_CachedSerializer34()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::BulletDamageDecalType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>*>** StaticGet_CachedSerializer265()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FD0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DissipationMode>** StaticGet_CachedSerializer156()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DissipationMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FD8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>** StaticGet_CachedSerializer644()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FE0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraEasing*>** StaticGet_CachedSerializer257()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraEasing*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FE8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer8()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FF0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainPageShowSetting*>** StaticGet_CachedSerializer397()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainPageShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x33FF8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>** StaticGet_CachedSerializer468()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34000);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>** StaticGet_CachedSerializer523()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34008);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitForwardType>** StaticGet_CachedSerializer204()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitForwardType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34010);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraTranslation*>** StaticGet_CachedSerializer260()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraTranslation*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34018);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer413()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34020);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>** StaticGet_CachedSerializer517()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34028);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigErosionBuff*>** StaticGet_CachedSerializer133()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigErosionBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34030);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_CachedSerializer158()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34038);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::GalSplitScreenParam>** StaticGet_CachedSerializer393()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::GalSplitScreenParam>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34040);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_CachedSerializer249()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34048);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>*>** StaticGet_CachedSerializer400()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34050);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>*>** StaticGet_CachedSerializer110()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34058);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimationSetting*>** StaticGet_CachedSerializer634()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimationSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34060);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>** StaticGet_CachedSerializer499()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34068);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>** StaticGet_CachedSerializer57()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34070);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>*>** StaticGet_CachedSerializer166()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34078);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::DoubleScreenShiftState>** StaticGet_CachedSerializer490()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::DoubleScreenShiftState>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34080);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>** StaticGet_CachedSerializer459()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34088);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>*>** StaticGet_CachedSerializer445()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34090);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>*>** StaticGet_CachedSerializer625()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34098);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern*>** StaticGet_CachedSerializer178()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>** StaticGet_CachedSerializer53()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*>*>** StaticGet_CachedSerializer217()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::VirtualSpaceLineEffectConfig*>** StaticGet_CachedSerializer276()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::VirtualSpaceLineEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>** StaticGet_CachedSerializer364()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EtherEyesOutlineConfig*>** StaticGet_CachedSerializer214()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EtherEyesOutlineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>** StaticGet_CachedSerializer45()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_SwitchAction*>** StaticGet_CachedSerializer675()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_SwitchAction*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>*>** StaticGet_CachedSerializer150()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>** StaticGet_CachedSerializer113()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>*>** StaticGet_CachedSerializer480()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>** StaticGet_CachedSerializer451()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x340F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>*>** StaticGet_CachedSerializer331()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34100);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchPoseRelatedParam*>** StaticGet_CachedSerializer510()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchPoseRelatedParam*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34108);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCommonBuff*>** StaticGet_CachedSerializer138()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCommonBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34110);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>** StaticGet_CachedSerializer165()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34118);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>*>** StaticGet_CachedSerializer345()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34120);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityRunState*>** StaticGet_CachedSerializer391()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityRunState*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34128);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraDelayMoveMode>** StaticGet_CachedSerializer87()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraDelayMoveMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34130);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackSetting*>** StaticGet_CachedSerializer43()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34138);
	}
	static ::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>** StaticGet_CachedSerializer502()
	{
		return (::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34140);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>** StaticGet_CachedSerializer84()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34148);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>** StaticGet_CachedSerializer168()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34150);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>*>** StaticGet_CachedSerializer315()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34158);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatPlusInitCfg*>** StaticGet_CachedSerializer504()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatPlusInitCfg*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34160);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>*>** StaticGet_CachedSerializer319()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34168);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>*>** StaticGet_CachedSerializer126()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34170);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>** StaticGet_CachedSerializer638()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34178);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>** StaticGet_CachedSerializer462()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34180);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>*>** StaticGet_CachedSerializer443()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34188);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>** StaticGet_CachedSerializer674()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34190);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*>** StaticGet_CachedSerializer184()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34198);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>** StaticGet_CachedSerializer295()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>** StaticGet_CachedSerializer52()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*>** StaticGet_CachedSerializer500()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>*>** StaticGet_CachedSerializer213()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBlockedChessPiece*>** StaticGet_CachedSerializer237()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBlockedChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>*>** StaticGet_CachedSerializer122()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>*>** StaticGet_CachedSerializer406()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*>** StaticGet_CachedSerializer115()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardFrontViewConfig*>** StaticGet_CachedSerializer241()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardFrontViewConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType>** StaticGet_CachedSerializer581()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>*>** StaticGet_CachedSerializer291()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_CachedSerializer55()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x341F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarCurveEntry>*>** StaticGet_CachedSerializer410()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarCurveEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34200);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>*>** StaticGet_CachedSerializer344()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34208);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>*>** StaticGet_CachedSerializer296()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34210);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>*>** StaticGet_CachedSerializer356()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34218);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*>** StaticGet_CachedSerializer558()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34220);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>** StaticGet_CachedSerializer537()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34228);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUICameraStretch*>*>** StaticGet_CachedSerializer361()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUICameraStretch*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34230);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowLevelEnd*>** StaticGet_CachedSerializer316()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowLevelEnd*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34238);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>*>** StaticGet_CachedSerializer67()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34240);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>*>** StaticGet_CachedSerializer146()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34248);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_CachedSerializer342()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34250);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::CollisionDetectionMode>** StaticGet_CachedSerializer90()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::CollisionDetectionMode>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34258);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::LightRenderConfig*>** StaticGet_CachedSerializer269()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::LightRenderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34260);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::ArgueGeneralUIStateConfig*>*>** StaticGet_CachedSerializer493()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::ArgueGeneralUIStateConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34268);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*>** StaticGet_CachedSerializer66()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34270);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34278);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>** StaticGet_CachedSerializer479()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34280);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*>*>** StaticGet_CachedSerializer218()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34288);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigGroundPositionBlendModifier*>** StaticGet_CachedSerializer404()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigGroundPositionBlendModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34290);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ICPUAnimationLib*, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>*>** StaticGet_CachedSerializer669()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ICPUAnimationLib*, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34298);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>*>** StaticGet_CachedSerializer174()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>*>** StaticGet_CachedSerializer621()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>*>** StaticGet_CachedSerializer347()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Rect>** StaticGet_CachedSerializer635()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>*>** StaticGet_CachedSerializer221()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>*>** StaticGet_CachedSerializer225()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicInt*>** StaticGet_CachedSerializer198()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicInt*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ISoundActionTriggerCondition*>*>** StaticGet_CachedSerializer341()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ISoundActionTriggerCondition*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>*>** StaticGet_CachedSerializer161()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342E0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HackObjectTrait*>*>** StaticGet_CachedSerializer230()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HackObjectTrait*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342E8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>*>** StaticGet_CachedSerializer167()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>*>** StaticGet_CachedSerializer288()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x342F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData>>** StaticGet_CachedSerializer284()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData>>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34300);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>*>** StaticGet_CachedSerializer594()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34308);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>** StaticGet_CachedSerializer566()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34310);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AbnormalPropertyType>** StaticGet_CachedSerializer578()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AbnormalPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34318);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType>** StaticGet_CachedSerializer429()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34320);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>*>** StaticGet_CachedSerializer628()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34328);
	}
	static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Quaternion>** StaticGet_CachedSerializer633()
	{
		return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Logic_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x34330);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGIC_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGIC_ODINNEWINITIALIZER__CCTOR_OFFSET))();
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGIC_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
