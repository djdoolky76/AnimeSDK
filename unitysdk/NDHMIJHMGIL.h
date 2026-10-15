#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJLGEOKIJKH.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/LMGECGDAPEN.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleEventType.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleNetWorkMsg.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleEmojiReason.h"
#include "unitysdk/RPG/GameCore/MarbleTargetType.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KNOGPMGGDFL.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class AMBAFEMGGLD;
class BJEIMIBGPIG;
class CJOCEJLPADK;
class DCECJENGJLD;
class DFDBFKBNGIH;
class DFGDEHAHLHC;
class DLEIPLCFMHK;
class EFJKLLCCABF;
class EHEHDOKBFAL;
class ENNJFOGNKAL;
class EOMDNNNKFKE;
class FDPALAEIHPB;
class FEEGOKGAJEH;
class FPJKIGOKMJC;
class GFFDMPOCAIP;
class GFFGIMJINFH;
class GFHCKBHCNDF;
class GIPCDLCCMKA;
class GKCKIOJHFIL;
class HIDPFIAALLB;
class HJNDPHEDAGM;
class IAJLHKIHBFB;
class IMDNFIKKJHK;
class JLKJMEMOLFD;
class KMGDCCNNGEE;
class LDNMAIIKMGD;
class LOKPJGLJIIH;
class MBDOBECHOJA;
class MCHAMBDHPEN;
class MNLLCNFNKKP;
class MODNJLMIFJD;
class NAGIOAKDDMJ;
class OELHAMANGBN;
class OOBKAONOBAK;
class PIMNGBAMMAM;
class PJAAKKLBCII;
class PLAGFACLPDL;
class PLHAEBMKIFA;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MarbleHexInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityMarble { class IMarbleManager; }
namespace RPG::Client::PetMarble { class PetMarbleTeamEditController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GlobalMarbleEffectConfig; }
namespace RPG::GameCore { class MarbleGameConfig; }
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Random; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NDHMIJHMGIL_AAHAHBJJADH_OFFSET UNITYSDK_OFFSET(0xBB35580)
#define NDHMIJHMGIL_AAIKPNEJADC_OFFSET UNITYSDK_OFFSET(0xBB32330)
#define NDHMIJHMGIL_AGODGPDPJCI_OFFSET UNITYSDK_OFFSET(0xBB449F0)
#define NDHMIJHMGIL_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xBB3BCF0)
#define NDHMIJHMGIL_ANAHNOOINLC_OFFSET UNITYSDK_OFFSET(0xBB44030)
#define NDHMIJHMGIL_AOCNOLPBOFF_OFFSET UNITYSDK_OFFSET(0xBB3C110)
#define NDHMIJHMGIL_APCLOEHCKFD_OFFSET UNITYSDK_OFFSET(0xBB42730)
#define NDHMIJHMGIL_BBEOBLJJEJP_OFFSET UNITYSDK_OFFSET(0xBB42F40)
#define NDHMIJHMGIL_BBMDKBOJLPA_OFFSET UNITYSDK_OFFSET(0xBB46300)
#define NDHMIJHMGIL_BBNNBPFEKBM_OFFSET UNITYSDK_OFFSET(0xBB46FF0)
#define NDHMIJHMGIL_BCAECPPJICK_OFFSET UNITYSDK_OFFSET(0xBB41900)
#define NDHMIJHMGIL_BCEGALFMPKN_OFFSET UNITYSDK_OFFSET(0xBB42DA0)
#define NDHMIJHMGIL_BFNGCHMJCMC_OFFSET UNITYSDK_OFFSET(0xBB32270)
#define NDHMIJHMGIL_BKGKLGKDGIB_OFFSET UNITYSDK_OFFSET(0xBB37660)
#define NDHMIJHMGIL_BLCKKMHLMOA_OFFSET UNITYSDK_OFFSET(0xBB2FCB0)
#define NDHMIJHMGIL_BLMLBHNNGPB_OFFSET UNITYSDK_OFFSET(0xBB44880)
#define NDHMIJHMGIL_BNEOBKMJMMO_OFFSET UNITYSDK_OFFSET(0xBB36560)
#define NDHMIJHMGIL_BNJGJIMEFIG_OFFSET UNITYSDK_OFFSET(0xBB2E5D0)
#define NDHMIJHMGIL_BPHLIJDKKGO_OFFSET UNITYSDK_OFFSET(0xBB43BB0)
#define NDHMIJHMGIL_BPNDNCONPBA_OFFSET UNITYSDK_OFFSET(0xBB43500)
#define NDHMIJHMGIL_CADHPBGECJF_OFFSET UNITYSDK_OFFSET(0xBB460A0)
#define NDHMIJHMGIL_CCBMALMLOIB_OFFSET UNITYSDK_OFFSET(0xBB3F4F0)
#define NDHMIJHMGIL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB48D20)
#define NDHMIJHMGIL_CDKABFNGIGP_OFFSET UNITYSDK_OFFSET(0xBB41B60)
#define NDHMIJHMGIL_CECALJEOPFJ_OFFSET UNITYSDK_OFFSET(0xBB44E20)
#define NDHMIJHMGIL_CEEFNJBEJNL_OFFSET UNITYSDK_OFFSET(0xBB45860)
#define NDHMIJHMGIL_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0xBB42180)
#define NDHMIJHMGIL_CGFECDKOBMN_OFFSET UNITYSDK_OFFSET(0xBB44BE0)
#define NDHMIJHMGIL_CGMJNHBHJOB_OFFSET UNITYSDK_OFFSET(0xBB39070)
#define NDHMIJHMGIL_CIJINKMILAA_OFFSET UNITYSDK_OFFSET(0xBB3FA20)
#define NDHMIJHMGIL_CKNLELFINDN_OFFSET UNITYSDK_OFFSET(0xBB45DC0)
#define NDHMIJHMGIL_CNIHFNIJGDG_OFFSET UNITYSDK_OFFSET(0xBB3B210)
#define NDHMIJHMGIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB48A10)
#define NDHMIJHMGIL_DBEPOBHFKHO_OFFSET UNITYSDK_OFFSET(0xBB3C4C0)
#define NDHMIJHMGIL_DCELNFKLKKC_OFFSET UNITYSDK_OFFSET(0xBB39E80)
#define NDHMIJHMGIL_DDAKHLODOFK_OFFSET UNITYSDK_OFFSET(0xBB382C0)
#define NDHMIJHMGIL_DELIBNAHFJJ_OFFSET UNITYSDK_OFFSET(0xBB30250)
#define NDHMIJHMGIL_DFJJGFOJJBF_OFFSET UNITYSDK_OFFSET(0xBB456E0)
#define NDHMIJHMGIL_DJCBBEJKLHI_OFFSET UNITYSDK_OFFSET(0xBB43670)
#define NDHMIJHMGIL_DKMONHLCEAP_OFFSET UNITYSDK_OFFSET(0xBB44DD0)
#define NDHMIJHMGIL_ECICBKAOBIK_OFFSET UNITYSDK_OFFSET(0xBB2FBA0)
#define NDHMIJHMGIL_EDGLEMPCNKC_OFFSET UNITYSDK_OFFSET(0xBB40650)
#define NDHMIJHMGIL_EFOMOFBLAIK_OFFSET UNITYSDK_OFFSET(0xBB2D740)
#define NDHMIJHMGIL_EGAJCOLMJCF_OFFSET UNITYSDK_OFFSET(0xBB3AD90)
#define NDHMIJHMGIL_EGHDBIPPJEL_OFFSET UNITYSDK_OFFSET(0xBB3A910)
#define NDHMIJHMGIL_EGJAFNHCBLP_OFFSET UNITYSDK_OFFSET(0xBB2F050)
#define NDHMIJHMGIL_EHOCABNGHMC_OFFSET UNITYSDK_OFFSET(0xBB3D700)
#define NDHMIJHMGIL_EIDOOFGLOBE_OFFSET UNITYSDK_OFFSET(0xBB32080)
#define NDHMIJHMGIL_EIGNPHBBLKO_OFFSET UNITYSDK_OFFSET(0xBB474A0)
#define NDHMIJHMGIL_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0xBB30830)
#define NDHMIJHMGIL_ELABDMKNFPJ_OFFSET UNITYSDK_OFFSET(0xBB2D540)
#define NDHMIJHMGIL_ELHKELPEFCJ_OFFSET UNITYSDK_OFFSET(0xBB48850)
#define NDHMIJHMGIL_ELIADBBFGEC_OFFSET UNITYSDK_OFFSET(0xBB30ED0)
#define NDHMIJHMGIL_ELKCMEBMMKL_OFFSET UNITYSDK_OFFSET(0xBB44950)
#define NDHMIJHMGIL_ELOFMBPHKML_OFFSET UNITYSDK_OFFSET(0xBB2B460)
#define NDHMIJHMGIL_EMOPAEOAPAP_OFFSET UNITYSDK_OFFSET(0xBB46740)
#define NDHMIJHMGIL_ENOGEHBAEEK_OFFSET UNITYSDK_OFFSET(0xBB31810)
#define NDHMIJHMGIL_EOEFKHDGBNN_OFFSET UNITYSDK_OFFSET(0xBB32030)
#define NDHMIJHMGIL_EOILAACFCPN_OFFSET UNITYSDK_OFFSET(0xBB485F0)
#define NDHMIJHMGIL_FFFONHBJIMK_OFFSET UNITYSDK_OFFSET(0xBB32380)
#define NDHMIJHMGIL_FHOCFMOCLBK_OFFSET UNITYSDK_OFFSET(0xBB2EE30)
#define NDHMIJHMGIL_FJFMAMFCNNA_OFFSET UNITYSDK_OFFSET(0xBB45C30)
#define NDHMIJHMGIL_FLIPLAKEMLH_OFFSET UNITYSDK_OFFSET(0xBB3D1A0)
#define NDHMIJHMGIL_GBNEELEPMIL_OFFSET UNITYSDK_OFFSET(0xBB400C0)
#define NDHMIJHMGIL_GCCBMLCHPHC_OFFSET UNITYSDK_OFFSET(0xBB37B80)
#define NDHMIJHMGIL_GDGDBAHONAD_OFFSET UNITYSDK_OFFSET(0xBB42220)
#define NDHMIJHMGIL_GDOMDPONNHG_OFFSET UNITYSDK_OFFSET(0xBB365C0)
#define NDHMIJHMGIL_GDPGJENMAPO_OFFSET UNITYSDK_OFFSET(0xBB486D0)
#define NDHMIJHMGIL_GEKGNEMGMEH_OFFSET UNITYSDK_OFFSET(0xBB44900)
#define NDHMIJHMGIL_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xBB45810)
#define NDHMIJHMGIL_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBB48860)
#define NDHMIJHMGIL_GFCGKDLPFEE_OFFSET UNITYSDK_OFFSET(0xBB2C010)
#define NDHMIJHMGIL_GFFOFMBGIEA_OFFSET UNITYSDK_OFFSET(0xBB42800)
#define NDHMIJHMGIL_GFMENAOHIGB_OFFSET UNITYSDK_OFFSET(0xBB46410)
#define NDHMIJHMGIL_GGIGMJKOION_OFFSET UNITYSDK_OFFSET(0xBB41F10)
#define NDHMIJHMGIL_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xBB41470)
#define NDHMIJHMGIL_GHPBHPALPBJ_OFFSET UNITYSDK_OFFSET(0xBB2F2A0)
#define NDHMIJHMGIL_GIAKKINGHOG_OFFSET UNITYSDK_OFFSET(0xBB2E330)
#define NDHMIJHMGIL_GIPCECDMEFE_OFFSET UNITYSDK_OFFSET(0xBB35E00)
#define NDHMIJHMGIL_GLIPEKOJBPP_OFFSET UNITYSDK_OFFSET(0xBB2DD00)
#define NDHMIJHMGIL_GMOAEEPAALM_OFFSET UNITYSDK_OFFSET(0xBB46C40)
#define NDHMIJHMGIL_GPAIMMHMGFL_OFFSET UNITYSDK_OFFSET(0xBB3A490)
#define NDHMIJHMGIL_GPGFPCDFHDE_OFFSET UNITYSDK_OFFSET(0xBB2F0E0)
#define NDHMIJHMGIL_GPJGKMLHFDN_OFFSET UNITYSDK_OFFSET(0xBB417B0)
#define NDHMIJHMGIL_HAIBBMGHNLA_OFFSET UNITYSDK_OFFSET(0xBB46BC0)
#define NDHMIJHMGIL_HBCPAEFKFKL_OFFSET UNITYSDK_OFFSET(0xBB45FB0)
#define NDHMIJHMGIL_HBLCMNHAMEL_OFFSET UNITYSDK_OFFSET(0xBB36FF0)
#define NDHMIJHMGIL_HBLOKGLFDEC_OFFSET UNITYSDK_OFFSET(0xBB3BB70)
#define NDHMIJHMGIL_HCGLHGCPOLI_OFFSET UNITYSDK_OFFSET(0xBB3BC50)
#define NDHMIJHMGIL_HDDIJJLLCBK_OFFSET UNITYSDK_OFFSET(0xBB42930)
#define NDHMIJHMGIL_HDMEGPOCJFH_OFFSET UNITYSDK_OFFSET(0xBB306D0)
#define NDHMIJHMGIL_HEBGIMNNPKI_OFFSET UNITYSDK_OFFSET(0xBB3B390)
#define NDHMIJHMGIL_HHODLPJNPOB_OFFSET UNITYSDK_OFFSET(0xBB3B440)
#define NDHMIJHMGIL_HKAPLELMHIF_OFFSET UNITYSDK_OFFSET(0xBB46050)
#define NDHMIJHMGIL_HKHHIFBKDJN_OFFSET UNITYSDK_OFFSET(0xBB2C1B0)
#define NDHMIJHMGIL_HKJECEOBJLA_OFFSET UNITYSDK_OFFSET(0xBB444D0)
#define NDHMIJHMGIL_HMLOFKGEAFO_OFFSET UNITYSDK_OFFSET(0xBB47F70)
#define NDHMIJHMGIL_HOGHOBDPFHO_OFFSET UNITYSDK_OFFSET(0xBB2B540)
#define NDHMIJHMGIL_HPPHBAHNKDM_OFFSET UNITYSDK_OFFSET(0xBB46D50)
#define NDHMIJHMGIL_IBAKIEMEJLH_OFFSET UNITYSDK_OFFSET(0xBB41FC0)
#define NDHMIJHMGIL_IDBLPKHMMAC_OFFSET UNITYSDK_OFFSET(0xBB3D1E0)
#define NDHMIJHMGIL_IEJDBIHNHKF_OFFSET UNITYSDK_OFFSET(0xBB48880)
#define NDHMIJHMGIL_IIBBIPHALLN_OFFSET UNITYSDK_OFFSET(0xBB48270)
#define NDHMIJHMGIL_IIBHLJHOPDP_OFFSET UNITYSDK_OFFSET(0xBB3A0D0)
#define NDHMIJHMGIL_IIELGCCDEHG_OFFSET UNITYSDK_OFFSET(0xBB3F7B0)
#define NDHMIJHMGIL_IJHDPACDLGE_OFFSET UNITYSDK_OFFSET(0xBB44EB0)
#define NDHMIJHMGIL_IKNGLGHOFAG_OFFSET UNITYSDK_OFFSET(0xBB42620)
#define NDHMIJHMGIL_IMJKCPCMDAO_OFFSET UNITYSDK_OFFSET(0xBB31770)
#define NDHMIJHMGIL_INAANJLPKMO_OFFSET UNITYSDK_OFFSET(0xBB43860)
#define NDHMIJHMGIL_IOMEGDOMLEB_OFFSET UNITYSDK_OFFSET(0xBB3CC30)
#define NDHMIJHMGIL_IPFOBIHOLKO_OFFSET UNITYSDK_OFFSET(0xBB47060)
#define NDHMIJHMGIL_JBFKLNDDIKC_OFFSET UNITYSDK_OFFSET(0xBB3EF30)
#define NDHMIJHMGIL_JBPIMINAAOE_OFFSET UNITYSDK_OFFSET(0xBB46000)
#define NDHMIJHMGIL_JCLKPHLGJKL_OFFSET UNITYSDK_OFFSET(0xBB2FA20)
#define NDHMIJHMGIL_JEAJJPKAEJG_OFFSET UNITYSDK_OFFSET(0xBB2B4B0)
#define NDHMIJHMGIL_JFACGMBKCCN_OFFSET UNITYSDK_OFFSET(0xBB3F8E0)
#define NDHMIJHMGIL_JFFPHCIAOKM_OFFSET UNITYSDK_OFFSET(0xBB44CB0)
#define NDHMIJHMGIL_JGCCACCMHCM_OFFSET UNITYSDK_OFFSET(0xBB40060)
#define NDHMIJHMGIL_JIIPLJACJFP_OFFSET UNITYSDK_OFFSET(0xBB3EE20)
#define NDHMIJHMGIL_JKEHJPJCKEF_OFFSET UNITYSDK_OFFSET(0xBB3B3E0)
#define NDHMIJHMGIL_JNMDPEECEJE_OFFSET UNITYSDK_OFFSET(0xBB439E0)
#define NDHMIJHMGIL_JOABNKOJFPO_OFFSET UNITYSDK_OFFSET(0xBB3D280)
#define NDHMIJHMGIL_JOCHHNNFDFC_OFFSET UNITYSDK_OFFSET(0xBB31A90)
#define NDHMIJHMGIL_JPINACHBAJL_OFFSET UNITYSDK_OFFSET(0xBB3CBA0)
#define NDHMIJHMGIL_KABMPEPKGFP_OFFSET UNITYSDK_OFFSET(0xBB467B0)
#define NDHMIJHMGIL_KAFDAMMKAGL_OFFSET UNITYSDK_OFFSET(0xBB30C70)
#define NDHMIJHMGIL_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xBB3EE70)
#define NDHMIJHMGIL_KBPEKFIACAP_OFFSET UNITYSDK_OFFSET(0xBB2DDE0)
#define NDHMIJHMGIL_KCKIDLDLGMC_OFFSET UNITYSDK_OFFSET(0xBB406F0)
#define NDHMIJHMGIL_KCLNNLDHCKJ_OFFSET UNITYSDK_OFFSET(0xBB432D0)
#define NDHMIJHMGIL_KDKDANLJPIJ_OFFSET UNITYSDK_OFFSET(0xBB44720)
#define NDHMIJHMGIL_KHCBKDIPKAJ_OFFSET UNITYSDK_OFFSET(0xBB312D0)
#define NDHMIJHMGIL_KIDPOHBMHFC_OFFSET UNITYSDK_OFFSET(0xBB2BDF0)
#define NDHMIJHMGIL_KJDOJNJDDJN_OFFSET UNITYSDK_OFFSET(0xBB46CF0)
#define NDHMIJHMGIL_KNBJFGPACDH_OFFSET UNITYSDK_OFFSET(0xBB473C0)
#define NDHMIJHMGIL_LACOFEOALEN_1_OFFSET UNITYSDK_OFFSET(0xBB45B30)
#define NDHMIJHMGIL_LACOFEOALEN_OFFSET UNITYSDK_OFFSET(0xBB45A10)
#define NDHMIJHMGIL_LALKJOMGCNN_OFFSET UNITYSDK_OFFSET(0xBB30150)
#define NDHMIJHMGIL_LBBPMNDEMOK_OFFSET UNITYSDK_OFFSET(0xBB3BA60)
#define NDHMIJHMGIL_LCONKOKBGNG_OFFSET UNITYSDK_OFFSET(0xBB47730)
#define NDHMIJHMGIL_LDNBANDHCJP_OFFSET UNITYSDK_OFFSET(0xBB3D230)
#define NDHMIJHMGIL_LFLPKNJHLOF_OFFSET UNITYSDK_OFFSET(0xBB2E210)
#define NDHMIJHMGIL_LMHOBACMBAE_OFFSET UNITYSDK_OFFSET(0xBB42CA0)
#define NDHMIJHMGIL_LNFHHPGMILH_OFFSET UNITYSDK_OFFSET(0xBB40220)
#define NDHMIJHMGIL_LNOIIBAFADK_OFFSET UNITYSDK_OFFSET(0xBB30F80)
#define NDHMIJHMGIL_LPLNCDDAGNI_OFFSET UNITYSDK_OFFSET(0xBB2B920)
#define NDHMIJHMGIL_LPOKPGENOPB_OFFSET UNITYSDK_OFFSET(0xBB2EF90)
#define NDHMIJHMGIL_MFEDKGHADMD_OFFSET UNITYSDK_OFFSET(0xBB2FF50)
#define NDHMIJHMGIL_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xBB3D940)
#define NDHMIJHMGIL_MKCDCOEECNC_OFFSET UNITYSDK_OFFSET(0xBB40580)
#define NDHMIJHMGIL_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0xBB3B2C0)
#define NDHMIJHMGIL_MNHJCAPJOKN_OFFSET UNITYSDK_OFFSET(0xBB43340)
#define NDHMIJHMGIL_MPJLHNPFCCP_OFFSET UNITYSDK_OFFSET(0xBB43130)
#define NDHMIJHMGIL_NBJDJNEOEJB_OFFSET UNITYSDK_OFFSET(0xBB47610)
#define NDHMIJHMGIL_NCJCMMPEMFP_OFFSET UNITYSDK_OFFSET(0xBB3F000)
#define NDHMIJHMGIL_NGAMMDPGIGN_OFFSET UNITYSDK_OFFSET(0xBB2E090)
#define NDHMIJHMGIL_NHGDBHDIIAI_OFFSET UNITYSDK_OFFSET(0xBB34DE0)
#define NDHMIJHMGIL_NHPBCCNGEFG_OFFSET UNITYSDK_OFFSET(0xBB43920)
#define NDHMIJHMGIL_NHPCAHPNHBF_OFFSET UNITYSDK_OFFSET(0xBB33930)
#define NDHMIJHMGIL_NIBCKCMKMMI_OFFSET UNITYSDK_OFFSET(0xBB308F0)
#define NDHMIJHMGIL_NLAPLIAFDPP_OFFSET UNITYSDK_OFFSET(0xBB40520)
#define NDHMIJHMGIL_NMIONIKFDOJ_OFFSET UNITYSDK_OFFSET(0xBB3FAF0)
#define NDHMIJHMGIL_NNNJFKPAIDN_OFFSET UNITYSDK_OFFSET(0xBB47DF0)
#define NDHMIJHMGIL_NOBHKKNDKGK_OFFSET UNITYSDK_OFFSET(0xBB483F0)
#define NDHMIJHMGIL_NOCFHNMEGDH_OFFSET UNITYSDK_OFFSET(0xBB3E0C0)
#define NDHMIJHMGIL_NOPGIOCNEOB_OFFSET UNITYSDK_OFFSET(0xBB35CA0)
#define NDHMIJHMGIL_NPFBJJBJDIG_OFFSET UNITYSDK_OFFSET(0xBB48890)
#define NDHMIJHMGIL_NPKIGEAONPJ_OFFSET UNITYSDK_OFFSET(0xBB45040)
#define NDHMIJHMGIL_OCNIJJODPFH_OFFSET UNITYSDK_OFFSET(0xBB39180)
#define NDHMIJHMGIL_ODEMCJOPEBA_OFFSET UNITYSDK_OFFSET(0xBB31120)
#define NDHMIJHMGIL_ODNMBCFNAEC_OFFSET UNITYSDK_OFFSET(0xBB3B4B0)
#define NDHMIJHMGIL_OGCONMODGJP_OFFSET UNITYSDK_OFFSET(0xBB3FFF0)
#define NDHMIJHMGIL_OGMCEHHMKCP_OFFSET UNITYSDK_OFFSET(0xBB3D580)
#define NDHMIJHMGIL_OIEMMEDFCPI_OFFSET UNITYSDK_OFFSET(0xBB38C10)
#define NDHMIJHMGIL_OIFAPNBDGLA_OFFSET UNITYSDK_OFFSET(0xBB3D850)
#define NDHMIJHMGIL_OINBDMGFFJL_1_OFFSET UNITYSDK_OFFSET(0xBB2B3B0)
#define NDHMIJHMGIL_OINBDMGFFJL_2_OFFSET UNITYSDK_OFFSET(0xBB2AA70)
#define NDHMIJHMGIL_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBB2A950)
#define NDHMIJHMGIL_OKCOJOFCBFA_OFFSET UNITYSDK_OFFSET(0xBB427A0)
#define NDHMIJHMGIL_ONDHNLCCBCB_OFFSET UNITYSDK_OFFSET(0xBB46CA0)
#define NDHMIJHMGIL_ONPDPHAMJCM_OFFSET UNITYSDK_OFFSET(0xBB32BB0)
#define NDHMIJHMGIL_OODNAEEEEEM_OFFSET UNITYSDK_OFFSET(0xBB318A0)
#define NDHMIJHMGIL_PAGHKOBCJGC_OFFSET UNITYSDK_OFFSET(0xBB46960)
#define NDHMIJHMGIL_PAJOBMIEENC_OFFSET UNITYSDK_OFFSET(0xBB31330)
#define NDHMIJHMGIL_PBCLKMHPACG_OFFSET UNITYSDK_OFFSET(0xBB3C770)
#define NDHMIJHMGIL_PEOOHJOEOAM_OFFSET UNITYSDK_OFFSET(0xBB44F30)
#define NDHMIJHMGIL_PGLKJPOBOBH_OFFSET UNITYSDK_OFFSET(0xBB37AE0)
#define NDHMIJHMGIL_PHHKOPNDGLM_OFFSET UNITYSDK_OFFSET(0xBB45920)
#define NDHMIJHMGIL_PHKHDPCJFJH_OFFSET UNITYSDK_OFFSET(0xBB30540)
#define NDHMIJHMGIL_PHPDKFNCEHB_OFFSET UNITYSDK_OFFSET(0xBB31380)
#define NDHMIJHMGIL_PLKIALBACDE_OFFSET UNITYSDK_OFFSET(0xBB480F0)
#define NDHMIJHMGIL_POPAGHENDCC_OFFSET UNITYSDK_OFFSET(0xBB46FA0)
#define NDHMIJHMGIL_PPANGFIJBIL_OFFSET UNITYSDK_OFFSET(0xBB3D600)
#define NDHMIJHMGIL_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBB48870)
#define NDHMIJHMGIL__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBB2F470)
#define NDHMIJHMGIL__ONINIT_OFFSET UNITYSDK_OFFSET(0xBB29E60)
#define NDHMIJHMGIL__ONSHOWSKILLUI_B__79_0_OFFSET UNITYSDK_OFFSET(0xBB48D80)
#define NDHMIJHMGIL__ONTICK_OFFSET UNITYSDK_OFFSET(0xBB2FFF0)

inline static constexpr unsigned int NDHMIJHMGIL_TypeDefinitionIndex = 60417;

	class NDHMIJHMGIL : public ::HCLPKMIIANI
	{
	public:
		::RPG::Client::AchievementData* IDEENEDPJCK; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x80
		::PJAAKKLBCII* BKNBPCLGHPB; // 0x88
		::RPG::GameCore::MarbleMatchInfoConfigRow* GPIEMOJADLM; // 0x90
		::System::Random* OLEEIPHBJKB; // 0x98
		::RPG::GameCore::GameEntity* NBEMEHAHGEG; // 0xA0
		::RPG::Client::AchievementData* KHMMGOACEAE; // 0xA8
		::RPG::Client::LuaUIController* LCIACOLKKKM; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* KFNPMDHLNNK; // 0xB8
		::FDPALAEIHPB* FKINCGODJEP; // 0xC0
		::RPG::Client::AchievementData* LGHAEFKAECA; // 0xC8
		::PLHAEBMKIFA* FHPILMPBILI; // 0xD0
		::HJNDPHEDAGM* PDENFEFCAGN; // 0xD8
		::EOMDNNNKFKE* OOECBOEFICP; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* HILODJJFJHP; // 0xE8
		::GIPCDLCCMKA* HEJHGJIGEGK; // 0xF0
		::RPG::Client::UIController* OHPHBGNAGIO; // 0xF8
		::BJEIMIBGPIG* MJGPFHFDFNB; // 0x100
		::UnityEngine::GameObject* JNCDPIELMAI; // 0x108
		::FPJKIGOKMJC* MOAHPOKJFMH; // 0x110
		::UnityEngine::GameObject* JGMLONJJBCO; // 0x118
		::GFHCKBHCNDF* OFDPLBGNAMI; // 0x120
		::EFJKLLCCABF* INKDFFOPMHI; // 0x128
		::System::String* BBCOHPKOEOF; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MonoEffect*>* COMLBCOADML; // 0x138
		::System::Collections::Generic::List_1<::System::UInt32>* IJPJCHNDPLD; // 0x140
		::UnityEngine::GameObject* CIMBLNFKLAM; // 0x148
		::ENNJFOGNKAL* EMBAACDBLFK; // 0x150
		::UnityEngine::GameObject* FDNIHBABPPJ; // 0x158
		::Il2CppArray<::UnityEngine::RaycastHit>* LIEMGOHMCCD; // 0x160
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::System::UInt32>* AHDEONMPMHE; // 0x168
		::System::Boolean JKIJNMKLAGN; // 0x170
		::System::Boolean DLCDADAHGEK; // 0x171
		::System::Boolean FEFJLDILGJI; // 0x172
		::System::Nullable_1<::System::Boolean> AJPACLNPLJC; // 0x173
		::FJPMJPEKLJL _GameMode_k__BackingField; // 0x178
		::System::Single EFLJPELIKAH; // 0x17C
		::UnityEngine::Vector3 LKBCLLCFEAL; // 0x180
		::System::UInt32 GPIHDCJDCOO; // 0x18C
		::System::Single MEECCGANNAG; // 0x190
		::System::Single AILFDBNLPNM; // 0x194
		::System::Single INJFDOCIPEJ; // 0x198
		::System::Int32 KBDPMBDJIOF; // 0x19C
		::System::Boolean JCJOKNDGPMG; // 0x1A0
		::System::Boolean EFMNEMIGAID; // 0x1A1
		::System::Boolean GFAMGLFOMGI; // 0x1A2
		::System::Boolean PNLOEHDPKDJ; // 0x1A3
		::System::UInt32 PPBDHEEBAOL; // 0x1A4
		::System::Single IPFONLADGFD; // 0x1A8
		::RPG::GameCore::PetMarbleLevelMode OPOBELBEFIM; // 0x1AC
		::UnityEngine::Vector3 AEGGCPFGBOL; // 0x1B0
		static ::RPG::GameCore::GlobalMarbleEffectConfig** StaticGet_GMOHEHHEGGJ()
		{
			return (::RPG::GameCore::GlobalMarbleEffectConfig**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x26790);
		}

		static ::System::String** StaticGet_KFOCMCJLIKB()
		{
			return (::System::String**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x26798);
		}

		static ::System::String** StaticGet_PIBIMLHEFLC()
		{
			return (::System::String**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x267A0);
		}

		static ::System::String** StaticGet_KGKNBALLEPD()
		{
			return (::System::String**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x267A8);
		}

		static ::RPG::GameCore::MarbleGameConfig** StaticGet_DPHDFKHIMEC()
		{
			return (::RPG::GameCore::MarbleGameConfig**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x267B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CCTOR_OFFSET))();
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL__ONINIT_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::JLKJMEMOLFD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::JLKJMEMOLFD*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OINBDMGFFJL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OINBDMGFFJL_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::GFHCKBHCNDF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OINBDMGFFJL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OINBDMGFFJL_2(::GFHCKBHCNDF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OINBDMGFFJL_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GFCGKDLPFEE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::GFHCKBHCNDF* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GFCGKDLPFEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EFOMOFBLAIK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::GFHCKBHCNDF* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GFHCKBHCNDF*, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EFOMOFBLAIK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HOGHOBDPFHO(::GFHCKBHCNDF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HOGHOBDPFHO_OFFSET))(this, a1, a2);
		}

		::System::Void ELABDMKNFPJ(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ELABDMKNFPJ_OFFSET))(this, a1);
		}

		::System::Void LPOKPGENOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LPOKPGENOPB_OFFSET))(this);
		}

		::System::Void EGJAFNHCBLP(::RPG::Client::PetMarble::PetMarbleTeamEditController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleTeamEditController*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EGJAFNHCBLP_OFFSET))(this, a1);
		}

		::System::Boolean GPGFPCDFHDE(::GFHCKBHCNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GPGFPCDFHDE_OFFSET))(this, a1);
		}

		::System::Boolean GHPBHPALPBJ(::GFHCKBHCNDF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFHCKBHCNDF*, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GHPBHPALPBJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean JEAJJPKAEJG(::GFHCKBHCNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JEAJJPKAEJG_OFFSET))(this, a1);
		}

		::System::Void KIDPOHBMHFC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::GFHCKBHCNDF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KIDPOHBMHFC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPLNCDDAGNI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::GFHCKBHCNDF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LPLNCDDAGNI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL__ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDHMIJHMGIL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GIAKKINGHOG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GIAKKINGHOG_OFFSET))(this, a1, a2);
		}

		::System::Void ECICBKAOBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ECICBKAOBIK_OFFSET))(this);
		}

		::System::Void JCLKPHLGJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JCLKPHLGJKL_OFFSET))(this);
		}

		::System::Void LALKJOMGCNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LALKJOMGCNN_OFFSET))(this, a1);
		}

		::System::Void PHKHDPCJFJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PHKHDPCJFJH_OFFSET))(this, a1);
		}

		::System::Void HDMEGPOCJFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HDMEGPOCJFH_OFFSET))(this, a1);
		}

		::System::Void NIBCKCMKMMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NIBCKCMKMMI_OFFSET))(this, a1);
		}

		::System::Void KAFDAMMKAGL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KAFDAMMKAGL_OFFSET))(this, a1);
		}

		::RPG::GameCore::PetMarbleLevelMode ELOFMBPHKML()
		{
			return ((::RPG::GameCore::PetMarbleLevelMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ELOFMBPHKML_OFFSET))(this);
		}

		::System::UInt32 LFLPKNJHLOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LFLPKNJHLOF_OFFSET))(this);
		}

		::System::Boolean ELIADBBFGEC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ELIADBBFGEC_OFFSET))(this, a1);
		}

		::System::Void LNOIIBAFADK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LNOIIBAFADK_OFFSET))(this, a1);
		}

		::System::Void KHCBKDIPKAJ(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KHCBKDIPKAJ_OFFSET))(this, a1);
		}

		::GFHCKBHCNDF* PAJOBMIEENC()
		{
			return ((::GFHCKBHCNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PAJOBMIEENC_OFFSET))(this);
		}

		::System::Void PHPDKFNCEHB(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PHPDKFNCEHB_OFFSET))(this, a1, a2);
		}

		::System::Void IMJKCPCMDAO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IMJKCPCMDAO_OFFSET))(this, a1, a2);
		}

		::System::Void ENOGEHBAEEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ENOGEHBAEEK_OFFSET))(this, a1);
		}

		::System::Void OODNAEEEEEM(::AMBAFEMGGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMBAFEMGGLD*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OODNAEEEEEM_OFFSET))(this, a1);
		}

		::System::Void JOCHHNNFDFC(::AMBAFEMGGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMBAFEMGGLD*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JOCHHNNFDFC_OFFSET))(this, a1);
		}

		::System::Void EIDOOFGLOBE(::HIDPFIAALLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIDPFIAALLB*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EIDOOFGLOBE_OFFSET))(this, a1);
		}

		::System::Void BFNGCHMJCMC(::HIDPFIAALLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIDPFIAALLB*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BFNGCHMJCMC_OFFSET))(this, a1);
		}

		::System::Void AAIKPNEJADC(::MBDOBECHOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_AAIKPNEJADC_OFFSET))(this, a1);
		}

		::System::Void FFFONHBJIMK(::System::UInt32 a1, ::CJOCEJLPADK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CJOCEJLPADK*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_FFFONHBJIMK_OFFSET))(this, a1, a2);
		}

		::System::Void ONPDPHAMJCM(::System::UInt32 a1, ::KMGDCCNNGEE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KMGDCCNNGEE*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ONPDPHAMJCM_OFFSET))(this, a1, a2);
		}

		::System::Void NHPCAHPNHBF(::System::UInt32 a1, ::LOKPJGLJIIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LOKPJGLJIIH*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NHPCAHPNHBF_OFFSET))(this, a1, a2);
		}

		::System::Void NHGDBHDIIAI(::System::UInt32 a1, ::PIMNGBAMMAM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PIMNGBAMMAM*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NHGDBHDIIAI_OFFSET))(this, a1, a2);
		}

		::System::Void AAHAHBJJADH(::System::UInt32 a1, ::DLEIPLCFMHK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DLEIPLCFMHK*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_AAHAHBJJADH_OFFSET))(this, a1, a2);
		}

		::System::Void GDOMDPONNHG(::System::UInt32 a1, ::GKCKIOJHFIL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GKCKIOJHFIL*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GDOMDPONNHG_OFFSET))(this, a1, a2);
		}

		::System::Void PGLKJPOBOBH(::MNLLCNFNKKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLLCNFNKKP*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PGLKJPOBOBH_OFFSET))(this, a1);
		}

		::System::Void GCCBMLCHPHC(::System::UInt32 a1, ::MCHAMBDHPEN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MCHAMBDHPEN*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GCCBMLCHPHC_OFFSET))(this, a1, a2);
		}

		::System::Void DDAKHLODOFK(::System::UInt32 a1, ::FEEGOKGAJEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FEEGOKGAJEH*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DDAKHLODOFK_OFFSET))(this, a1, a2);
		}

		::System::Void OCNIJJODPFH(::System::UInt32 a1, ::DFDBFKBNGIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DFDBFKBNGIH*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OCNIJJODPFH_OFFSET))(this, a1, a2);
		}

		static ::System::String* NOPGIOCNEOB(::GFFDMPOCAIP* a1)
		{
			return ((::System::String*(*)(::GFFDMPOCAIP*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NOPGIOCNEOB_OFFSET))(a1);
		}

		static ::System::String* BNEOBKMJMMO(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BNEOBKMJMMO_OFFSET))(a1);
		}

		static ::System::String* GIPCECDMEFE(::System::Collections::Generic::IList_1<::NAGIOAKDDMJ*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::NAGIOAKDDMJ*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GIPCECDMEFE_OFFSET))(a1);
		}

		static ::System::String* IIBHLJHOPDP(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IIBHLJHOPDP_OFFSET))(a1);
		}

		static ::System::String* HBLCMNHAMEL(::System::Collections::Generic::IList_1<::OELHAMANGBN*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::OELHAMANGBN*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HBLCMNHAMEL_OFFSET))(a1);
		}

		static ::System::String* OIEMMEDFCPI(::System::Collections::Generic::IList_1<::DCECJENGJLD*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::DCECJENGJLD*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OIEMMEDFCPI_OFFSET))(a1);
		}

		static ::System::String* BKGKLGKDGIB(::System::Collections::Generic::IList_1<::OOBKAONOBAK*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::OOBKAONOBAK*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BKGKLGKDGIB_OFFSET))(a1);
		}

		static ::System::String* CGMJNHBHJOB(::GFFGIMJINFH* a1)
		{
			return ((::System::String*(*)(::GFFGIMJINFH*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CGMJNHBHJOB_OFFSET))(a1);
		}

		static ::System::String* DCELNFKLKKC(::EHEHDOKBFAL* a1)
		{
			return ((::System::String*(*)(::EHEHDOKBFAL*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DCELNFKLKKC_OFFSET))(a1);
		}

		static ::System::String* GPAIMMHMGFL(::System::Collections::Generic::IList_1<::IMDNFIKKJHK*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::IMDNFIKKJHK*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GPAIMMHMGFL_OFFSET))(a1);
		}

		static ::System::String* EGHDBIPPJEL(::System::Collections::Generic::IList_1<::LDNMAIIKMGD*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::LDNMAIIKMGD*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EGHDBIPPJEL_OFFSET))(a1);
		}

		static ::System::String* EGAJCOLMJCF(::System::Collections::Generic::IList_1<::MODNJLMIFJD*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::MODNJLMIFJD*>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EGAJCOLMJCF_OFFSET))(a1);
		}

		::System::Void MFEDKGHADMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_MFEDKGHADMD_OFFSET))(this, a1);
		}

		::System::Boolean CNIHFNIJGDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CNIHFNIJGDG_OFFSET))(this);
		}

		::System::Void MLEMMFLFMMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_MLEMMFLFMMI_OFFSET))(this, a1);
		}

		::System::Boolean HEBGIMNNPKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HEBGIMNNPKI_OFFSET))(this);
		}

		::System::UInt32 ODEMCJOPEBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ODEMCJOPEBA_OFFSET))(this);
		}

		::System::UInt32 ODNMBCFNAEC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ODNMBCFNAEC_OFFSET))(this, a1);
		}

		::EJLGEOKIJKH LBBPMNDEMOK(::System::UInt32 a1)
		{
			return ((::EJLGEOKIJKH(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LBBPMNDEMOK_OFFSET))(this, a1);
		}

		::System::Void HCGLHGCPOLI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HCGLHGCPOLI_OFFSET))(this, a1, a2);
		}

		::System::Void AHGNCDFAFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_AHGNCDFAFBM_OFFSET))(this);
		}

		::System::Void PBCLKMHPACG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PBCLKMHPACG_OFFSET))(this, a1);
		}

		::System::Void DBEPOBHFKHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DBEPOBHFKHO_OFFSET))(this, a1);
		}

		::System::Void JPINACHBAJL(::System::UInt32 a1, ::RPG::Client::LittleGame::Marble::MarbleNetWorkMsg a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Marble::MarbleNetWorkMsg))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JPINACHBAJL_OFFSET))(this, a1, a2);
		}

		::System::Void IOMEGDOMLEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IOMEGDOMLEB_OFFSET))(this);
		}

		::System::Void FLIPLAKEMLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_FLIPLAKEMLH_OFFSET))(this);
		}

		::System::Void IDBLPKHMMAC(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IDBLPKHMMAC_OFFSET))(this, a1, a2);
		}

		::System::Void LDNBANDHCJP(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LDNBANDHCJP_OFFSET))(this, a1, a2);
		}

		::System::Void JOABNKOJFPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JOABNKOJFPO_OFFSET))(this, a1);
		}

		::System::Boolean OGMCEHHMKCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OGMCEHHMKCP_OFFSET))(this);
		}

		::System::Void PPANGFIJBIL(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PPANGFIJBIL_OFFSET))(this, a1);
		}

		::System::Void EHOCABNGHMC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EHOCABNGHMC_OFFSET))(this, a1, a2);
		}

		::System::Void OIFAPNBDGLA(::System::UInt32 a1, ::System::Int32 a2, ::LMGECGDAPEN a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::LMGECGDAPEN))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OIFAPNBDGLA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGJLINFADJK(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_MGJLINFADJK_OFFSET))(this, a1, a2);
		}

		::System::Void NOCFHNMEGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NOCFHNMEGDH_OFFSET))(this);
		}

		::System::Boolean EOEFKHDGBNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EOEFKHDGBNN_OFFSET))(this);
		}

		::System::Boolean JIIPLJACJFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JIIPLJACJFP_OFFSET))(this);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void JBFKLNDDIKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JBFKLNDDIKC_OFFSET))(this, a1);
		}

		::System::Void NCJCMMPEMFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NCJCMMPEMFP_OFFSET))(this);
		}

		::System::Void CCBMALMLOIB(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CCBMALMLOIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IIELGCCDEHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IIELGCCDEHG_OFFSET))(this);
		}

		::System::Void JFACGMBKCCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JFACGMBKCCN_OFFSET))(this);
		}

		::System::Void CIJINKMILAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CIJINKMILAA_OFFSET))(this);
		}

		::System::Void NMIONIKFDOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NMIONIKFDOJ_OFFSET))(this);
		}

		::System::Void OGCONMODGJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OGCONMODGJP_OFFSET))(this);
		}

		::System::Void JGCCACCMHCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JGCCACCMHCM_OFFSET))(this);
		}

		::System::Void GBNEELEPMIL(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GBNEELEPMIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNFHHPGMILH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LNFHHPGMILH_OFFSET))(this, a1);
		}

		::System::Void NLAPLIAFDPP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NLAPLIAFDPP_OFFSET))(this, a1);
		}

		::System::Void MKCDCOEECNC(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_MKCDCOEECNC_OFFSET))(this, a1, a2);
		}

		::System::Void EDGLEMPCNKC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EDGLEMPCNKC_OFFSET))(this, a1, a2);
		}

		::System::Void KCKIDLDLGMC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Quaternion> a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KCKIDLDLGMC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BCAECPPJICK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BCAECPPJICK_OFFSET))(this, a1, a2);
		}

		::System::Void CDKABFNGIGP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CDKABFNGIGP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BLCKKMHLMOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BLCKKMHLMOA_OFFSET))(this);
		}

		::System::Void IBAKIEMEJLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IBAKIEMEJLH_OFFSET))(this, a1);
		}

		::System::Void GHIFMGPKFPF(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::UnityEngine::Transform* a5, ::System::String* a6, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GHIFMGPKFPF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CEPJHGNMKJD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CEPJHGNMKJD_OFFSET))(this, a1);
		}

		::System::Void GPJGKMLHFDN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GPJGKMLHFDN_OFFSET))(this, a1);
		}

		::System::Void EKMHEABCPMD(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EKMHEABCPMD_OFFSET))(this, a1);
		}

		::System::UInt32 GDGDBAHONAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GDGDBAHONAD_OFFSET))(this);
		}

		::System::Boolean IKNGLGHOFAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IKNGLGHOFAG_OFFSET))(this);
		}

		::Il2CppArray<::KNOGPMGGDFL>* APCLOEHCKFD(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::Il2CppArray<::KNOGPMGGDFL>*(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_APCLOEHCKFD_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OKCOJOFCBFA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_OKCOJOFCBFA_OFFSET))(this, a1);
		}

		::System::Void GFFOFMBGIEA(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GFFOFMBGIEA_OFFSET))(this, a1, a2);
		}

		::System::Void HDDIJJLLCBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HDDIJJLLCBK_OFFSET))(this);
		}

		::System::Void LMHOBACMBAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LMHOBACMBAE_OFFSET))(this, a1);
		}

		::System::Void GGIGMJKOION()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GGIGMJKOION_OFFSET))(this);
		}

		::System::Void BCEGALFMPKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BCEGALFMPKN_OFFSET))(this, a1);
		}

		::System::Void MPJLHNPFCCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_MPJLHNPFCCP_OFFSET))(this, a1);
		}

		::System::Boolean KCLNNLDHCKJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KCLNNLDHCKJ_OFFSET))(this, a1);
		}

		::System::Boolean MNHJCAPJOKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_MNHJCAPJOKN_OFFSET))(this);
		}

		::System::Boolean DJCBBEJKLHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DJCBBEJKLHI_OFFSET))(this);
		}

		::System::Boolean BPNDNCONPBA(::System::UInt32 a1, ::DFGDEHAHLHC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BPNDNCONPBA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 INAANJLPKMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_INAANJLPKMO_OFFSET))(this);
		}

		::System::Boolean NHPBCCNGEFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NHPBCCNGEFG_OFFSET))(this);
		}

		::UnityEngine::GameObject* DELIBNAHFJJ(::System::UInt32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DELIBNAHFJJ_OFFSET))(this, a1);
		}

		::System::Void JNMDPEECEJE(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JNMDPEECEJE_OFFSET))(this, a1, a2);
		}

		::System::Void BPHLIJDKKGO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BPHLIJDKKGO_OFFSET))(this, a1);
		}

		::System::Void KDKDANLJPIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KDKDANLJPIJ_OFFSET))(this);
		}

		::System::Void BLMLBHNNGPB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BLMLBHNNGPB_OFFSET))(this, a1);
		}

		::System::Void GEKGNEMGMEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GEKGNEMGMEH_OFFSET))(this);
		}

		::System::Void ELKCMEBMMKL(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ELKCMEBMMKL_OFFSET))(this, a1, a2);
		}

		::System::Void AGODGPDPJCI(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_AGODGPDPJCI_OFFSET))(this, a1, a2);
		}

		::System::Void JFFPHCIAOKM(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JFFPHCIAOKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DKMONHLCEAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DKMONHLCEAP_OFFSET))(this);
		}

		::System::Void CECALJEOPFJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CECALJEOPFJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IJHDPACDLGE(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IJHDPACDLGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PEOOHJOEOAM(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PEOOHJOEOAM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleHexInfo*>* NPKIGEAONPJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleHexInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NPKIGEAONPJ_OFFSET))(this);
		}

		::System::Single DFJJGFOJJBF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_DFJJGFOJJBF_OFFSET))(this);
		}

		::System::Single GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GETTIMESCALE_OFFSET))(this);
		}

		::System::Void BBEOBLJJEJP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BBEOBLJJEJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CEEFNJBEJNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CEEFNJBEJNL_OFFSET))(this, a1);
		}

		::System::Void PHHKOPNDGLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PHHKOPNDGLM_OFFSET))(this, a1);
		}

		::System::Boolean LACOFEOALEN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LACOFEOALEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean LACOFEOALEN_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LACOFEOALEN_1_OFFSET))(this, a1);
		}

		::System::Void FJFMAMFCNNA(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_FJFMAMFCNNA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKNLELFINDN(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CKNLELFINDN_OFFSET))(this, a1, a2);
		}

		::System::Void HBCPAEFKFKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HBCPAEFKFKL_OFFSET))(this);
		}

		::System::Void JBPIMINAAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JBPIMINAAOE_OFFSET))(this);
		}

		::System::Void HKAPLELMHIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HKAPLELMHIF_OFFSET))(this);
		}

		::UnityEngine::GameObject* CADHPBGECJF(::RPG::GameCore::MarbleTargetType a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::MarbleTargetType, ::System::String*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CADHPBGECJF_OFFSET))(this, a1, a2);
		}

		::System::Void BBMDKBOJLPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BBMDKBOJLPA_OFFSET))(this, a1);
		}

		::System::Void GFMENAOHIGB(::RPG::Client::LittleGame::MarbleEmojiReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MarbleEmojiReason))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GFMENAOHIGB_OFFSET))(this, a1);
		}

		::System::Void EMOPAEOAPAP(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EMOPAEOAPAP_OFFSET))(this, a1, a2);
		}

		::System::Void KABMPEPKGFP(::PLAGFACLPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGFACLPDL*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KABMPEPKGFP_OFFSET))(this, a1);
		}

		::System::Void PAGHKOBCJGC(::PLAGFACLPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGFACLPDL*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PAGHKOBCJGC_OFFSET))(this, a1);
		}

		::System::Void FHOCFMOCLBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_FHOCFMOCLBK_OFFSET))(this);
		}

		::UnityEngine::Transform* HAIBBMGHNLA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HAIBBMGHNLA_OFFSET))(this);
		}

		::System::Void KBPEKFIACAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KBPEKFIACAP_OFFSET))(this);
		}

		::System::Boolean CGFECDKOBMN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_CGFECDKOBMN_OFFSET))(this, a1);
		}

		::System::Boolean JKEHJPJCKEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_JKEHJPJCKEF_OFFSET))(this);
		}

		::System::Boolean NGAMMDPGIGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NGAMMDPGIGN_OFFSET))(this);
		}

		::System::Int32 GMOAEEPAALM(::EJLGEOKIJKH a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EJLGEOKIJKH))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GMOAEEPAALM_OFFSET))(this, a1);
		}

		::EJLGEOKIJKH HBLOKGLFDEC(::System::UInt32 a1)
		{
			return ((::EJLGEOKIJKH(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HBLOKGLFDEC_OFFSET))(this, a1);
		}

		::System::Boolean GLIPEKOJBPP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GLIPEKOJBPP_OFFSET))(this, a1);
		}

		::System::UInt32 HHODLPJNPOB(::EJLGEOKIJKH a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EJLGEOKIJKH))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HHODLPJNPOB_OFFSET))(this, a1);
		}

		::System::Void BNJGJIMEFIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BNJGJIMEFIG_OFFSET))(this);
		}

		::System::Boolean ANAHNOOINLC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ANAHNOOINLC_OFFSET))(this, a1);
		}

		::System::UInt32 HKJECEOBJLA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HKJECEOBJLA_OFFSET))(this, a1, a2);
		}

		::System::Void AOCNOLPBOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_AOCNOLPBOFF_OFFSET))(this);
		}

		::System::Void ONDHNLCCBCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ONDHNLCCBCB_OFFSET))(this);
		}

		::GIPCDLCCMKA* KJDOJNJDDJN()
		{
			return ((::GIPCDLCCMKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KJDOJNJDDJN_OFFSET))(this);
		}

		::System::Void HPPHBAHNKDM(::System::Boolean a1, ::RPG::Client::LittleGame::Marble::MarbleEventType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::Marble::MarbleEventType))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HPPHBAHNKDM_OFFSET))(this, a1, a2);
		}

		::System::Void POPAGHENDCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_POPAGHENDCC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* BBNNBPFEKBM(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_BBNNBPFEKBM_OFFSET))(this, a1);
		}

		::System::Void HKHHIFBKDJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HKHHIFBKDJN_OFFSET))(this);
		}

		::System::String* IPFOBIHOLKO(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IPFOBIHOLKO_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleManager* KNBJFGPACDH()
		{
			return ((::RPG::Client::ActivityMarble::IMarbleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_KNBJFGPACDH_OFFSET))(this);
		}

		::System::Void EIGNPHBBLKO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EIGNPHBBLKO_OFFSET))(this, a1);
		}

		::System::Boolean NBJDJNEOEJB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NBJDJNEOEJB_OFFSET))(this, a1);
		}

		::System::Void LCONKOKBGNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_LCONKOKBGNG_OFFSET))(this);
		}

		::System::Void NOBHKKNDKGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NOBHKKNDKGK_OFFSET))(this);
		}

		::System::Void EOILAACFCPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_EOILAACFCPN_OFFSET))(this);
		}

		::System::Void GDPGJENMAPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GDPGJENMAPO_OFFSET))(this);
		}

		::System::Random* ELHKELPEFCJ()
		{
			return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_ELHKELPEFCJ_OFFSET))(this);
		}

		::FJPMJPEKLJL get_GameMode()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Void set_GameMode(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_SET_GAMEMODE_OFFSET))(this, a1);
		}

		::System::Boolean IEJDBIHNHKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IEJDBIHNHKF_OFFSET))(this);
		}

		::System::UInt32 NNNJFKPAIDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NNNJFKPAIDN_OFFSET))(this);
		}

		::System::UInt32 HMLOFKGEAFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HMLOFKGEAFO_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* PLKIALBACDE()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_PLKIALBACDE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* IIBBIPHALLN()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_IIBBIPHALLN_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NPFBJJBJDIG()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_NPFBJJBJDIG_OFFSET))(this);
		}

		::System::Void _OnShowSkillUI_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL__ONSHOWSKILLUI_B__79_0_OFFSET))(this);
		}

	};
