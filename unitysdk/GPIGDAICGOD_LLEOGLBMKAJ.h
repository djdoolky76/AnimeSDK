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

namespace FlowCanvas::Nodes { template <typename T> class AddDictionaryItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class AddListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class Buffer_1; }
namespace FlowCanvas::Nodes { template <typename T> class Cache_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define GPIGDAICGOD_LLEOGLBMKAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1107BB70)

inline static constexpr unsigned int GPIGDAICGOD_LLEOGLBMKAJ_TypeDefinitionIndex = 96727;

class GPIGDAICGOD_LLEOGLBMKAJ : public ::System::Object
{
public:
	::FlowCanvas::Nodes::Cache_1<::Foundation::Unreal::FTransform3D>* CKAIBKOJFAE; // 0x10
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* HAGAONFJFLB; // 0x18
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* DNOLDOAIBCA; // 0x20
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* KOHDFPPCIKK; // 0x28
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* NJIJMHJLCDC; // 0x30
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* JENJCAMHPFO; // 0x38
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Collision*>* DJCCBOAPILN; // 0x40
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Ray>* OACOFBNNDDG; // 0x48
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::InputType>* GAGFGLBMOIJ; // 0x50
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::ContactPoint>* EPIHLBKOIIB; // 0x58
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* DNAPOOHJOLP; // 0x60
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* IDCACLALGHN; // 0x68
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* NPHEABLGKHM; // 0x70
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* CLAKCHMAGEO; // 0x78
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* JDJONLEPKOF; // 0x80
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Vector2Int>* DOBOPNBCHKD; // 0x88
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* ADLLBNLKAKF; // 0x90
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::MonsterStrengthType>* NAGBLGJJLDK; // 0x98
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* EGGHPJMKGCP; // 0xA0
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::HollowSystemUIState>* JOLKOHDABME; // 0xA8
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Bounds>* FGNHLKDKHAK; // 0xB0
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Bounds>* HLCMDJMIPPK; // 0xB8
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::ChessUIControlType>* HIOLGBKPNMJ; // 0xC0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* JHLOJHEBILA; // 0xC8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::Share::GridDir>* KEAMLKEDDPN; // 0xD0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::MonsterFunctionType>* LFKOHDNKAHA; // 0xD8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* AFLKMEFKHCD; // 0xE0
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::AimRectColor>* LNAOABGPJOL; // 0xE8
	::FlowCanvas::Nodes::AddListItem_1<::System::Single>* OEMLABIILDK; // 0xF0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::BubbleType>* FMLEHAJBEDL; // 0xF8
	::FlowCanvas::Nodes::Buffer_1<::System::UInt32>* AKHHEMLGLAL; // 0x100
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* KDKFICIJLNC; // 0x108
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* DGGFAGDBFHD; // 0x110
	::FlowCanvas::Nodes::Cache_1<::MoleMole::GameplayTag>* PENGKPKEOMC; // 0x118
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* IALGGHIJOFA; // 0x120
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* JDGAHHFDIEP; // 0x128
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* GEOMHJOJFPO; // 0x130
	::FlowCanvas::Nodes::AddListItem_1<::PipelineCamera::FinalCameraData>* HFFNIBCPAGO; // 0x138
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Level::RatingType>* HCICBAGOHOG; // 0x140
	::FlowCanvas::Nodes::Cache_1<::System::Char>* MNDBDAMDKGA; // 0x148
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* GGBBDNEPGMN; // 0x150
	::FlowCanvas::Nodes::Cache_1<::MoleMole::DoubleEliteCardInfo>* LCGJMJHLJHH; // 0x158
	::FlowCanvas::Nodes::AddListItem_1<::Share::GridDir>* NBKKHJDLEHA; // 0x160
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Level::BangbooPlayType>* CEBMDPEPKGJ; // 0x168
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* EHLGMODJGMF; // 0x170
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HackerGameCliParamType>* GALNJLFBFDK; // 0x178
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* JCCEPNEOIJH; // 0x180
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::BaseProperty>* OIAGHBPCBIM; // 0x188
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* EOGFHHFJEIJ; // 0x190
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* FFIMOFPHGNI; // 0x198
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* OAAINDMKMDC; // 0x1A0
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Vector2>* HAPHKNJKKLM; // 0x1A8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HollowChessboard::HollowCell>* AKOBFJKLOAJ; // 0x1B0
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::KeyCode>* OBCNKFLEOPN; // 0x1B8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::PerformType>* BLPOPGGHIGG; // 0x1C0
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* JBNNNEKPOKL; // 0x1C8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* FBEKNDJJNMB; // 0x1D0
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::RaycastHit>* FPELCJHNBNJ; // 0x1D8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::ChessEntityType>* ECFCEDJBDCN; // 0x1E0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* KJKLGMABGMG; // 0x1E8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* NGHNKCJDOKJ; // 0x1F0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* FNAHOJOOHEF; // 0x1F8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* NDGCDPCHNFA; // 0x200
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* GFJMGKEJBIP; // 0x208
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::EntityHandle>* PBDINHAHNNI; // 0x210
	::FlowCanvas::Nodes::Cache_1<::MoleMole::TurnBattleUnitQueryFilter>* AIKPIAPIJFB; // 0x218
	::FlowCanvas::Nodes::Buffer_1<::System::Single>* FKJNKAPMBDO; // 0x220
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Level::RatingType>* NFAONJMFNPI; // 0x228
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HollowChessboard::HollowCell>* ALCOLIEGIIG; // 0x230
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Collision*>* AGNEINOGIDL; // 0x238
	::FlowCanvas::Nodes::Cache_1<::MoleMole::ChessEntityType>* IGOCFMHANMA; // 0x240
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Battle::MonsterAlertInitParams>* GPKEFHCJJPH; // 0x248
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::TargetValueModifyFunc>* OPJHCOEAJGE; // 0x250
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* BGPKHONDFFF; // 0x258
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::ContactPoint2D>* JGDGGHPILIG; // 0x260
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Vector4>* NNLJCDJAEOL; // 0x268
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Space>* EJBDJELAKNI; // 0x270
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Battle::LevelQuestConditionOperation>* HIJJENCGNKE; // 0x278
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* AFKPELMBJIF; // 0x280
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::GameplayTag>* GKLOINKHGKB; // 0x288
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::RigidbodyConstraints>* FAJKMENKNMG; // 0x290
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::LayerMask>* OKNLJNGFIBC; // 0x298
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Level::RatingType>* PMHACLAFPPO; // 0x2A0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* NCGFDNMCPNM; // 0x2A8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::TaskCompletionSourceNodeHandle>* KIOPDABEKAA; // 0x2B0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* JGKDHILBCAB; // 0x2B8
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Ray>* OOILLMNHEGE; // 0x2C0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* LCPEPCBIIMB; // 0x2C8
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* PEAEGNPGKOO; // 0x2D0
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::EndHollowMiniGameType>* FJCFGGELJFG; // 0x2D8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Collision*>* CBNLBDLEGON; // 0x2E0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* NDCCGMOLDKG; // 0x2E8
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* HPJDIJCPLFD; // 0x2F0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::ChessEntityType>* DFLNCNCMEIG; // 0x2F8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::BabelTowerTemplateOverrideData>* PLILGLNOPBM; // 0x300
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::LayerMask>* PILKADAOICM; // 0x308
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* MCACEMAKCBJ; // 0x310
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* FAELOKIALDN; // 0x318
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::TurnBattleUnitQueryFilter>* IKOAKAHKGLN; // 0x320
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* HPNBAGOOPHL; // 0x328
	::FlowCanvas::Nodes::Cache_1<::MoleMole::InLevelTimerWidgetOperation>* NCHHHGDDLMI; // 0x330
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* IJGPDMNGEOK; // 0x338
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HackerGameDamageData>* MOIILBOOPHB; // 0x340
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::InLevelTimerWidgetOperation>* FHLKAGPILDJ; // 0x348
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* GLIIBFNKBHI; // 0x350
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::AimRectColor>* NMFFAMNBDGI; // 0x358
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::MonsterFunctionType>* IFDMIOGIGMF; // 0x360
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* DPPBPJPDBAL; // 0x368
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* HAMKAAGGBHA; // 0x370
	::FlowCanvas::Nodes::AddListItem_1<::ParadoxNotion::OperationMethod>* LCMLCCHAIDI; // 0x378
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* IEDKIEPFMPL; // 0x380
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::HollowSystemUIState>* GFDHFIPOCCP; // 0x388
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* COCLKANBFIP; // 0x390
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::ChessUIControlType>* ONIKPLNKMPH; // 0x398
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::MultiTaskNodeHandle>* IPJMMLBIHLH; // 0x3A0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* OIFLAGNNOEC; // 0x3A8
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* JMGPKLHLBAA; // 0x3B0
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Vector3>* IOABCKEONNL; // 0x3B8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::EntityType>* IPBGOBAEBPD; // 0x3C0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* EKPBDNFMEFA; // 0x3C8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::UInt32>* GKEECHHOIBE; // 0x3D0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::InLevelTimerWidgetOperation>* JMJJFCNIGBD; // 0x3D8
	::FlowCanvas::Nodes::Buffer_1<::ParadoxNotion::OperationMethod>* IONOAFNHGKH; // 0x3E0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* CLIOBGCFNIF; // 0x3E8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::RigidbodyConstraints>* ONOKMJCEFFD; // 0x3F0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* ECKCGELEHPJ; // 0x3F8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::SpawnPointMaskRegion>* KBGGOLDECEL; // 0x400
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* MKOFLNOIFEE; // 0x408
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::RaycastHit>* LBFDEJAENKG; // 0x410
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* BPDAJNPEAGB; // 0x418
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* EDNLEDPHJJB; // 0x420
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* FCKDKBDGAAL; // 0x428
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* HPGEINEOOJN; // 0x430
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Bounds>* CKIBHMGALHH; // 0x438
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::NodeVisible>* EMNNKMKFCPA; // 0x440
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Collision2D*>* KKIIIHPECKJ; // 0x448
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* GIIPIKEPHIC; // 0x450
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Quaternion>* BHCPBCDKOGN; // 0x458
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* HIDKPBFKDBN; // 0x460
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::WrapMode>* ADCOMDNKOEE; // 0x468
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* HKCFNIKCAAK; // 0x470
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HollowPieceBlendMode>* OMPMMMCGIFB; // 0x478
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::DoubleEliteCardInfo>* CBGJPADDGIJ; // 0x480
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* IPFHACCBDPG; // 0x488
	::FlowCanvas::Nodes::Cache_1<::PipelineCamera::FinalCameraData>* OKJBMLDDLMB; // 0x490
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::NodeState>* IGPBPBAAPLL; // 0x498
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* CCDDDAJKPKB; // 0x4A0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::MusicBattleMarkerNodeType>* OGJIGLAMKGG; // 0x4A8
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* KKIFEAGNOPA; // 0x4B0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* FCHOCFJDHMB; // 0x4B8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* KJHPDLCGDCM; // 0x4C0
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::EndHollowMiniGameType>* EDEBELMMEKO; // 0x4C8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FairyTextUpdateType>* JGEGNFCNDHH; // 0x4D0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ParadoxNotion::OperationMethod>* DILMDIOHLKL; // 0x4D8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::TargetValueModifyFunc>* FBGFKGNBPLO; // 0x4E0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::RaycastHit>* CNLDKLCEBPN; // 0x4E8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* PHLMJPLIDCE; // 0x4F0
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Keyframe>* DCMKMHNGNLN; // 0x4F8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HackerGamePlayerOnDamagedData>* LMBCCOKOAMG; // 0x500
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::DoubleEliteCardInfo>* OLAFMPMDDGH; // 0x508
	::FlowCanvas::Nodes::Cache_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* EHCOBHCMAKG; // 0x510
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::HollowSystemType>* JMBOEEELLKI; // 0x518
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::MonsterStrengthType>* JEPJFIAAEEN; // 0x520
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* OJBMAEDNEDH; // 0x528
	::FlowCanvas::Nodes::AddListItem_1<::System::UInt32>* BMGNBBBGMKN; // 0x530
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* IKPJEKDIGKP; // 0x538
	::FlowCanvas::Nodes::Cache_1<::MoleMole::AnimStateCheckType>* PLEDBJHCKNM; // 0x540
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::PropertyModifyFunction>* BAKJLBGJIAI; // 0x548
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* OHDCLPNMLDP; // 0x550
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* ACHDDKNIIMK; // 0x558
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* HLMOOFHMHBH; // 0x560
	::FlowCanvas::Nodes::Buffer_1<::System::Boolean>* NDELBPMILOP; // 0x568
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::TurnBattleUnitQueryFilter>* POACKOHCFMG; // 0x570
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* HNLALGPGBNK; // 0x578
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* DCIOKALDBLI; // 0x580
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::BubbleType>* CFLEMACIEMH; // 0x588
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::AbilityTargetting>* MEPKFNCNCGL; // 0x590
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* OJOHICIDDGD; // 0x598
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* ICJLBPFKALO; // 0x5A0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HollowPieceBlendMode>* MEBFOGAAILH; // 0x5A8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Space>* IGDMGABOFOO; // 0x5B0
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::ContactPoint2D>* BNKJPHAODDH; // 0x5B8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Rect>* LEHFOKODFDB; // 0x5C0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::StatusEffectType>* DACIMIMIMEC; // 0x5C8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* DKOFCGDLEKN; // 0x5D0
	::FlowCanvas::Nodes::Buffer_1<::System::Int32>* BIBPIIOKHHP; // 0x5D8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::PropertyModifyFunction>* FGEFFOHBMHM; // 0x5E0
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::ChessUIIconType>* DNFKMIACAAE; // 0x5E8
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::ContactPoint>* MAPJDBOHJLJ; // 0x5F0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* JEJKOPHPEOD; // 0x5F8
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Vector2>* ONOCGOMINGD; // 0x600
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* JJLEPBECLIB; // 0x608
	::FlowCanvas::Nodes::AddDictionaryItem_1<::PipelineCamera::FinalCameraData>* IACDJOOJBHL; // 0x610
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* BHPFIEOOLFP; // 0x618
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* IAFANBIFNBD; // 0x620
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* LEEHHBLHALN; // 0x628
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* GNGMNDGFEGM; // 0x630
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::ChessUIIconType>* EGAIHMHEOOK; // 0x638
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::WeatherType>* EIIJKCOAFFP; // 0x640
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::ContactPoint2D>* CBIGDLGCFEL; // 0x648
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* FAGKJLBDOLO; // 0x650
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HackerGamePlayerOnDamagedData>* KOMDPOGNCME; // 0x658
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Battle::LevelQuestOperation>* CEAEOFGFLDL; // 0x660
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* LFBNKBNNIBI; // 0x668
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* OMOIHEGFEIM; // 0x670
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::AnimStateCheckType>* ALPLDOOJAGM; // 0x678
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* MLNDJPABJBC; // 0x680
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* AGCDGBKKMBF; // 0x688
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* KJFMBIHLBIN; // 0x690
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* JJDFNCIFIOC; // 0x698
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* ADAKMAMFMLE; // 0x6A0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::MonsterStrengthType>* EIFMMCLEIDN; // 0x6A8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* IBBLIGELMOA; // 0x6B0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::AnimStateCheckType>* HHAEGFEIKGL; // 0x6B8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::NodeState>* FBOGJCDPBAP; // 0x6C0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* FBHBOOOKFBP; // 0x6C8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* ELHHBKJMHOI; // 0x6D0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* FOMACGFFDDM; // 0x6D8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* CJMEJBKCKHO; // 0x6E0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::MultiTaskNodeHandle>* IGHFMPDDMEA; // 0x6E8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* MKPLMHBIKEL; // 0x6F0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::PerformType>* JHKDBNFPNOJ; // 0x6F8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Battle::GamePlayLogicKind>* LBLHCFNNOHC; // 0x700
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* GOHLOIFDMHO; // 0x708
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* EHIPKAHCJBF; // 0x710
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* LHBFMKHKCDO; // 0x718
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* NFJCJACKEED; // 0x720
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::ModifierStacking>* EEANEHLAECK; // 0x728
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* OKEIFELIGGG; // 0x730
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Rect>* DGGFHJBFKIN; // 0x738
	::FlowCanvas::Nodes::Cache_1<::MoleMole::EvtDestructionSwitchType>* JCMIIMPPJBJ; // 0x740
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HackerGamePlayerAttachEffectData>* HLDHJCBDCCE; // 0x748
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* BKKFEGMMAPJ; // 0x750
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* EGLEIOEDBGO; // 0x758
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::WrapMode>* CGIMFLDHNLA; // 0x760
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* IDDLICILPOM; // 0x768
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* BJGCGGPNLIJ; // 0x770
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* PMOGENBMKJG; // 0x778
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* ANBOONHDJDN; // 0x780
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::ScoreUIAnimationType>* PEIAMHGCHAH; // 0x788
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* NPACMBPPPCE; // 0x790
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* JCDBFIBFLCI; // 0x798
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* JMLDBENCBJO; // 0x7A0
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::NodeVisible>* JKJJGFNHJHA; // 0x7A8
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Vector3>* FINHOKBADOA; // 0x7B0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FairyTextUpdateType>* CMHMGFIMACO; // 0x7B8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* DKIMBHMBEIN; // 0x7C0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* KHODNGJDFGF; // 0x7C8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* GNOOKIBKPNF; // 0x7D0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Battle::LevelQuestOperation>* GGNEBPABAMF; // 0x7D8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* LOKMAAMNHCE; // 0x7E0
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Space>* IGPKHBHCGBD; // 0x7E8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::BubbleType>* LOGDGOPKMCA; // 0x7F0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Battle::GamePlayLogicKind>* EINIECGGHDN; // 0x7F8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* OJKGKLJNLIC; // 0x800
	::FlowCanvas::Nodes::AddListItem_1<::Foundation::Unreal::FTransform3D>* EGPEPBLHKLK; // 0x808
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HackerGameCliParamType>* MJGNCEHLKCF; // 0x810
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* MJHGNBDACOO; // 0x818
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* JCLKHGMLAJA; // 0x820
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* ABOILHDEONK; // 0x828
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::AbilityTargetting>* EKPLJHKIGKD; // 0x830
	::FlowCanvas::Nodes::AddDictionaryItem_1<::Foundation::Unreal::FTransform3D>* GAFGOCDDMBE; // 0x838
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* BHJFEKDEHCC; // 0x840
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* ABOGPEEMLKG; // 0x848
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::EvtDestructionSwitchType>* EFDBCMCNOIA; // 0x850
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* LOOGMFNODIJ; // 0x858
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* FEEENPADGNP; // 0x860
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::MonsterStrengthType>* MDLHKDPHJCC; // 0x868
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Vector2Int>* CDLHJEMGHBP; // 0x870
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* LNMCMEFLBAI; // 0x878
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* DFLEICJPIKE; // 0x880
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* IOPIKPDAHBP; // 0x888
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* DEICIDAOCPJ; // 0x890
	::FlowCanvas::Nodes::Cache_1<::MoleMole::AbyssS2_EventType>* NGEPHBAGFGO; // 0x898
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* PKJFKIGMDOG; // 0x8A0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* EDLFCEMFKMA; // 0x8A8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* JGJBCMPMEIH; // 0x8B0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::EntityType>* JEMJNBDOFKO; // 0x8B8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::RaycastHit2D>* LLCLCHNIHNA; // 0x8C0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::NodeVisible>* HLKHLJKKEAB; // 0x8C8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::StatusEffectType>* IKNCMNIMJPO; // 0x8D0
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::NodeVisible>* HNMICMMEMBA; // 0x8D8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HackerGameCliParamType>* IPHAANMLJGL; // 0x8E0
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* PDEMEEOJCJH; // 0x8E8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* ONLAKNNNJOH; // 0x8F0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* FBDAHGFAKCI; // 0x8F8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* PNAMFHJFOOG; // 0x900
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* DEALCBCMPMM; // 0x908
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Rect>* PLCIBNIFJIF; // 0x910
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* AMHPINIFEKO; // 0x918
	::FlowCanvas::Nodes::Cache_1<::MoleMole::EntityHandle>* NGMBHMMCDCN; // 0x920
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* IFPEOEKIJAF; // 0x928
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* PLILIMEKLNE; // 0x930
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::ContactPoint>* LGJKGPKGGOF; // 0x938
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::GameplayTag>* NALKKLMGLLL; // 0x940
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HackerGameDamageData>* GCDIJGMMOJP; // 0x948
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* NPMKKLCINAE; // 0x950
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* JJHNAJMKFHK; // 0x958
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Color>* IDHNKJIKCIO; // 0x960
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* KIMIIGINAEH; // 0x968
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* KJGJBMJKGKH; // 0x970
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Battle::LevelQuestOperation>* CKAGIFKOHHE; // 0x978
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* HCLNGPLLJJP; // 0x980
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* DNIKHLFGPGO; // 0x988
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* ENCMMMKHCFP; // 0x990
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Collision2D*>* GCLBFCMNPMI; // 0x998
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* IBPFBCMABCM; // 0x9A0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* ENIMAOJLJEN; // 0x9A8
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* OPMBGKOIHIH; // 0x9B0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::ScoreUIAnimationType>* GLBCAOAADEE; // 0x9B8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* CFGBJBBLDHL; // 0x9C0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Level::BangbooPlayType>* BBOKDNFPLGM; // 0x9C8
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Quaternion>* GBMLJPCDEDP; // 0x9D0
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* FJGFKOLCAHI; // 0x9D8
	::FlowCanvas::Nodes::AddListItem_1<::System::Char>* IEFMBGJJNDC; // 0x9E0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HackerGameDamageData>* BCOHHFMNBHJ; // 0x9E8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::CampType>* PEBAAIBHHNE; // 0x9F0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* BDECJMKKGAI; // 0x9F8
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* NFBJGKGOMON; // 0xA00
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::EntityType>* CIBDPGNFPPD; // 0xA08
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::ScoreUIAnimationType>* BPAOPJGCMCM; // 0xA10
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* AIFPOFENJEK; // 0xA18
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Collision2D*>* KHAMENCDCKM; // 0xA20
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* ECDNMLBCELJ; // 0xA28
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HollowChessboard::HollowCell>* GKPKHDDBIAM; // 0xA30
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* MOAECLBILAE; // 0xA38
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::KeyCode>* EPGHPOEIEDH; // 0xA40
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* NGAPPODINMJ; // 0xA48
	::FlowCanvas::Nodes::AddListItem_1<::IKACJBCOKJI>* PGBICHGFCCA; // 0xA50
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Boolean>* KDNJLNELECD; // 0xA58
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* KPBJHEJIIGB; // 0xA60
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* IHDCNCMEDJF; // 0xA68
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::AbyssS2_EventType>* ICBCGNAKBHF; // 0xA70
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Vector3>* NMNIGEPMOIC; // 0xA78
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::RigidbodyConstraints>* IGGIIBCIINE; // 0xA80
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* BBIGFPDODEM; // 0xA88
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::ModifierStacking>* JLBFKLBBAKC; // 0xA90
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::ChessUIIconType>* FBILPCBFMFA; // 0xA98
	::FlowCanvas::Nodes::Cache_1<::ParadoxNotion::OperationMethod>* AODCCGJEAMI; // 0xAA0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::DoubleEliteCardInfo>* HLGKJHPAIPH; // 0xAA8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Battle::MonsterAlertInitParams>* CBJBOBKBCGB; // 0xAB0
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Keyframe>* FFJLCKDJPHM; // 0xAB8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* NEBHIEPEOFJ; // 0xAC0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::BaseProperty>* PMMGIMBCHIA; // 0xAC8
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::ChessUIControlType>* ONCGHBDDLEN; // 0xAD0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* BKIPIBIDBMI; // 0xAD8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* KPIDAGIOPIN; // 0xAE0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::InlevelCameraState>* ANLEDMFPOHB; // 0xAE8
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* FHFEEEEGLLC; // 0xAF0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* LPNDDNBLJIP; // 0xAF8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::AbilitySpecialParamType>* JDJLJBFLLJE; // 0xB00
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Collision*>* IGAIGFJNEJC; // 0xB08
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* BECKMINIPKP; // 0xB10
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::HollowSystemUIState>* MNCKOMELHOL; // 0xB18
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* KMHHGGENGAH; // 0xB20
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::EndHollowMiniGameType>* OPJEJDGMCGD; // 0xB28
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::PerformType>* MCOJHBJKEDG; // 0xB30
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* BAHJDHKNDDJ; // 0xB38
	::FlowCanvas::Nodes::Buffer_1<::Foundation::Unreal::FTransform3D>* KHFMAKGOKFC; // 0xB40
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* KLKOLCBGMLC; // 0xB48
	::FlowCanvas::Nodes::Cache_1<::Share::GridDir>* JOOMAAMLHCC; // 0xB50
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::AbilitySpecialParamType>* KMHOOGPHDLA; // 0xB58
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Vector3>* IJLNFACFNGC; // 0xB60
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::PostEffectType>* KJIBHEDLAGK; // 0xB68
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* KJIBBHBBNNN; // 0xB70
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* ICGIIKGCABM; // 0xB78
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Level::RatingType>* NNHLABAICND; // 0xB80
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* GNAOPHLBLBL; // 0xB88
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::MusicBattleMarkerNodeType>* LGPMNIBKPMI; // 0xB90
	::FlowCanvas::Nodes::Cache_1<::MoleMole::BubbleType>* GFCDMJDGMGO; // 0xB98
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* GECHKKAJMJK; // 0xBA0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* IILFPMIEPLA; // 0xBA8
	::FlowCanvas::Nodes::Cache_1<::System::Boolean>* NOKGPIHPOJL; // 0xBB0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Vector2Int>* OFJKLGDPDMB; // 0xBB8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* FLGAOIIHOME; // 0xBC0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FairyTextUpdateType>* IPLJLONKCHI; // 0xBC8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::EntityHandle>* LHIFIDJIKMK; // 0xBD0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Battle::GamePlayLogicKind>* MCDNIMGOMHK; // 0xBD8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::WeatherType>* KFNGDDBFAKE; // 0xBE0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::EntityType>* PLBBHINLMGD; // 0xBE8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::MultiTaskNodeHandle>* HCAJFBNAHOB; // 0xBF0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::TurnBattleUnitQueryKey>* MCBEGGBOJLP; // 0xBF8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::MonsterFunctionType>* MHKKOGDKBAE; // 0xC00
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::WrapMode>* HLAILKMPAMA; // 0xC08
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::LayerMask>* HBDMKOBEOPI; // 0xC10
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::RaycastHit2D>* MODPNKIPPHB; // 0xC18
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::InputType>* NKAFAJBIMLL; // 0xC20
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::ScreenEffectType>* JFANLFEPGAG; // 0xC28
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* ENHKPADJLDL; // 0xC30
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Color>* NOGCAONMJCN; // 0xC38
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::PostEffectType>* HIIGBJKIMEL; // 0xC40
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::ChessEntityType>* JOFLKEEOGKO; // 0xC48
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Vector2>* LJEEDHMCKBO; // 0xC50
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* INJDKMKJCPP; // 0xC58
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* CCEHEHFLFMN; // 0xC60
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::InlevelCameraState>* HEPOCPMCDJO; // 0xC68
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* KLJPELHFCJD; // 0xC70
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* DHPBLIMCEBD; // 0xC78
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* DLPGLHPPIHO; // 0xC80
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* KJFECOINLOL; // 0xC88
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* APFKHOAJBIK; // 0xC90
	::FlowCanvas::Nodes::Cache_1<::System::Int32>* ADMEBDCIPCG; // 0xC98
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* FCFFJJIJHIH; // 0xCA0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::AbilitySpecialParamType>* OKIJNKKGFKP; // 0xCA8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::AnimStateCheckType>* HMGCNHCGALG; // 0xCB0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* IAILCHNNMOD; // 0xCB8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::ModifierStacking>* EBHPLHKPGAC; // 0xCC0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* KIPNFMBEMDH; // 0xCC8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* HLOCNHNACFN; // 0xCD0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* AADIEMIMOCH; // 0xCD8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* EIMDIPCLLAD; // 0xCE0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::ScreenEffectType>* GBODHEAEJBJ; // 0xCE8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::TimePeriodType>* IBGEJEEPDFI; // 0xCF0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Battle::GamePlayLogicKind>* GDOIKNOODDK; // 0xCF8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* KBCJFJHOIMP; // 0xD00
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* JOLOMNMPOGL; // 0xD08
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::CampType>* AGNIDHMLCGB; // 0xD10
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* HMIFEBBJPKJ; // 0xD18
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* FHEFMABJEGP; // 0xD20
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::PerformType>* NHAFHGFBCDC; // 0xD28
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* ELFKDGDPPOI; // 0xD30
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* HOJILABIHDC; // 0xD38
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* AKDOJKOHKGD; // 0xD40
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Collision2D*>* PFPBBGHADJH; // 0xD48
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* LOGEKNOPOEC; // 0xD50
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* CBMHFJAGAGL; // 0xD58
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HackerGamePlayerOnDamagedData>* EOIALGIFPLI; // 0xD60
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* DFFBBMCOIPH; // 0xD68
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* FLEILPGKJGJ; // 0xD70
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* JALAIPKFENH; // 0xD78
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* CJHFADFFLAA; // 0xD80
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Battle::LevelQuestConditionOperation>* OPKIJPEEKCE; // 0xD88
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Ray>* JFFNPNOGNGN; // 0xD90
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::BabelTowerTemplateOverrideData>* EKJNGDLKCIK; // 0xD98
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::AimRectColor>* IPOFFJBMBCF; // 0xDA0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::TurnBattleUnitQueryKey>* ENKHFGAPKDJ; // 0xDA8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::EvtDestructionSwitchType>* GMJDLMOCFBP; // 0xDB0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Battle::LevelQuestOperation>* OEDLLALNFNA; // 0xDB8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Int32>* EOAMLAKGOBN; // 0xDC0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* ABGGKOJIPCE; // 0xDC8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Level::BangbooPlayType>* FAJNNIJNJJJ; // 0xDD0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::HackerGamePlayerAttachEffectData>* MADOBHPKFHA; // 0xDD8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::MusicBattleMarkerNodeType>* NKOLOGBNPGF; // 0xDE0
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::KeyCode>* DCGCCGDGJLA; // 0xDE8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* CABOHFOCBGE; // 0xDF0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* FFFMOKDJBHI; // 0xDF8
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* EDAMNNHKPDJ; // 0xE00
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* PMGBNBBBGON; // 0xE08
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* JNPNPGGDPLN; // 0xE10
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* MNCGLOMHOGF; // 0xE18
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::InlevelCameraState>* LLOPIADDNJA; // 0xE20
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::RaycastHit2D>* GKPFFNADMDC; // 0xE28
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::SpawnPointMaskRegion>* OCKBBOCLBNA; // 0xE30
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* LBAHJJGJFDM; // 0xE38
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Rect>* KNBCFJOMKAC; // 0xE40
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HackerGamePlayerAttachEffectData>* CDGGDGLFIJM; // 0xE48
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HackerGamePlayerOnDamagedData>* CNOOMIKBJPB; // 0xE50
	::FlowCanvas::Nodes::AddDictionaryItem_1<::IKACJBCOKJI>* EHOFAFHPFAC; // 0xE58
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* JEILIEGINJE; // 0xE60
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* FEBCFAJCJMG; // 0xE68
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::TurnBattleUnitQueryKey>* NMCIMANACIM; // 0xE70
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Color>* PNKHDCGJKNG; // 0xE78
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::WeatherType>* OMEIOOGEPIB; // 0xE80
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* MNAJADNIAOD; // 0xE88
	::FlowCanvas::Nodes::Buffer_1<::Share::GridDir>* CBKECNCDGEB; // 0xE90
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::InputType>* LLJEDCOAEDP; // 0xE98
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::HollowSystemType>* OINICLLMGFM; // 0xEA0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::StatusEffectType>* HDHKJLFFGHI; // 0xEA8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* OMECEAKFKJO; // 0xEB0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* BONHNEOOMHL; // 0xEB8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* EEHOCEMKCPI; // 0xEC0
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::PostEffectType>* GLMCLMKFBFF; // 0xEC8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Color>* IALMHBCBKAA; // 0xED0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* EPJGMBKIANJ; // 0xED8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* BFOCEICDNMC; // 0xEE0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HollowPieceBlendMode>* OKFHDKJHFCH; // 0xEE8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Vector2Int>* MNHBHDEEPEK; // 0xEF0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* NGNBAKMJFFF; // 0xEF8
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* NJKBOGECNPE; // 0xF00
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::MultiTaskNodeHandle>* CAJKNOGFBEC; // 0xF08
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* IPDCJEAMMEL; // 0xF10
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::ContactPoint2D>* PKBOHLILLFO; // 0xF18
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::EndHollowMiniGameType>* GEGEALIJGNP; // 0xF20
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* CICNLBGIODD; // 0xF28
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* LHKILOGMFCP; // 0xF30
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* KNKEMEPDBEP; // 0xF38
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* CJDJLCMIIJB; // 0xF40
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* NJPDNOBOHKM; // 0xF48
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::MonsterFunctionType>* GIKJIFMKNLJ; // 0xF50
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::NodeState>* MKHJNBMJKMM; // 0xF58
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Char>* DNCAJDHBLIL; // 0xF60
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* PDLNHOMCFKB; // 0xF68
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Quaternion>* FJJNMGECBGD; // 0xF70
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* DHKDFFDFKEN; // 0xF78
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Vector4>* FPPCDJKNPDK; // 0xF80
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* NECAHPJOPBD; // 0xF88
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::WrapMode>* OBLJJHKJBGP; // 0xF90
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::InputType>* LALNJMFMEFJ; // 0xF98
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::TurnBattleUnitQueryKey>* NDBLMPOJBPJ; // 0xFA0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HackerGameDamageData>* IKNMOCFGACB; // 0xFA8
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Keyframe>* GMHPMLIFAFG; // 0xFB0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* HBADBDHKHKO; // 0xFB8
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::ChessUIControlType>* LIEKPKEOHPO; // 0xFC0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* PNFKFDBOIHB; // 0xFC8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* JIOONMAOMMF; // 0xFD0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::TaskCompletionSourceNodeHandle>* MKDIEFMKABG; // 0xFD8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Level::BangbooPlayType>* KMOMGIIEJAA; // 0xFE0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::ScreenEffectType>* BHAILICPANO; // 0xFE8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* OEOCDJJNNNA; // 0xFF0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* BJIDJKMGLKN; // 0xFF8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* AKKBODLHILH; // 0x1000
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::TaskCompletionSourceNodeHandle>* MPENNFDDOBI; // 0x1008
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* EPGJKCEMADG; // 0x1010
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::AbilitySpecialParamType>* CLEOAINCMEE; // 0x1018
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::GameplayTag>* NLKDHDHMMCJ; // 0x1020
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* JLJCPHFHLAD; // 0x1028
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Quaternion>* KFOFDOMEFIO; // 0x1030
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* LONBNJPMAFH; // 0x1038
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* HLFGDDFCNPP; // 0x1040
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Single>* KHPHNGOFDNH; // 0x1048
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* JPBJFOFPNNP; // 0x1050
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* GFNACBIPAIO; // 0x1058
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HackerGamePlayerAttachEffectData>* EAOLFEKBJBN; // 0x1060
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* IIFCHHDCIME; // 0x1068
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* HPEHDGDGJHE; // 0x1070
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::AbyssS2_EventType>* PHLABMBCNBG; // 0x1078
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::TaskCompletionSourceNodeHandle>* LHAOOCDFLCI; // 0x1080
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* BMLKMLEAHIL; // 0x1088
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::TurnBattleUnitQueryFilter>* OAHKDHGOHHH; // 0x1090
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* JOFAIBAMIFH; // 0x1098
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::BaseProperty>* IDBCIFEJOPD; // 0x10A0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::TargetValueModifyFunc>* PBBIMDBGHFP; // 0x10A8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* DCHMNMHNMLE; // 0x10B0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::StatusEffectType>* KEEPIIPBAAB; // 0x10B8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* IPMFDCMMJPC; // 0x10C0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::TimePeriodType>* KJLMBFNMKPL; // 0x10C8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::InLevelTimerWidgetOperation>* OIHHBMENDHB; // 0x10D0
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Bounds>* NCBNEMPHBLJ; // 0x10D8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::ScoreUIAnimationType>* DEOJCJPBEBL; // 0x10E0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* KFGPNIJKAOL; // 0x10E8
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::EvtDestructionSwitchType>* NNJOKELAJEC; // 0x10F0
	::FlowCanvas::Nodes::Cache_1<::System::UInt32>* EFPEPLOHHGF; // 0x10F8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HollowChessboard::HollowCell>* IJNAOEIJDAG; // 0x1100
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Vector4>* DFDIEENOGBF; // 0x1108
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* LBDPJJFENHA; // 0x1110
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::AbyssS2_EventType>* FLHNDIAEBAB; // 0x1118
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::RigidbodyConstraints>* JBPJMNDJELH; // 0x1120
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* FDFHNKHEAFD; // 0x1128
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Battle::MonsterAlertInitParams>* DPFAHILNPCI; // 0x1130
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::AbilityTargetting>* FMEAOOJFJAG; // 0x1138
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::PropertyModifyFunction>* FFPPCBDODHD; // 0x1140
	::FlowCanvas::Nodes::AddListItem_1<::ProtoScript::HollowSystemType>* ANBFNCNLLHG; // 0x1148
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* CIDFMCFDJGO; // 0x1150
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Keyframe>* EMHNFGEPIID; // 0x1158
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::ScreenEffectType>* CBDADHKDDOL; // 0x1160
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::TimePeriodType>* NNADGCFLBDL; // 0x1168
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* NFPDKEOLALM; // 0x1170
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* HECJNEGCAHL; // 0x1178
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::Vector2>* KHMGIJNPEKA; // 0x1180
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::HollowSystemUIState>* EABBDHDGLGK; // 0x1188
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* LKILHAEOIAD; // 0x1190
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* DBCNEPPHDMA; // 0x1198
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Battle::LevelQuestConditionOperation>* DKCEPNIEFKB; // 0x11A0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* BDOLKFKAONB; // 0x11A8
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::LayerMask>* OFJKHCNNHHL; // 0x11B0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* PKGGBKIGMBP; // 0x11B8
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* BMELGANAMAJ; // 0x11C0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* JMNDLIAOPLE; // 0x11C8
	::FlowCanvas::Nodes::Cache_1<::IKACJBCOKJI>* LJPAFGFGIJJ; // 0x11D0
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* CBHNMCJCHFN; // 0x11D8
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::RaycastHit>* ODLGEPFOFJD; // 0x11E0
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* GKCECBMDKEO; // 0x11E8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* MOIIDLBIOKN; // 0x11F0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HollowPieceBlendMode>* GIPIOGPDNAJ; // 0x11F8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* ILPMKLPKEJF; // 0x1200
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* JPDDENCNOIM; // 0x1208
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* MENHPNBJECC; // 0x1210
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::ChessUIIconType>* GGJOFLDLOLI; // 0x1218
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::ModifierStacking>* NEKABAGJAHI; // 0x1220
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::TargetValueModifyFunc>* JNGPIOLLEIE; // 0x1228
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* ALGJJKMPJGG; // 0x1230
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* NPEKKOKOBHC; // 0x1238
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* HCLGMPKDGAC; // 0x1240
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* HNLHGMDKANI; // 0x1248
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* CKKNJFMIFOG; // 0x1250
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* BLJPMEHGBGC; // 0x1258
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* JBPBNCGPJOP; // 0x1260
	::FlowCanvas::Nodes::Buffer_1<::UnityEngine::RaycastHit2D>* IALMJCLOLED; // 0x1268
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* JPNKDBNANMO; // 0x1270
	::FlowCanvas::Nodes::Cache_1<::UnityEngine::Space>* KHBGBPFAOOO; // 0x1278
	::FlowCanvas::Nodes::AddDictionaryItem_1<::ProtoScript::PostEffectType>* BIBOHCCGMPE; // 0x1280
	::FlowCanvas::Nodes::Cache_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* GPCEEPLPBAE; // 0x1288
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* DOCNBJKJJCC; // 0x1290
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::NodeState>* LNEKNDIGGOD; // 0x1298
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* CPEMEDKIGND; // 0x12A0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::KeyCode>* HAGHBIILHCP; // 0x12A8
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::ContactPoint>* AIODCCMDOOA; // 0x12B0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* NNICLKGFIIB; // 0x12B8
	::FlowCanvas::Nodes::Buffer_1<::IKACJBCOKJI>* KKBCEKDDAAH; // 0x12C0
	::FlowCanvas::Nodes::AddListItem_1<::System::Object*>* MBGAMOLHDJA; // 0x12C8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::UnityEngine::Vector4>* ANKANIHBJOO; // 0x12D0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::BabelTowerTemplateOverrideData>* MCHKCELPCIA; // 0x12D8
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::CampType>* DECFKJOODBB; // 0x12E0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::SpawnPointMaskRegion>* GIOKKGGNIBO; // 0x12E8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::SpawnPointMaskRegion>* ININMHCDGBL; // 0x12F0
	::FlowCanvas::Nodes::AddListItem_1<::UnityEngine::Ray>* FCOJAJOAHDN; // 0x12F8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::HackerGameCliParamType>* NHGAANLKHAF; // 0x1300
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::AbilityTargetting>* KHFGAKMNLAH; // 0x1308
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Config::BaseProperty>* MMGIDLFAHIC; // 0x1310
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* OGINLKBBIPA; // 0x1318
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::InlevelCameraState>* IKFNGPFPJAF; // 0x1320
	::FlowCanvas::Nodes::Buffer_1<::ProtoScript::AimRectColor>* HJDHIJDFIAJ; // 0x1328
	::FlowCanvas::Nodes::Cache_1<::System::Single>* EKJLDFJEGFI; // 0x1330
	::FlowCanvas::Nodes::Buffer_1<::System::Char>* HKJFPMIGGCG; // 0x1338
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Battle::LevelQuestConditionOperation>* AHNNKDAFINN; // 0x1340
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* MKDBGEGKBBL; // 0x1348
	::FlowCanvas::Nodes::Buffer_1<::PipelineCamera::FinalCameraData>* FBCHKGFFDOL; // 0x1350
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* ILBCIAAHGDO; // 0x1358
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FairyTextUpdateType>* GNHPLKALFHO; // 0x1360
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::Config::PropertyModifyFunction>* NCIKEJHOKIH; // 0x1368
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::Battle::MonsterAlertInitParams>* MICDKAPMMIK; // 0x1370
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* MFNLJADPHHJ; // 0x1378
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::TimePeriodType>* DLJFGKPHAAN; // 0x1380
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* POMCJLDACNF; // 0x1388
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* GHIIMOBDFCA; // 0x1390
	::FlowCanvas::Nodes::Cache_1<::ProtoScript::HollowSystemType>* PNBLEJNPAGB; // 0x1398
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::BabelTowerTemplateOverrideData>* KMLFENPNIGA; // 0x13A0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* KFABMPCLAGI; // 0x13A8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::CampType>* HBOFOBHBOKA; // 0x13B0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* DPKBPDNFDBK; // 0x13B8
	::FlowCanvas::Nodes::AddDictionaryItem_1<::MoleMole::Config::WeatherType>* KIDGKJJIOLG; // 0x13C0
	::FlowCanvas::Nodes::Cache_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* CEJCAANIOGK; // 0x13C8
	::FlowCanvas::Nodes::Cache_1<::System::Object*>* MPDOALLIMPO; // 0x13D0
	::FlowCanvas::Nodes::Buffer_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* EJCHJABDGJH; // 0x13D8
	::FlowCanvas::Nodes::Cache_1<::MoleMole::Config::MusicBattleMarkerNodeType>* IJMBMPMKJDP; // 0x13E0
	::FlowCanvas::Nodes::AddDictionaryItem_1<::System::Object*>* BNGGCJOFFHK; // 0x13E8
	::FlowCanvas::Nodes::Buffer_1<::System::Object*>* BGOAPMAFAAL; // 0x13F0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_LLEOGLBMKAJ__CTOR_OFFSET))(this);
	}
};
