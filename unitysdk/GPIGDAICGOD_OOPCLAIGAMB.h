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

namespace FlowCanvas { template <typename T> class BinderConnection_1; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define GPIGDAICGOD_OOPCLAIGAMB_DHGHLBMFNGA_OFFSET UNITYSDK_OFFSET(0x1107BBF0)
#define GPIGDAICGOD_OOPCLAIGAMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1107BBE0)

inline static constexpr unsigned int GPIGDAICGOD_OOPCLAIGAMB_TypeDefinitionIndex = 96742;

class GPIGDAICGOD_OOPCLAIGAMB : public ::System::Object
{
public:
	::FlowCanvas::ValueOutput_1<::System::Boolean>* HAMKAAGGBHA; // 0x10
	::FlowCanvas::ValueOutput_1<::MoleMole::EvtDestructionSwitchType>* IAFANBIFNBD; // 0x18
	::FlowCanvas::ValueOutput_1<::MoleMole::Level::RatingType>* OPJHCOEAJGE; // 0x20
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* AHNNKDAFINN; // 0x28
	::FlowCanvas::ValueInput_1<::UnityEngine::RaycastHit2D>* DNAPOOHJOLP; // 0x30
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* MADOBHPKFHA; // 0x38
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::PerformType>* IALGGHIJOFA; // 0x40
	::FlowCanvas::BinderConnection_1<::System::Object*>* JLJCPHFHLAD; // 0x48
	::FlowCanvas::ValueOutput_1<::MoleMole::Vector2Int>* OINICLLMGFM; // 0x50
	::FlowCanvas::ValueInput_1<::System::Object*>* BJGCGGPNLIJ; // 0x58
	::FlowCanvas::ValueOutput_1<::PipelineCamera::FinalCameraData>* MFNLJADPHHJ; // 0x60
	::FlowCanvas::ValueOutput_1<::System::Object*>* GIOKKGGNIBO; // 0x68
	::FlowCanvas::ValueOutput_1<::System::Object*>* KHBGBPFAOOO; // 0x70
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* FBHBOOOKFBP; // 0x78
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::BaseProperty>* EAOLFEKBJBN; // 0x80
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::MonsterFunctionType>* HLCMDJMIPPK; // 0x88
	::FlowCanvas::ValueOutput_1<::System::Object*>* BBIGFPDODEM; // 0x90
	::FlowCanvas::BinderConnection_1<::UnityEngine::Vector4>* KDNJLNELECD; // 0x98
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* GAGFGLBMOIJ; // 0xA0
	::FlowCanvas::BinderConnection_1<::System::Object*>* OACOFBNNDDG; // 0xA8
	::FlowCanvas::ValueInput_1<::System::Object*>* EEANEHLAECK; // 0xB0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::WeatherType>* IALMJCLOLED; // 0xB8
	::FlowCanvas::ValueOutput_1<::UnityEngine::KeyCode>* DFLEICJPIKE; // 0xC0
	::FlowCanvas::ValueOutput_1<::UnityEngine::RaycastHit>* ICGIIKGCABM; // 0xC8
	::FlowCanvas::ValueOutput_1<::System::Object*>* MODPNKIPPHB; // 0xD0
	::FlowCanvas::ValueOutput_1<::System::Object*>* GIPIOGPDNAJ; // 0xD8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* POACKOHCFMG; // 0xE0
	::FlowCanvas::ValueInput_1<::MoleMole::TurnBattleUnitQueryKey>* ANBFNCNLLHG; // 0xE8
	::FlowCanvas::ValueOutput_1<::System::Object*>* FHEFMABJEGP; // 0xF0
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGamePlayerOnDamagedData>* DBCNEPPHDMA; // 0xF8
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::MonsterStrengthType>* NOGCAONMJCN; // 0x100
	::FlowCanvas::ValueOutput_1<::ProtoScript::EndHollowMiniGameType>* CJHFADFFLAA; // 0x108
	::FlowCanvas::ValueOutput_1<::MoleMole::MultiTaskNodeHandle>* IONOAFNHGKH; // 0x110
	::FlowCanvas::BinderConnection_1<::System::Object*>* CBNLBDLEGON; // 0x118
	::FlowCanvas::ValueInput_1<::ProtoScript::AimRectColor>* NPACMBPPPCE; // 0x120
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowCell>* EIFMMCLEIDN; // 0x128
	::FlowCanvas::ValueOutput_1<::MoleMole::InLevelTimerWidgetOperation>* HPJDIJCPLFD; // 0x130
	::FlowCanvas::ValueOutput_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* JBPJMNDJELH; // 0x138
	::FlowCanvas::BinderConnection_1<::System::Object*>* PNAMFHJFOOG; // 0x140
	::FlowCanvas::ValueOutput_1<::ProtoScript::ChessUIIconType>* JIOONMAOMMF; // 0x148
	::FlowCanvas::ValueInput_1<::UnityEngine::RaycastHit>* APFKHOAJBIK; // 0x150
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::GamePlayLogicKind>* MNCKOMELHOL; // 0x158
	::FlowCanvas::BinderConnection_1<::System::Object*>* KIDGKJJIOLG; // 0x160
	::FlowCanvas::BinderConnection_1<::System::Object*>* LGPMNIBKPMI; // 0x168
	::FlowCanvas::BinderConnection_1<::System::Object*>* PBDINHAHNNI; // 0x170
	::FlowCanvas::ValueOutput_1<::System::Object*>* MOAECLBILAE; // 0x178
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGameCliParamType>* IDDLICILPOM; // 0x180
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* PMOGENBMKJG; // 0x188
	::FlowCanvas::ValueInput_1<::System::Object*>* EJBDJELAKNI; // 0x190
	::FlowCanvas::ValueInput_1<::MoleMole::GameplayTag>* CLIOBGCFNIF; // 0x198
	::FlowCanvas::BinderConnection_1<::UnityEngine::RigidbodyConstraints>* HMIFEBBJPKJ; // 0x1A0
	::FlowCanvas::ValueInput_1<::System::Object*>* OFJKHCNNHHL; // 0x1A8
	::FlowCanvas::BinderConnection_1<::UnityEngine::WrapMode>* ACHDDKNIIMK; // 0x1B0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::MonsterFunctionType>* JMJJFCNIGBD; // 0x1B8
	::FlowCanvas::BinderConnection_1<::UnityEngine::Collision2D*>* CKIBHMGALHH; // 0x1C0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* KHFMAKGOKFC; // 0x1C8
	::FlowCanvas::ValueOutput_1<::System::Object*>* LLOPIADDNJA; // 0x1D0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* HIJJENCGNKE; // 0x1D8
	::FlowCanvas::ValueOutput_1<::System::Object*>* KNKEMEPDBEP; // 0x1E0
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::ScreenEffectType>* BNKJPHAODDH; // 0x1E8
	::FlowCanvas::ValueOutput_1<::System::UInt32>* OJOHICIDDGD; // 0x1F0
	::FlowCanvas::ValueInput_1<::System::Object*>* OCKBBOCLBNA; // 0x1F8
	::FlowCanvas::BinderConnection_1<::System::Object*>* HPNBAGOOPHL; // 0x200
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* BHAILICPANO; // 0x208
	::FlowCanvas::BinderConnection_1<::System::Object*>* LBLHCFNNOHC; // 0x210
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* CBMHFJAGAGL; // 0x218
	::FlowCanvas::ValueInput_1<::UnityEngine::Color>* AADIEMIMOCH; // 0x220
	::FlowCanvas::ValueInput_1<::System::Object*>* JFFNPNOGNGN; // 0x228
	::FlowCanvas::ValueInput_1<::MoleMole::Config::InlevelCameraState>* BHCPBCDKOGN; // 0x230
	::FlowCanvas::ValueInput_1<::System::Object*>* KIOPDABEKAA; // 0x238
	::FlowCanvas::BinderConnection_1<::System::Object*>* JOFLKEEOGKO; // 0x240
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::InlevelCameraState>* NNLJCDJAEOL; // 0x248
	::FlowCanvas::ValueInput_1<::ProtoScript::PostEffectType>* NFBJGKGOMON; // 0x250
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::InputType>* GBMLJPCDEDP; // 0x258
	::FlowCanvas::BinderConnection_1<::MoleMole::ScoreUIAnimationType>* HMGCNHCGALG; // 0x260
	::FlowCanvas::BinderConnection_1<::UnityEngine::LayerMask>* OAAINDMKMDC; // 0x268
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* OPKIJPEEKCE; // 0x270
	::FlowCanvas::ValueOutput_1<::IKACJBCOKJI>* KKIFEAGNOPA; // 0x278
	::FlowCanvas::ValueOutput_1<::UnityEngine::Keyframe>* EGLEIOEDBGO; // 0x280
	::FlowCanvas::ValueOutput_1<::MoleMole::BubbleType>* BLPOPGGHIGG; // 0x288
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::PropertyModifyFunction>* PEIAMHGCHAH; // 0x290
	::FlowCanvas::ValueOutput_1<::UnityEngine::RaycastHit2D>* ENHKPADJLDL; // 0x298
	::FlowCanvas::ValueInput_1<::PipelineCamera::FinalCameraData>* DFFBBMCOIPH; // 0x2A0
	::FlowCanvas::BinderConnection_1<::ProtoScript::HollowSystemType>* BHJFEKDEHCC; // 0x2A8
	::FlowCanvas::ValueOutput_1<::System::Object*>* OOILLMNHEGE; // 0x2B0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::ScreenEffectType>* ININMHCDGBL; // 0x2B8
	::FlowCanvas::ValueInput_1<::MoleMole::Config::MonsterStrengthType>* DGGFHJBFKIN; // 0x2C0
	::FlowCanvas::ValueOutput_1<::UnityEngine::ContactPoint>* KDKFICIJLNC; // 0x2C8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Bounds>* ILPMKLPKEJF; // 0x2D0
	::FlowCanvas::ValueInput_1<::ProtoScript::HollowSystemType>* NPEKKOKOBHC; // 0x2D8
	::FlowCanvas::ValueOutput_1<::ParadoxNotion::OperationMethod>* OMEIOOGEPIB; // 0x2E0
	::FlowCanvas::BinderConnection_1<::System::Char>* PLILIMEKLNE; // 0x2E8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* CJDJLCMIIJB; // 0x2F0
	::FlowCanvas::ValueInput_1<::System::Object*>* MEPKFNCNCGL; // 0x2F8
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::GamePlayLogicKind>* KIMIIGINAEH; // 0x300
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* BCOHHFMNBHJ; // 0x308
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* IJMBMPMKJDP; // 0x310
	::FlowCanvas::ValueOutput_1<::System::Object*>* CBJBOBKBCGB; // 0x318
	::FlowCanvas::ValueInput_1<::MoleMole::Config::ModifierStacking>* NCBNEMPHBLJ; // 0x320
	::FlowCanvas::BinderConnection_1<::UnityEngine::Collision*>* EMHNFGEPIID; // 0x328
	::FlowCanvas::ValueOutput_1<::UnityEngine::WrapMode>* LBAHJJGJFDM; // 0x330
	::FlowCanvas::BinderConnection_1<::MoleMole::TurnBattleUnitQueryKey>* BAHJDHKNDDJ; // 0x338
	::FlowCanvas::ValueOutput_1<::System::Object*>* IGOCFMHANMA; // 0x340
	::FlowCanvas::ValueOutput_1<::ProtoScript::HollowSystemUIState>* DCIOKALDBLI; // 0x348
	::FlowCanvas::ValueOutput_1<::MoleMole::SpawnPointMaskRegion>* KKBCEKDDAAH; // 0x350
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* MJGNCEHLKCF; // 0x358
	::FlowCanvas::ValueOutput_1<::System::Object*>* NEKABAGJAHI; // 0x360
	::FlowCanvas::ValueInput_1<::System::Object*>* NBKKHJDLEHA; // 0x368
	::FlowCanvas::ValueInput_1<::UnityEngine::Collision2D*>* MKOFLNOIFEE; // 0x370
	::FlowCanvas::ValueInput_1<::MoleMole::Config::AbilitySpecialParamType>* FKJNKAPMBDO; // 0x378
	::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityType>* EEHOCEMKCPI; // 0x380
	::FlowCanvas::ValueInput_1<::MoleMole::Level::BangbooPlayType>* JFANLFEPGAG; // 0x388
	::FlowCanvas::ValueOutput_1<::System::Object*>* GFCDMJDGMGO; // 0x390
	::FlowCanvas::ValueInput_1<::System::Object*>* OEOCDJJNNNA; // 0x398
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* MCBEGGBOJLP; // 0x3A0
	::FlowCanvas::ValueInput_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* NDELBPMILOP; // 0x3A8
	::FlowCanvas::ValueOutput_1<::System::Object*>* MKDIEFMKABG; // 0x3B0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* OEDLLALNFNA; // 0x3B8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* FBEKNDJJNMB; // 0x3C0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* NJIJMHJLCDC; // 0x3C8
	::FlowCanvas::ValueOutput_1<::System::Object*>* PENGKPKEOMC; // 0x3D0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* OIAGHBPCBIM; // 0x3D8
	::FlowCanvas::ValueInput_1<::System::Object*>* ECFCEDJBDCN; // 0x3E0
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::GamePlayLogicKind>* IGPBPBAAPLL; // 0x3E8
	::FlowCanvas::BinderConnection_1<::System::Object*>* IKFNGPFPJAF; // 0x3F0
	::FlowCanvas::ValueOutput_1<::System::Object*>* EHCOBHCMAKG; // 0x3F8
	::FlowCanvas::BinderConnection_1<::System::Object*>* DPFAHILNPCI; // 0x400
	::FlowCanvas::ValueInput_1<::System::Object*>* MCDNIMGOMHK; // 0x408
	::FlowCanvas::BinderConnection_1<::UnityEngine::RaycastHit>* IALMHBCBKAA; // 0x410
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* BPAOPJGCMCM; // 0x418
	::FlowCanvas::ValueInput_1<::UnityEngine::Vector4>* JPDDENCNOIM; // 0x420
	::FlowCanvas::BinderConnection_1<::ProtoScript::AimRectColor>* OHDCLPNMLDP; // 0x428
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::LevelQuestOperation>* LOKMAAMNHCE; // 0x430
	::FlowCanvas::ValueInput_1<::UnityEngine::Collision*>* LNMCMEFLBAI; // 0x438
	::FlowCanvas::ValueInput_1<::System::Object*>* GPKEFHCJJPH; // 0x440
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGameDamageData>* FFIMOFPHGNI; // 0x448
	::FlowCanvas::BinderConnection_1<::System::Object*>* FFPPCBDODHD; // 0x450
	::FlowCanvas::ValueInput_1<::System::Object*>* OPMBGKOIHIH; // 0x458
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* CDGGDGLFIJM; // 0x460
	::FlowCanvas::ValueInput_1<::ProtoScript::ChessUIIconType>* GGBBDNEPGMN; // 0x468
	::FlowCanvas::ValueInput_1<::System::Single>* NPHEABLGKHM; // 0x470
	::FlowCanvas::ValueInput_1<::UnityEngine::Space>* MNCGLOMHOGF; // 0x478
	::FlowCanvas::ValueInput_1<::MoleMole::InLevelTimerWidgetOperation>* LCMLCCHAIDI; // 0x480
	::FlowCanvas::ValueInput_1<::System::Object*>* JGEGNFCNDHH; // 0x488
	::FlowCanvas::ValueInput_1<::MoleMole::Config::TimePeriodType>* LBFDEJAENKG; // 0x490
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* KHODNGJDFGF; // 0x498
	::FlowCanvas::ValueOutput_1<::System::Object*>* BAKJLBGJIAI; // 0x4A0
	::FlowCanvas::ValueInput_1<::ParadoxNotion::OperationMethod>* KFNGDDBFAKE; // 0x4A8
	::FlowCanvas::ValueOutput_1<::System::Int32>* JJDFNCIFIOC; // 0x4B0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* HCAJFBNAHOB; // 0x4B8
	::FlowCanvas::ValueInput_1<::System::Object*>* MCOJHBJKEDG; // 0x4C0
	::FlowCanvas::ValueOutput_1<::MoleMole::ChessEntityType>* DEICIDAOCPJ; // 0x4C8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* NGMBHMMCDCN; // 0x4D0
	::FlowCanvas::ValueOutput_1<::System::Char>* NFJCJACKEED; // 0x4D8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* PEAEGNPGKOO; // 0x4E0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::BaseProperty>* KHMGIJNPEKA; // 0x4E8
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::CampType>* HAPHKNJKKLM; // 0x4F0
	::FlowCanvas::ValueOutput_1<::UnityEngine::Color>* MKDBGEGKBBL; // 0x4F8
	::FlowCanvas::ValueOutput_1<::System::Object*>* CDLHJEMGHBP; // 0x500
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::LevelQuestOperation>* KJIBHEDLAGK; // 0x508
	::FlowCanvas::ValueOutput_1<::UnityEngine::LayerMask>* IPFHACCBDPG; // 0x510
	::FlowCanvas::ValueInput_1<::System::Object*>* OBCNKFLEOPN; // 0x518
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::MonsterAlertInitParams>* HLGKJHPAIPH; // 0x520
	::FlowCanvas::ValueOutput_1<::UnityEngine::ContactPoint2D>* GKCECBMDKEO; // 0x528
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* LHIFIDJIKMK; // 0x530
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::InlevelCameraState>* CNOOMIKBJPB; // 0x538
	::FlowCanvas::ValueInput_1<::MoleMole::BabelTowerTemplateOverrideData>* LCPEPCBIIMB; // 0x540
	::FlowCanvas::ValueOutput_1<::MoleMole::TaskCompletionSourceNodeHandle>* LIEKPKEOHPO; // 0x548
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::TargetValueModifyFunc>* IKNCMNIMJPO; // 0x550
	::FlowCanvas::ValueOutput_1<::UnityEngine::RigidbodyConstraints>* FCFFJJIJHIH; // 0x558
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* KEEPIIPBAAB; // 0x560
	::FlowCanvas::ValueInput_1<::System::Object*>* MCHKCELPCIA; // 0x568
	::FlowCanvas::ValueOutput_1<::System::Object*>* JOLOMNMPOGL; // 0x570
	::FlowCanvas::ValueOutput_1<::System::Single>* KLJPELHFCJD; // 0x578
	::FlowCanvas::ValueInput_1<::System::Object*>* HPEHDGDGJHE; // 0x580
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* IKNMOCFGACB; // 0x588
	::FlowCanvas::ValueInput_1<::System::Object*>* DOBOPNBCHKD; // 0x590
	::FlowCanvas::BinderConnection_1<::System::Object*>* GMJDLMOCFBP; // 0x598
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::AbilityTargetting>* EKJLDFJEGFI; // 0x5A0
	::FlowCanvas::BinderConnection_1<::System::Object*>* JLBFKLBBAKC; // 0x5A8
	::FlowCanvas::BinderConnection_1<::ProtoScript::EndHollowMiniGameType>* OJBMAEDNEDH; // 0x5B0
	::FlowCanvas::ValueInput_1<::UnityEngine::Vector2>* FBDAHGFAKCI; // 0x5B8
	::FlowCanvas::BinderConnection_1<::ParadoxNotion::OperationMethod>* LHBFMKHKCDO; // 0x5C0
	::FlowCanvas::BinderConnection_1<::ProtoScript::ChessUIControlType>* EKPBDNFMEFA; // 0x5C8
	::FlowCanvas::ValueInput_1<::MoleMole::EvtDestructionSwitchType>* IFPEOEKIJAF; // 0x5D0
	::FlowCanvas::BinderConnection_1<::ProtoScript::ChessUIIconType>* KIPNFMBEMDH; // 0x5D8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* MNHBHDEEPEK; // 0x5E0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* GLBCAOAADEE; // 0x5E8
	::FlowCanvas::BinderConnection_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* GKLOINKHGKB; // 0x5F0
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowPieceBlendMode>* FAJNNIJNJJJ; // 0x5F8
	::FlowCanvas::ValueOutput_1<::MoleMole::ScoreUIAnimationType>* FBCHKGFFDOL; // 0x600
	::FlowCanvas::BinderConnection_1<::UnityEngine::ContactPoint2D>* KFOFDOMEFIO; // 0x608
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* EFDBCMCNOIA; // 0x610
	::FlowCanvas::BinderConnection_1<::System::Object*>* DKOFCGDLEKN; // 0x618
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::LevelQuestOperation>* HNMICMMEMBA; // 0x620
	::FlowCanvas::ValueInput_1<::MoleMole::Config::AbilityTargetting>* BIBPIIOKHHP; // 0x628
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* NGEPHBAGFGO; // 0x630
	::FlowCanvas::ValueOutput_1<::System::Object*>* DGGFAGDBFHD; // 0x638
	::FlowCanvas::ValueOutput_1<::MoleMole::TurnBattleUnitQueryFilter>* DNFKMIACAAE; // 0x640
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* HDHKJLFFGHI; // 0x648
	::FlowCanvas::ValueOutput_1<::System::Object*>* EPGHPOEIEDH; // 0x650
	::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* IJLNFACFNGC; // 0x658
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* FMEAOOJFJAG; // 0x660
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* HBOFOBHBOKA; // 0x668
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* FFFMOKDJBHI; // 0x670
	::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* OIFLAGNNOEC; // 0x678
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* EHLGMODJGMF; // 0x680
	::FlowCanvas::ValueInput_1<::MoleMole::Level::RatingType>* FBGFKGNBPLO; // 0x688
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::TimePeriodType>* GCLBFCMNPMI; // 0x690
	::FlowCanvas::ValueOutput_1<::System::Object*>* JEILIEGINJE; // 0x698
	::FlowCanvas::ValueInput_1<::System::Object*>* PMMGIMBCHIA; // 0x6A0
	::FlowCanvas::BinderConnection_1<::IKACJBCOKJI>* PMGBNBBBGON; // 0x6A8
	::FlowCanvas::ValueOutput_1<::System::Object*>* CMHMGFIMACO; // 0x6B0
	::FlowCanvas::ValueInput_1<::UnityEngine::ContactPoint2D>* JENJCAMHPFO; // 0x6B8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* EDAMNNHKPDJ; // 0x6C0
	::FlowCanvas::ValueOutput_1<::System::Object*>* EINIECGGHDN; // 0x6C8
	::FlowCanvas::ValueInput_1<::MoleMole::Config::TargetValueModifyFunc>* KHAMENCDCKM; // 0x6D0
	::FlowCanvas::BinderConnection_1<::MoleMole::BubbleType>* CNLDKLCEBPN; // 0x6D8
	::FlowCanvas::ValueOutput_1<::System::Object*>* HIIGBJKIMEL; // 0x6E0
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGameCliParamType>* DOCNBJKJJCC; // 0x6E8
	::FlowCanvas::ValueInput_1<::UnityEngine::Keyframe>* NGHNKCJDOKJ; // 0x6F0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* JNPNPGGDPLN; // 0x6F8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* KOHDFPPCIKK; // 0x700
	::FlowCanvas::ValueOutput_1<::MoleMole::BabelTowerTemplateOverrideData>* AKKBODLHILH; // 0x708
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* GEOMHJOJFPO; // 0x710
	::FlowCanvas::ValueInput_1<::MoleMole::AnimStateCheckType>* IEDKIEPFMPL; // 0x718
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowPieceBlendMode>* GAFGOCDDMBE; // 0x720
	::FlowCanvas::ValueInput_1<::System::Object*>* MEBFOGAAILH; // 0x728
	::FlowCanvas::ValueInput_1<::MoleMole::HollowPieceBlendMode>* NFAONJMFNPI; // 0x730
	::FlowCanvas::ValueInput_1<::MoleMole::TurnBattleUnitQueryFilter>* FJCFGGELJFG; // 0x738
	::FlowCanvas::ValueOutput_1<::System::Object*>* PLILGLNOPBM; // 0x740
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* HAGAONFJFLB; // 0x748
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGameCliParamType>* JMLDBENCBJO; // 0x750
	::FlowCanvas::ValueInput_1<::System::Object*>* NCIKEJHOKIH; // 0x758
	::FlowCanvas::BinderConnection_1<::ProtoScript::HollowSystemUIState>* DEALCBCMPMM; // 0x760
	::FlowCanvas::ValueOutput_1<::MoleMole::EntityHandle>* AGCDGBKKMBF; // 0x768
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* GIIPIKEPHIC; // 0x770
	::FlowCanvas::ValueOutput_1<::Foundation::Unreal::FTransform3D>* EJCHJABDGJH; // 0x778
	::FlowCanvas::ValueInput_1<::ProtoScript::ChessUIControlType>* FAELOKIALDN; // 0x780
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* OMOIHEGFEIM; // 0x788
	::FlowCanvas::ValueInput_1<::MoleMole::Config::ScreenEffectType>* DJCCBOAPILN; // 0x790
	::FlowCanvas::ValueOutput_1<::System::Object*>* KHFGAKMNLAH; // 0x798
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* GGNEBPABAMF; // 0x7A0
	::FlowCanvas::ValueInput_1<::System::Object*>* MNAJADNIAOD; // 0x7A8
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::ModifierStacking>* GMHPMLIFAFG; // 0x7B0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::AbilityTargetting>* MOIILBOOPHB; // 0x7B8
	::FlowCanvas::ValueInput_1<::System::Object*>* IPMFDCMMJPC; // 0x7C0
	::FlowCanvas::ValueInput_1<::ProtoScript::HollowSystemUIState>* CIDFMCFDJGO; // 0x7C8
	::FlowCanvas::ValueInput_1<::MoleMole::BubbleType>* MBGAMOLHDJA; // 0x7D0
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* GIKJIFMKNLJ; // 0x7D8
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::MusicBattleMarkerNodeType>* IPJMMLBIHLH; // 0x7E0
	::FlowCanvas::ValueInput_1<::System::Object*>* HEPOCPMCDJO; // 0x7E8
	::FlowCanvas::ValueOutput_1<::ProtoScript::AimRectColor>* INJDKMKJCPP; // 0x7F0
	::FlowCanvas::ValueInput_1<::UnityEngine::Quaternion>* KFGPNIJKAOL; // 0x7F8
	::FlowCanvas::ValueInput_1<::ProtoScript::NodeVisible>* DNOLDOAIBCA; // 0x800
	::FlowCanvas::BinderConnection_1<::MoleMole::TurnBattleUnitQueryFilter>* ENIMAOJLJEN; // 0x808
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::MonsterAlertInitParams>* CBKECNCDGEB; // 0x810
	::FlowCanvas::ValueInput_1<::ProtoScript::EndHollowMiniGameType>* EPJGMBKIANJ; // 0x818
	::FlowCanvas::BinderConnection_1<::UnityEngine::Rect>* NMNIGEPMOIC; // 0x820
	::FlowCanvas::ValueOutput_1<::UnityEngine::Collision2D*>* DLPGLHPPIHO; // 0x828
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::EntityType>* FINHOKBADOA; // 0x830
	::FlowCanvas::ValueInput_1<::UnityEngine::RigidbodyConstraints>* PHLMJPLIDCE; // 0x838
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGameDamageData>* GKPKHDDBIAM; // 0x840
	::FlowCanvas::ValueOutput_1<::UnityEngine::Vector2>* KMHHGGENGAH; // 0x848
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* AIKPIAPIJFB; // 0x850
	::FlowCanvas::ValueInput_1<::UnityEngine::Rect>* JDJONLEPKOF; // 0x858
	::FlowCanvas::ValueOutput_1<::ProtoScript::NodeState>* NJKBOGECNPE; // 0x860
	::FlowCanvas::ValueInput_1<::System::Object*>* DECFKJOODBB; // 0x868
	::FlowCanvas::BinderConnection_1<::UnityEngine::RaycastHit2D>* LEHFOKODFDB; // 0x870
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::PerformType>* NKAFAJBIMLL; // 0x878
	::FlowCanvas::ValueOutput_1<::ProtoScript::NodeVisible>* IILFPMIEPLA; // 0x880
	::FlowCanvas::BinderConnection_1<::MoleMole::SpawnPointMaskRegion>* EKJNGDLKCIK; // 0x888
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* FHLKAGPILDJ; // 0x890
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* JCMIIMPPJBJ; // 0x898
	::FlowCanvas::BinderConnection_1<::MoleMole::InLevelTimerWidgetOperation>* ICBCGNAKBHF; // 0x8A0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* JEMJNBDOFKO; // 0x8A8
	::FlowCanvas::BinderConnection_1<::MoleMole::AnimStateCheckType>* PFPBBGHADJH; // 0x8B0
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::MonsterAlertInitParams>* IEFMBGJJNDC; // 0x8B8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Space>* OGINLKBBIPA; // 0x8C0
	::FlowCanvas::ValueOutput_1<::System::Object*>* BDECJMKKGAI; // 0x8C8
	::FlowCanvas::ValueInput_1<::MoleMole::SpawnPointMaskRegion>* LNAOABGPJOL; // 0x8D0
	::FlowCanvas::ValueInput_1<::UnityEngine::ContactPoint>* JGKDHILBCAB; // 0x8D8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* NNADGCFLBDL; // 0x8E0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::PerformType>* AKDOJKOHKGD; // 0x8E8
	::FlowCanvas::BinderConnection_1<::System::Object*>* NAGBLGJJLDK; // 0x8F0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* NHGAANLKHAF; // 0x8F8
	::FlowCanvas::ValueOutput_1<::System::Object*>* DLJFGKPHAAN; // 0x900
	::FlowCanvas::ValueOutput_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* ADCOMDNKOEE; // 0x908
	::FlowCanvas::ValueInput_1<::System::Object*>* BMGNBBBGMKN; // 0x910
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* HCLNGPLLJJP; // 0x918
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* NCHHHGDDLMI; // 0x920
	::FlowCanvas::ValueOutput_1<::System::Object*>* HKJFPMIGGCG; // 0x928
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* LCGJMJHLJHH; // 0x930
	::FlowCanvas::ValueOutput_1<::System::Object*>* PILKADAOICM; // 0x938
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::WeatherType>* ODLGEPFOFJD; // 0x940
	::FlowCanvas::ValueInput_1<::System::Object*>* GNAOPHLBLBL; // 0x948
	::FlowCanvas::ValueInput_1<::MoleMole::Vector2Int>* GFDHFIPOCCP; // 0x950
	::FlowCanvas::ValueOutput_1<::ProtoScript::HollowSystemType>* JOFAIBAMIFH; // 0x958
	::FlowCanvas::ValueInput_1<::MoleMole::TaskCompletionSourceNodeHandle>* EGAIHMHEOOK; // 0x960
	::FlowCanvas::ValueInput_1<::IKACJBCOKJI>* BGOAPMAFAAL; // 0x968
	::FlowCanvas::ValueInput_1<::UnityEngine::Bounds>* JBPBNCGPJOP; // 0x970
	::FlowCanvas::BinderConnection_1<::System::Object*>* JNGPIOLLEIE; // 0x978
	::FlowCanvas::BinderConnection_1<::System::Object*>* IPLJLONKCHI; // 0x980
	::FlowCanvas::ValueInput_1<::System::Object*>* KJLMBFNMKPL; // 0x988
	::FlowCanvas::ValueInput_1<::MoleMole::Config::InputType>* DCMKMHNGNLN; // 0x990
	::FlowCanvas::BinderConnection_1<::MoleMole::EvtDestructionSwitchType>* IGDMGABOFOO; // 0x998
	::FlowCanvas::ValueOutput_1<::System::Object*>* AKHHEMLGLAL; // 0x9A0
	::FlowCanvas::ValueOutput_1<::MoleMole::TurnBattleUnitQueryKey>* EDEBELMMEKO; // 0x9A8
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::AbilitySpecialParamType>* NOKGPIHPOJL; // 0x9B0
	::FlowCanvas::ValueOutput_1<::System::Object*>* FNAHOJOOHEF; // 0x9B8
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::LevelQuestConditionOperation>* EMNNKMKFCPA; // 0x9C0
	::FlowCanvas::ValueInput_1<::System::Object*>* JCDBFIBFLCI; // 0x9C8
	::FlowCanvas::ValueInput_1<::Share::GridDir>* JPBJFOFPNNP; // 0x9D0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* PLEDBJHCKNM; // 0x9D8
	::FlowCanvas::ValueOutput_1<::MoleMole::DoubleEliteCardInfo>* JBNNNEKPOKL; // 0x9E0
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::MusicBattleMarkerNodeType>* KNBCFJOMKAC; // 0x9E8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* CIBDPGNFPPD; // 0x9F0
	::FlowCanvas::ValueInput_1<::System::Object*>* BGPKHONDFFF; // 0x9F8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* GNGMNDGFEGM; // 0xA00
	::FlowCanvas::ValueInput_1<::ProtoScript::NodeState>* GECHKKAJMJK; // 0xA08
	::FlowCanvas::ValueInput_1<::System::Char>* LFBNKBNNIBI; // 0xA10
	::FlowCanvas::ValueOutput_1<::MoleMole::StatusEffectType>* HJDHIJDFIAJ; // 0xA18
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::LevelQuestConditionOperation>* FMLEHAJBEDL; // 0xA20
	::FlowCanvas::ValueOutput_1<::ProtoScript::ChessUIControlType>* FHFEEEEGLLC; // 0xA28
	::FlowCanvas::ValueOutput_1<::MoleMole::FairyTextUpdateType>* CCDDDAJKPKB; // 0xA30
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::PropertyModifyFunction>* MAPJDBOHJLJ; // 0xA38
	::FlowCanvas::BinderConnection_1<::System::Object*>* MPENNFDDOBI; // 0xA40
	::FlowCanvas::ValueInput_1<::MoleMole::ScoreUIAnimationType>* PGBICHGFCCA; // 0xA48
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* HHAEGFEIKGL; // 0xA50
	::FlowCanvas::ValueInput_1<::System::UInt32>* FJGFKOLCAHI; // 0xA58
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* AFLKMEFKHCD; // 0xA60
	::FlowCanvas::ValueInput_1<::System::Object*>* NALKKLMGLLL; // 0xA68
	::FlowCanvas::ValueOutput_1<::System::Object*>* CLEOAINCMEE; // 0xA70
	::FlowCanvas::ValueOutput_1<::Share::GridDir>* BKIPIBIDBMI; // 0xA78
	::FlowCanvas::ValueInput_1<::System::Object*>* LOGDGOPKMCA; // 0xA80
	::FlowCanvas::ValueInput_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* HLAILKMPAMA; // 0xA88
	::FlowCanvas::ValueInput_1<::UnityEngine::WrapMode>* BDOLKFKAONB; // 0xA90
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGamePlayerAttachEffectData>* MJHGNBDACOO; // 0xA98
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* CEJCAANIOGK; // 0xAA0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::ModifierStacking>* ADLLBNLKAKF; // 0xAA8
	::FlowCanvas::ValueOutput_1<::System::Object*>* BLJPMEHGBGC; // 0xAB0
	::FlowCanvas::ValueOutput_1<::System::Object*>* IDBCIFEJOPD; // 0xAB8
	::FlowCanvas::ValueInput_1<::System::Object*>* PDEMEEOJCJH; // 0xAC0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* NMCIMANACIM; // 0xAC8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* IKOAKAHKGLN; // 0xAD0
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGamePlayerAttachEffectData>* AKOBFJKLOAJ; // 0xAD8
	::FlowCanvas::ValueOutput_1<::MoleMole::Level::BangbooPlayType>* GBODHEAEJBJ; // 0xAE0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::MusicBattleMarkerNodeType>* LGJKGPKGGOF; // 0xAE8
	::FlowCanvas::ValueOutput_1<::MoleMole::GameplayTag>* JCCEPNEOIJH; // 0xAF0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* CKAIBKOJFAE; // 0xAF8
	::FlowCanvas::ValueOutput_1<::System::Object*>* JEJKOPHPEOD; // 0xB00
	::FlowCanvas::BinderConnection_1<::UnityEngine::Ray>* EPIHLBKOIIB; // 0xB08
	::FlowCanvas::ValueInput_1<::MoleMole::DoubleEliteCardInfo>* ABOILHDEONK; // 0xB10
	::FlowCanvas::ValueInput_1<::MoleMole::MultiTaskNodeHandle>* HFFNIBCPAGO; // 0xB18
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* IFDMIOGIGMF; // 0xB20
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* ABOGPEEMLKG; // 0xB28
	::FlowCanvas::ValueOutput_1<::UnityEngine::Collision*>* CFGBJBBLDHL; // 0xB30
	::FlowCanvas::BinderConnection_1<::UnityEngine::Bounds>* EOAMLAKGOBN; // 0xB38
	::FlowCanvas::ValueInput_1<::UnityEngine::LayerMask>* OMECEAKFKJO; // 0xB40
	::FlowCanvas::ValueInput_1<::UnityEngine::KeyCode>* HCLGMPKDGAC; // 0xB48
	::FlowCanvas::BinderConnection_1<::UnityEngine::KeyCode>* FLEILPGKJGJ; // 0xB50
	::FlowCanvas::ValueOutput_1<::UnityEngine::Vector4>* ECDNMLBCELJ; // 0xB58
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGamePlayerOnDamagedData>* BBOKDNFPLGM; // 0xB60
	::FlowCanvas::ValueOutput_1<::MoleMole::AnimStateCheckType>* JMGPKLHLBAA; // 0xB68
	::FlowCanvas::ValueInput_1<::Foundation::Unreal::FTransform3D>* LOGEKNOPOEC; // 0xB70
	::FlowCanvas::ValueInput_1<::MoleMole::Config::EntityType>* DFDIEENOGBF; // 0xB78
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* CBGJPADDGIJ; // 0xB80
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* JDGAHHFDIEP; // 0xB88
	::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* IOPIKPDAHBP; // 0xB90
	::FlowCanvas::ValueInput_1<::System::Object*>* OKIJNKKGFKP; // 0xB98
	::FlowCanvas::BinderConnection_1<::System::Object*>* LFKOHDNKAHA; // 0xBA0
	::FlowCanvas::ValueInput_1<::System::Object*>* FAJKMENKNMG; // 0xBA8
	::FlowCanvas::ValueInput_1<::MoleMole::StatusEffectType>* HIOLGBKPNMJ; // 0xBB0
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::TargetValueModifyFunc>* IGAIGFJNEJC; // 0xBB8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Quaternion>* JALAIPKFENH; // 0xBC0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* PHLABMBCNBG; // 0xBC8
	::FlowCanvas::ValueInput_1<::MoleMole::Config::MonsterFunctionType>* PNKHDCGJKNG; // 0xBD0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Keyframe>* KHPHNGOFDNH; // 0xBD8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* EOIALGIFPLI; // 0xBE0
	::FlowCanvas::BinderConnection_1<::ProtoScript::NodeState>* HLMOOFHMHBH; // 0xBE8
	::FlowCanvas::BinderConnection_1<::MoleMole::Level::BangbooPlayType>* EIMDIPCLLAD; // 0xBF0
	::FlowCanvas::ValueOutput_1<::ProtoScript::PostEffectType>* JJHNAJMKFHK; // 0xBF8
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::LevelQuestConditionOperation>* MKHJNBMJKMM; // 0xC00
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* OGJIGLAMKGG; // 0xC08
	::FlowCanvas::ValueInput_1<::System::Object*>* JMNDLIAOPLE; // 0xC10
	::FlowCanvas::ValueInput_1<::UnityEngine::Ray>* DNIKHLFGPGO; // 0xC18
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* IBBLIGELMOA; // 0xC20
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* KOMDPOGNCME; // 0xC28
	::FlowCanvas::ValueOutput_1<::UnityEngine::Ray>* CKKNJFMIFOG; // 0xC30
	::FlowCanvas::ValueInput_1<::MoleMole::AbyssS2_EventType>* EHIPKAHCJBF; // 0xC38
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* IGHFMPDDMEA; // 0xC40
	::FlowCanvas::ValueInput_1<::MoleMole::Config::PropertyModifyFunction>* JGDGGHPILIG; // 0xC48
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::AbilitySpecialParamType>* GALNJLFBFDK; // 0xC50
	::FlowCanvas::BinderConnection_1<::UnityEngine::Space>* PKBOHLILLFO; // 0xC58
	::FlowCanvas::ValueOutput_1<::UnityEngine::Rect>* BFOCEICDNMC; // 0xC60
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::BaseProperty>* ADMEBDCIPCG; // 0xC68
	::FlowCanvas::ValueOutput_1<::System::Object*>* AGNIDHMLCGB; // 0xC70
	::FlowCanvas::ValueOutput_1<::MoleMole::AbyssS2_EventType>* IPDCJEAMMEL; // 0xC78
	::FlowCanvas::BinderConnection_1<::System::Object*>* LLCLCHNIHNA; // 0xC80
	::FlowCanvas::ValueInput_1<::MoleMole::FairyTextUpdateType>* FEBCFAJCJMG; // 0xC88
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::InputType>* OKFHDKJHFCH; // 0xC90
	::FlowCanvas::BinderConnection_1<::ProtoScript::PostEffectType>* COCLKANBFIP; // 0xC98
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* LALNJMFMEFJ; // 0xCA0
	::FlowCanvas::ValueInput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* BMELGANAMAJ; // 0xCA8
	::FlowCanvas::BinderConnection_1<::UnityEngine::Color>* LJEEDHMCKBO; // 0xCB0
	::FlowCanvas::BinderConnection_1<::System::Object*>* JDJLJBFLLJE; // 0xCB8
	::FlowCanvas::BinderConnection_1<::System::Object*>* CKAGIFKOHHE; // 0xCC0
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* JEPJFIAAEEN; // 0xCC8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* IPBGOBAEBPD; // 0xCD0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::EntityType>* KLKOLCBGMLC; // 0xCD8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* ENKHFGAPKDJ; // 0xCE0
	::FlowCanvas::BinderConnection_1<::ProtoScript::NodeVisible>* MCACEMAKCBJ; // 0xCE8
	::FlowCanvas::BinderConnection_1<::UnityEngine::ContactPoint>* ANKANIHBJOO; // 0xCF0
	::FlowCanvas::ValueOutput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* NNHLABAICND; // 0xCF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_OOPCLAIGAMB__CTOR_OFFSET))(this);
	}

	::System::Void DHGHLBMFNGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_OOPCLAIGAMB_DHGHLBMFNGA_OFFSET))(this);
	}
};
