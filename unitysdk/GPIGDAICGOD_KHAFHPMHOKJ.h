#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/IKACJBCOKJI.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"
#include "unitysdk/MoleMole/Battle/LevelQuestConditionOperation.h"
#include "unitysdk/MoleMole/Battle/LevelQuestOperation.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/Cameras/SideScrollingReturnActCameraPolarType.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/Config/ModifierStacking.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/TargetValueModifyFunc.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AIParamType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorWithStyle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChallengeQuestType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CountDownUIOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EFCLogLevel.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/HollowSystemStateType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InLevelMissionTipSourceType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InteractionEndSuddenEventMsg.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIData.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIDataAdapter.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParamType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterPickType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NumberCompareType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/PerformType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetArrowUIKind.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetUIOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcDamageType.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcStringValueType.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcValueType.h"
#include "unitysdk/MoleMole/FlowCanvas/MonsterPositionDuty.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/MoleMole/AnimStateCheckType.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/DoubleEliteCardInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/EvtDestructionSwitchType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/HackerGameCliParamType.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/HackerGamePlayerAttachEffectData.h"
#include "unitysdk/MoleMole/HackerGamePlayerEffectTypeChangedData.h"
#include "unitysdk/MoleMole/HackerGamePlayerOnDamagedData.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/MoleMole/InLevelTimerWidgetOperation.h"
#include "unitysdk/MoleMole/MultiTaskNodeHandle.h"
#include "unitysdk/MoleMole/ScoreUIAnimationType.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryFilter.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryKey.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/ProtoScript/AimRectColor.h"
#include "unitysdk/ProtoScript/ChessUIControlType.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/ProtoScript/EndHollowMiniGameType.h"
#include "unitysdk/ProtoScript/HollowSystemType.h"
#include "unitysdk/ProtoScript/HollowSystemUIState.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/ProtoScript/PostEffectType.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace NodeCanvas::Framework { template <typename T> class Variable_1; }
namespace NodeCanvas::Framework::Internal { template <typename T> class ReflectedAction_1; }
namespace NodeCanvas::Framework::Internal { template <typename T> class ReflectedFunction_1; }
namespace NodeCanvas::Tasks::Actions { template <typename T> class AddElementToDictionary_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define GPIGDAICGOD_KHAFHPMHOKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1107BB50)

inline static constexpr unsigned int GPIGDAICGOD_KHAFHPMHOKJ_TypeDefinitionIndex = 96731;

class GPIGDAICGOD_KHAFHPMHOKJ : public ::System::Object
{
public:
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* DPKBPDNFDBK; // 0x10
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::ChessEntityType>* BHCPBCDKOGN; // 0x18
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::PipelineCamera::FinalCameraData>* ELFKDGDPPOI; // 0x20
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::ChessUIControlType>* HNLALGPGBNK; // 0x28
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Battle::LevelQuestConditionOperation>* DFLNCNCMEIG; // 0x30
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::BaseProperty>* ANBOONHDJDN; // 0x38
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::ChessUIIconType>* BLJPMEHGBGC; // 0x40
	::NodeCanvas::Framework::Variable_1<::ProtoScript::ChessUIControlType>* ONLAKNNNJOH; // 0x48
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::RaycastHit>* EABBDHDGLGK; // 0x50
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::PipelineCamera::FinalCameraData>* JMGPKLHLBAA; // 0x58
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* PLBBHINLMGD; // 0x60
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* FDFHNKHEAFD; // 0x68
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Keyframe>* LNAOABGPJOL; // 0x70
	::NodeCanvas::Framework::Variable_1<::MoleMole::ChessEntityType>* ENIMAOJLJEN; // 0x78
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::TargetValueModifyFunc>* HIJJENCGNKE; // 0x80
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HackerGamePlayerAttachEffectData>* KKIIIHPECKJ; // 0x88
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Vector4>* PMHACLAFPPO; // 0x90
	::NodeCanvas::Framework::Variable_1<::System::Object*>* NKAFAJBIMLL; // 0x98
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::EntityType>* IGHFMPDDMEA; // 0xA0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* OMEIOOGEPIB; // 0xA8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* DCHMNMHNMLE; // 0xB0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::TaskCompletionSourceNodeHandle>* PMOGENBMKJG; // 0xB8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* ILPMKLPKEJF; // 0xC0
	::NodeCanvas::Framework::Variable_1<::MoleMole::BubbleType>* HMGCNHCGALG; // 0xC8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* ININMHCDGBL; // 0xD0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::Foundation::Unreal::FTransform3D>* DNCAJDHBLIL; // 0xD8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Level::RatingType>* ABGGKOJIPCE; // 0xE0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* HLCMDJMIPPK; // 0xE8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::BubbleType>* ONOCGOMINGD; // 0xF0
	::NodeCanvas::Framework::Variable_1<::ProtoScript::HollowSystemUIState>* NHAFHGFBCDC; // 0xF8
	::NodeCanvas::Framework::Variable_1<::MoleMole::AnimStateCheckType>* OACOFBNNDDG; // 0x100
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::PerformType>* KJFMBIHLBIN; // 0x108
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::EndHollowMiniGameType>* MCOJHBJKEDG; // 0x110
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::InLevelTimerWidgetOperation>* NPMKKLCINAE; // 0x118
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::ChessUIControlType>* JEILIEGINJE; // 0x120
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::RaycastHit2D>* FBOGJCDPBAP; // 0x128
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::WrapMode>* IKPJEKDIGKP; // 0x130
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::ScreenEffectType>* OIAGHBPCBIM; // 0x138
	::NodeCanvas::Framework::Variable_1<::MoleMole::DoubleEliteCardInfo>* BAHJDHKNDDJ; // 0x140
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::IKACJBCOKJI>* EHIPKAHCJBF; // 0x148
	::NodeCanvas::Framework::Variable_1<::MoleMole::Battle::MonsterAlertInitParams>* IKNCMNIMJPO; // 0x150
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* MNCGLOMHOGF; // 0x158
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* JOFAIBAMIFH; // 0x160
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* BGOAPMAFAAL; // 0x168
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::AbilityTargetting>* MEBFOGAAILH; // 0x170
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* CJHFADFFLAA; // 0x178
	::NodeCanvas::Framework::Variable_1<::System::Object*>* HLOCNHNACFN; // 0x180
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* HKCFNIKCAAK; // 0x188
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::MonsterFunctionType>* LHAOOCDFLCI; // 0x190
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* MENHPNBJECC; // 0x198
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::EntityHandle>* NOGCAONMJCN; // 0x1A0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* IGPKHBHCGBD; // 0x1A8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* JDGAHHFDIEP; // 0x1B0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::ModifierStacking>* GNGMNDGFEGM; // 0x1B8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* CBDADHKDDOL; // 0x1C0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* GLIIBFNKBHI; // 0x1C8
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Bounds>* LJEEDHMCKBO; // 0x1D0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* HCLGMPKDGAC; // 0x1D8
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Collision2D*>* IALMHBCBKAA; // 0x1E0
	::NodeCanvas::Framework::Variable_1<::UnityEngine::ContactPoint>* KFOFDOMEFIO; // 0x1E8
	::NodeCanvas::Framework::Variable_1<::MoleMole::HackerGamePlayerOnDamagedData>* GMJDLMOCFBP; // 0x1F0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::BubbleType>* FINHOKBADOA; // 0x1F8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::CampType>* FHLKAGPILDJ; // 0x200
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* EBHPLHKPGAC; // 0x208
	::NodeCanvas::Framework::Variable_1<::MoleMole::TurnBattleUnitQueryKey>* ADLLBNLKAKF; // 0x210
	::NodeCanvas::Framework::Variable_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* PBDINHAHNNI; // 0x218
	::NodeCanvas::Framework::Variable_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* AHNNKDAFINN; // 0x220
	::NodeCanvas::Framework::Variable_1<::System::Object*>* GAFGOCDDMBE; // 0x228
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* MICDKAPMMIK; // 0x230
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* IJGPDMNGEOK; // 0x238
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HollowChessboard::HollowCell>* ICGIIKGCABM; // 0x240
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::RigidbodyConstraints>* ALCOLIEGIIG; // 0x248
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* EKJLDFJEGFI; // 0x250
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Quaternion>* PGBICHGFCCA; // 0x258
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* GIIPIKEPHIC; // 0x260
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Collision2D*>* JMBOEEELLKI; // 0x268
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* BAKJLBGJIAI; // 0x270
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::MonsterStrengthType>* AIKPIAPIJFB; // 0x278
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Level::BangbooPlayType>* DNAPOOHJOLP; // 0x280
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::WrapMode>* MJHGNBDACOO; // 0x288
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* KFABMPCLAGI; // 0x290
	::NodeCanvas::Framework::Variable_1<::System::Object*>* LBDPJJFENHA; // 0x298
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HackerGamePlayerAttachEffectData>* ODLGEPFOFJD; // 0x2A0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::CampType>* NCHHHGDDLMI; // 0x2A8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* AKDOJKOHKGD; // 0x2B0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* FGEFFOHBMHM; // 0x2B8
	::NodeCanvas::Framework::Variable_1<::UnityEngine::RaycastHit2D>* EPIHLBKOIIB; // 0x2C0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Level::BangbooPlayType>* IBPFBCMABCM; // 0x2C8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::InputType>* KBGGOLDECEL; // 0x2D0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::DoubleEliteCardInfo>* DCMKMHNGNLN; // 0x2D8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* NCBNEMPHBLJ; // 0x2E0
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Collision*>* CKIBHMGALHH; // 0x2E8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::RaycastHit2D>* CBKECNCDGEB; // 0x2F0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Ray>* HLKHLJKKEAB; // 0x2F8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* MNHBHDEEPEK; // 0x300
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NFJCJACKEED; // 0x308
	::NodeCanvas::Framework::Variable_1<::System::Object*>* POACKOHCFMG; // 0x310
	::NodeCanvas::Framework::Variable_1<::UnityEngine::WrapMode>* ELHHBKJMHOI; // 0x318
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Rect>* FJCFGGELJFG; // 0x320
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::ContactPoint>* ANBFNCNLLHG; // 0x328
	::NodeCanvas::Framework::Variable_1<::System::Object*>* KJGJBMJKGKH; // 0x330
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* OKIJNKKGFKP; // 0x338
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* KLJPELHFCJD; // 0x340
	::NodeCanvas::Framework::Variable_1<::MoleMole::BabelTowerTemplateOverrideData>* IGDMGABOFOO; // 0x348
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* JJHNAJMKFHK; // 0x350
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* PMGBNBBBGON; // 0x358
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* NKOLOGBNPGF; // 0x360
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* JIOONMAOMMF; // 0x368
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* CMHMGFIMACO; // 0x370
	::NodeCanvas::Framework::Variable_1<::MoleMole::ScoreUIAnimationType>* EAOLFEKBJBN; // 0x378
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Keyframe>* HJDHIJDFIAJ; // 0x380
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* GBODHEAEJBJ; // 0x388
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* OMECEAKFKJO; // 0x390
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Vector4>* FBCHKGFFDOL; // 0x398
	::NodeCanvas::Framework::Variable_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* DKIMBHMBEIN; // 0x3A0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* ONOKMJCEFFD; // 0x3A8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* IPHAANMLJGL; // 0x3B0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* CGIMFLDHNLA; // 0x3B8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* IALGGHIJOFA; // 0x3C0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::AbyssS2_EventType>* GKEECHHOIBE; // 0x3C8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* CPEMEDKIGND; // 0x3D0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* FAGKJLBDOLO; // 0x3D8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HackerGameDamageData>* AGNEINOGIDL; // 0x3E0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* FKJNKAPMBDO; // 0x3E8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Vector2>* BMELGANAMAJ; // 0x3F0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* DFLEICJPIKE; // 0x3F8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Collision*>* IGPBPBAAPLL; // 0x400
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::IKACJBCOKJI>* FLGAOIIHOME; // 0x408
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* ADAKMAMFMLE; // 0x410
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Int32>* NFAONJMFNPI; // 0x418
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* MADOBHPKFHA; // 0x420
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::ContactPoint>* ONIKPLNKMPH; // 0x428
	::NodeCanvas::Framework::Variable_1<::MoleMole::TurnBattleUnitQueryFilter>* OKFHDKJHFCH; // 0x430
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* OHDCLPNMLDP; // 0x438
	::NodeCanvas::Framework::Variable_1<::ProtoScript::PostEffectType>* KPBJHEJIIGB; // 0x440
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* PBBIMDBGHFP; // 0x448
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* MEPKFNCNCGL; // 0x450
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::AnimStateCheckType>* ADCOMDNKOEE; // 0x458
	::NodeCanvas::Framework::Variable_1<::UnityEngine::RigidbodyConstraints>* CICNLBGIODD; // 0x460
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::MonsterFunctionType>* KIOPDABEKAA; // 0x468
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::BabelTowerTemplateOverrideData>* NDELBPMILOP; // 0x470
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Int32>* LKILHAEOIAD; // 0x478
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* FLEILPGKJGJ; // 0x480
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::AbilityTargetting>* GIPIOGPDNAJ; // 0x488
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::BaseProperty>* CEJCAANIOGK; // 0x490
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* BFOCEICDNMC; // 0x498
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* PLILIMEKLNE; // 0x4A0
	::NodeCanvas::Framework::Variable_1<::MoleMole::AbyssS2_EventType>* LLCLCHNIHNA; // 0x4A8
	::NodeCanvas::Framework::Variable_1<::MoleMole::Level::BangbooPlayType>* KBCJFJHOIMP; // 0x4B0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* BIBPIIOKHHP; // 0x4B8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* MHKKOGDKBAE; // 0x4C0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* OAAINDMKMDC; // 0x4C8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* IAILCHNNMOD; // 0x4D0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::PerformType>* OIFLAGNNOEC; // 0x4D8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* FFPPCBDODHD; // 0x4E0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FairyTextUpdateType>* LOKMAAMNHCE; // 0x4E8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* CABOHFOCBGE; // 0x4F0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::TaskCompletionSourceNodeHandle>* ECKCGELEHPJ; // 0x4F8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Battle::MonsterAlertInitParams>* JCMIIMPPJBJ; // 0x500
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::HollowSystemType>* KNKEMEPDBEP; // 0x508
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NCGFDNMCPNM; // 0x510
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* GIKJIFMKNLJ; // 0x518
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ParadoxNotion::OperationMethod>* GNAOPHLBLBL; // 0x520
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* FBGFKGNBPLO; // 0x528
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* JNPNPGGDPLN; // 0x530
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::NodeState>* CCEHEHFLFMN; // 0x538
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* NCIKEJHOKIH; // 0x540
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* EIMDIPCLLAD; // 0x548
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* IOPIKPDAHBP; // 0x550
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::InlevelCameraState>* GLBCAOAADEE; // 0x558
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::TurnBattleUnitQueryKey>* GFCDMJDGMGO; // 0x560
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Single>* FAJNNIJNJJJ; // 0x568
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::MultiTaskNodeHandle>* NGEPHBAGFGO; // 0x570
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* NJKBOGECNPE; // 0x578
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Rect>* ANKANIHBJOO; // 0x580
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Collision*>* MKHJNBMJKMM; // 0x588
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* IHDCNCMEDJF; // 0x590
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* JFANLFEPGAG; // 0x598
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* OGJIGLAMKGG; // 0x5A0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::GameplayTag>* BNKJPHAODDH; // 0x5A8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* JENJCAMHPFO; // 0x5B0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* INJDKMKJCPP; // 0x5B8
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* BHJFEKDEHCC; // 0x5C0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::InlevelCameraState>* HCLNGPLLJJP; // 0x5C8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Battle::GamePlayLogicKind>* IGOCFMHANMA; // 0x5D0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* GCDIJGMMOJP; // 0x5D8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* EHCOBHCMAKG; // 0x5E0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* LHBFMKHKCDO; // 0x5E8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* ENHKPADJLDL; // 0x5F0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Collision2D*>* HNMICMMEMBA; // 0x5F8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* MCACEMAKCBJ; // 0x600
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::ScoreUIAnimationType>* HHAEGFEIKGL; // 0x608
	::NodeCanvas::Framework::Variable_1<::System::Object*>* KIMIIGINAEH; // 0x610
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::PropertyModifyFunction>* FMEAOOJFJAG; // 0x618
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* MOIIDLBIOKN; // 0x620
	::NodeCanvas::Framework::Variable_1<::PipelineCamera::FinalCameraData>* MKPLMHBIKEL; // 0x628
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* FJGFKOLCAHI; // 0x630
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::InputType>* FFFMOKDJBHI; // 0x638
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NNLJCDJAEOL; // 0x640
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::HollowSystemType>* HPGEINEOOJN; // 0x648
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::HollowSystemUIState>* MBGAMOLHDJA; // 0x650
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* BCOHHFMNBHJ; // 0x658
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::TaskCompletionSourceNodeHandle>* PEAEGNPGKOO; // 0x660
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::EndHollowMiniGameType>* BLPOPGGHIGG; // 0x668
	::NodeCanvas::Framework::Variable_1<::MoleMole::HackerGameCliParamType>* JOFLKEEOGKO; // 0x670
	::NodeCanvas::Framework::Variable_1<::ProtoScript::HollowSystemType>* DHPBLIMCEBD; // 0x678
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* DLPGLHPPIHO; // 0x680
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::ChessUIControlType>* LCPEPCBIIMB; // 0x688
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* NEBHIEPEOFJ; // 0x690
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Vector2Int>* BGPKHONDFFF; // 0x698
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Ray>* HKJFPMIGGCG; // 0x6A0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::PostEffectType>* ABOILHDEONK; // 0x6A8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* DCIOKALDBLI; // 0x6B0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::EvtDestructionSwitchType>* DGGFHJBFKIN; // 0x6B8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Char>* EDLFCEMFKMA; // 0x6C0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* MMGIDLFAHIC; // 0x6C8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HollowPieceBlendMode>* FCOJAJOAHDN; // 0x6D0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Battle::MonsterAlertInitParams>* NNJOKELAJEC; // 0x6D8
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::BaseProperty>* DPFAHILNPCI; // 0x6E0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* KEAMLKEDDPN; // 0x6E8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* KJLMBFNMKPL; // 0x6F0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::RigidbodyConstraints>* AKOBFJKLOAJ; // 0x6F8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* EIFMMCLEIDN; // 0x700
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::NodeVisible>* EEHOCEMKCPI; // 0x708
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Space>* BMGNBBBGMKN; // 0x710
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* KHFGAKMNLAH; // 0x718
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* AGNIDHMLCGB; // 0x720
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::ScoreUIAnimationType>* FLHNDIAEBAB; // 0x728
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* JALAIPKFENH; // 0x730
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* GPCEEPLPBAE; // 0x738
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* IDBCIFEJOPD; // 0x740
	::NodeCanvas::Framework::Variable_1<::ParadoxNotion::OperationMethod>* BECKMINIPKP; // 0x748
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* GNHPLKALFHO; // 0x750
	::NodeCanvas::Framework::Variable_1<::MoleMole::HackerGameDamageData>* HLGKJHPAIPH; // 0x758
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* IILFPMIEPLA; // 0x760
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* JPDDENCNOIM; // 0x768
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Keyframe>* EOAMLAKGOBN; // 0x770
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::RaycastHit2D>* NBKKHJDLEHA; // 0x778
	::NodeCanvas::Framework::Variable_1<::MoleMole::HackerGamePlayerAttachEffectData>* JLJCPHFHLAD; // 0x780
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::EntityHandle>* PNKHDCGJKNG; // 0x788
	::NodeCanvas::Framework::Variable_1<::System::Object*>* LGPMNIBKPMI; // 0x790
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* NDGCDPCHNFA; // 0x798
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::NodeVisible>* POMCJLDACNF; // 0x7A0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::RigidbodyConstraints>* GKPKHDDBIAM; // 0x7A8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* ILBCIAAHGDO; // 0x7B0
	::NodeCanvas::Framework::Variable_1<::ProtoScript::NodeState>* MLNDJPABJBC; // 0x7B8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HackerGameCliParamType>* CBIGDLGCFEL; // 0x7C0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* NMCIMANACIM; // 0x7C8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::BubbleType>* IJLNFACFNGC; // 0x7D0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::InlevelCameraState>* BPAOPJGCMCM; // 0x7D8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* HPNBAGOOPHL; // 0x7E0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* EKPLJHKIGKD; // 0x7E8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::PipelineCamera::FinalCameraData>* LOGEKNOPOEC; // 0x7F0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::MonsterStrengthType>* PNAMFHJFOOG; // 0x7F8
	::NodeCanvas::Framework::Variable_1<::UnityEngine::LayerMask>* JJLEPBECLIB; // 0x800
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* AADIEMIMOCH; // 0x808
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::GameplayTag>* JGDGGHPILIG; // 0x810
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* IKNMOCFGACB; // 0x818
	::NodeCanvas::Framework::Variable_1<::System::Object*>* DHKDFFDFKEN; // 0x820
	::NodeCanvas::Framework::Variable_1<::UnityEngine::KeyCode>* FCKDKBDGAAL; // 0x828
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ParadoxNotion::OperationMethod>* AIFPOFENJEK; // 0x830
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Single>* IJNAOEIJDAG; // 0x838
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* NLKDHDHMMCJ; // 0x840
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::PropertyModifyFunction>* CDLHJEMGHBP; // 0x848
	::NodeCanvas::Framework::Variable_1<::System::Object*>* ACHDDKNIIMK; // 0x850
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Battle::LevelQuestConditionOperation>* LCGJMJHLJHH; // 0x858
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::PropertyModifyFunction>* DOBOPNBCHKD; // 0x860
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* DNOLDOAIBCA; // 0x868
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* JOLOMNMPOGL; // 0x870
	::NodeCanvas::Framework::Variable_1<::MoleMole::SpawnPointMaskRegion>* KLKOLCBGMLC; // 0x878
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* BJGCGGPNLIJ; // 0x880
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Battle::MonsterAlertInitParams>* EFDBCMCNOIA; // 0x888
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::TurnBattleUnitQueryKey>* LEEHHBLHALN; // 0x890
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* EPGJKCEMADG; // 0x898
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* ADMEBDCIPCG; // 0x8A0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::TurnBattleUnitQueryFilter>* HPEHDGDGJHE; // 0x8A8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* NFBJGKGOMON; // 0x8B0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* JEPJFIAAEEN; // 0x8B8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* OEMLABIILDK; // 0x8C0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* KMHHGGENGAH; // 0x8C8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* KJFECOINLOL; // 0x8D0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FairyTextUpdateType>* MAPJDBOHJLJ; // 0x8D8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* IBGEJEEPDFI; // 0x8E0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* IOABCKEONNL; // 0x8E8
	::NodeCanvas::Framework::Variable_1<::System::Char>* EOGFHHFJEIJ; // 0x8F0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* FFJLCKDJPHM; // 0x8F8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* LLOPIADDNJA; // 0x900
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* KHMGIJNPEKA; // 0x908
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* EGLEIOEDBGO; // 0x910
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::MonsterStrengthType>* OAHKDHGOHHH; // 0x918
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Int32>* NNHLABAICND; // 0x920
	::NodeCanvas::Framework::Variable_1<::MoleMole::InLevelTimerWidgetOperation>* GALNJLFBFDK; // 0x928
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* LFBNKBNNIBI; // 0x930
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::ChessUIIconType>* OEOCDJJNNNA; // 0x938
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::AnimStateCheckType>* HLAILKMPAMA; // 0x940
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* NAGBLGJJLDK; // 0x948
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* HMIFEBBJPKJ; // 0x950
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* ENCMMMKHCFP; // 0x958
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* LFKOHDNKAHA; // 0x960
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* GFNACBIPAIO; // 0x968
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::IKACJBCOKJI>* AKKBODLHILH; // 0x970
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::TargetValueModifyFunc>* DKCEPNIEFKB; // 0x978
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NGMBHMMCDCN; // 0x980
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* PHLMJPLIDCE; // 0x988
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* HLDHJCBDCCE; // 0x990
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* BHAILICPANO; // 0x998
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* KIDGKJJIOLG; // 0x9A0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Battle::LevelQuestConditionOperation>* CBGJPADDGIJ; // 0x9A8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* PENGKPKEOMC; // 0x9B0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::RaycastHit>* KJIBHEDLAGK; // 0x9B8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::WeatherType>* KOHDFPPCIKK; // 0x9C0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* CLEOAINCMEE; // 0x9C8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::WeatherType>* OMOIHEGFEIM; // 0x9D0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Keyframe>* DILMDIOHLKL; // 0x9D8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Char>* IFPEOEKIJAF; // 0x9E0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::EntityHandle>* FGNHLKDKHAK; // 0x9E8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* PKGGBKIGMBP; // 0x9F0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* IALMJCLOLED; // 0x9F8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::PropertyModifyFunction>* OFJKLGDPDMB; // 0xA00
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* HLMOOFHMHBH; // 0xA08
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::LayerMask>* DOCNBJKJJCC; // 0xA10
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Quaternion>* KKBCEKDDAAH; // 0xA18
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* CFGBJBBLDHL; // 0xA20
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* HIDKPBFKDBN; // 0xA28
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::ContactPoint>* OINICLLMGFM; // 0xA30
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* LHKILOGMFCP; // 0xA38
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Space>* CBNLBDLEGON; // 0xA40
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Color>* EGAIHMHEOOK; // 0xA48
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::PostEffectType>* AFKPELMBJIF; // 0xA50
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Battle::GamePlayLogicKind>* EGGHPJMKGCP; // 0xA58
	::NodeCanvas::Framework::Variable_1<::IKACJBCOKJI>* ICJLBPFKALO; // 0xA60
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::AbilitySpecialParamType>* EOIALGIFPLI; // 0xA68
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* NPACMBPPPCE; // 0xA70
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* GGBBDNEPGMN; // 0xA78
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::Foundation::Unreal::FTransform3D>* OFJKHCNNHHL; // 0xA80
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* HLFGDDFCNPP; // 0xA88
	::NodeCanvas::Framework::Variable_1<::MoleMole::Battle::LevelQuestConditionOperation>* IPJMMLBIHLH; // 0xA90
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::ScreenEffectType>* GDOIKNOODDK; // 0xA98
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* GECHKKAJMJK; // 0xAA0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* NNADGCFLBDL; // 0xAA8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* ECDNMLBCELJ; // 0xAB0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Battle::LevelQuestOperation>* EHLGMODJGMF; // 0xAB8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Vector3>* CEBMDPEPKGJ; // 0xAC0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* IPFHACCBDPG; // 0xAC8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::AimRectColor>* NJPDNOBOHKM; // 0xAD0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::ModifierStacking>* KEEPIIPBAAB; // 0xAD8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* FBEKNDJJNMB; // 0xAE0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::LayerMask>* JCLKHGMLAJA; // 0xAE8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Single>* BBOKDNFPLGM; // 0xAF0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HollowChessboard::HollowCell>* LNMCMEFLBAI; // 0xAF8
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::AbilityTargetting>* IBBLIGELMOA; // 0xB00
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::TurnBattleUnitQueryFilter>* FCHOCFJDHMB; // 0xB08
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* PDEMEEOJCJH; // 0xB10
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* DFFBBMCOIPH; // 0xB18
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* NECAHPJOPBD; // 0xB20
	::NodeCanvas::Framework::Variable_1<::UnityEngine::RaycastHit>* LEHFOKODFDB; // 0xB28
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Boolean>* GEOMHJOJFPO; // 0xB30
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::UInt32>* FEBCFAJCJMG; // 0xB38
	::NodeCanvas::Framework::Variable_1<::ProtoScript::AimRectColor>* GOHLOIFDMHO; // 0xB40
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* JGEGNFCNDHH; // 0xB48
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* BJIDJKMGLKN; // 0xB50
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::ScoreUIAnimationType>* PLEDBJHCKNM; // 0xB58
	::NodeCanvas::Framework::Variable_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* LBLHCFNNOHC; // 0xB60
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::AbilitySpecialParamType>* KOMDPOGNCME; // 0xB68
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Bounds>* LIEKPKEOHPO; // 0xB70
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NFPDKEOLALM; // 0xB78
	::NodeCanvas::Framework::Variable_1<::MoleMole::Battle::LevelQuestOperation>* PEIAMHGCHAH; // 0xB80
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* GPKEFHCJJPH; // 0xB88
	::NodeCanvas::Framework::Variable_1<::ProtoScript::NodeVisible>* PDLNHOMCFKB; // 0xB90
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::MonsterStrengthType>* IKOAKAHKGLN; // 0xB98
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* OKEIFELIGGG; // 0xBA0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* CBJBOBKBCGB; // 0xBA8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::ChessEntityType>* FPPCDJKNPDK; // 0xBB0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::TargetValueModifyFunc>* HBOFOBHBOKA; // 0xBB8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* NPEKKOKOBHC; // 0xBC0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* PNFKFDBOIHB; // 0xBC8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::Foundation::Unreal::FTransform3D>* PILKADAOICM; // 0xBD0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::TurnBattleUnitQueryKey>* LOGDGOPKMCA; // 0xBD8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HollowPieceBlendMode>* KHBGBPFAOOO; // 0xBE0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Space>* AKHHEMLGLAL; // 0xBE8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::NodeVisible>* FHEFMABJEGP; // 0xBF0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* FAELOKIALDN; // 0xBF8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Ray>* IEFMBGJJNDC; // 0xC00
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* EJCHJABDGJH; // 0xC08
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::EndHollowMiniGameType>* JHKDBNFPNOJ; // 0xC10
	::NodeCanvas::Framework::Variable_1<::System::Object*>* MPENNFDDOBI; // 0xC18
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::StatusEffectType>* KMLFENPNIGA; // 0xC20
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* FHFEEEEGLLC; // 0xC28
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FairyTextUpdateType>* PLCIBNIFJIF; // 0xC30
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* BKKFEGMMAPJ; // 0xC38
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* OBCNKFLEOPN; // 0xC40
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::CampType>* OIHHBMENDHB; // 0xC48
	::NodeCanvas::Framework::Variable_1<::MoleMole::EvtDestructionSwitchType>* FMLEHAJBEDL; // 0xC50
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* LALNJMFMEFJ; // 0xC58
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* EDNLEDPHJJB; // 0xC60
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* GAGFGLBMOIJ; // 0xC68
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Char>* CCDDDAJKPKB; // 0xC70
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::StatusEffectType>* MOAECLBILAE; // 0xC78
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Level::BangbooPlayType>* OGINLKBBIPA; // 0xC80
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::MusicBattleMarkerNodeType>* NDBLMPOJBPJ; // 0xC88
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* ALGJJKMPJGG; // 0xC90
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* KMHOOGPHDLA; // 0xC98
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* HBADBDHKHKO; // 0xCA0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HackerGamePlayerOnDamagedData>* OOILLMNHEGE; // 0xCA8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Vector2>* NGAPPODINMJ; // 0xCB0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* MFNLJADPHHJ; // 0xCB8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::ChessUIIconType>* BMLKMLEAHIL; // 0xCC0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* JPBJFOFPNNP; // 0xCC8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Bounds>* HIOLGBKPNMJ; // 0xCD0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* IKFNGPFPJAF; // 0xCD8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* EDAMNNHKPDJ; // 0xCE0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::PerformType>* AMHPINIFEKO; // 0xCE8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* EPGHPOEIEDH; // 0xCF0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::DoubleEliteCardInfo>* FJJNMGECBGD; // 0xCF8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::MultiTaskNodeHandle>* PHLABMBCNBG; // 0xD00
	::NodeCanvas::Framework::Variable_1<::System::Object*>* CLAKCHMAGEO; // 0xD08
	::NodeCanvas::Framework::Variable_1<::System::Object*>* CIBDPGNFPPD; // 0xD10
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* ANLEDMFPOHB; // 0xD18
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Vector3>* IONOAFNHGKH; // 0xD20
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::InLevelTimerWidgetOperation>* KHFMAKGOKFC; // 0xD28
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* JHLOJHEBILA; // 0xD30
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Collision*>* GEGEALIJGNP; // 0xD38
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* ABOGPEEMLKG; // 0xD40
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Color>* NMNIGEPMOIC; // 0xD48
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* OJKGKLJNLIC; // 0xD50
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Battle::LevelQuestOperation>* CBMHFJAGAGL; // 0xD58
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::RaycastHit>* HIIGBJKIMEL; // 0xD60
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::NodeState>* JBNNNEKPOKL; // 0xD68
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* MKOFLNOIFEE; // 0xD70
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FairyTextUpdateType>* LGJKGPKGGOF; // 0xD78
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* NNICLKGFIIB; // 0xD80
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::EvtDestructionSwitchType>* KNBCFJOMKAC; // 0xD88
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::ContactPoint2D>* GFDHFIPOCCP; // 0xD90
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* FBHBOOOKFBP; // 0xD98
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* JBPBNCGPJOP; // 0xDA0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::TurnBattleUnitQueryFilter>* FNAHOJOOHEF; // 0xDA8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* PEBAAIBHHNE; // 0xDB0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* JJDFNCIFIOC; // 0xDB8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* GFJMGKEJBIP; // 0xDC0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::AnimStateCheckType>* HAGHBIILHCP; // 0xDC8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HackerGameDamageData>* GCLBFCMNPMI; // 0xDD0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* HNLHGMDKANI; // 0xDD8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* PMMGIMBCHIA; // 0xDE0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* JLBFKLBBAKC; // 0xDE8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::BabelTowerTemplateOverrideData>* HBDMKOBEOPI; // 0xDF0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* JDJONLEPKOF; // 0xDF8
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* EKPBDNFMEFA; // 0xE00
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* MODPNKIPPHB; // 0xE08
	::NodeCanvas::Framework::Variable_1<::System::Object*>* EKJNGDLKCIK; // 0xE10
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* FCFFJJIJHIH; // 0xE18
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* KJHPDLCGDCM; // 0xE20
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* JCDBFIBFLCI; // 0xE28
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* MKDBGEGKBBL; // 0xE30
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* CIDFMCFDJGO; // 0xE38
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* KJIBBHBBNNN; // 0xE40
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::Share::GridDir>* GNOOKIBKPNF; // 0xE48
	::NodeCanvas::Framework::Variable_1<::MoleMole::HollowPieceBlendMode>* IPLJLONKCHI; // 0xE50
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::ModifierStacking>* HDHKJLFFGHI; // 0xE58
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* HAPHKNJKKLM; // 0xE60
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* KFGPNIJKAOL; // 0xE68
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::LayerMask>* FFIMOFPHGNI; // 0xE70
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* NEKABAGJAHI; // 0xE78
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* EIIJKCOAFFP; // 0xE80
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::UInt32>* KPIDAGIOPIN; // 0xE88
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* FEEENPADGNP; // 0xE90
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Rect>* EDEBELMMEKO; // 0xE98
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::HollowSystemUIState>* DEICIDAOCPJ; // 0xEA0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::EntityType>* AFLKMEFKHCD; // 0xEA8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::EntityType>* HCAJFBNAHOB; // 0xEB0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* JMLDBENCBJO; // 0xEB8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Battle::GamePlayLogicKind>* ECFCEDJBDCN; // 0xEC0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* OJBMAEDNEDH; // 0xEC8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* MJGNCEHLKCF; // 0xED0
	::NodeCanvas::Framework::Variable_1<::UnityEngine::ContactPoint2D>* EMHNFGEPIID; // 0xED8
	::NodeCanvas::Framework::Variable_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* GKLOINKHGKB; // 0xEE0
	::NodeCanvas::Framework::Variable_1<::ProtoScript::EndHollowMiniGameType>* HOJILABIHDC; // 0xEE8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::ScreenEffectType>* MCDNIMGOMHK; // 0xEF0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Battle::LevelQuestOperation>* OLAFMPMDDGH; // 0xEF8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::ProtoScript::HollowSystemUIState>* DPPBPJPDBAL; // 0xF00
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::AimRectColor>* JEJKOPHPEOD; // 0xF08
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::AimRectColor>* IEDKIEPFMPL; // 0xF10
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* CDGGDGLFIJM; // 0xF18
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* NDCCGMOLDKG; // 0xF20
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::TimePeriodType>* GGNEBPABAMF; // 0xF28
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* EEANEHLAECK; // 0xF30
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* GKCECBMDKEO; // 0xF38
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* LONBNJPMAFH; // 0xF40
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ParadoxNotion::OperationMethod>* IPDCJEAMMEL; // 0xF48
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Collision2D*>* EMNNKMKFCPA; // 0xF50
	::NodeCanvas::Framework::Variable_1<::System::Object*>* IIFCHHDCIME; // 0xF58
	::NodeCanvas::Framework::Variable_1<::ProtoScript::ChessUIIconType>* IDCACLALGHN; // 0xF60
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::BaseProperty>* CJDJLCMIIJB; // 0xF68
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::SpawnPointMaskRegion>* ALPLDOOJAGM; // 0xF70
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Boolean>* DBCNEPPHDMA; // 0xF78
	::NodeCanvas::Framework::Variable_1<::System::Object*>* ICBCGNAKBHF; // 0xF80
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* FOMACGFFDDM; // 0xF88
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* EPJGMBKIANJ; // 0xF90
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HackerGameDamageData>* KHAMENCDCKM; // 0xF98
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HackerGameCliParamType>* DJCCBOAPILN; // 0xFA0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::MusicBattleMarkerNodeType>* ENKHFGAPKDJ; // 0xFA8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Rect>* NMFFAMNBDGI; // 0xFB0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* JNGPIOLLEIE; // 0xFB8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* KFNGDDBFAKE; // 0xFC0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* NGHNKCJDOKJ; // 0xFC8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::BabelTowerTemplateOverrideData>* NOKGPIHPOJL; // 0xFD0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* BPDAJNPEAGB; // 0xFD8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HollowChessboard::HollowCell>* CJMEJBKCKHO; // 0xFE0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* DEALCBCMPMM; // 0xFE8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* IPBGOBAEBPD; // 0xFF0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::AbyssS2_EventType>* JBPJMNDJELH; // 0xFF8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* IJMBMPMKJDP; // 0x1000
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HollowPieceBlendMode>* EJBDJELAKNI; // 0x1008
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Vector2Int>* DGGFAGDBFHD; // 0x1010
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Space>* BIBOHCCGMPE; // 0x1018
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::MonsterFunctionType>* MKDIEFMKABG; // 0x1020
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* FBDAHGFAKCI; // 0x1028
	::NodeCanvas::Framework::Variable_1<::MoleMole::MultiTaskNodeHandle>* MOIILBOOPHB; // 0x1030
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Vector2Int>* CFLEMACIEMH; // 0x1038
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* KKIFEAGNOPA; // 0x1040
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* KIPNFMBEMDH; // 0x1048
	::NodeCanvas::Framework::Variable_1<::MoleMole::Battle::GamePlayLogicKind>* JMJJFCNIGBD; // 0x1050
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::AbilitySpecialParamType>* LMBCCOKOAMG; // 0x1058
	::NodeCanvas::Framework::Variable_1<::MoleMole::HollowChessboard::HollowCell>* LOOGMFNODIJ; // 0x1060
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::TimePeriodType>* CEAEOFGFLDL; // 0x1068
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::GameplayTag>* AIODCCMDOOA; // 0x1070
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NHGAANLKHAF; // 0x1078
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HackerGamePlayerOnDamagedData>* GKPFFNADMDC; // 0x1080
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Level::RatingType>* DNIKHLFGPGO; // 0x1088
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* FPELCJHNBNJ; // 0x1090
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* BDECJMKKGAI; // 0x1098
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* JPNKDBNANMO; // 0x10A0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::PerformType>* NPHEABLGKHM; // 0x10A8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::MultiTaskNodeHandle>* EGPEPBLHKLK; // 0x10B0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Level::RatingType>* BBIGFPDODEM; // 0x10B8
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::MonsterFunctionType>* KHODNGJDFGF; // 0x10C0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* CKKNJFMIFOG; // 0x10C8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* PFPBBGHADJH; // 0x10D0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::SpawnPointMaskRegion>* PLILGLNOPBM; // 0x10D8
	::NodeCanvas::Framework::Variable_1<::Share::GridDir>* BNGGCJOFFHK; // 0x10E0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::WrapMode>* HAGAONFJFLB; // 0x10E8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HackerGameCliParamType>* IGAIGFJNEJC; // 0x10F0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::HollowSystemType>* IPMFDCMMJPC; // 0x10F8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::ContactPoint2D>* MNCKOMELHOL; // 0x1100
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::TargetValueModifyFunc>* OPKIJPEEKCE; // 0x1108
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::AbyssS2_EventType>* FAJKMENKNMG; // 0x1110
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::KeyCode>* CLIOBGCFNIF; // 0x1118
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Color>* DNFKMIACAAE; // 0x1120
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HackerGamePlayerAttachEffectData>* LBFDEJAENKG; // 0x1128
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* LHIFIDJIKMK; // 0x1130
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::Share::GridDir>* IAFANBIFNBD; // 0x1138
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::MusicBattleMarkerNodeType>* MCBEGGBOJLP; // 0x1140
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* APFKHOAJBIK; // 0x1148
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* KJKLGMABGMG; // 0x1150
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* LBAHJJGJFDM; // 0x1158
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* OJOHICIDDGD; // 0x1160
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Vector4>* KDNJLNELECD; // 0x1168
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* JEMJNBDOFKO; // 0x1170
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Quaternion>* HECJNEGCAHL; // 0x1178
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::UInt32>* JCCEPNEOIJH; // 0x1180
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::Share::GridDir>* JMNDLIAOPLE; // 0x1188
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::ChessEntityType>* GBMLJPCDEDP; // 0x1190
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* DLJFGKPHAAN; // 0x1198
	::NodeCanvas::Framework::Variable_1<::System::Object*>* BONHNEOOMHL; // 0x11A0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Vector4>* HFFNIBCPAGO; // 0x11A8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::ModifierStacking>* DACIMIMIMEC; // 0x11B0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* NJIJMHJLCDC; // 0x11B8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* LPNDDNBLJIP; // 0x11C0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::Vector2>* HPJDIJCPLFD; // 0x11C8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::WeatherType>* JGJBCMPMEIH; // 0x11D0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::InputType>* OCKBBOCLBNA; // 0x11D8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Bounds>* IACDJOOJBHL; // 0x11E0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* LLJEDCOAEDP; // 0x11E8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* HAMKAAGGBHA; // 0x11F0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* NGNBAKMJFFF; // 0x11F8
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Ray>* PKBOHLILLFO; // 0x1200
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::AbilityTargetting>* OMPMMMCGIFB; // 0x1208
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::MusicBattleMarkerNodeType>* JDJLJBFLLJE; // 0x1210
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::HackerGamePlayerOnDamagedData>* JFFNPNOGNGN; // 0x1218
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::AbilitySpecialParamType>* CKAGIFKOHHE; // 0x1220
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::EntityType>* CAJKNOGFBEC; // 0x1228
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* COCLKANBFIP; // 0x1230
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::KeyCode>* IDDLICILPOM; // 0x1238
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::InputType>* GIOKKGGNIBO; // 0x1240
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::ProtoScript::NodeState>* MNAJADNIAOD; // 0x1248
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* DKOFCGDLEKN; // 0x1250
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* BDOLKFKAONB; // 0x1258
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::Config::ScreenEffectType>* EINIECGGHDN; // 0x1260
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* KDKFICIJLNC; // 0x1268
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* HEPOCPMCDJO; // 0x1270
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::StatusEffectType>* OPMBGKOIHIH; // 0x1278
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::Config::InlevelCameraState>* DEOJCJPBEBL; // 0x1280
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* OPJHCOEAJGE; // 0x1288
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* NALKKLMGLLL; // 0x1290
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* DECFKJOODBB; // 0x1298
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::System::Object*>* BHPFIEOOLFP; // 0x12A0
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Quaternion>* KHPHNGOFDNH; // 0x12A8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::Config::TimePeriodType>* OEDLLALNFNA; // 0x12B0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::UnityEngine::KeyCode>* CBHNMCJCHFN; // 0x12B8
	::NodeCanvas::Framework::Variable_1<::Foundation::Unreal::FTransform3D>* CNLDKLCEBPN; // 0x12C0
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::ContactPoint2D>* GGJOFLDLOLI; // 0x12C8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* MDLHKDPHJCC; // 0x12D0
	::NodeCanvas::Framework::Variable_1<::MoleMole::StatusEffectType>* CNOOMIKBJPB; // 0x12D8
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::ProtoScript::PostEffectType>* AGCDGBKKMBF; // 0x12E0
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::InLevelTimerWidgetOperation>* CKAIBKOJFAE; // 0x12E8
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::MoleMole::EvtDestructionSwitchType>* IDHNKJIKCIO; // 0x12F0
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::System::Object*>* DFDIEENOGBF; // 0x12F8
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* IFDMIOGIGMF; // 0x1300
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::DoubleEliteCardInfo>* GMHPMLIFAFG; // 0x1308
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::UnityEngine::Color>* EHOFAFHPFAC; // 0x1310
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::MoleMole::SpawnPointMaskRegion>* MCHKCELPCIA; // 0x1318
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Object*>* JGKDHILBCAB; // 0x1320
	::NodeCanvas::Framework::Internal::ReflectedFunction_1<::UnityEngine::Vector3>* LCMLCCHAIDI; // 0x1328
	::NodeCanvas::Tasks::Actions::AddElementToDictionary_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* BKIPIBIDBMI; // 0x1330
	::NodeCanvas::Framework::Internal::ReflectedAction_1<::System::Boolean>* PKJFKIGMDOG; // 0x1338

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_KHAFHPMHOKJ__CTOR_OFFSET))(this);
	}
};
