#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIKGHHJKNCE.h"
#include "unitysdk/GDKBADFAEAI.h"
#include "unitysdk/HCOICJANAGG_POJHFHLEJED.h"
#include "unitysdk/MGGDCONEAID.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/NLBGMAHCJEJ.h"
#include "unitysdk/PNJDGHBEMLK_KMJGDDDBKCI.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/IMBMPPCPHOD.h"
#include "unitysdk/MPAGPEPJKKE.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/PNJDGHBEMLK_AGOFLACGMBO.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ANAAPIFINJE;
class CEDHMCAELMM;
class ConfigTextureColor;
class DPAFGNEEDDO;
class FAPOJHHEIMH;
class FBAMLABJMKF;
class FBJGGPABDIH;
class FMNAIOANOLK;
class GMCPAFDJNLH;
class KNILAOHIIIG;
class MCFPPILFGDB;
class OBKNEEOLOPB;
class OODDDHHGKIJ;
class PNJDGHBEMLK_LKEOODFIGLM;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowChessboard3DModelController_CanvasRTHandler; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_CameraEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_CameraShake; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PostEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_RiseOrSink; }
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }

#define PNJDGHBEMLK_AAAICGHDDNP_OFFSET UNITYSDK_OFFSET(0x1C6A02E0)
#define PNJDGHBEMLK_AADMHKHHBOA_OFFSET UNITYSDK_OFFSET(0x1C6A6120)
#define PNJDGHBEMLK_AEBKJCHAAGC_OFFSET UNITYSDK_OFFSET(0x1C6A1420)
#define PNJDGHBEMLK_AECJOPDNBJH_OFFSET UNITYSDK_OFFSET(0x1C69D5B0)
#define PNJDGHBEMLK_AIDFOHICGOL_OFFSET UNITYSDK_OFFSET(0x1C6A03F0)
#define PNJDGHBEMLK_AIOHJOBGIGA_OFFSET UNITYSDK_OFFSET(0x1C6A5FD0)
#define PNJDGHBEMLK_ALAEAMPPNCC_OFFSET UNITYSDK_OFFSET(0x1C6A2C30)
#define PNJDGHBEMLK_ALIPDJLPEGP_OFFSET UNITYSDK_OFFSET(0x1C6A1E50)
#define PNJDGHBEMLK_ALJMPGBABJM_OFFSET UNITYSDK_OFFSET(0x1C69F100)
#define PNJDGHBEMLK_BBPNHPBHFKO_OFFSET UNITYSDK_OFFSET(0x1C69B650)
#define PNJDGHBEMLK_BCADGNKLNBG_OFFSET UNITYSDK_OFFSET(0x1C6A8A80)
#define PNJDGHBEMLK_BCIEFAKMFDF_OFFSET UNITYSDK_OFFSET(0x1C6A51A0)
#define PNJDGHBEMLK_BDDMHMPNMNH_OFFSET UNITYSDK_OFFSET(0x1C69AB60)
#define PNJDGHBEMLK_BFLMCPLAOLE_OFFSET UNITYSDK_OFFSET(0x1C6A1F70)
#define PNJDGHBEMLK_BHNHDDLGCOG_OFFSET UNITYSDK_OFFSET(0x1C6A6340)
#define PNJDGHBEMLK_BKKKPHEDGBK_OFFSET UNITYSDK_OFFSET(0x1C6A0FB0)
#define PNJDGHBEMLK_BOCIOFAKPFO_OFFSET UNITYSDK_OFFSET(0x1C69B960)
#define PNJDGHBEMLK_CABEHLJNDNL_OFFSET UNITYSDK_OFFSET(0x1C6A4D80)
#define PNJDGHBEMLK_CBKEODJNEAA_OFFSET UNITYSDK_OFFSET(0x1C6A16C0)
#define PNJDGHBEMLK_CCNEMGLLLIM_OFFSET UNITYSDK_OFFSET(0x1C69C750)
#define PNJDGHBEMLK_CDLGDMENGDJ_OFFSET UNITYSDK_OFFSET(0x1C69E2E0)
#define PNJDGHBEMLK_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x1C6A2610)
#define PNJDGHBEMLK_CFJCPHFDALC_OFFSET UNITYSDK_OFFSET(0x1C69C4F0)
#define PNJDGHBEMLK_CFKDBCPEJMI_OFFSET UNITYSDK_OFFSET(0x1C6A7170)
#define PNJDGHBEMLK_CICBNACECLG_OFFSET UNITYSDK_OFFSET(0x1C69F400)
#define PNJDGHBEMLK_CIJJFPEGKJN_OFFSET UNITYSDK_OFFSET(0x1C69F510)
#define PNJDGHBEMLK_CODPMCKNGFE_OFFSET UNITYSDK_OFFSET(0x1C6A3040)
#define PNJDGHBEMLK_DAFANLIIEBI_OFFSET UNITYSDK_OFFSET(0x1C6A1F10)
#define PNJDGHBEMLK_DCFCILMPJEH_OFFSET UNITYSDK_OFFSET(0x1C69CBA0)
#define PNJDGHBEMLK_DCLOFFPNJDK_OFFSET UNITYSDK_OFFSET(0x1C69C740)
#define PNJDGHBEMLK_DDPNKIBAENO_OFFSET UNITYSDK_OFFSET(0x1C69A900)
#define PNJDGHBEMLK_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1C69ABF0)
#define PNJDGHBEMLK_DGIMJPCKJOD_OFFSET UNITYSDK_OFFSET(0x1C699D00)
#define PNJDGHBEMLK_DHNLDMLJBPH_OFFSET UNITYSDK_OFFSET(0x1C6A3150)
#define PNJDGHBEMLK_ECCKIOGBGDK_OFFSET UNITYSDK_OFFSET(0x1C6A6FF0)
#define PNJDGHBEMLK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C6A6F50)
#define PNJDGHBEMLK_EDBEEDKEDHK_OFFSET UNITYSDK_OFFSET(0x1C69F870)
#define PNJDGHBEMLK_EDMDOMGKPJB_OFFSET UNITYSDK_OFFSET(0x1C6A6BF0)
#define PNJDGHBEMLK_EEGDNMIFMEE_OFFSET UNITYSDK_OFFSET(0x1C6A6F60)
#define PNJDGHBEMLK_EFBEDAEMGFL_OFFSET UNITYSDK_OFFSET(0x1C69FE70)
#define PNJDGHBEMLK_EHLKMMNMCJB_OFFSET UNITYSDK_OFFSET(0x1C6A0400)
#define PNJDGHBEMLK_EIPAICJCDBL_OFFSET UNITYSDK_OFFSET(0x1C6A2F90)
#define PNJDGHBEMLK_EJBMKKLOPHD_OFFSET UNITYSDK_OFFSET(0x1C6A4F60)
#define PNJDGHBEMLK_ELJPNNJLDLC_OFFSET UNITYSDK_OFFSET(0x1C69C760)
#define PNJDGHBEMLK_ELMADMFMKIO_OFFSET UNITYSDK_OFFSET(0x1C69D610)
#define PNJDGHBEMLK_ELOGJBKCDKF_OFFSET UNITYSDK_OFFSET(0x1C6A3300)
#define PNJDGHBEMLK_FALEALLMMMF_OFFSET UNITYSDK_OFFSET(0x1C69EEE0)
#define PNJDGHBEMLK_FCOIBLLFOMH_OFFSET UNITYSDK_OFFSET(0x1C69C870)
#define PNJDGHBEMLK_FDOIFCFIMNE_OFFSET UNITYSDK_OFFSET(0x1C69DED0)
#define PNJDGHBEMLK_FFEIPOJPOGN_OFFSET UNITYSDK_OFFSET(0x1C6A63A0)
#define PNJDGHBEMLK_FFEPIPAALLC_OFFSET UNITYSDK_OFFSET(0x1C69DC90)
#define PNJDGHBEMLK_FGPNAKKFGLA_OFFSET UNITYSDK_OFFSET(0x1C69F340)
#define PNJDGHBEMLK_FHKEPEAJLDM_OFFSET UNITYSDK_OFFSET(0x1C6A2310)
#define PNJDGHBEMLK_FIFMEHBELPN_OFFSET UNITYSDK_OFFSET(0x1C69B970)
#define PNJDGHBEMLK_FLBDONFENPD_OFFSET UNITYSDK_OFFSET(0x1C6A7B00)
#define PNJDGHBEMLK_FLKJAEGCEHL_OFFSET UNITYSDK_OFFSET(0x1C6A4AA0)
#define PNJDGHBEMLK_FLNFPDGAFMC_OFFSET UNITYSDK_OFFSET(0x1C69CBB0)
#define PNJDGHBEMLK_FMANCDEEJMG_OFFSET UNITYSDK_OFFSET(0x1C6A5E50)
#define PNJDGHBEMLK_GDANEJDOHAE_OFFSET UNITYSDK_OFFSET(0x1C6A1350)
#define PNJDGHBEMLK_GFCEEEJCKLG_OFFSET UNITYSDK_OFFSET(0x1C69C3D0)
#define PNJDGHBEMLK_GMKNPHNCEPJ_OFFSET UNITYSDK_OFFSET(0x1C6A19B0)
#define PNJDGHBEMLK_HCECIJLCBKB_OFFSET UNITYSDK_OFFSET(0x1C69D480)
#define PNJDGHBEMLK_HFIGGFDBOCL_OFFSET UNITYSDK_OFFSET(0x1C6A4F70)
#define PNJDGHBEMLK_HGALFJHAMKC_OFFSET UNITYSDK_OFFSET(0x1C6A69C0)
#define PNJDGHBEMLK_HIFONDLGFIF_OFFSET UNITYSDK_OFFSET(0x1C6A6910)
#define PNJDGHBEMLK_HIMLNGPPMGA_OFFSET UNITYSDK_OFFSET(0x1C69D110)
#define PNJDGHBEMLK_HMNIJDLHNKO_OFFSET UNITYSDK_OFFSET(0x1C69C6B0)
#define PNJDGHBEMLK_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1C69AA60)
#define PNJDGHBEMLK_HNNFKJIJJAO_OFFSET UNITYSDK_OFFSET(0x1C69EAE0)
#define PNJDGHBEMLK_HOEJJFBIFJD_OFFSET UNITYSDK_OFFSET(0x1C6A5A60)
#define PNJDGHBEMLK_IAHKHCJNFPB_OFFSET UNITYSDK_OFFSET(0x1C69DD90)
#define PNJDGHBEMLK_IAODDPCGNGF_OFFSET UNITYSDK_OFFSET(0x1C6A4F80)
#define PNJDGHBEMLK_IEDCDHHPAHB_OFFSET UNITYSDK_OFFSET(0x1C69D030)
#define PNJDGHBEMLK_IFBNHAPPGLI_OFFSET UNITYSDK_OFFSET(0x1C6A4B00)
#define PNJDGHBEMLK_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1C69DBD0)
#define PNJDGHBEMLK_IIEHMMGEFCN_OFFSET UNITYSDK_OFFSET(0x1C6A19C0)
#define PNJDGHBEMLK_IKPHNCNAHEK_OFFSET UNITYSDK_OFFSET(0x1C699E00)
#define PNJDGHBEMLK_ILICEFBNPMB_1_OFFSET UNITYSDK_OFFSET(0x1C6A3280)
#define PNJDGHBEMLK_ILICEFBNPMB_OFFSET UNITYSDK_OFFSET(0x1C69DDF0)
#define PNJDGHBEMLK_INHFGDHPMHE_OFFSET UNITYSDK_OFFSET(0x1C69C0D0)
#define PNJDGHBEMLK_INIJIKIGAHA_OFFSET UNITYSDK_OFFSET(0x1C69A9A0)
#define PNJDGHBEMLK_IPIELPLBIPN_OFFSET UNITYSDK_OFFSET(0x1C6A6210)
#define PNJDGHBEMLK_JCCHIBBODPI_OFFSET UNITYSDK_OFFSET(0x1C6A38C0)
#define PNJDGHBEMLK_JCGIJFMEINC_OFFSET UNITYSDK_OFFSET(0x1C69ACD0)
#define PNJDGHBEMLK_JFNKBMKALGA_OFFSET UNITYSDK_OFFSET(0x1C69D890)
#define PNJDGHBEMLK_JHHDLBDDDGG_OFFSET UNITYSDK_OFFSET(0x1C6A4E30)
#define PNJDGHBEMLK_JHJBAILDBPL_OFFSET UNITYSDK_OFFSET(0x1C6A6650)
#define PNJDGHBEMLK_JICFJJAOPGK_OFFSET UNITYSDK_OFFSET(0x1C69B370)
#define PNJDGHBEMLK_JMAAEDKJNID_OFFSET UNITYSDK_OFFSET(0x1C69B740)
#define PNJDGHBEMLK_KAJCIAACHOK_OFFSET UNITYSDK_OFFSET(0x1C6A13D0)
#define PNJDGHBEMLK_KCAJEHIKEGO_OFFSET UNITYSDK_OFFSET(0x1C6A6740)
#define PNJDGHBEMLK_KFBCFFHJCJE_OFFSET UNITYSDK_OFFSET(0x1C6A4B10)
#define PNJDGHBEMLK_KFPPCMNEOFF_OFFSET UNITYSDK_OFFSET(0x1C6A12F0)
#define PNJDGHBEMLK_KHBEJNKDCIE_OFFSET UNITYSDK_OFFSET(0x1C69E650)
#define PNJDGHBEMLK_KIAKHJFNCHH_OFFSET UNITYSDK_OFFSET(0x1C6A7770)
#define PNJDGHBEMLK_KIDFDCJGNNE_OFFSET UNITYSDK_OFFSET(0x1C6A0BE0)
#define PNJDGHBEMLK_KOJKAPBBIPN_OFFSET UNITYSDK_OFFSET(0x1C6A1CC0)
#define PNJDGHBEMLK_KPFGNLIMIFC_OFFSET UNITYSDK_OFFSET(0x1C69CC40)
#define PNJDGHBEMLK_KPMHLCKLKKF_OFFSET UNITYSDK_OFFSET(0x1C69B6C0)
#define PNJDGHBEMLK_LCBMJACCIKO_OFFSET UNITYSDK_OFFSET(0x1C6A7050)
#define PNJDGHBEMLK_LCFAFMGJFIH_OFFSET UNITYSDK_OFFSET(0x1C69F5D0)
#define PNJDGHBEMLK_LDFDLEIFEOF_OFFSET UNITYSDK_OFFSET(0x1C69C6A0)
#define PNJDGHBEMLK_LDMADPMABAG_OFFSET UNITYSDK_OFFSET(0x1C6A6150)
#define PNJDGHBEMLK_LEPBOCFGPOH_OFFSET UNITYSDK_OFFSET(0x1C69D7E0)
#define PNJDGHBEMLK_LFLBDIPHGPD_OFFSET UNITYSDK_OFFSET(0x1C69C7D0)
#define PNJDGHBEMLK_LHBOCCPAGDN_OFFSET UNITYSDK_OFFSET(0x1C69C940)
#define PNJDGHBEMLK_LHIPPLJMDJP_OFFSET UNITYSDK_OFFSET(0x1C6A72A0)
#define PNJDGHBEMLK_MCPLENOAJKP_OFFSET UNITYSDK_OFFSET(0x1C6A83A0)
#define PNJDGHBEMLK_MDMLMGHKLNB_OFFSET UNITYSDK_OFFSET(0x1C69D730)
#define PNJDGHBEMLK_MECOLINEBEE_OFFSET UNITYSDK_OFFSET(0x1C69D840)
#define PNJDGHBEMLK_MGOLDOEJONM_OFFSET UNITYSDK_OFFSET(0x1C6A4D00)
#define PNJDGHBEMLK_MJFKFDBKMAH_OFFSET UNITYSDK_OFFSET(0x1C6A31B0)
#define PNJDGHBEMLK_MJMFLGELPNH_OFFSET UNITYSDK_OFFSET(0x1C6A0350)
#define PNJDGHBEMLK_MLBOPNBEHCK_OFFSET UNITYSDK_OFFSET(0x1C69D0C0)
#define PNJDGHBEMLK_MMKHFCOANOK_OFFSET UNITYSDK_OFFSET(0x1C69EB90)
#define PNJDGHBEMLK_MNFAPGAMDIA_OFFSET UNITYSDK_OFFSET(0x1C69BC80)
#define PNJDGHBEMLK_MPCJAMFHMMG_OFFSET UNITYSDK_OFFSET(0x1C6A4BA0)
#define PNJDGHBEMLK_NGOHELNJGDH_OFFSET UNITYSDK_OFFSET(0x1C69EA90)
#define PNJDGHBEMLK_NHFEANOBKGG_OFFSET UNITYSDK_OFFSET(0x1C69B2D0)
#define PNJDGHBEMLK_NIHFKMKNMGO_OFFSET UNITYSDK_OFFSET(0x1C69DBE0)
#define PNJDGHBEMLK_NJIIJLCHFCA_OFFSET UNITYSDK_OFFSET(0x1C69EEF0)
#define PNJDGHBEMLK_NKDJFFMABDM_OFFSET UNITYSDK_OFFSET(0x1C69C1E0)
#define PNJDGHBEMLK_NMLCONGICPL_OFFSET UNITYSDK_OFFSET(0x1C69B5C0)
#define PNJDGHBEMLK_NOOHANLBGFF_OFFSET UNITYSDK_OFFSET(0x1C6A7390)
#define PNJDGHBEMLK_NPBIFDKOHCL_OFFSET UNITYSDK_OFFSET(0x1C6A1260)
#define PNJDGHBEMLK_OAMFCDBKPHH_OFFSET UNITYSDK_OFFSET(0x1C69D930)
#define PNJDGHBEMLK_OFHGOMBCBCF_OFFSET UNITYSDK_OFFSET(0x1C69E1F0)
#define PNJDGHBEMLK_OFPBCFBOBCJ_OFFSET UNITYSDK_OFFSET(0x1C6A66E0)
#define PNJDGHBEMLK_OGCJNILPJCH_OFFSET UNITYSDK_OFFSET(0x1C6A5EF0)
#define PNJDGHBEMLK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C699940)
#define PNJDGHBEMLK_OKHKMPIKKBH_OFFSET UNITYSDK_OFFSET(0x1C69BA20)
#define PNJDGHBEMLK_OLEILDNNLLF_OFFSET UNITYSDK_OFFSET(0x1C69F2A0)
#define PNJDGHBEMLK_OMPKIPGCHAI_OFFSET UNITYSDK_OFFSET(0x1C69F250)
#define PNJDGHBEMLK_OOGBNMMLDPK_OFFSET UNITYSDK_OFFSET(0x1C6A72F0)
#define PNJDGHBEMLK_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1C6A7760)
#define PNJDGHBEMLK_PCGFKMFNPMD_OFFSET UNITYSDK_OFFSET(0x1C6A57B0)
#define PNJDGHBEMLK_PFJHPFENNOG_OFFSET UNITYSDK_OFFSET(0x1C69EFD0)
#define PNJDGHBEMLK_PHNGFMJNEOL_OFFSET UNITYSDK_OFFSET(0x1C6A6790)
#define PNJDGHBEMLK_PIJDOJAKFGK_OFFSET UNITYSDK_OFFSET(0x1C6A2F00)
#define PNJDGHBEMLK_PLBBLACMJII_1_OFFSET UNITYSDK_OFFSET(0x1C6A70E0)
#define PNJDGHBEMLK_PLBBLACMJII_2_OFFSET UNITYSDK_OFFSET(0x1C6A8420)
#define PNJDGHBEMLK_PLBBLACMJII_OFFSET UNITYSDK_OFFSET(0x1C69EC60)
#define PNJDGHBEMLK_PLDMHECLOML_OFFSET UNITYSDK_OFFSET(0x1C6A4C40)
#define PNJDGHBEMLK_PLMOGAMFKNG_OFFSET UNITYSDK_OFFSET(0x1C69DAC0)
#define PNJDGHBEMLK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C69B500)
#define PNJDGHBEMLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6996D0)

inline static constexpr unsigned int PNJDGHBEMLK_TypeDefinitionIndex = 64955;

class PNJDGHBEMLK : public ::AIKGHHJKNCE
{
public:
	static ::System::String** StaticGet_MJACCPDEMPB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368B0);
	}
	static ::System::String** StaticGet_ABNNBHLHFAO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368B8);
	}
	static ::System::String** StaticGet_MNDKIEMPIAH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368C0);
	}
	static ::System::String** StaticGet_AFLPJBNFOAH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368C8);
	}
	static ::System::String** StaticGet_HMDKKOFBAPH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368D0);
	}
	static ::MoleMole::UIHollowChessboard3DModelController** StaticGet__PLOJNJCPMBM_k__BackingField()
	{
		return (::MoleMole::UIHollowChessboard3DModelController**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368D8);
	}
	static ::System::String** StaticGet_LAJBFEFDNED()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368E0);
	}
	static ::System::String** StaticGet_BMBIMJLCAOG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368E8);
	}
	static ::System::String** StaticGet_LPPCJAEIBPM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368F0);
	}
	static ::System::String** StaticGet_NOGDMEIPJOM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNJDGHBEMLK_TypeDefinitionIndex)->GetStaticField(0x368F8);
	}
	::UnityEngine::Texture2D* BMKFHDHDBJH; // 0x688
	::DPAFGNEEDDO* ANIFKBMHPIJ; // 0x690
	::DPAFGNEEDDO* JJNIPAMKCPA; // 0x698
	::System::Threading::CancellationTokenSource* PBHENCFCBPD; // 0x6A0
	::FAPOJHHEIMH* OHFGDBCHDNJ; // 0x6A8
	::UnityEngine::Texture2D* MGIEAAFINFD; // 0x6B0
	::MoleMole::Config::ChessboardSwitchEffect* EANJBLNOOCK; // 0x6B8
	::System::String* BLLLMLAPLCP; // 0x6C0
	::OBKNEEOLOPB* HJLKIJBHDBM; // 0x6C8
	::MoleMole::Config::ConfigHollowChessboard* NGFHKHLKEHD; // 0x6D0
	::MoleMole::UIHollowChessboard3DModelController_CanvasRTHandler* KMDHNHBDJHI; // 0x6D8
	::FAPOJHHEIMH* BOFJMMIBAIM; // 0x6E0
	::DG::Tweening::Tween* HMCPMGEEPLA; // 0x6E8
	::FMNAIOANOLK* IGMKIEKJACF; // 0x6F0
	::MoleMole::Config::ChessboardSwitchEffect* IJCKGANJFFL; // 0x6F8
	::PNJDGHBEMLK_LKEOODFIGLM* PBJKFJGHJFL; // 0x700
	::UnityEngine::Texture2D* JCFAJLOANJM; // 0x708
	::MoleMole::Config::ChessboardSwitchEffect* NLIAIOICHEF; // 0x710
	::Il2CppArray<::UnityEngine::Color>* CAIOPFOMILD; // 0x718
	::UnityEngine::Texture2D* OKHHKMBAKLB; // 0x720
	::MGGDCONEAID NDKODCFDLOC; // 0x728
	::GDKBADFAEAI BOPEDFDKJCC; // 0x72C
	::UnityEngine::Color DFFMBBKCPNO; // 0x730
	::System::Int32 PKFGGMBMMPO; // 0x740
	::System::Int32 HGDNFHGPFJD; // 0x744
	::System::Single DGACLEBIOCK; // 0x748
	::System::Single LAGFBJJBJPC; // 0x74C
	::System::Boolean KCGLHKAAKIH; // 0x750
	::System::Boolean _MODGPNJGPPN_k__BackingField; // 0x751
	::System::Boolean NNKPNPJGCIJ; // 0x752
	::System::Byte _padding0[0x1];
	::PNJDGHBEMLK_KMJGDDDBKCI EAMIGJMABEE; // 0x754
	::System::Int32 KDALMLHBJHL; // 0x758
	::System::Single AJKNKHMHBKM; // 0x75C

	::System::Void _ctor(::MPAGPEPJKKE EIMCJEMLILJ, ::IMBMPPCPHOD FFDHBBHAANK, ::MoleMole::HollowChessboard::HollowCell PFBHBOMPMGD, ::MoleMole::UIHollowChessboard3DModelController* FDDJAKAHAKF, ::FBAMLABJMKF* PAEAACMFIJM, ::FBJGGPABDIH* AIJCDDCEJFC)
	{
		return ((::System::Void(*)(::PVOID, ::MPAGPEPJKKE, ::IMBMPPCPHOD, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::UIHollowChessboard3DModelController*, ::FBAMLABJMKF*, ::FBJGGPABDIH*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK__CTOR_OFFSET))(this, EIMCJEMLILJ, FFDHBBHAANK, PFBHBOMPMGD, FDDJAKAHAKF, PAEAACMFIJM, AIJCDDCEJFC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNJDGHBEMLK__CCTOR_OFFSET))();
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void NHFEANOBKGG(::MCFPPILFGDB* MOLHDICDIAF, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MCFPPILFGDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NHFEANOBKGG_OFFSET))(this, MOLHDICDIAF, NPPMJEIPMFC);
	}

	::System::Void IKPHNCNAHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IKPHNCNAHEK_OFFSET))(this);
	}

	::DPAFGNEEDDO* BOCIOFAKPFO()
	{
		return ((::DPAFGNEEDDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BOCIOFAKPFO_OFFSET))(this);
	}

	::System::Boolean FIFMEHBELPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FIFMEHBELPN_OFFSET))(this);
	}

	::System::Void MNFAPGAMDIA(::MoleMole::Config::ConfigHollowChessboard_Flash* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Flash*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MNFAPGAMDIA_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Boolean NKDJFFMABDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NKDJFFMABDM_OFFSET))(this);
	}

	::System::Void GFCEEEJCKLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GFCEEEJCKLG_OFFSET))(this);
	}

	::System::Collections::IEnumerator* INHFGDHPMHE(::UnityEngine::AnimationCurve* MCDKFDCDJPP, ::System::Single MDPPNMIPDMP, ::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII, ::System::Single DLBFEAOALML)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_INHFGDHPMHE_OFFSET))(this, MCDKFDCDJPP, MDPPNMIPDMP, GIAEPMKCBIB, DOBFFIICAII, DLBFEAOALML);
	}

	::System::Void LDFDLEIFEOF(::DPAFGNEEDDO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DPAFGNEEDDO*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LDFDLEIFEOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HMNIJDLHNKO(::NLBGMAHCJEJ FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::NLBGMAHCJEJ))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HMNIJDLHNKO_OFFSET))(this, FCPCLIJNDLA);
	}

	::ConfigTextureColor* DCLOFFPNJDK()
	{
		return ((::ConfigTextureColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DCLOFFPNJDK_OFFSET))(this);
	}

	::System::Boolean CCNEMGLLLIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CCNEMGLLLIM_OFFSET))(this);
	}

	::System::Single KPMHLCKLKKF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KPMHLCKLKKF_OFFSET))(this);
	}

	::System::Boolean ELJPNNJLDLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ELJPNNJLDLC_OFFSET))(this);
	}

	::System::Void LFLBDIPHGPD(::MCFPPILFGDB* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MCFPPILFGDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LFLBDIPHGPD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void FCOIBLLFOMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FCOIBLLFOMH_OFFSET))(this);
	}

	::System::Boolean DCFCILMPJEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DCFCILMPJEH_OFFSET))(this);
	}

	::System::Void FLNFPDGAFMC(::UnityEngine::Events::UnityAction* OFNONMMINHL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FLNFPDGAFMC_OFFSET))(this, OFNONMMINHL);
	}

	::FAPOJHHEIMH* IEDCDHHPAHB()
	{
		return ((::FAPOJHHEIMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IEDCDHHPAHB_OFFSET))(this);
	}

	::PNJDGHBEMLK_KMJGDDDBKCI MLBOPNBEHCK()
	{
		return ((::PNJDGHBEMLK_KMJGDDDBKCI(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MLBOPNBEHCK_OFFSET))(this);
	}

	::System::Void HIMLNGPPMGA(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* OIEPDGDFNJF, ::System::Action* IHLBALNBGKM, ::System::Boolean JHEHKAEJENE, ::KNILAOHIIIG* MAFLGHBFOAK, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Boolean, ::KNILAOHIIIG*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HIMLNGPPMGA_OFFSET))(this, OIEPDGDFNJF, IHLBALNBGKM, JHEHKAEJENE, MAFLGHBFOAK, IAKPGBCAAKM);
	}

	::System::Void HCECIJLCBKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HCECIJLCBKB_OFFSET))(this);
	}

	::System::Boolean AECJOPDNBJH(::FMNAIOANOLK* HMMMOCJAEOA, ::System::Boolean LBKABJDGONC)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMNAIOANOLK*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_AECJOPDNBJH_OFFSET))(this, HMMMOCJAEOA, LBKABJDGONC);
	}

	::System::Single MDMLMGHKLNB(::System::Single NLBJLICOCHO, ::System::Single KAJPBCPHDOA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MDMLMGHKLNB_OFFSET))(this, NLBJLICOCHO, KAJPBCPHDOA);
	}

	::System::Boolean LEPBOCFGPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LEPBOCFGPOH_OFFSET))(this);
	}

	::PNJDGHBEMLK_LKEOODFIGLM* MECOLINEBEE()
	{
		return ((::PNJDGHBEMLK_LKEOODFIGLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MECOLINEBEE_OFFSET))(this);
	}

	::System::Collections::IEnumerator* JFNKBMKALGA(::MoleMole::Config::ConfigHollowChessboard_PostEffect* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PostEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JFNKBMKALGA_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Single OAMFCDBKPHH(::System::String* MCOHLHMKLIP, ::System::Action* NHIJMEGJIAM, ::System::Action* OBDCEHFACIN, ::System::Single DLBFEAOALML)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OAMFCDBKPHH_OFFSET))(this, MCOHLHMKLIP, NHIJMEGJIAM, OBDCEHFACIN, DLBFEAOALML);
	}

	::System::String* PLMOGAMFKNG(::MoleMole::ScreenSwitchType FGDPOAFBDID)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::ScreenSwitchType))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PLMOGAMFKNG_OFFSET))(this, FGDPOAFBDID);
	}

	::MoleMole::TextureSheetData* BBPNHPBHFKO(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BBPNHPBHFKO_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Boolean NIHFKMKNMGO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NIHFKMKNMGO_OFFSET))(this);
	}

	::System::Void CFJCPHFDALC(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CFJCPHFDALC_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void FFEPIPAALLC(::System::Boolean HFKGEIBDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FFEPIPAALLC_OFFSET))(this, HFKGEIBDCFB);
	}

	::System::Void IAHKHCJNFPB(::UnityEngine::Vector2 FGAAIFGMJBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IAHKHCJNFPB_OFFSET))(this, FGAAIFGMJBH);
	}

	::System::UInt32 ILICEFBNPMB(::System::Int32 FKFEGMOBDOJ, ::System::Boolean PBHBMMGIFMA, ::System::Boolean CNKLEEMBING, ::System::Boolean PGCIJMFCBAE, ::System::String* HKAGGHDEHKF)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ILICEFBNPMB_OFFSET))(this, FKFEGMOBDOJ, PBHBMMGIFMA, CNKLEEMBING, PGCIJMFCBAE, HKAGGHDEHKF);
	}

	::System::Void FDOIFCFIMNE(::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FDOIFCFIMNE_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Int32 CDLGDMENGDJ(::System::Int32 CEADCBAPOOE, ::System::Boolean BLDIEJGLMEG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CDLGDMENGDJ_OFFSET))(this, CEADCBAPOOE, BLDIEJGLMEG);
	}

	::System::Void KHBEJNKDCIE(::System::Single LMECIGGBKLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KHBEJNKDCIE_OFFSET))(this, LMECIGGBKLB);
	}

	::System::Collections::IEnumerator* HNNFKJIJJAO(::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HNNFKJIJJAO_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, CAOPDAMCNCN);
	}

	::System::Collections::IEnumerator* MMKHFCOANOK(::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* OAIDHFOBKKO, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* DFMKILICPFB, ::System::Action* IHLBALNBGKM, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_RiseOrSink*, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MMKHFCOANOK_OFFSET))(this, OAIDHFOBKKO, DFMKILICPFB, IHLBALNBGKM, CAOPDAMCNCN);
	}

	::System::Void PLBBLACMJII(::System::String* OLOMNNBBHPJ, ::System::Action* PEGBHJCNKJG, ::System::Single MDPPNMIPDMP, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PLBBLACMJII_OFFSET))(this, OLOMNNBBHPJ, PEGBHJCNKJG, MDPPNMIPDMP, HAFDIMGJBHC);
	}

	::System::Boolean NGOHELNJGDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGOHELNJGDH_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Color>* FALEALLMMMF()
	{
		return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FALEALLMMMF_OFFSET))(this);
	}

	::System::Boolean NJIIJLCHFCA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NJIIJLCHFCA_OFFSET))(this);
	}

	::System::Void PFJHPFENNOG(::System::Nullable_1<::System::Single> NENHPGBJJNJ, ::PNJDGHBEMLK_AGOFLACGMBO& param_1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::PNJDGHBEMLK_AGOFLACGMBO&))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PFJHPFENNOG_OFFSET))(this, NENHPGBJJNJ, param_1);
	}

	::System::Single ALJMPGBABJM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ALJMPGBABJM_OFFSET))(this);
	}

	::System::Boolean OLEILDNNLLF(::HCOICJANAGG_POJHFHLEJED MHPNHKJPIEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::HCOICJANAGG_POJHFHLEJED))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OLEILDNNLLF_OFFSET))(this, MHPNHKJPIEH);
	}

	::System::Boolean CICBNACECLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CICBNACECLG_OFFSET))(this);
	}

	::System::Void ELMADMFMKIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ELMADMFMKIO_OFFSET))(this);
	}

	::System::Collections::IEnumerator* OFHGOMBCBCF(::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OFHGOMBCBCF_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Boolean CIJJFPEGKJN(::System::Boolean FKGMECIECDM, ::System::Boolean HPINBCPMHJE, ::System::Boolean MMLCHMGPNON)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CIJJFPEGKJN_OFFSET))(this, FKGMECIECDM, HPINBCPMHJE, MMLCHMGPNON);
	}

	::System::Single OMPKIPGCHAI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OMPKIPGCHAI_OFFSET))(this);
	}

	::System::Void JCGIJFMEINC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JCGIJFMEINC_OFFSET))(this);
	}

	::System::Void LCFAFMGJFIH(::MoleMole::Vector2Int JKCDGNFGDAF, ::MoleMole::UIWindowController* NCIMBHDKIJM, ::System::Int32 JJODGJGONHH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::UIWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LCFAFMGJFIH_OFFSET))(this, JKCDGNFGDAF, NCIMBHDKIJM, JJODGJGONHH);
	}

	::System::Void EDBEEDKEDHK(::MoleMole::Config::ConfigHollowChessboard_MoveXY* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_MoveXY*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EDBEEDKEDHK_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, CAOPDAMCNCN);
	}

	::System::Void EFBEDAEMGFL(::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EFBEDAEMGFL_OFFSET))(this, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Void AAAICGHDDNP(::UnityEngine::Vector2 FGAAIFGMJBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_AAAICGHDDNP_OFFSET))(this, FGAAIFGMJBH);
	}

	::MoleMole::TextureSheetData* MJMFLGELPNH(::CEDHMCAELMM* DEKJDEPKKLH)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::CEDHMCAELMM*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MJMFLGELPNH_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Boolean DGIMJPCKJOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DGIMJPCKJOD_OFFSET))(this);
	}

	::DPAFGNEEDDO* AIDFOHICGOL()
	{
		return ((::DPAFGNEEDDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_AIDFOHICGOL_OFFSET))(this);
	}

	::System::Boolean EHLKMMNMCJB(::System::String* CAHPGILCLOJ, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::MoleMole::IVideoPlayer*>* PODDFNDLFFH, ::System::Action* GGFNDOMBKND, ::System::Action* MDNHGALDDKA, ::System::Boolean EGNCJHEHILM, ::System::Int32 MKEBAGONKPJ, ::System::String* HKEDGIJBLAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EHLKMMNMCJB_OFFSET))(this, CAHPGILCLOJ, HAFDIMGJBHC, PODDFNDLFFH, GGFNDOMBKND, MDNHGALDDKA, EGNCJHEHILM, MKEBAGONKPJ, HKEDGIJBLAF);
	}

	::System::Void BKKKPHEDGBK(::MoleMole::Config::ConfigHollowChessboard_CameraEffect* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BKKKPHEDGBK_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM);
	}

	static ::MoleMole::UIHollowChessboard3DModelController* KFPPCMNEOFF()
	{
		return ((::MoleMole::UIHollowChessboard3DModelController*(*)())((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KFPPCMNEOFF_OFFSET))();
	}

	::System::Void KPFGNLIMIFC(::MoleMole::Config::ChessboardSwitchEffect* JMDHBJMNBCP, ::UnityEngine::Events::UnityAction* HPFJGEOAGGK, ::System::Int32 DBHFIJGFPOK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ChessboardSwitchEffect*, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KPFGNLIMIFC_OFFSET))(this, JMDHBJMNBCP, HPFJGEOAGGK, DBHFIJGFPOK);
	}

	::System::Void GDANEJDOHAE(::System::String* OLOMNNBBHPJ, ::System::Boolean HAFDIMGJBHC, ::System::Action* JNCGLPCKKFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GDANEJDOHAE_OFFSET))(this, OLOMNNBBHPJ, HAFDIMGJBHC, JNCGLPCKKFL);
	}

	::System::Void DDPNKIBAENO(::System::Boolean IPACPKEOMKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DDPNKIBAENO_OFFSET))(this, IPACPKEOMKL);
	}

	::OODDDHHGKIJ* KAJCIAACHOK()
	{
		return ((::OODDDHHGKIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KAJCIAACHOK_OFFSET))(this);
	}

	::System::Void AEBKJCHAAGC(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_AEBKJCHAAGC_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Int32 GMKNPHNCEPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GMKNPHNCEPJ_OFFSET))(this);
	}

	::System::Void IIEHMMGEFCN(::MoleMole::Config::ConfigHollowChessboard_PostEffect* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PostEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IIEHMMGEFCN_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Void KOJKAPBBIPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KOJKAPBBIPN_OFFSET))(this);
	}

	::System::Void ALIPDJLPEGP(::System::Int32 AKGGKGEPJLP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ALIPDJLPEGP_OFFSET))(this, AKGGKGEPJLP);
	}

	::System::Void NMLCONGICPL(::System::Boolean HFMHOELKCAJ, ::UnityEngine::Color AEHBHOHCLNA, ::UnityEngine::Texture2D* OHNGFMKEKBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NMLCONGICPL_OFFSET))(this, HFMHOELKCAJ, AEHBHOHCLNA, OHNGFMKEKBP);
	}

	::System::Void DAFANLIIEBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DAFANLIIEBI_OFFSET))(this);
	}

	::System::Void BFLMCPLAOLE(::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_RiseOrSink*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BFLMCPLAOLE_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, CAOPDAMCNCN);
	}

	::System::Boolean OKHKMPIKKBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OKHKMPIKKBH_OFFSET))(this);
	}

	::System::Boolean FHKEPEAJLDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FHKEPEAJLDM_OFFSET))(this);
	}

	::System::Void CDPPOKOGPKB(::MoleMole::Config::ConfigHollowChessboard_Rotate* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Rotate*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CDPPOKOGPKB_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Void ALAEAMPPNCC(::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ALAEAMPPNCC_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, CAOPDAMCNCN);
	}

	::System::Boolean PIJDOJAKFGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PIJDOJAKFGK_OFFSET))(this);
	}

	::System::Void EIPAICJCDBL(::UnityEngine::Events::UnityAction* LDBDPDOEGEP, ::System::Int32 DBHFIJGFPOK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EIPAICJCDBL_OFFSET))(this, LDBDPDOEGEP, DBHFIJGFPOK);
	}

	::System::Void JMAAEDKJNID(::System::Single IIPNONDLCMO, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JMAAEDKJNID_OFFSET))(this, IIPNONDLCMO, NPPMJEIPMFC);
	}

	::System::Void INIJIKIGAHA(::System::Single LDHMNIFDAHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_INIJIKIGAHA_OFFSET))(this, LDHMNIFDAHG);
	}

	::System::Void DHNLDMLJBPH(::System::Boolean MEDJJLEGDEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DHNLDMLJBPH_OFFSET))(this, MEDJJLEGDEF);
	}

	::System::UInt32 ILICEFBNPMB_1(::CEDHMCAELMM* DEKJDEPKKLH)
	{
		return ((::System::UInt32(*)(::PVOID, ::CEDHMCAELMM*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ILICEFBNPMB_1_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void ELOGJBKCDKF(::MoleMole::Config::ConfigHollowChessboard_Move* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Move*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ELOGJBKCDKF_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::UnityEngine::Color JCCHIBBODPI()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JCCHIBBODPI_OFFSET))(this);
	}

	::System::Void FLKJAEGCEHL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FLKJAEGCEHL_OFFSET))(this, EGEGIMGMJHN);
	}

	::MGGDCONEAID IFBNHAPPGLI()
	{
		return ((::MGGDCONEAID(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFBNHAPPGLI_OFFSET))(this);
	}

	::System::Collections::IEnumerator* KFBCFFHJCJE(::MoleMole::Config::ConfigHollowChessboard_CameraShake* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KFBCFFHJCJE_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM);
	}

	::System::Boolean KIDFDCJGNNE(::System::String* CAHPGILCLOJ, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::MoleMole::IVideoPlayer*>* CDIHEFKFLIP, ::System::Action* GGFNDOMBKND, ::System::Action* MDNHGALDDKA, ::System::Boolean EGNCJHEHILM, ::System::String* HKEDGIJBLAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KIDFDCJGNNE_OFFSET))(this, CAHPGILCLOJ, HAFDIMGJBHC, CDIHEFKFLIP, GGFNDOMBKND, MDNHGALDDKA, EGNCJHEHILM, HKEDGIJBLAF);
	}

	::System::Void CBKEODJNEAA(::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>* HGHJCKJKLDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CBKEODJNEAA_OFFSET))(this, HGHJCKJKLDI);
	}

	::System::Collections::IEnumerator* NPBIFDKOHCL(::MoleMole::Config::ConfigHollowChessboard_CameraEffect* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NPBIFDKOHCL_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM);
	}

	::System::Boolean MPCJAMFHMMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MPCJAMFHMMG_OFFSET))(this);
	}

	::System::Void PLDMHECLOML(::UnityEngine::Vector3 LPOIBLLILAA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PLDMHECLOML_OFFSET))(this, LPOIBLLILAA);
	}

	::System::Void MGOLDOEJONM(::System::Boolean HHLLKGGIKEA, ::System::Boolean LICKJFLDGMM, ::System::Boolean IFEGEFOJBFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MGOLDOEJONM_OFFSET))(this, HHLLKGGIKEA, LICKJFLDGMM, IFEGEFOJBFB);
	}

	::System::Void CABEHLJNDNL(::System::Single OBLHIBJPOME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CABEHLJNDNL_OFFSET))(this, OBLHIBJPOME);
	}

	::System::Void JHHDLBDDDGG(::System::Single IECOJPMPJMP, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JHHDLBDDDGG_OFFSET))(this, IECOJPMPJMP, FBILHHBPEHD);
	}

	::System::Void EJBMKKLOPHD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EJBMKKLOPHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HFIGGFDBOCL(::DPAFGNEEDDO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DPAFGNEEDDO*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HFIGGFDBOCL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FGPNAKKFGLA(::FMNAIOANOLK* HMMMOCJAEOA, ::HCOICJANAGG_POJHFHLEJED MHPNHKJPIEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMNAIOANOLK*, ::HCOICJANAGG_POJHFHLEJED))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FGPNAKKFGLA_OFFSET))(this, HMMMOCJAEOA, MHPNHKJPIEH);
	}

	::System::Void JICFJJAOPGK(::MCFPPILFGDB* MOLHDICDIAF, ::ANAAPIFINJE* HNLNMFPJBPE)
	{
		return ((::System::Void(*)(::PVOID, ::MCFPPILFGDB*, ::ANAAPIFINJE*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JICFJJAOPGK_OFFSET))(this, MOLHDICDIAF, HNLNMFPJBPE);
	}

	::System::Void IAODDPCGNGF(::MoleMole::ConfigAnimationCurveGroup* OOPFLKALJLH, ::UnityEngine::Vector3 DJNAMCOLCOF, ::UnityEngine::Vector3 DOPIFAIDNBK, ::System::Action_1<::MoleMole::UICameraAtom>* JEKNKEINHAL, ::System::Single FNGGJOBOFOE, ::System::Action* NHIJMEGJIAM, ::System::Action* GJECHMIMNMJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::UICameraAtom>*, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IAODDPCGNGF_OFFSET))(this, OOPFLKALJLH, DJNAMCOLCOF, DOPIFAIDNBK, JEKNKEINHAL, FNGGJOBOFOE, NHIJMEGJIAM, GJECHMIMNMJ);
	}

	::System::Boolean BCIEFAKMFDF(::Share::GridDir EECMDPPHLAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BCIEFAKMFDF_OFFSET))(this, EECMDPPHLAM);
	}

	::System::Void PCGFKMFNPMD(::MoleMole::Config::ConfigHollowChessboard_CameraShake* OAIDHFOBKKO, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PCGFKMFNPMD_OFFSET))(this, OAIDHFOBKKO, IHLBALNBGKM);
	}

	::System::Boolean HOEJJFBIFJD(::Share::GridDir EECMDPPHLAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HOEJJFBIFJD_OFFSET))(this, EECMDPPHLAM);
	}

	::System::Boolean FMANCDEEJMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FMANCDEEJMG_OFFSET))(this);
	}

	::System::Void MJFKFDBKMAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MJFKFDBKMAH_OFFSET))(this);
	}

	::System::Void OGCJNILPJCH(::MoleMole::UIWindowController* NCIMBHDKIJM, ::MoleMole::Vector2Int JKCDGNFGDAF, ::GMCPAFDJNLH* BOGHDABFGLF, ::MoleMole::UIControllerContextBase* GJAEGHFECOD, ::System::Int32 DBHFIJGFPOK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::Vector2Int, ::GMCPAFDJNLH*, ::MoleMole::UIControllerContextBase*, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGCJNILPJCH_OFFSET))(this, NCIMBHDKIJM, JKCDGNFGDAF, BOGHDABFGLF, GJAEGHFECOD, DBHFIJGFPOK);
	}

	::System::Void AIOHJOBGIGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_AIOHJOBGIGA_OFFSET))(this);
	}

	::System::Boolean AADMHKHHBOA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_AADMHKHHBOA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask LDMADPMABAG(::MoleMole::IVideoPlayer* NEPAOLIPEFN, ::System::Action* DMPEOJCCCLO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LDMADPMABAG_OFFSET))(this, NEPAOLIPEFN, DMPEOJCCCLO);
	}

	::System::Boolean IPIELPLBIPN(::System::Boolean FKGMECIECDM, ::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IPIELPLBIPN_OFFSET))(this, FKGMECIECDM, HPINBCPMHJE);
	}

	::System::Void BHNHDDLGCOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BHNHDDLGCOG_OFFSET))(this);
	}

	::System::Void FFEIPOJPOGN(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* OIEPDGDFNJF, ::System::Action* IHLBALNBGKM, ::System::Boolean KIDADCKFHLF, ::System::Boolean AGEKJHHFGCB, ::MoleMole::HollowChessboard::GeometryHeightType BCPIPCIIIMA, ::System::Boolean JHEHKAEJENE, ::KNILAOHIIIG* MAFLGHBFOAK, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Boolean, ::KNILAOHIIIG*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FFEIPOJPOGN_OFFSET))(this, OIEPDGDFNJF, IHLBALNBGKM, KIDADCKFHLF, AGEKJHHFGCB, BCPIPCIIIMA, JHEHKAEJENE, MAFLGHBFOAK, IAKPGBCAAKM);
	}

	::System::Void BDDMHMPNMNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BDDMHMPNMNH_OFFSET))(this);
	}

	::System::Void JHJBAILDBPL(::UnityEngine::Vector3 LPOIBLLILAA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JHJBAILDBPL_OFFSET))(this, LPOIBLLILAA);
	}

	::System::Void OFPBCFBOBCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OFPBCFBOBCJ_OFFSET))(this);
	}

	::System::Void KCAJEHIKEGO(::PNJDGHBEMLK_KMJGDDDBKCI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK_KMJGDDDBKCI))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KCAJEHIKEGO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PHNGFMJNEOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PHNGFMJNEOL_OFFSET))(this);
	}

	::System::Single HIFONDLGFIF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HIFONDLGFIF_OFFSET))(this);
	}

	::System::Int32 HGALFJHAMKC(::System::Int32 CNBFACPEAKN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_HGALFJHAMKC_OFFSET))(this, CNBFACPEAKN);
	}

	::System::Void EDMDOMGKPJB(::DPAFGNEEDDO*& GLLIDENNAAL, ::UnityEngine::AnimationCurve* MCDKFDCDJPP, ::System::Single MDPPNMIPDMP, ::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::DPAFGNEEDDO*&, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EDMDOMGKPJB_OFFSET))(this, GLLIDENNAAL, MCDKFDCDJPP, MDPPNMIPDMP, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void CODPMCKNGFE(::System::Boolean HAFDIMGJBHC, ::MoleMole::UIHollowChessPieceParticle_TransformType MMGCIBDFNFO, ::System::Nullable_1<::Foundation::Unreal::FTransform> HOCNHLIONBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CODPMCKNGFE_OFFSET))(this, HAFDIMGJBHC, MMGCIBDFNFO, HOCNHLIONBM);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void EEGDNMIFMEE(::UnityEngine::Events::UnityAction* CLNJEFHMAFL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EEGDNMIFMEE_OFFSET))(this, CLNJEFHMAFL);
	}

	static ::System::Void ECCKIOGBGDK(::MoleMole::UIHollowChessboard3DModelController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowChessboard3DModelController*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ECCKIOGBGDK_OFFSET))(EGEGIMGMJHN);
	}

	::FAPOJHHEIMH* LCBMJACCIKO()
	{
		return ((::FAPOJHHEIMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LCBMJACCIKO_OFFSET))(this);
	}

	::System::Boolean PLBBLACMJII_1(::System::Single FOOBONOEPGD, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PLBBLACMJII_1_OFFSET))(this, FOOBONOEPGD, IHLBALNBGKM);
	}

	::System::Void CFKDBCPEJMI(::System::UInt32 FGGMHBPFHAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CFKDBCPEJMI_OFFSET))(this, FGGMHBPFHAO);
	}

	::UnityEngine::Color& LHIPPLJMDJP()
	{
		return ((::UnityEngine::Color&(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LHIPPLJMDJP_OFFSET))(this);
	}

	::System::Collections::IEnumerator* OOGBNMMLDPK(::System::Single JOFGIANGHMK, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OOGBNMMLDPK_OFFSET))(this, JOFGIANGHMK, GJBHEJGENMI);
	}

	::System::Void NOOHANLBGFF(::System::String* FCBDPCEKHOM, ::System::Boolean DOBFFIICAII, ::System::Single EEDHNKDNLCL, ::System::Single EODDDEDPMHA, ::System::Int32 FDMEJOLFMLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NOOHANLBGFF_OFFSET))(this, FCBDPCEKHOM, DOBFFIICAII, EEDHNKDNLCL, EODDDEDPMHA, FDMEJOLFMLF);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KIAKHJFNCHH(::System::Action* IHLBALNBGKM, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KIAKHJFNCHH_OFFSET))(this, IHLBALNBGKM, IAKPGBCAAKM);
	}

	::System::Boolean FLBDONFENPD(::MoleMole::HollowChessboard::HollowCell KDEHMPGOCEP, ::MoleMole::HollowChessboard::HollowCell PADJNMGMGHO, ::MoleMole::HollowChessboard::HollowCell GIAEPMKCBIB, ::MoleMole::HollowChessboard::HollowCell DOBFFIICAII, ::System::Boolean MMLCHMGPNON)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_FLBDONFENPD_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, GIAEPMKCBIB, DOBFFIICAII, MMLCHMGPNON);
	}

	::MoleMole::HollowChessboard::HollowCell MCPLENOAJKP()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MCPLENOAJKP_OFFSET))(this);
	}

	::System::Boolean LHBOCCPAGDN(::System::String* CAGFMLEKFGG, ::System::Boolean FBILHHBPEHD, ::System::Boolean HAFDIMGJBHC, ::MoleMole::UIHollowChessPieceParticle_TransformType MMGCIBDFNFO, ::System::Nullable_1<::Foundation::Unreal::FTransform> HOCNHLIONBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LHBOCCPAGDN_OFFSET))(this, CAGFMLEKFGG, FBILHHBPEHD, HAFDIMGJBHC, MMGCIBDFNFO, HOCNHLIONBM);
	}

	::System::Void PLBBLACMJII_2(::CEDHMCAELMM* DEKJDEPKKLH, ::System::Action* JNCGLPCKKFL, ::System::Action* PEGBHJCNKJG, ::System::Action* MDNHGALDDKA, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::CEDHMCAELMM*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PLBBLACMJII_2_OFFSET))(this, DEKJDEPKKLH, JNCGLPCKKFL, PEGBHJCNKJG, MDNHGALDDKA, MDPPNMIPDMP);
	}

	::System::Int32 BCADGNKLNBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_BCADGNKLNBG_OFFSET))(this);
	}
};
