#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionDire.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPuzzleBoard_PuzzlePhase.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FKPLNMJHANM;
class GKOBBBBPJKK;
class HHPKNCPMPOJ;
class OIHNHGCDONL;
namespace RPG::Client { class MirrormentValleyConfig; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::Client::Prop { class OpticalIllusionCamera; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleCube; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ABBHJGIIOIN_OFFSET UNITYSDK_OFFSET(0xDD37950)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_AIFAEGHCGKG_OFFSET UNITYSDK_OFFSET(0xDD34BB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ALGFBOCCBMI_OFFSET UNITYSDK_OFFSET(0xDD455C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ALOBGJIKMBH_OFFSET UNITYSDK_OFFSET(0xDD37700)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_APBEAHIOFCE_OFFSET UNITYSDK_OFFSET(0xDD3B8C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BCJCBMCGOFK_OFFSET UNITYSDK_OFFSET(0xDD3EB40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BEJPOHIECNL_OFFSET UNITYSDK_OFFSET(0xDD3D610)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BLFFNELJJFA_OFFSET UNITYSDK_OFFSET(0xDD3E0F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BMPBELPBPEG_OFFSET UNITYSDK_OFFSET(0xDD3CB70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CBEFIEHAEPP_OFFSET UNITYSDK_OFFSET(0xDD36680)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD4B160)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CHCGJJLHHMJ_OFFSET UNITYSDK_OFFSET(0xDD391D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CHECKPOINTSOVERLAYONSCREEN_OFFSET UNITYSDK_OFFSET(0xDD3E940)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CJALPLOLBPA_OFFSET UNITYSDK_OFFSET(0xDD36560)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CKJOPHMNIMB_OFFSET UNITYSDK_OFFSET(0xDD41040)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CKNFMOJIFNL_OFFSET UNITYSDK_OFFSET(0xDD41BB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CNFNONMPMKJ_OFFSET UNITYSDK_OFFSET(0xDD397E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTBOARDTOWORLDPOS_OFFSET UNITYSDK_OFFSET(0xDD42740)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTWORLDTOBOARDPOS_OFFSET UNITYSDK_OFFSET(0xDD3B4D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_COOGLDNKAIO_OFFSET UNITYSDK_OFFSET(0xDD3CBF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD4AD90)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DAFHJFOBHPM_OFFSET UNITYSDK_OFFSET(0xDD407A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DDAMLIMCFDD_OFFSET UNITYSDK_OFFSET(0xDD40EB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DEHNAEDCLFI_OFFSET UNITYSDK_OFFSET(0xDD41A80)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DGGLPBIDGBI_OFFSET UNITYSDK_OFFSET(0xDD3A690)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DILBDGJHLIE_OFFSET UNITYSDK_OFFSET(0xDD42810)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD36B80)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EECOFKBNIHD_OFFSET UNITYSDK_OFFSET(0xDD3E090)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EFBGJGGOHCJ_OFFSET UNITYSDK_OFFSET(0xDD45330)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDD3B040)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDD3B090)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FBJOLGEHIIM_OFFSET UNITYSDK_OFFSET(0xDD3C9B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FFLOKCBPDPE_OFFSET UNITYSDK_OFFSET(0xDD34AC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FINDPATH_OFFSET UNITYSDK_OFFSET(0xDD45E00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FMEDKILKDNA_OFFSET UNITYSDK_OFFSET(0xDD378B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FOGGEPIAOGG_OFFSET UNITYSDK_OFFSET(0xDD36740)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FOPOAKOBJDF_OFFSET UNITYSDK_OFFSET(0xDD3B5A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GAGIIJKAJGC_OFFSET UNITYSDK_OFFSET(0xDD45630)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GBJNMPHLCDC_OFFSET UNITYSDK_OFFSET(0xDD404D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GCMELCAAPIF_OFFSET UNITYSDK_OFFSET(0xDD3F000)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETENTITY_OFFSET UNITYSDK_OFFSET(0xDD39870)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETIGNORECOVERPOS_OFFSET UNITYSDK_OFFSET(0xDD45720)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0xDD3B2A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_GOLDGEARASSET_OFFSET UNITYSDK_OFFSET(0xDD4AD10)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_HOVERITEM_OFFSET UNITYSDK_OFFSET(0xDD4ACD0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_OPCOUNT_OFFSET UNITYSDK_OFFSET(0xDD4AD50)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xDD4ACB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0xDD4AD70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xDD4ACF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SILVERGEARASSET_OFFSET UNITYSDK_OFFSET(0xDD4AD30)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GFPJBOAEOOB_OFFSET UNITYSDK_OFFSET(0xDD429E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GJIKNBCKGMM_OFFSET UNITYSDK_OFFSET(0xDD3B3B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GLKLCOOKDNE_OFFSET UNITYSDK_OFFSET(0xDD360F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HASIGNORECOVERCUBES_OFFSET UNITYSDK_OFFSET(0xDD456C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HBAPOFIFGEH_OFFSET UNITYSDK_OFFSET(0xDD419E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HBHHOGFPOHF_OFFSET UNITYSDK_OFFSET(0xDD40A00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HBMIIPBGBMF_OFFSET UNITYSDK_OFFSET(0xDD3EF90)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HFKDDIPAGJF_OFFSET UNITYSDK_OFFSET(0xDD3B990)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HIGPFKOHPGG_OFFSET UNITYSDK_OFFSET(0xDD44FD0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HLHBHPEAEGJ_OFFSET UNITYSDK_OFFSET(0xDD40370)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_IJLOOFFCKNE_OFFSET UNITYSDK_OFFSET(0xDD3B370)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD34330)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD398C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xDD39910)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JBEMPOILJND_OFFSET UNITYSDK_OFFSET(0xDD3C4C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JDBMLIHJBEN_OFFSET UNITYSDK_OFFSET(0xDD40AB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JLNIGCAONIP_OFFSET UNITYSDK_OFFSET(0xDD49A40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JPJAKEJEIFH_OFFSET UNITYSDK_OFFSET(0xDD45060)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KAJFHHBFPEM_OFFSET UNITYSDK_OFFSET(0xDD37E70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KENBPCPMPGC_OFFSET UNITYSDK_OFFSET(0xDD34DD0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KGCLOCMLGNC_OFFSET UNITYSDK_OFFSET(0xDD3F450)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KNKLHEPPFDM_OFFSET UNITYSDK_OFFSET(0xDD37670)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KPBDEHDHEOI_OFFSET UNITYSDK_OFFSET(0xDD417E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_LFGAAMFJIDB_OFFSET UNITYSDK_OFFSET(0xDD394F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MAEEOHBKCKE_OFFSET UNITYSDK_OFFSET(0xDD45550)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MAHOLIEGOLP_OFFSET UNITYSDK_OFFSET(0xDD3FBA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MBGOBLAJPOJ_OFFSET UNITYSDK_OFFSET(0xDD45140)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xDD40970)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MGIOMAANHPB_OFFSET UNITYSDK_OFFSET(0xDD3D9D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MHILHBNJGAC_OFFSET UNITYSDK_OFFSET(0xDD42660)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MHLAJOMDJOG_OFFSET UNITYSDK_OFFSET(0xDD3ABC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MIMOGMGHMHL_OFFSET UNITYSDK_OFFSET(0xDD39750)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MJJPLCLFKMH_OFFSET UNITYSDK_OFFSET(0xDD41670)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MOVEITEMASYNC_OFFSET UNITYSDK_OFFSET(0xDD42320)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_NGHPCIPPINA_OFFSET UNITYSDK_OFFSET(0xDD399A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_NMPBMKGIIJE_OFFSET UNITYSDK_OFFSET(0xDD45280)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_NOILEDADCLA_OFFSET UNITYSDK_OFFSET(0xDD41230)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_OCFKLGFHKAC_OFFSET UNITYSDK_OFFSET(0xDD3CAF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ODJPJPIDEIJ_OFFSET UNITYSDK_OFFSET(0xDD37850)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_OJBCHNAKOHK_OFFSET UNITYSDK_OFFSET(0xDD3D010)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ONHCLBEFLOJ_OFFSET UNITYSDK_OFFSET(0xDD43350)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_OOMOGLMNKMK_OFFSET UNITYSDK_OFFSET(0xDD37780)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PENAMDBIDLA_OFFSET UNITYSDK_OFFSET(0xDD35C70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PGMEGIAGOLL_OFFSET UNITYSDK_OFFSET(0xDD3E1C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PIFPMJCEBMK_OFFSET UNITYSDK_OFFSET(0xDD499B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PLIONAKOBGG_OFFSET UNITYSDK_OFFSET(0xDD38C00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PPLOKBOAEID_OFFSET UNITYSDK_OFFSET(0xDD39BA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xDD3D570)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETORTHOGRAPHICCAMERA_OFFSET UNITYSDK_OFFSET(0xDD3B180)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD39300)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ROTATEITEM_OFFSET UNITYSDK_OFFSET(0xDD3F090)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SETNPCBUBBLETALK_OFFSET UNITYSDK_OFFSET(0xDD3CD10)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_GOLDGEARASSET_OFFSET UNITYSDK_OFFSET(0xDD4AD20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_HOVERITEM_OFFSET UNITYSDK_OFFSET(0xDD4ACE0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_OPCOUNT_OFFSET UNITYSDK_OFFSET(0xDD4AD60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xDD4ACC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0xDD4AD80)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xDD4AD00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SILVERGEARASSET_OFFSET UNITYSDK_OFFSET(0xDD4AD40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD37A10)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SWITCHCAMERAANCHOR_OFFSET UNITYSDK_OFFSET(0xDD3B200)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD3A470)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xDD3D290)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD39950)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard_TypeDefinitionIndex = 78702;

	class OpticalIllusionPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Object* JKODBCHAPIE; // 0x48
		::UnityEngine::GameObject* IFLOMLFLGBG; // 0x50
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase _Phase_k__BackingField; // 0x58
		::System::Boolean GFAMGLFOMGI; // 0x5C
		::System::Boolean KBJACNAMHBA; // 0x5D
		::System::Byte _padding0[0x2];
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>* CCAPCKJHLOE; // 0x60
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionPuzzleItem*>* GCIKKMGIPIO; // 0x68
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*>* AHDEONMPMHE; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>*>* MDJLDCNGLCC; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>*>* ALFFLMNKFJN; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::OpticalIllusionPuzzleCube*>* IADBNPJFMEG; // 0x88
		::GKOBBBBPJKK* CONIDCGICDD; // 0x90
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x98
		::RPG::GameCore::AdventureCharacterController* HFBBBNLCIHN; // 0xA0
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* _HoverItem_k__BackingField; // 0xA8
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* _SelectItem_k__BackingField; // 0xB0
		::RPG::Client::Prop::OpticalIllusionDire FGNJDDKGHIF; // 0xB8
		::UnityEngine::Vector3 NPHFNMFEGMH; // 0xBC
		::System::Boolean LLLFONGLIPE; // 0xC8
		::System::Byte _padding1[0x3];
		::System::Single IEKJLLHKOFA; // 0xCC
		::System::Single FBONMFPMGME; // 0xD0
		::System::Single OHLCEAMNLDG; // 0xD4
		::UnityEngine::Coroutine* HPMNPIFGHBM; // 0xD8
		::System::Single BAEPHMOKCIA; // 0xE0
		::System::Single GDDJJEPKLEF; // 0xE4
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* MirrorItem; // 0xE8
		::UnityEngine::Vector3 FNBCCKMKAHN; // 0xF0
		::UnityEngine::Vector3 ALKKGENMJMH; // 0xFC
		::UnityEngine::Vector3 HPFNIIIGIDG; // 0x108
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GMHMONEFEKD; // 0x118
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BDCNFLBLEAO; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GBGMBFPFCKO; // 0x128
		::UnityEngine::Vector3 GGHANMBEFML; // 0x130
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::HashSet_1<::System::UInt32>* MEDOLNCILMF; // 0x140
		::System::Boolean JGJJBDFAFIN; // 0x148
		::System::Byte _padding4[0x7];
		::RPG::Client::VirtualCursor* GNGEFFIBCMO; // 0x150
		::System::Boolean FDLGENCFKDD; // 0x158
		::System::Byte _padding5[0x3];
		::System::Int32 JIBJKHCJFBJ; // 0x15C
		::System::Int32 HHJKKIMFJAI; // 0x160
		::System::Int32 HBDPPIJNGOO; // 0x164
		::System::Int32 GJLINPFBDAN; // 0x168
		::System::Boolean HHAODJLIPAE; // 0x16C
		::System::Byte _padding6[0x3];
		::UnityEngine::GameObject* _GoldGearAsset_k__BackingField; // 0x170
		::UnityEngine::GameObject* _SilverGearAsset_k__BackingField; // 0x178
		::OIHNHGCDONL* NOHHGLPGAFK; // 0x180
		::RPG::Client::Billboard::BillboardNotifyParam* BOPNPNJENII; // 0x188
		::RPG::GameCore::PlayNPCBubbleTalk* AKHJFPLFOJB; // 0x190
		::System::Single MOEIIILKPFP; // 0x198
		::System::UInt32 OMBHPKJCIHJ; // 0x19C
		::System::Single BJMGPMDLOPO; // 0x1A0
		::System::Boolean NMKAFOFBAFA; // 0x1A4
		::System::Byte _padding7[0x3];
		::System::Int32 NDMGHHDMPAN; // 0x1A8
		::System::Single JKMMDKFNOEB; // 0x1AC
		::System::Single LFDPJHAPBED; // 0x1B0
		::System::Single EPNJMCDPJDG; // 0x1B4
		::UnityEngine::Vector3 PFBFFIMPNBL; // 0x1B8
		::System::Byte _padding8[0x4];
		::Il2CppArray<::UnityEngine::RaycastHit>* LIEMGOHMCCD; // 0x1C8
		::System::Int32 _OpCount_k__BackingField; // 0x1D0
		::System::Int32 _ReachPoint_k__BackingField; // 0x1D4
		::UnityEngine::Vector3 PlayerStartPosition; // 0x1D8
		::UnityEngine::Quaternion PlayerStartRotation; // 0x1E4
		::RPG::GameCore::CharacterMotionFlag PlayerMotion; // 0x1F4
		::System::Single PlayerSpeedRate; // 0x1F8
		::System::Byte _padding9[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* DesignPaths; // 0x200
		::RPG::Client::Prop::OpticalIllusionPlane MirrorPlane; // 0x208
		::UnityEngine::Vector3 CameraPosition; // 0x20C
		::UnityEngine::Quaternion CameraRotation; // 0x218
		::System::Single OrthographicSize; // 0x228
		::System::Byte _padding10[0x4];
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionCamera*>* CameraAnchors; // 0x230
		::System::Boolean IsSpecialMode; // 0x238
		::System::Byte _padding11[0x7];
		::FKPLNMJHANM* BHJDJDPLCLP; // 0x240
		::System::Int32 KBDPMBDJIOF; // 0x248
		::System::UInt32 LCAOJIDMINA; // 0x24C
		::System::Int32 HFOIDBJPGIL; // 0x250
		::System::Byte _padding12[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x258
		static ::System::String** StaticGet_SOUND_ITEM_MOVE_BLOCK()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFE70);
		}

		static ::System::String** StaticGet_POST_PROCESS_ASSET()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFE78);
		}

		static ::System::String** StaticGet_END_SOUND()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFE80);
		}

		static ::System::String** StaticGet_SOUND_WAY_PASS()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFE88);
		}

		static ::System::String** StaticGet_SOUND_ITEM_MOVE_COLLIDE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFE90);
		}

		static ::System::String** StaticGet_SOUND_MIRROR_MOVE_END()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFE98);
		}

		static ::System::String** StaticGet_SOUND_MIRROR_MOVE_START()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEA0);
		}

		static ::System::String** StaticGet_GUIDE_DIALOG_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEA8);
		}

		static ::System::String** StaticGet_SOUND_MIRROR_MOVE_BLOCK()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEB0);
		}

		static ::System::String** StaticGet_CONFIRM_DIALOG_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEB8);
		}

		static ::System::String** StaticGet_START_SOUND()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEC0);
		}

		static ::System::String** StaticGet_GAME_KEY()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEC8);
		}

		static ::System::String** StaticGet_BUBBLE_UNIQUE_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFED0);
		}

		static ::RPG::Client::MirrormentValleyConfig** StaticGet_MirrorValleyConfig()
		{
			return (::RPG::Client::MirrormentValleyConfig**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFED8);
		}

		static ::System::String** StaticGet_SOUND_ITEM_SELECT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0xFEE0);
		}

		static ::System::Single* StaticGet_RotateStep()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0x3600);
		}

		static ::System::UInt32* StaticGet_CLOCK_BOY_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0x3604);
		}

		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0x3608);
		}

		static ::System::Single* StaticGet_OverlayEpsilon()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "OpticalIllusionPuzzleBoard")->GetStaticField(0x360C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntity(::RPG::GameCore::TargetFetchPuzzleEntityType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetFetchPuzzleEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETENTITY_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLESTART_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void EnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void ExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void ResetOrthographicCamera(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETORTHOGRAPHICCAMERA_OFFSET))(this, a1);
		}

		::System::Boolean SwitchCameraAnchor(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SWITCHCAMERAANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void DGGLPBIDGBI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DGGLPBIDGBI_OFFSET))(this, a1);
		}

		::System::Single IJLOOFFCKNE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_IJLOOFFCKNE_OFFSET))(this);
		}

		::System::Void MHLAJOMDJOG(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MHLAJOMDJOG_OFFSET))(this, a1);
		}

		::System::Void PLIONAKOBGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PLIONAKOBGG_OFFSET))(this);
		}

		::System::Void GJIKNBCKGMM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GJIKNBCKGMM_OFFSET))(this, a1);
		}

		::System::Void OOMOGLMNKMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_OOMOGLMNKMK_OFFSET))(this);
		}

		::System::Void LFGAAMFJIDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_LFGAAMFJIDB_OFFSET))(this);
		}

		::System::Single GetOrthographicSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETORTHOGRAPHICSIZE_OFFSET))(this);
		}

		::System::Void GLKLCOOKDNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GLKLCOOKDNE_OFFSET))(this, a1);
		}

		::System::Void PENAMDBIDLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PENAMDBIDLA_OFFSET))(this);
		}

		::System::Void HFKDDIPAGJF(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HFKDDIPAGJF_OFFSET))(this, a1);
		}

		::System::Void CNFNONMPMKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CNFNONMPMKJ_OFFSET))(this);
		}

		::System::Void AIFAEGHCGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_AIFAEGHCGKG_OFFSET))(this);
		}

		::System::Void MIMOGMGHMHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MIMOGMGHMHL_OFFSET))(this);
		}

		::System::Void JBEMPOILJND(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JBEMPOILJND_OFFSET))(this, a1);
		}

		::System::Void FBJOLGEHIIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FBJOLGEHIIM_OFFSET))(this, a1);
		}

		::System::Void OCFKLGFHKAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_OCFKLGFHKAC_OFFSET))(this, a1);
		}

		::System::Void BMPBELPBPEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BMPBELPBPEG_OFFSET))(this, a1);
		}

		::System::Void COOGLDNKAIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_COOGLDNKAIO_OFFSET))(this, a1);
		}

		::System::Void ODJPJPIDEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ODJPJPIDEIJ_OFFSET))(this);
		}

		::System::Void SetNpcBubbleTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SETNPCBUBBLETALK_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* OJBCHNAKOHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_OJBCHNAKOHK_OFFSET))(this, a1);
		}

		::System::Void CJALPLOLBPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CJALPLOLBPA_OFFSET))(this);
		}

		::System::Void KNKLHEPPFDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KNKLHEPPFDM_OFFSET))(this);
		}

		::System::Void TriggerEffect(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::String* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TRIGGEREFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void RemoveEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_REMOVEEFFECT_OFFSET))(this, a1);
		}

		::System::Void BEJPOHIECNL(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BEJPOHIECNL_OFFSET))(this, a1);
		}

		::System::Void EECOFKBNIHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EECOFKBNIHD_OFFSET))(this);
		}

		::System::Void BLFFNELJJFA(::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BLFFNELJJFA_OFFSET))(this, a1);
		}

		::System::Void PGMEGIAGOLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PGMEGIAGOLL_OFFSET))(this);
		}

		::System::Boolean CheckPointsOverlayOnScreen(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CHECKPOINTSOVERLAYONSCREEN_OFFSET))(this, a1, a2);
		}

		::System::Void PPLOKBOAEID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PPLOKBOAEID_OFFSET))(this);
		}

		::System::Void GCMELCAAPIF(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GCMELCAAPIF_OFFSET))(this, a1);
		}

		::System::Void HBMIIPBGBMF(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HBMIIPBGBMF_OFFSET))(this, a1);
		}

		::System::Void FMEDKILKDNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FMEDKILKDNA_OFFSET))(this);
		}

		::System::Boolean HLHBHPEAEGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HLHBHPEAEGJ_OFFSET))(this);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* BCJCBMCGOFK()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_BCJCBMCGOFK_OFFSET))(this);
		}

		::System::Void CBEFIEHAEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CBEFIEHAEPP_OFFSET))(this);
		}

		::System::Void ABBHJGIIOIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ABBHJGIIOIN_OFFSET))(this);
		}

		::System::Void GBJNMPHLCDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GBJNMPHLCDC_OFFSET))(this);
		}

		::System::Void DAFHJFOBHPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DAFHJFOBHPM_OFFSET))(this);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MFNBDDBJGNE_OFFSET))(this, a1);
		}

		::System::Void CHCGJJLHHMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CHCGJJLHHMJ_OFFSET))(this);
		}

		::System::Void FOGGEPIAOGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FOGGEPIAOGG_OFFSET))(this);
		}

		::System::Void ALOBGJIKMBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ALOBGJIKMBH_OFFSET))(this);
		}

		::System::Void NGHPCIPPINA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_NGHPCIPPINA_OFFSET))(this);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* JDBMLIHJBEN()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JDBMLIHJBEN_OFFSET))(this);
		}

		::System::Void HBHHOGFPOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HBHHOGFPOHF_OFFSET))(this);
		}

		::UnityEngine::Vector3 DDAMLIMCFDD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DDAMLIMCFDD_OFFSET))(this);
		}

		::System::Void CKJOPHMNIMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CKJOPHMNIMB_OFFSET))(this);
		}

		::System::Void NOILEDADCLA(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_NOILEDADCLA_OFFSET))(this, a1);
		}

		::System::Void MJJPLCLFKMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MJJPLCLFKMH_OFFSET))(this);
		}

		::System::Void KPBDEHDHEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KPBDEHDHEOI_OFFSET))(this);
		}

		::System::Void HBAPOFIFGEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HBAPOFIFGEH_OFFSET))(this);
		}

		::System::Void DEHNAEDCLFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DEHNAEDCLFI_OFFSET))(this);
		}

		::System::Void KGCLOCMLGNC(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KGCLOCMLGNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MoveItemAsync(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MOVEITEMASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* MHILHBNJGAC(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MHILHBNJGAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MAHOLIEGOLP(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MAHOLIEGOLP_OFFSET))(this, a1);
		}

		::System::Boolean GFPJBOAEOOB(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GFPJBOAEOOB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CKNFMOJIFNL(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CKNFMOJIFNL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RotateItem(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ROTATEITEM_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* HIGPFKOHPGG(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HIGPFKOHPGG_OFFSET))(this, a1);
		}

		::System::Boolean ONHCLBEFLOJ(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ONHCLBEFLOJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean JPJAKEJEIFH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JPJAKEJEIFH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KENBPCPMPGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KENBPCPMPGC_OFFSET))(this);
		}

		::System::Void KAJFHHBFPEM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_KAJFHHBFPEM_OFFSET))(this, a1);
		}

		::System::Boolean MGIOMAANHPB(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MGIOMAANHPB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertWorldToBoardPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTWORLDTOBOARDPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertBoardToWorldPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTBOARDTOWORLDPOS_OFFSET))(this, a1);
		}

		::System::UInt32 MBGOBLAJPOJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MBGOBLAJPOJ_OFFSET))(this, a1);
		}

		::System::UInt32 FOPOAKOBJDF(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FOPOAKOBJDF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NMPBMKGIIJE(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_NMPBMKGIIJE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DILBDGJHLIE(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DILBDGJHLIE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 EFBGJGGOHCJ(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EFBGJGGOHCJ_OFFSET))(this, a1, a2);
		}

		::System::UInt32 APBEAHIOFCE(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_APBEAHIOFCE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 MAEEOHBKCKE(::UnityEngine::Vector2 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MAEEOHBKCKE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 ALGFBOCCBMI(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ALGFBOCCBMI_OFFSET))(this, a1);
		}

		::System::Void GAGIIJKAJGC(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GAGIIJKAJGC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HasIgnoreCoverCubes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HASIGNORECOVERCUBES_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetIgnoreCoverPos(::UnityEngine::Vector3 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETIGNORECOVERPOS_OFFSET))(this, a1, a2);
		}

		::System::Boolean FindPath(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FINDPATH_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt32>* JLNIGCAONIP(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_JLNIGCAONIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PIFPMJCEBMK(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_PIFPMJCEBMK_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase get_Phase()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_PHASE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* get_HoverItem()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_HOVERITEM_OFFSET))(this);
		}

		::System::Void set_HoverItem(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_HOVERITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* get_SelectItem()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SELECTITEM_OFFSET))(this);
		}

		::System::Void set_SelectItem(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SELECTITEM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_GoldGearAsset()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_GOLDGEARASSET_OFFSET))(this);
		}

		::System::Void set_GoldGearAsset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_GOLDGEARASSET_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_SilverGearAsset()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SILVERGEARASSET_OFFSET))(this);
		}

		::System::Void set_SilverGearAsset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SILVERGEARASSET_OFFSET))(this, a1);
		}

		::System::Int32 get_OpCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_OPCOUNT_OFFSET))(this);
		}

		::System::Void set_OpCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_OPCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ReachPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_REACHPOINT_OFFSET))(this);
		}

		::System::Void set_ReachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_REACHPOINT_OFFSET))(this, a1);
		}

		::System::Void FFLOKCBPDPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FFLOKCBPDPE_OFFSET))(this);
		}

	};
}
