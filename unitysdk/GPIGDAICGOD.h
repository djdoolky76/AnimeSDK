#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/IKACJBCOKJI.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorWithStyle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InteractionEndSuddenEventMsg.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIData.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIDataAdapter.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Optional_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/DoubleEliteCardInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/HackerGamePlayerAttachEffectData.h"
#include "unitysdk/MoleMole/HackerGamePlayerEffectTypeChangedData.h"
#include "unitysdk/MoleMole/HackerGamePlayerOnDamagedData.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/MoleMole/MultiTaskNodeHandle.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class BinderConnection_1; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class AddListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class CustomEvent_1; }
namespace FlowCanvas::Nodes { template <typename T> class ForEach_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetListIsEmpty_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetRandomListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetVariable_1; }
namespace FlowCanvas::Nodes { template <typename T> class Identity_1; }
namespace FlowCanvas::Nodes { template <typename T> class LDForeachNext_1; }
namespace FlowCanvas::Nodes { template <typename T> class ReadFlowParameter_1; }
namespace FlowCanvas::Nodes { template <typename T> class ReflectedExtractorNodeWrapper_1; }
namespace FlowCanvas::Nodes { template <typename T> class RelayValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class RelayValueOutput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SelectOnBool_1; }
namespace FlowCanvas::Nodes { template <typename T> class SendEvent_1; }
namespace FlowCanvas::Nodes { template <typename T> class SetListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class SetVariable_1; }
namespace FlowCanvas::Nodes { template <typename T> class TryGetValue_1; }
namespace FlowCanvas::Nodes { template <typename T> class WriteFlowParameter_1; }
namespace MoleMole { class ChessEntity; }
namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework { template <typename T> class Variable_1; }
namespace NodeCanvas::Tasks::Actions { template <typename T> class SetVariable_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPIGDAICGOD_APOAMDDBDPJ_OFFSET UNITYSDK_OFFSET(0x11067B20)
#define GPIGDAICGOD_BBEAFMCPMFE_OFFSET UNITYSDK_OFFSET(0x110391B0)
#define GPIGDAICGOD_DAOLDPBENNJ_OFFSET UNITYSDK_OFFSET(0x11048190)
#define GPIGDAICGOD_DEPJOKICJAI_OFFSET UNITYSDK_OFFSET(0x11042E10)
#define GPIGDAICGOD_DOKHNGADDNI_OFFSET UNITYSDK_OFFSET(0x110646E0)
#define GPIGDAICGOD_FCBMKNEJFNN_OFFSET UNITYSDK_OFFSET(0x11035D20)
#define GPIGDAICGOD_GBLKCEBJHML_OFFSET UNITYSDK_OFFSET(0x110745B0)
#define GPIGDAICGOD_GFFJAOIFOGC_OFFSET UNITYSDK_OFFSET(0x110541F0)
#define GPIGDAICGOD_HBAJELFLALP_OFFSET UNITYSDK_OFFSET(0x11058760)
#define GPIGDAICGOD_HFFCDBMINIF_OFFSET UNITYSDK_OFFSET(0x1106D870)
#define GPIGDAICGOD_HJCCMKMHEKI_OFFSET UNITYSDK_OFFSET(0x11031BD0)
#define GPIGDAICGOD_IFFAPOLDJGO_OFFSET UNITYSDK_OFFSET(0x1104CC00)
#define GPIGDAICGOD_KKEPFEMDCNL_OFFSET UNITYSDK_OFFSET(0x11058770)
#define GPIGDAICGOD_MEJKDHFAHLO_OFFSET UNITYSDK_OFFSET(0x1105D1E0)
#define GPIGDAICGOD_MKKJDFOOFKG_OFFSET UNITYSDK_OFFSET(0x11063B90)
#define GPIGDAICGOD_MNAJCJCAEDC_OFFSET UNITYSDK_OFFSET(0x11071660)
#define GPIGDAICGOD_NBBJNNINADO_OFFSET UNITYSDK_OFFSET(0x110334D0)
#define GPIGDAICGOD_NGOEFEDNNOL_OFFSET UNITYSDK_OFFSET(0x11079560)
#define GPIGDAICGOD_PLNPFOGEKHP_OFFSET UNITYSDK_OFFSET(0x11062190)
#define GPIGDAICGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x11031BC0)

inline static constexpr unsigned int GPIGDAICGOD_TypeDefinitionIndex = 96722;

class GPIGDAICGOD : public ::System::Object
{
public:
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::TaskCompletionSourceNodeHandle>* AACKFDEDHAA; // 0x10
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* NIJFHNNKAOA; // 0x18
	::FlowCanvas::BinderConnection_1<::System::Object*>* CJGHOOPJAMB; // 0x20
	::FlowCanvas::Nodes::ReadFlowParameter_1<::System::Boolean>* MJEACPLENJH; // 0x28
	::NodeCanvas::Framework::Variable_1<::System::Object*>* NHJNILPLEEH; // 0x30
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* CNBDHCFJOCH; // 0x38
	::FlowCanvas::Nodes::SendEvent_1<::System::Boolean>* KDBEKBODCDD; // 0x40
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::WeatherType>* FMJHHPKACCP; // 0x48
	::FlowCanvas::BinderConnection_1<::System::Object*>* KBOAGHAHCCG; // 0x50
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Level::RatingType>* FKEPKMEFHEN; // 0x58
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Level::RatingType>* JLNAGEOLIAJ; // 0x60
	::FlowCanvas::Nodes::Identity_1<::MoleMole::HackerGameDamageData>* EHDICEEPNFI; // 0x68
	::FlowCanvas::Nodes::TryGetValue_1<::System::Int32>* MHLFEADOPFP; // 0x70
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::GameplayTag>* PHDJMEGOGLH; // 0x78
	::FlowCanvas::Nodes::SelectOnBool_1<::System::Int32>* FOHJFKMOHNC; // 0x80
	::FlowCanvas::BinderConnection_1<::MoleMole::ChessEntityType>* GLIAJBPNPLF; // 0x88
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* GMCFPGKFCJH; // 0x90
	::FlowCanvas::BinderConnection_1<::System::Object*>* KJLECFJAAMD; // 0x98
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* IIGCOEOPHPD; // 0xA0
	::FlowCanvas::BinderConnection_1<::MoleMole::Vector2Int>* JCHKPPCGPMM; // 0xA8
	::FlowCanvas::BinderConnection_1<::System::Object*>* JIKCFOPLFBJ; // 0xB0
	::FlowCanvas::Nodes::ReadFlowParameter_1<::System::Int32>* MLKEFICKMCD; // 0xB8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* FBKBENABGHF; // 0xC0
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* NIOJHEMAJLL; // 0xC8
	::FlowCanvas::Nodes::CustomEvent_1<::System::Boolean>* CPNEHECPKEJ; // 0xD0
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::System::Object*>* LBANFEGGKPH; // 0xD8
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* APNJMFPFPIL; // 0xE0
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* FEDEOCOPDIA; // 0xE8
	::System::Collections::Generic::IEnumerable_1<::System::Object*>* MLPAKOKMJCC; // 0xF0
	::FlowCanvas::BinderConnection_1<::System::Single>* BBLBBOHAMDI; // 0xF8
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* ICDMOOLPJED; // 0x100
	::FlowCanvas::Nodes::RelayValueInput_1<::System::Int32>* NNOLBCKCAEG; // 0x108
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* DDELBMANHAG; // 0x110
	::FlowCanvas::BinderConnection_1<::Foundation::Unreal::FTransform3D>* MIFFFDFOAMO; // 0x118
	::FlowCanvas::BinderConnection_1<::System::Object*>* FGNBIGOPIEG; // 0x120
	::FlowCanvas::BinderConnection_1<::MoleMole::MultiTaskNodeHandle>* DOPAHEBLMDL; // 0x128
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::GameplayTag>* MILGNOEHFGO; // 0x130
	::FlowCanvas::BinderConnection_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* BLALPKPJKOM; // 0x138
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::KeyCode>* KPMOMINBEDF; // 0x140
	::FlowCanvas::Nodes::Identity_1<::System::Int32>* AHFADBPODIJ; // 0x148
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* BJONFDHBKBD; // 0x150
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGamePlayerAttachEffectData>* NCKDMDEFBHJ; // 0x158
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* IDFDPLJFNKA; // 0x160
	::NodeCanvas::Framework::Variable_1<::System::Object*>* GPFFAKLLEOI; // 0x168
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* NMMONHDDHCD; // 0x170
	::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* LEFELKDFEBH; // 0x178
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* ONHIADMEDFA; // 0x180
	::FlowCanvas::Nodes::GetVariable_1<::UnityEngine::Vector2>* MELAHIMFNNO; // 0x188
	::FlowCanvas::BinderConnection_1<::MoleMole::Level::RatingType>* EDEEOEHBHJC; // 0x190
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* BCAKGHGMOAC; // 0x198
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::EntityHandle>* IIIDKILENCI; // 0x1A0
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGamePlayerOnDamagedData>* MNOJGCLEGAM; // 0x1A8
	::System::Collections::Generic::List_1<::System::Object*>* DANLCHLCBLL; // 0x1B0
	::FlowCanvas::Nodes::RelayValueInput_1<::System::Single>* PGIMDMDPHHI; // 0x1B8
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* NMJJILBFABI; // 0x1C0
	::System::Collections::Generic::IEnumerable_1<::System::Object*>* EGBJAOBFILE; // 0x1C8
	::FlowCanvas::Nodes::LDForeachNext_1<::System::Int32>* KBMBKFCPNDG; // 0x1D0
	::NodeCanvas::Framework::Variable_1<::MoleMole::GameplayTag>* KDEOJHOCKAB; // 0x1D8
	::System::Collections::Generic::IEnumerable_1<::System::Single>* EJIPFFDMKKH; // 0x1E0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* MENEHPDHKLF; // 0x1E8
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* AFLFGGNLNPJ; // 0x1F0
	::System::Collections::Generic::List_1<::System::Boolean>* HGLIMNONIKA; // 0x1F8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* DFKEOEFDAFN; // 0x200
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Config::WeatherType>* KMLALKNLAGG; // 0x208
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::System::Object*>* FHNCAOEHANP; // 0x210
	::FlowCanvas::BinderConnection_1<::System::Object*>* EOFLEMPCPBA; // 0x218
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector2>* JLMCDLDOJNH; // 0x220
	::FlowCanvas::Nodes::LDForeachNext_1<::System::Object*>* DDJDGOLGFIK; // 0x228
	::FlowCanvas::Nodes::GetListItem_1<::System::Boolean>* JONJHAGKMKE; // 0x230
	::FlowCanvas::BinderConnection_1<::MoleMole::FairyTextUpdateType>* NMMLDBJIMOD; // 0x238
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* MBFIJHGGLCE; // 0x240
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* DMNNBFCAIIB; // 0x248
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int>>* NEIIODCDFIJ; // 0x250
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* PIHAAHPAMIH; // 0x258
	::System::Collections::Generic::List_1<::System::Single>* NDMBFMFHMLD; // 0x260
	::System::Collections::Generic::IList_1<::System::Int32>* BMPNGJBCBOM; // 0x268
	::FlowCanvas::BinderConnection_1<::System::Int32>* OGGOEAPLBBP; // 0x270
	::FlowCanvas::BinderConnection_1<::MoleMole::AbyssS2_EventType>* NBNDJFBNDNB; // 0x278
	::FlowCanvas::BinderConnection_1<::PipelineCamera::FinalCameraData>* HAMLFHLJNOG; // 0x280
	::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* LCIMLCLGPAH; // 0x288
	::FlowCanvas::Nodes::SetVariable_1<::System::Object*>* CEAGDJEFGLB; // 0x290
	::FlowCanvas::BinderConnection_1<::MoleMole::GameplayTag>* FPHCDHIOHGG; // 0x298
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* LFHGHMMLAJF; // 0x2A0
	::System::Collections::Generic::IEnumerable_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* MDCIDMJONAN; // 0x2A8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* KILEAKPNHJG; // 0x2B0
	::NodeCanvas::Framework::Variable_1<::System::Object*>* HNLDKBCAKCH; // 0x2B8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* CEMABNGDCJF; // 0x2C0
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* OHGCBJKFCGI; // 0x2C8
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* FHFPJOLAKMC; // 0x2D0
	::FlowCanvas::BinderConnection_1<::System::UInt32>* MMCOFDOBHIK; // 0x2D8
	::NodeCanvas::Framework::BBParameter_1<::System::Single>* LFKBAOJMMEE; // 0x2E0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* BCBIONPGELM; // 0x2E8
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::EntityHandle>* PBFCAPMEHJL; // 0x2F0
	::FlowCanvas::Nodes::WriteFlowParameter_1<::System::Boolean>* FAGJMAIIFJF; // 0x2F8
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FDIPHMALBBP; // 0x300
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::CampType>* FAJIJLELJOO; // 0x308
	::FlowCanvas::Nodes::SendEvent_1<::System::Int32>* AHIGMODAJFE; // 0x310
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* LOENONMFMAK; // 0x318
	::NodeCanvas::Framework::Variable_1<::System::UInt32>* GGKPJBMGAOI; // 0x320
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* CJJLEEOKHEA; // 0x328
	::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* MNOPNMJKJCC; // 0x330
	::NodeCanvas::Framework::BBParameter_1<::System::UInt32>* DCPMJMOKFNA; // 0x338
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Vector2>* NFGIGNEJLGM; // 0x340
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Vector3>* FMOHFFAPPKK; // 0x348
	::FlowCanvas::Nodes::SetListItem_1<::System::Boolean>* JBKELGLIOGF; // 0x350
	::FlowCanvas::Nodes::AddListItem_1<::System::Int32>* CNFHGGDIBCI; // 0x358
	::FlowCanvas::BinderConnection_1<::System::Object*>* LIIKPFCEDOK; // 0x360
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::TaskCompletionSourceNodeHandle>* KNLDFKBCOFE; // 0x368
	::FlowCanvas::BinderConnection_1<::System::Object*>* ALLIKNNJPDC; // 0x370
	::FlowCanvas::ValueInput_1<::System::Object*>* JBJGFPJFECO; // 0x378
	::System::Collections::Generic::IEnumerable_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* DIAHBIKNIMH; // 0x380
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::WeatherType>* PGDNJGEKEIC; // 0x388
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* CIBMCIOOEHG; // 0x390
	::FlowCanvas::Nodes::CustomEvent_1<::System::Int32>* CAJFLNMFKAF; // 0x398
	::FlowCanvas::Nodes::RelayValueOutput_1<::System::Int32>* HLIIOILEOFL; // 0x3A0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* JIPKKAPFKDG; // 0x3A8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>* ICMDGHGPNIG; // 0x3B0
	::FlowCanvas::Nodes::SelectOnBool_1<::System::Boolean>* GPAFHKFECML; // 0x3B8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* LNNIOAJHADO; // 0x3C0
	::FlowCanvas::BinderConnection_1<::System::Object*>* ALJIHICLCMD; // 0x3C8
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterFunctionType>* PJOOAKMICFN; // 0x3D0
	::FlowCanvas::Nodes::GetRandomListItem_1<::System::Int32>* DDOPIIDCPHH; // 0x3D8
	::FlowCanvas::Nodes::GetListIsEmpty_1<::System::Int32>* CMMGNHCELJK; // 0x3E0
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int>>* EKNPGCIIFJF; // 0x3E8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* POEOKHGGIJC; // 0x3F0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* FNKCPECKFGC; // 0x3F8
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* IEGLJCCBNOO; // 0x400
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::EntityHandle>* AJAJDJAJMHA; // 0x408
	::NodeCanvas::Framework::Variable_1<::MoleMole::Level::RatingType>* BMDHJIPFGKM; // 0x410
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::EntityHandle>* CELJGDLKJDP; // 0x418
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::System::Object*>* HCMDPNHGPJJ; // 0x420
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HollowCell>* MDNBDNIBKKO; // 0x428
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGameDamageData>* KECIBJOKAEK; // 0x430
	::FlowCanvas::BinderConnection_1<::System::Boolean>* AHFKNMHKLHA; // 0x438
	::FlowCanvas::Nodes::GetListItem_1<::MoleMole::HollowChessboard::HollowCell>* HLKIKIODHAG; // 0x440
	::FlowCanvas::BinderConnection_1<::System::Object*>* AKBNPALBOGL; // 0x448
	::FlowCanvas::BinderConnection_1<::MoleMole::EntityHandle>* FNAIOPALJCC; // 0x450
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::GameplayTag>* KKJNFPPCPIH; // 0x458
	::FlowCanvas::Nodes::WriteFlowParameter_1<::System::Single>* EMCINGLBAIK; // 0x460
	::FlowCanvas::BinderConnection_1<::System::Object*>* HHOMAFMOMEF; // 0x468
	::FlowCanvas::BinderConnection_1<::System::Object*>* AHCLFELFEAN; // 0x470
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::TimePeriodType>* FFCPMDCOABJ; // 0x478
	::FlowCanvas::Nodes::GetVariable_1<::UnityEngine::Vector3>* HACMMAONCMG; // 0x480
	::FlowCanvas::BinderConnection_1<::Share::GridDir>* MBKHGGPMEBK; // 0x488
	::FlowCanvas::BinderConnection_1<::MoleMole::DoubleEliteCardInfo>* GDIABHFJLKD; // 0x490
	::FlowCanvas::BinderConnection_1<::UnityEngine::Vector2>* INKFBLDOBCI; // 0x498
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::TaskCompletionSourceNodeHandle>* OPFOKKKGLBJ; // 0x4A0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::DoubleEliteCardInfo>* FFNPJKJNMIB; // 0x4A8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* PLOMEDLHGFE; // 0x4B0
	::FlowCanvas::Nodes::SetVariable_1<::System::Object*>* FAAPKCNOMAO; // 0x4B8
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::Vector2Int>* KFCAAKOFMMH; // 0x4C0
	::FlowCanvas::Nodes::ForEach_1<::System::Int32>* JFANNMLMEED; // 0x4C8
	::FlowCanvas::Nodes::ForEach_1<::System::Boolean>* MIGOFHMNBKA; // 0x4D0
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* PLDBNOPJNHL; // 0x4D8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* DBPJPCPILHO; // 0x4E0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Vector3>* FKDJJPIFJBG; // 0x4E8
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::MonsterStrengthType>* PICMKDNELKJ; // 0x4F0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* HFNLMLMCABK; // 0x4F8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* IOABOJKPFMD; // 0x500
	::System::Collections::Generic::IList_1<::System::Boolean>* LEFOOCDFIGK; // 0x508
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* HBCIEPHKDGC; // 0x510
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::GameplayTag>* JMONJFLPLFH; // 0x518
	::FlowCanvas::Nodes::CustomEvent_1<::MoleMole::MultiTaskNodeHandle>* FJDPHIDDJOK; // 0x520
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::TimePeriodType>* BMCALLNJDEO; // 0x528
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::EntityHandle>* HADEGEHBJGO; // 0x530
	::NodeCanvas::Framework::Variable_1<::System::Int32>* OLBBPCIDIOE; // 0x538
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* CAKOCJAMFMG; // 0x540
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Config::TimePeriodType>* NOOMEJMINBN; // 0x548
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::HollowChessboard::HollowCell>* GKNONCMDBDG; // 0x550
	::FlowCanvas::Nodes::GetListItem_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* MBAPKIDDHHG; // 0x558
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* JGLCILPKGAH; // 0x560
	::FlowCanvas::Nodes::SetVariable_1<::System::Single>* PCKPMDNAPGB; // 0x568
	::FlowCanvas::BinderConnection_1<::System::Object*>* LNHMPNHKNNB; // 0x570
	::FlowCanvas::BinderConnection_1<::UnityEngine::Vector3>* GCNLFOPMPGP; // 0x578
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::WeatherType>* AAOIOLHDELE; // 0x580
	::FlowCanvas::Nodes::LDForeachNext_1<::UnityEngine::Vector3>* MCKKFHOGKEF; // 0x588
	::FlowCanvas::BinderConnection_1<::MoleMole::StatusEffectType>* BMLJBDIFEFN; // 0x590
	::NodeCanvas::Framework::Variable_1<::System::Single>* KPEKLMIFANH; // 0x598
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Vector2>* JIEDEMMFEDE; // 0x5A0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Vector2Int>* NMEJADFFJGB; // 0x5A8
	::FlowCanvas::Nodes::ForEach_1<::System::Single>* BAMINAJILIO; // 0x5B0
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::System::Object*>* FOEGNHNHAKI; // 0x5B8
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* CAGJDDODCFD; // 0x5C0
	::FlowCanvas::Nodes::GetVariable_1<::System::Int32>* KLMHELILLGA; // 0x5C8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int>>* HEGABIIPEEB; // 0x5D0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::CampType>* CCJBMJKMHDG; // 0x5D8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* HLJMLKCPGBE; // 0x5E0
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* OHIAKMNFDHI; // 0x5E8
	::FlowCanvas::Nodes::Identity_1<::System::UInt32>* PHLIDFAABHI; // 0x5F0
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>* EDHEMKKKNDJ; // 0x5F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* GGJKHBPECEL; // 0x600
	::FlowCanvas::BinderConnection_1<::MoleMole::BabelTowerTemplateOverrideData>* KFNNAJBDCPF; // 0x608
	::NodeCanvas::Tasks::Actions::SetVariable_1<::System::Boolean>* ABNCPHFCJOF; // 0x610
	::System::Collections::Generic::List_1<::System::Object*>* CHBMNGEGHEL; // 0x618
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* LBDIAIJPELP; // 0x620
	::FlowCanvas::Nodes::SetVariable_1<::System::Int32>* CGAAMCLICPB; // 0x628
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Level::RatingType>* GOKHCDNCKKB; // 0x630
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* GCEHLANEKDM; // 0x638
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::DoubleEliteCardInfo>* MANGFPLOHHM; // 0x640
	::FlowCanvas::Nodes::LDForeachNext_1<::System::Object*>* CHOLOJOBKNK; // 0x648
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* IEMKHBBIDJF; // 0x650
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* IEGFLLAPBBF; // 0x658
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::StatusEffectType>* JKNOGOMPKEM; // 0x660
	::NodeCanvas::Framework::Variable_1<::System::Object*>* IDHPKAEBCJP; // 0x668
	::FlowCanvas::ValueInput_1<::System::Boolean>* KHDKGILJLKH; // 0x670
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::System::Object*>* ELJPNCGHKEJ; // 0x678
	::FlowCanvas::Nodes::ForEach_1<::System::Object*>* FMMFBGBKMJN; // 0x680
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::BabelTowerTemplateOverrideData>* PLKGEDIGEMC; // 0x688
	::NodeCanvas::Framework::BBParameter_1<::System::Int32>* HJDPFILEDLH; // 0x690
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Vector2Int>* GDDIEHIHHBM; // 0x698
	::System::Collections::Generic::IList_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* LDNHKCPCMGP; // 0x6A0
	::System::Collections::Generic::IEnumerable_1<::System::Object*>* EJOEIPLCOML; // 0x6A8
	::FlowCanvas::Nodes::GetVariable_1<::System::Single>* IFEBFOCDIDD; // 0x6B0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::EntityHandle>* JOBENCJFHHB; // 0x6B8
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* NLPGAGGDDPO; // 0x6C0
	::System::Collections::Generic::IList_1<::MoleMole::EntityHandle>* ONOPPEECOPF; // 0x6C8
	::FlowCanvas::BinderConnection_1<::MoleMole::TaskCompletionSourceNodeHandle>* KEKFHLGHDIK; // 0x6D0
	::System::Collections::Generic::IEnumerable_1<::System::Boolean>* KDNDDILABMA; // 0x6D8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* MFAMEDKPAIL; // 0x6E0
	::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>* EBNNNMMABIA; // 0x6E8
	::NodeCanvas::Framework::Variable_1<::System::Object*>* BOOFFJJMPLJ; // 0x6F0
	::System::Object* HEAJMIGHEHG; // 0x6F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::TimePeriodType>* DINENGJDPLH; // 0x700
	::FlowCanvas::Nodes::ReadFlowParameter_1<::System::Single>* PBMKCMKPLFB; // 0x708
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::TimePeriodType>* LBFIHMEFFEJ; // 0x710
	::System::Collections::Generic::IEnumerable_1<::MoleMole::GameplayTag>* JBGIEEOFGIA; // 0x718
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* PMDCCJBHDEN; // 0x720
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JLJKPDGJKBA; // 0x728
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* JKOMNNANPPD; // 0x730
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* AEGGNNAEOGE; // 0x738
	::System::Collections::Generic::List_1<::System::Int32>* ENIGHPGHJPF; // 0x740
	::FlowCanvas::ValueInput_1<::System::Int32>* ELHPBLKDCON; // 0x748
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::StatusEffectType>* HHKHABBCNJE; // 0x750
	::FlowCanvas::Nodes::LDForeachNext_1<::System::UInt32>* KCGKFJMINIO; // 0x758
	::FlowCanvas::Nodes::SetVariable_1<::System::UInt32>* BMMGPIDDIEG; // 0x760
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::UnityEngine::Vector3>* COLJJHEFINJ; // 0x768
	::FlowCanvas::BinderConnection_1<::System::Object*>* HIODAKMMFOG; // 0x770
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* FABPKMNPEFL; // 0x778
	::NodeCanvas::Framework::Variable_1<::MoleMole::EntityHandle>* OCJMFENPJDO; // 0x780
	::FlowCanvas::Nodes::GetVariable_1<::System::Boolean>* MODOMJKOCEM; // 0x788
	::FlowCanvas::Nodes::SetVariable_1<::System::Object*>* MKHBCCKHEIJ; // 0x790
	::NodeCanvas::Framework::Variable_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* JGDCFMEMANO; // 0x798
	::FlowCanvas::Nodes::WriteFlowParameter_1<::System::Int32>* DHFOLEMJDPK; // 0x7A0
	::NodeCanvas::Framework::Variable_1<::System::Boolean>* DNFMBPGANCG; // 0x7A8
	::FlowCanvas::Nodes::GetVariable_1<::System::UInt32>* IPGOHKEDODH; // 0x7B0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Quaternion>* DMOILCLPPEJ; // 0x7B8
	::FlowCanvas::BinderConnection_1<::System::Object*>* AINPCJDOMCF; // 0x7C0
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* FEEFOPCPPDI; // 0x7C8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::GameplayTag>* KMCBNDLBBIJ; // 0x7D0
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* OFKEJNBABEJ; // 0x7D8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Vector2Int>* MACOJGMGDGL; // 0x7E0
	::FlowCanvas::Nodes::GetVariable_1<::System::Object*>* ELGKPCEFMIB; // 0x7E8
	::FlowCanvas::BinderConnection_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* DFOEKLKCOFH; // 0x7F0
	::NodeCanvas::Framework::Variable_1<::MoleMole::TaskCompletionSourceNodeHandle>* CEGGNADENGD; // 0x7F8
	::FlowCanvas::Nodes::AddListItem_1<::System::Boolean>* CKEMIPFAJPN; // 0x800
	::FlowCanvas::Nodes::Identity_1<::MoleMole::HollowChessboard::HollowCell>* FKDCAAADHGF; // 0x808
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* KCELMFDHAMO; // 0x810
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::WeatherType>* PCINBGEHJKI; // 0x818
	::FlowCanvas::Nodes::ForEach_1<::System::UInt32>* OJNPFJFLEPN; // 0x820
	::NodeCanvas::Framework::BBParameter_1<::System::Object*>* FHAFGGCJIAK; // 0x828
	::System::Collections::Generic::List_1<::System::UInt32>* BADPGGAHEIB; // 0x830
	::FlowCanvas::Nodes::SetVariable_1<::System::Boolean>* KIDHJBMNOOK; // 0x838
	::MoleMole::FlowCanvas::Optional_1<::IKACJBCOKJI> JCPGKIIACFM; // 0x840
	::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeState> AKMFPCLIEGC; // 0x848
	::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeVisible> LCCOBBIENIL; // 0x850
	::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int> JMNAAIGENLO; // 0x858

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD__CTOR_OFFSET))(this);
	}

	::System::Void HJCCMKMHEKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_HJCCMKMHEKI_OFFSET))(this);
	}

	::System::Void NBBJNNINADO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_NBBJNNINADO_OFFSET))(this);
	}

	::System::Void FCBMKNEJFNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_FCBMKNEJFNN_OFFSET))(this);
	}

	::System::Void BBEAFMCPMFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_BBEAFMCPMFE_OFFSET))(this);
	}

	::System::Void DEPJOKICJAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_DEPJOKICJAI_OFFSET))(this);
	}

	::System::Void DAOLDPBENNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_DAOLDPBENNJ_OFFSET))(this);
	}

	::System::Void IFFAPOLDJGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_IFFAPOLDJGO_OFFSET))(this);
	}

	::System::Void GFFJAOIFOGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_GFFJAOIFOGC_OFFSET))(this);
	}

	::System::Void HBAJELFLALP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_HBAJELFLALP_OFFSET))(this);
	}

	::System::Void KKEPFEMDCNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_KKEPFEMDCNL_OFFSET))(this);
	}

	::System::Void MEJKDHFAHLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_MEJKDHFAHLO_OFFSET))(this);
	}

	::System::Void PLNPFOGEKHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_PLNPFOGEKHP_OFFSET))(this);
	}

	::System::Void MKKJDFOOFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_MKKJDFOOFKG_OFFSET))(this);
	}

	::System::Void DOKHNGADDNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_DOKHNGADDNI_OFFSET))(this);
	}

	::System::Void APOAMDDBDPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_APOAMDDBDPJ_OFFSET))(this);
	}

	::System::Void HFFCDBMINIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_HFFCDBMINIF_OFFSET))(this);
	}

	::System::Void MNAJCJCAEDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_MNAJCJCAEDC_OFFSET))(this);
	}

	::System::Void GBLKCEBJHML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_GBLKCEBJHML_OFFSET))(this);
	}

	::System::Void NGOEFEDNNOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIGDAICGOD_NGOEFEDNNOL_OFFSET))(this);
	}
};
