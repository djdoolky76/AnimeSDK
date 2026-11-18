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

namespace NodeCanvas::Tasks::Conditions { template <typename T> class TryGetValue_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define GPIGDAICGOD_FADPJBIDMNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1107BB20)

inline static constexpr unsigned int GPIGDAICGOD_FADPJBIDMNO_TypeDefinitionIndex = 96734;

class GPIGDAICGOD_FADPJBIDMNO : public ::System::Object
{
public:
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGamePlayerAttachEffectData>* EAOLFEKBJBN; // 0x10
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::PipelineCamera::FinalCameraData>* IACDJOOJBHL; // 0x18
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* BAHJDHKNDDJ; // 0x20
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::BubbleType>* FMLEHAJBEDL; // 0x28
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::AbilityTargetting>* FMEAOOJFJAG; // 0x30
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* KJGJBMJKGKH; // 0x38
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::NodeState>* FBOGJCDPBAP; // 0x40
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* PKJFKIGMDOG; // 0x48
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::KeyCode>* HAGHBIILHCP; // 0x50
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::GameplayTag>* GKLOINKHGKB; // 0x58
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Bounds>* CKIBHMGALHH; // 0x60
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::TurnBattleUnitQueryKey>* NMCIMANACIM; // 0x68
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* KBCJFJHOIMP; // 0x70
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::HollowSystemType>* JMBOEEELLKI; // 0x78
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* FFFMOKDJBHI; // 0x80
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Color>* IALMHBCBKAA; // 0x88
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::MonsterAlertInitParams>* DPFAHILNPCI; // 0x90
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* KHODNGJDFGF; // 0x98
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* FLEILPGKJGJ; // 0xA0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* ENIMAOJLJEN; // 0xA8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* LBDPJJFENHA; // 0xB0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* KLKOLCBGMLC; // 0xB8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* ADAKMAMFMLE; // 0xC0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* HOJILABIHDC; // 0xC8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::EvtDestructionSwitchType>* GMJDLMOCFBP; // 0xD0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* BHJFEKDEHCC; // 0xD8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* PMGBNBBBGON; // 0xE0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Vector3>* NMNIGEPMOIC; // 0xE8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::PropertyModifyFunction>* FFPPCBDODHD; // 0xF0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::TimePeriodType>* NNADGCFLBDL; // 0xF8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Collision2D*>* PFPBBGHADJH; // 0x100
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* DKOFCGDLEKN; // 0x108
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::ChessUIControlType>* ONIKPLNKMPH; // 0x110
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FairyTextUpdateType>* IPLJLONKCHI; // 0x118
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::NodeVisible>* HLKHLJKKEAB; // 0x120
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::RaycastHit2D>* LLCLCHNIHNA; // 0x128
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* MKPLMHBIKEL; // 0x130
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* PNAMFHJFOOG; // 0x138
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::MultiTaskNodeHandle>* IPJMMLBIHLH; // 0x140
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* HCLNGPLLJJP; // 0x148
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::SpawnPointMaskRegion>* ININMHCDGBL; // 0x150
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::StatusEffectType>* IKNCMNIMJPO; // 0x158
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::PostEffectType>* BIBOHCCGMPE; // 0x160
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ScoreUIAnimationType>* PEIAMHGCHAH; // 0x168
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Vector4>* ANKANIHBJOO; // 0x170
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ChessEntityType>* JOFLKEEOGKO; // 0x178
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* CLAKCHMAGEO; // 0x180
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::DoubleEliteCardInfo>* HLGKJHPAIPH; // 0x188
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Collision*>* CBNLBDLEGON; // 0x190
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* MCACEMAKCBJ; // 0x198
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::LevelQuestConditionOperation>* AHNNKDAFINN; // 0x1A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::EntityType>* CIBDPGNFPPD; // 0x1A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::ModifierStacking>* JLBFKLBBAKC; // 0x1B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* BONHNEOOMHL; // 0x1B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::EndHollowMiniGameType>* GEGEALIJGNP; // 0x1C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::AnimStateCheckType>* HMGCNHCGALG; // 0x1C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* EOGFHHFJEIJ; // 0x1D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* PNFKFDBOIHB; // 0x1D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGameDamageData>* MOIILBOOPHB; // 0x1E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* JJLEPBECLIB; // 0x1E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* AMHPINIFEKO; // 0x1F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* GNGMNDGFEGM; // 0x1F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* LOOGMFNODIJ; // 0x200
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* COCLKANBFIP; // 0x208
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGamePlayerOnDamagedData>* CNOOMIKBJPB; // 0x210
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::ContactPoint2D>* PKBOHLILLFO; // 0x218
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* OHDCLPNMLDP; // 0x220
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* KPBJHEJIIGB; // 0x228
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::AimRectColor>* NMFFAMNBDGI; // 0x230
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* JLJCPHFHLAD; // 0x238
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::InLevelTimerWidgetOperation>* JMJJFCNIGBD; // 0x240
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* HECJNEGCAHL; // 0x248
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* NEBHIEPEOFJ; // 0x250
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::InlevelCameraState>* IKFNGPFPJAF; // 0x258
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* EIMDIPCLLAD; // 0x260
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* LOKMAAMNHCE; // 0x268
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* JMLDBENCBJO; // 0x270
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowPieceBlendMode>* OKFHDKJHFCH; // 0x278
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* PKGGBKIGMBP; // 0x280
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* GOHLOIFDMHO; // 0x288
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* PLILIMEKLNE; // 0x290
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* OJBMAEDNEDH; // 0x298
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::WrapMode>* CGIMFLDHNLA; // 0x2A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* DHKDFFDFKEN; // 0x2A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Ray>* OACOFBNNDDG; // 0x2B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* IBBLIGELMOA; // 0x2B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* KIMIIGINAEH; // 0x2C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* HLMOOFHMHBH; // 0x2C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* PDLNHOMCFKB; // 0x2D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::PerformType>* NHAFHGFBCDC; // 0x2D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::TaskCompletionSourceNodeHandle>* MPENNFDDOBI; // 0x2E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* OAAINDMKMDC; // 0x2E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* DKIMBHMBEIN; // 0x2F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::Share::GridDir>* KEAMLKEDDPN; // 0x2F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::HollowSystemUIState>* EABBDHDGLGK; // 0x300
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* DEALCBCMPMM; // 0x308
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::MusicBattleMarkerNodeType>* LGPMNIBKPMI; // 0x310
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* EKPBDNFMEFA; // 0x318
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::ScreenEffectType>* BHAILICPANO; // 0x320
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HollowCell>* IJNAOEIJDAG; // 0x328
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::UInt32>* GKEECHHOIBE; // 0x330
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* LHBFMKHKCDO; // 0x338
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::TargetValueModifyFunc>* JNGPIOLLEIE; // 0x340
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::EntityHandle>* PBDINHAHNNI; // 0x348
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::Foundation::Unreal::FTransform3D>* GAFGOCDDMBE; // 0x350
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Boolean>* KDNJLNELECD; // 0x358
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Int32>* EOAMLAKGOBN; // 0x360
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::ContactPoint>* EPIHLBKOIIB; // 0x368
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::CampType>* HBOFOBHBOKA; // 0x370
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* ADLLBNLKAKF; // 0x378
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::LevelQuestOperation>* CKAGIFKOHHE; // 0x380
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* HPNBAGOOPHL; // 0x388
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* HLOCNHNACFN; // 0x390
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Single>* KHPHNGOFDNH; // 0x398
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* ACHDDKNIIMK; // 0x3A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* HMIFEBBJPKJ; // 0x3A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* IDCACLALGHN; // 0x3B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* ONLAKNNNJOH; // 0x3B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* CICNLBGIODD; // 0x3C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Keyframe>* EMHNFGEPIID; // 0x3C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::LayerMask>* HBDMKOBEOPI; // 0x3D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* KIPNFMBEMDH; // 0x3D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::GamePlayLogicKind>* LBLHCFNNOHC; // 0x3E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Space>* IGDMGABOFOO; // 0x3E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::MonsterFunctionType>* LFKOHDNKAHA; // 0x3F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGameCliParamType>* GALNJLFBFDK; // 0x3F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Rect>* LEHFOKODFDB; // 0x400
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* HKCFNIKCAAK; // 0x408
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Level::RatingType>* PMHACLAFPPO; // 0x410
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* CABOHFOCBGE; // 0x418
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* NNICLKGFIIB; // 0x420
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ParadoxNotion::OperationMethod>* DILMDIOHLKL; // 0x428
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* BNGGCJOFFHK; // 0x430
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::AbilitySpecialParamType>* JDJLJBFLLJE; // 0x438
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* MLNDJPABJBC; // 0x440
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::WeatherType>* KIDGKJJIOLG; // 0x448
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Level::BangbooPlayType>* CEBMDPEPKGJ; // 0x450
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Quaternion>* KFOFDOMEFIO; // 0x458
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* IIFCHHDCIME; // 0x460
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Vector2Int>* MNHBHDEEPEK; // 0x468
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::MonsterStrengthType>* NAGBLGJJLDK; // 0x470
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* AFLKMEFKHCD; // 0x478
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::AbyssS2_EventType>* ICBCGNAKBHF; // 0x480
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::ChessUIIconType>* GGJOFLDLOLI; // 0x488
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::RaycastHit>* CNLDKLCEBPN; // 0x490
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::TurnBattleUnitQueryFilter>* POACKOHCFMG; // 0x498
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* NGAPPODINMJ; // 0x4A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::IKACJBCOKJI>* EHOFAFHPFAC; // 0x4A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::BaseProperty>* OIAGHBPCBIM; // 0x4B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Char>* DNCAJDHBLIL; // 0x4B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* ICJLBPFKALO; // 0x4C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* BECKMINIPKP; // 0x4C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Vector2>* LJEEDHMCKBO; // 0x4D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* DHPBLIMCEBD; // 0x4D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::BabelTowerTemplateOverrideData>* EKJNGDLKCIK; // 0x4E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::InputType>* NKAFAJBIMLL; // 0x4E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* FCKDKBDGAAL; // 0x4F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::RigidbodyConstraints>* ONOKMJCEFFD; // 0x4F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* LKILHAEOIAD; // 0x500
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Object*>* ELHHBKJMHOI; // 0x508

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_FADPJBIDMNO__CTOR_OFFSET))(this);
	}
};
