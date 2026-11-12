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

#define NDHMIJHMGIL_AABBCLIIJJB_OFFSET UNITYSDK_OFFSET(0xC3D10D0)
#define NDHMIJHMGIL_AAHAHBJJADH_OFFSET UNITYSDK_OFFSET(0xC3BF710)
#define NDHMIJHMGIL_AAIKPNEJADC_OFFSET UNITYSDK_OFFSET(0xC3BC4C0)
#define NDHMIJHMGIL_AGODGPDPJCI_OFFSET UNITYSDK_OFFSET(0xC3CED90)
#define NDHMIJHMGIL_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xC3C5E90)
#define NDHMIJHMGIL_ANAHNOOINLC_OFFSET UNITYSDK_OFFSET(0xC3CE4B0)
#define NDHMIJHMGIL_AOCNOLPBOFF_OFFSET UNITYSDK_OFFSET(0xC3C62B0)
#define NDHMIJHMGIL_APCLOEHCKFD_OFFSET UNITYSDK_OFFSET(0xC3CCBA0)
#define NDHMIJHMGIL_BBEOBLJJEJP_OFFSET UNITYSDK_OFFSET(0xC3CD3C0)
#define NDHMIJHMGIL_BBMDKBOJLPA_OFFSET UNITYSDK_OFFSET(0xC3D06B0)
#define NDHMIJHMGIL_BBNNBPFEKBM_OFFSET UNITYSDK_OFFSET(0xC3D14D0)
#define NDHMIJHMGIL_BCAECPPJICK_OFFSET UNITYSDK_OFFSET(0xC3CBD70)
#define NDHMIJHMGIL_BCEGALFMPKN_OFFSET UNITYSDK_OFFSET(0xC3CD210)
#define NDHMIJHMGIL_BFNGCHMJCMC_OFFSET UNITYSDK_OFFSET(0xC3BC400)
#define NDHMIJHMGIL_BKGKLGKDGIB_OFFSET UNITYSDK_OFFSET(0xC3C17F0)
#define NDHMIJHMGIL_BLCKKMHLMOA_OFFSET UNITYSDK_OFFSET(0xC3B9D10)
#define NDHMIJHMGIL_BLMLBHNNGPB_OFFSET UNITYSDK_OFFSET(0xC3CEC20)
#define NDHMIJHMGIL_BNEOBKMJMMO_OFFSET UNITYSDK_OFFSET(0xC3C06F0)
#define NDHMIJHMGIL_BNJGJIMEFIG_OFFSET UNITYSDK_OFFSET(0xC3B8010)
#define NDHMIJHMGIL_BPHLIJDKKGO_OFFSET UNITYSDK_OFFSET(0xC3CE060)
#define NDHMIJHMGIL_BPNDNCONPBA_OFFSET UNITYSDK_OFFSET(0xC3CD9A0)
#define NDHMIJHMGIL_CADHPBGECJF_OFFSET UNITYSDK_OFFSET(0xC3D0440)
#define NDHMIJHMGIL_CCBMALMLOIB_OFFSET UNITYSDK_OFFSET(0xC3C9930)
#define NDHMIJHMGIL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3D25B0)
#define NDHMIJHMGIL_CDKABFNGIGP_OFFSET UNITYSDK_OFFSET(0xC3CBFD0)
#define NDHMIJHMGIL_CECALJEOPFJ_OFFSET UNITYSDK_OFFSET(0xC3CF1D0)
#define NDHMIJHMGIL_CEEFNJBEJNL_OFFSET UNITYSDK_OFFSET(0xC3CFC00)
#define NDHMIJHMGIL_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0xC3CC5F0)
#define NDHMIJHMGIL_CGFECDKOBMN_OFFSET UNITYSDK_OFFSET(0xC3CEF90)
#define NDHMIJHMGIL_CGMJNHBHJOB_OFFSET UNITYSDK_OFFSET(0xC3C3200)
#define NDHMIJHMGIL_CIJINKMILAA_OFFSET UNITYSDK_OFFSET(0xC3C9E70)
#define NDHMIJHMGIL_CKNLELFINDN_OFFSET UNITYSDK_OFFSET(0xC3D0160)
#define NDHMIJHMGIL_CNIHFNIJGDG_OFFSET UNITYSDK_OFFSET(0xC3C53A0)
#define NDHMIJHMGIL_CTOR_OFFSET UNITYSDK_OFFSET(0xC3D22A0)
#define NDHMIJHMGIL_DBEPOBHFKHO_OFFSET UNITYSDK_OFFSET(0xC3C6910)
#define NDHMIJHMGIL_DCELNFKLKKC_OFFSET UNITYSDK_OFFSET(0xC3C4010)
#define NDHMIJHMGIL_DDAKHLODOFK_OFFSET UNITYSDK_OFFSET(0xC3C2450)
#define NDHMIJHMGIL_DELIBNAHFJJ_OFFSET UNITYSDK_OFFSET(0xC3BA2B0)
#define NDHMIJHMGIL_DFJJGFOJJBF_OFFSET UNITYSDK_OFFSET(0xC3CFA80)
#define NDHMIJHMGIL_DJCBBEJKLHI_OFFSET UNITYSDK_OFFSET(0xC3CDB10)
#define NDHMIJHMGIL_DKMONHLCEAP_OFFSET UNITYSDK_OFFSET(0xC3CF180)
#define NDHMIJHMGIL_ECICBKAOBIK_OFFSET UNITYSDK_OFFSET(0xC3B9C00)
#define NDHMIJHMGIL_EDGLEMPCNKC_OFFSET UNITYSDK_OFFSET(0xC3CAAB0)
#define NDHMIJHMGIL_EFOMOFBLAIK_OFFSET UNITYSDK_OFFSET(0xC3B7180)
#define NDHMIJHMGIL_EGAJCOLMJCF_OFFSET UNITYSDK_OFFSET(0xC3C4F20)
#define NDHMIJHMGIL_EGHDBIPPJEL_OFFSET UNITYSDK_OFFSET(0xC3C4AA0)
#define NDHMIJHMGIL_EGJAFNHCBLP_OFFSET UNITYSDK_OFFSET(0xC3B8A20)
#define NDHMIJHMGIL_EHOCABNGHMC_OFFSET UNITYSDK_OFFSET(0xC3C7B50)
#define NDHMIJHMGIL_EIDOOFGLOBE_OFFSET UNITYSDK_OFFSET(0xC3BC190)
#define NDHMIJHMGIL_EIGNPHBBLKO_OFFSET UNITYSDK_OFFSET(0xC3D2010)
#define NDHMIJHMGIL_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0xC3BA8A0)
#define NDHMIJHMGIL_ELABDMKNFPJ_OFFSET UNITYSDK_OFFSET(0xC3B6F80)
#define NDHMIJHMGIL_ELHKELPEFCJ_OFFSET UNITYSDK_OFFSET(0xC3D2260)
#define NDHMIJHMGIL_ELIADBBFGEC_OFFSET UNITYSDK_OFFSET(0xC3BAF40)
#define NDHMIJHMGIL_ELKCMEBMMKL_OFFSET UNITYSDK_OFFSET(0xC3CECF0)
#define NDHMIJHMGIL_ELOFMBPHKML_OFFSET UNITYSDK_OFFSET(0xC3B4F50)
#define NDHMIJHMGIL_EMOPAEOAPAP_OFFSET UNITYSDK_OFFSET(0xC3D0AF0)
#define NDHMIJHMGIL_ENOGEHBAEEK_OFFSET UNITYSDK_OFFSET(0xC3BB890)
#define NDHMIJHMGIL_EOEFKHDGBNN_OFFSET UNITYSDK_OFFSET(0xC3BC140)
#define NDHMIJHMGIL_EOILAACFCPN_OFFSET UNITYSDK_OFFSET(0xC3C6830)
#define NDHMIJHMGIL_FFFONHBJIMK_OFFSET UNITYSDK_OFFSET(0xC3BC510)
#define NDHMIJHMGIL_FHOCFMOCLBK_OFFSET UNITYSDK_OFFSET(0xC3B8800)
#define NDHMIJHMGIL_FJFMAMFCNNA_OFFSET UNITYSDK_OFFSET(0xC3CFFD0)
#define NDHMIJHMGIL_FLIPLAKEMLH_OFFSET UNITYSDK_OFFSET(0xC3C75F0)
#define NDHMIJHMGIL_GBNEELEPMIL_OFFSET UNITYSDK_OFFSET(0xC3CA510)
#define NDHMIJHMGIL_GCCBMLCHPHC_OFFSET UNITYSDK_OFFSET(0xC3C1D10)
#define NDHMIJHMGIL_GDGDBAHONAD_OFFSET UNITYSDK_OFFSET(0xC3CC690)
#define NDHMIJHMGIL_GDOMDPONNHG_OFFSET UNITYSDK_OFFSET(0xC3C0750)
#define NDHMIJHMGIL_GDPGJENMAPO_OFFSET UNITYSDK_OFFSET(0xC3C6660)
#define NDHMIJHMGIL_GEKGNEMGMEH_OFFSET UNITYSDK_OFFSET(0xC3CECA0)
#define NDHMIJHMGIL_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC3CFBB0)
#define NDHMIJHMGIL_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC3D2270)
#define NDHMIJHMGIL_GFCGKDLPFEE_OFFSET UNITYSDK_OFFSET(0xC3B5B00)
#define NDHMIJHMGIL_GFFOFMBGIEA_OFFSET UNITYSDK_OFFSET(0xC3CCC70)
#define NDHMIJHMGIL_GFMENAOHIGB_OFFSET UNITYSDK_OFFSET(0xC3D07C0)
#define NDHMIJHMGIL_GGIGMJKOION_OFFSET UNITYSDK_OFFSET(0xC3CC380)
#define NDHMIJHMGIL_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xC3CB8E0)
#define NDHMIJHMGIL_GHPBHPALPBJ_OFFSET UNITYSDK_OFFSET(0xC3B8C70)
#define NDHMIJHMGIL_GIAKKINGHOG_OFFSET UNITYSDK_OFFSET(0xC3B7D70)
#define NDHMIJHMGIL_GIPCECDMEFE_OFFSET UNITYSDK_OFFSET(0xC3BFF90)
#define NDHMIJHMGIL_GLIPEKOJBPP_OFFSET UNITYSDK_OFFSET(0xC3B7740)
#define NDHMIJHMGIL_GMOAEEPAALM_OFFSET UNITYSDK_OFFSET(0xC3D1070)
#define NDHMIJHMGIL_GPAIMMHMGFL_OFFSET UNITYSDK_OFFSET(0xC3C4620)
#define NDHMIJHMGIL_GPGFPCDFHDE_OFFSET UNITYSDK_OFFSET(0xC3B8AB0)
#define NDHMIJHMGIL_GPJGKMLHFDN_OFFSET UNITYSDK_OFFSET(0xC3CBC20)
#define NDHMIJHMGIL_HAIBBMGHNLA_OFFSET UNITYSDK_OFFSET(0xC3D0FF0)
#define NDHMIJHMGIL_HBCPAEFKFKL_OFFSET UNITYSDK_OFFSET(0xC3D0350)
#define NDHMIJHMGIL_HBLCMNHAMEL_OFFSET UNITYSDK_OFFSET(0xC3C1180)
#define NDHMIJHMGIL_HBLOKGLFDEC_OFFSET UNITYSDK_OFFSET(0xC3C5D10)
#define NDHMIJHMGIL_HCGLHGCPOLI_OFFSET UNITYSDK_OFFSET(0xC3C5DF0)
#define NDHMIJHMGIL_HDDIJJLLCBK_OFFSET UNITYSDK_OFFSET(0xC3CCDA0)
#define NDHMIJHMGIL_HDMEGPOCJFH_OFFSET UNITYSDK_OFFSET(0xC3BA740)
#define NDHMIJHMGIL_HEBGIMNNPKI_OFFSET UNITYSDK_OFFSET(0xC3C5530)
#define NDHMIJHMGIL_HHODLPJNPOB_OFFSET UNITYSDK_OFFSET(0xC3C55E0)
#define NDHMIJHMGIL_HKAPLELMHIF_OFFSET UNITYSDK_OFFSET(0xC3D03F0)
#define NDHMIJHMGIL_HKHHIFBKDJN_OFFSET UNITYSDK_OFFSET(0xC3B5CA0)
#define NDHMIJHMGIL_HKJECEOBJLA_OFFSET UNITYSDK_OFFSET(0xC3CE950)
#define NDHMIJHMGIL_HMLOFKGEAFO_OFFSET UNITYSDK_OFFSET(0xC3D16C0)
#define NDHMIJHMGIL_HOGHOBDPFHO_OFFSET UNITYSDK_OFFSET(0xC3B5030)
#define NDHMIJHMGIL_HPPHBAHNKDM_OFFSET UNITYSDK_OFFSET(0xC3D1230)
#define NDHMIJHMGIL_IBAKIEMEJLH_OFFSET UNITYSDK_OFFSET(0xC3CC430)
#define NDHMIJHMGIL_IDBLPKHMMAC_OFFSET UNITYSDK_OFFSET(0xC3C7630)
#define NDHMIJHMGIL_IEJDBIHNHKF_OFFSET UNITYSDK_OFFSET(0xC3D2290)
#define NDHMIJHMGIL_IIBBIPHALLN_OFFSET UNITYSDK_OFFSET(0xC3D19C0)
#define NDHMIJHMGIL_IIBHLJHOPDP_OFFSET UNITYSDK_OFFSET(0xC3C4260)
#define NDHMIJHMGIL_IIELGCCDEHG_OFFSET UNITYSDK_OFFSET(0xC3C9C00)
#define NDHMIJHMGIL_IJHDPACDLGE_OFFSET UNITYSDK_OFFSET(0xC3CF260)
#define NDHMIJHMGIL_IKNGLGHOFAG_OFFSET UNITYSDK_OFFSET(0xC3CCA90)
#define NDHMIJHMGIL_IMJKCPCMDAO_OFFSET UNITYSDK_OFFSET(0xC3BB7F0)
#define NDHMIJHMGIL_INAANJLPKMO_OFFSET UNITYSDK_OFFSET(0xC3CDD00)
#define NDHMIJHMGIL_IOMEGDOMLEB_OFFSET UNITYSDK_OFFSET(0xC3C7080)
#define NDHMIJHMGIL_IPFOBIHOLKO_OFFSET UNITYSDK_OFFSET(0xC3D1DE0)
#define NDHMIJHMGIL_JBFKLNDDIKC_OFFSET UNITYSDK_OFFSET(0xC3C9370)
#define NDHMIJHMGIL_JBPIMINAAOE_OFFSET UNITYSDK_OFFSET(0xC3D03A0)
#define NDHMIJHMGIL_JCLKPHLGJKL_OFFSET UNITYSDK_OFFSET(0xC3B9A80)
#define NDHMIJHMGIL_JEAJJPKAEJG_OFFSET UNITYSDK_OFFSET(0xC3B4FA0)
#define NDHMIJHMGIL_JFACGMBKCCN_OFFSET UNITYSDK_OFFSET(0xC3C9D30)
#define NDHMIJHMGIL_JFFPHCIAOKM_OFFSET UNITYSDK_OFFSET(0xC3CF060)
#define NDHMIJHMGIL_JGCCACCMHCM_OFFSET UNITYSDK_OFFSET(0xC3CA4B0)
#define NDHMIJHMGIL_JIIPLJACJFP_OFFSET UNITYSDK_OFFSET(0xC3C9260)
#define NDHMIJHMGIL_JKEHJPJCKEF_OFFSET UNITYSDK_OFFSET(0xC3C5580)
#define NDHMIJHMGIL_JNMDPEECEJE_OFFSET UNITYSDK_OFFSET(0xC3CDE90)
#define NDHMIJHMGIL_JOABNKOJFPO_OFFSET UNITYSDK_OFFSET(0xC3C76D0)
#define NDHMIJHMGIL_JOCHHNNFDFC_OFFSET UNITYSDK_OFFSET(0xC3BBB90)
#define NDHMIJHMGIL_JPINACHBAJL_OFFSET UNITYSDK_OFFSET(0xC3C6FF0)
#define NDHMIJHMGIL_KABMPEPKGFP_OFFSET UNITYSDK_OFFSET(0xC3D0B60)
#define NDHMIJHMGIL_KAFDAMMKAGL_OFFSET UNITYSDK_OFFSET(0xC3BACE0)
#define NDHMIJHMGIL_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xC3C92B0)
#define NDHMIJHMGIL_KBPEKFIACAP_OFFSET UNITYSDK_OFFSET(0xC3B7820)
#define NDHMIJHMGIL_KCKIDLDLGMC_OFFSET UNITYSDK_OFFSET(0xC3CAB50)
#define NDHMIJHMGIL_KCLNNLDHCKJ_OFFSET UNITYSDK_OFFSET(0xC3CD760)
#define NDHMIJHMGIL_KDKDANLJPIJ_OFFSET UNITYSDK_OFFSET(0xC3CEAB0)
#define NDHMIJHMGIL_KHCBKDIPKAJ_OFFSET UNITYSDK_OFFSET(0xC3BB350)
#define NDHMIJHMGIL_KIDPOHBMHFC_OFFSET UNITYSDK_OFFSET(0xC3B58E0)
#define NDHMIJHMGIL_KJDOJNJDDJN_OFFSET UNITYSDK_OFFSET(0xC3D11D0)
#define NDHMIJHMGIL_KNBJFGPACDH_OFFSET UNITYSDK_OFFSET(0xC3D2180)
#define NDHMIJHMGIL_LACOFEOALEN_1_OFFSET UNITYSDK_OFFSET(0xC3CFED0)
#define NDHMIJHMGIL_LACOFEOALEN_OFFSET UNITYSDK_OFFSET(0xC3CFDB0)
#define NDHMIJHMGIL_LALKJOMGCNN_OFFSET UNITYSDK_OFFSET(0xC3BA1B0)
#define NDHMIJHMGIL_LBBPMNDEMOK_OFFSET UNITYSDK_OFFSET(0xC3C5C00)
#define NDHMIJHMGIL_LCONKOKBGNG_OFFSET UNITYSDK_OFFSET(0xC3B93C0)
#define NDHMIJHMGIL_LDNBANDHCJP_OFFSET UNITYSDK_OFFSET(0xC3C7680)
#define NDHMIJHMGIL_LFLPKNJHLOF_OFFSET UNITYSDK_OFFSET(0xC3B7C50)
#define NDHMIJHMGIL_LMHOBACMBAE_OFFSET UNITYSDK_OFFSET(0xC3CD110)
#define NDHMIJHMGIL_LNFHHPGMILH_OFFSET UNITYSDK_OFFSET(0xC3CA680)
#define NDHMIJHMGIL_LNOIIBAFADK_OFFSET UNITYSDK_OFFSET(0xC3BAFF0)
#define NDHMIJHMGIL_LPLNCDDAGNI_OFFSET UNITYSDK_OFFSET(0xC3B5410)
#define NDHMIJHMGIL_LPOKPGENOPB_OFFSET UNITYSDK_OFFSET(0xC3B8960)
#define NDHMIJHMGIL_MFEDKGHADMD_OFFSET UNITYSDK_OFFSET(0xC3B9FB0)
#define NDHMIJHMGIL_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xC3C7D80)
#define NDHMIJHMGIL_MKCDCOEECNC_OFFSET UNITYSDK_OFFSET(0xC3CA9E0)
#define NDHMIJHMGIL_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0xC3C5460)
#define NDHMIJHMGIL_MNHJCAPJOKN_OFFSET UNITYSDK_OFFSET(0xC3CD7D0)
#define NDHMIJHMGIL_MPJLHNPFCCP_OFFSET UNITYSDK_OFFSET(0xC3CD5B0)
#define NDHMIJHMGIL_NBJDJNEOEJB_OFFSET UNITYSDK_OFFSET(0xC3D1CC0)
#define NDHMIJHMGIL_NCJCMMPEMFP_OFFSET UNITYSDK_OFFSET(0xC3C9440)
#define NDHMIJHMGIL_NGAMMDPGIGN_OFFSET UNITYSDK_OFFSET(0xC3B7AD0)
#define NDHMIJHMGIL_NHGDBHDIIAI_OFFSET UNITYSDK_OFFSET(0xC3BEF70)
#define NDHMIJHMGIL_NHPBCCNGEFG_OFFSET UNITYSDK_OFFSET(0xC3CDDD0)
#define NDHMIJHMGIL_NHPCAHPNHBF_OFFSET UNITYSDK_OFFSET(0xC3BDAC0)
#define NDHMIJHMGIL_NIBCKCMKMMI_OFFSET UNITYSDK_OFFSET(0xC3BA960)
#define NDHMIJHMGIL_NLAPLIAFDPP_OFFSET UNITYSDK_OFFSET(0xC3CA980)
#define NDHMIJHMGIL_NMIONIKFDOJ_OFFSET UNITYSDK_OFFSET(0xC3C9F30)
#define NDHMIJHMGIL_NNNJFKPAIDN_OFFSET UNITYSDK_OFFSET(0xC3D1540)
#define NDHMIJHMGIL_NOBHKKNDKGK_OFFSET UNITYSDK_OFFSET(0xC3B4240)
#define NDHMIJHMGIL_NOCFHNMEGDH_OFFSET UNITYSDK_OFFSET(0xC3C8500)
#define NDHMIJHMGIL_NOPGIOCNEOB_OFFSET UNITYSDK_OFFSET(0xC3BFE30)
#define NDHMIJHMGIL_NPFBJJBJDIG_OFFSET UNITYSDK_OFFSET(0xC3D1B40)
#define NDHMIJHMGIL_NPKIGEAONPJ_OFFSET UNITYSDK_OFFSET(0xC3CF3F0)
#define NDHMIJHMGIL_OCNIJJODPFH_OFFSET UNITYSDK_OFFSET(0xC3C3310)
#define NDHMIJHMGIL_ODEMCJOPEBA_OFFSET UNITYSDK_OFFSET(0xC3BB1A0)
#define NDHMIJHMGIL_ODNMBCFNAEC_OFFSET UNITYSDK_OFFSET(0xC3C5650)
#define NDHMIJHMGIL_OGCONMODGJP_OFFSET UNITYSDK_OFFSET(0xC3CA440)
#define NDHMIJHMGIL_OGMCEHHMKCP_OFFSET UNITYSDK_OFFSET(0xC3C79D0)
#define NDHMIJHMGIL_OIEMMEDFCPI_OFFSET UNITYSDK_OFFSET(0xC3C2DA0)
#define NDHMIJHMGIL_OIFAPNBDGLA_OFFSET UNITYSDK_OFFSET(0xC3C7C90)
#define NDHMIJHMGIL_OINBDMGFFJL_1_OFFSET UNITYSDK_OFFSET(0xC3B4EA0)
#define NDHMIJHMGIL_OINBDMGFFJL_2_OFFSET UNITYSDK_OFFSET(0xC3B4560)
#define NDHMIJHMGIL_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xC3B4440)
#define NDHMIJHMGIL_OKCOJOFCBFA_OFFSET UNITYSDK_OFFSET(0xC3CCC10)
#define NDHMIJHMGIL_ONDHNLCCBCB_OFFSET UNITYSDK_OFFSET(0xC3D1180)
#define NDHMIJHMGIL_ONPDPHAMJCM_OFFSET UNITYSDK_OFFSET(0xC3BCD40)
#define NDHMIJHMGIL_OODNAEEEEEM_OFFSET UNITYSDK_OFFSET(0xC3BB920)
#define NDHMIJHMGIL_PAGHKOBCJGC_OFFSET UNITYSDK_OFFSET(0xC3D0D90)
#define NDHMIJHMGIL_PAJOBMIEENC_OFFSET UNITYSDK_OFFSET(0xC3BB3B0)
#define NDHMIJHMGIL_PBCLKMHPACG_OFFSET UNITYSDK_OFFSET(0xC3C6BC0)
#define NDHMIJHMGIL_PEOOHJOEOAM_OFFSET UNITYSDK_OFFSET(0xC3CF2E0)
#define NDHMIJHMGIL_PGLKJPOBOBH_OFFSET UNITYSDK_OFFSET(0xC3C1C70)
#define NDHMIJHMGIL_PHHKOPNDGLM_OFFSET UNITYSDK_OFFSET(0xC3CFCC0)
#define NDHMIJHMGIL_PHKHDPCJFJH_OFFSET UNITYSDK_OFFSET(0xC3BA5B0)
#define NDHMIJHMGIL_PHPDKFNCEHB_OFFSET UNITYSDK_OFFSET(0xC3BB400)
#define NDHMIJHMGIL_PLKIALBACDE_OFFSET UNITYSDK_OFFSET(0xC3D1840)
#define NDHMIJHMGIL_POPAGHENDCC_OFFSET UNITYSDK_OFFSET(0xC3D1480)
#define NDHMIJHMGIL_PPANGFIJBIL_OFFSET UNITYSDK_OFFSET(0xC3C7A50)
#define NDHMIJHMGIL_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC3D2280)
#define NDHMIJHMGIL__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC3B8E40)
#define NDHMIJHMGIL__ONINIT_OFFSET UNITYSDK_OFFSET(0xC3B3780)
#define NDHMIJHMGIL__ONSHOWSKILLUI_B__79_0_OFFSET UNITYSDK_OFFSET(0xC3D2610)
#define NDHMIJHMGIL__ONTICK_OFFSET UNITYSDK_OFFSET(0xC3BA050)

inline static constexpr unsigned int NDHMIJHMGIL_TypeDefinitionIndex = 61707;

	class NDHMIJHMGIL : public ::HCLPKMIIANI
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* KFNPMDHLNNK; // 0x78
		::UnityEngine::GameObject* JGMLONJJBCO; // 0x80
		::RPG::Client::UIController* OHPHBGNAGIO; // 0x88
		::RPG::Client::AchievementData* KHMMGOACEAE; // 0x90
		::GIPCDLCCMKA* HEJHGJIGEGK; // 0x98
		::Il2CppArray<::UnityEngine::RaycastHit>* LIEMGOHMCCD; // 0xA0
		::EOMDNNNKFKE* OOECBOEFICP; // 0xA8
		::FPJKIGOKMJC* MOAHPOKJFMH; // 0xB0
		::BJEIMIBGPIG* MJGPFHFDFNB; // 0xB8
		::RPG::Client::LuaUIController* LCIACOLKKKM; // 0xC0
		::UnityEngine::GameObject* CIMBLNFKLAM; // 0xC8
		::RPG::Client::AchievementData* IDEENEDPJCK; // 0xD0
		::EFJKLLCCABF* INKDFFOPMHI; // 0xD8
		::ENNJFOGNKAL* EMBAACDBLFK; // 0xE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::System::UInt32>* AHDEONMPMHE; // 0xE8
		::RPG::Client::AchievementData* LGHAEFKAECA; // 0xF0
		::UnityEngine::GameObject* JNCDPIELMAI; // 0xF8
		::FDPALAEIHPB* FKINCGODJEP; // 0x100
		::PJAAKKLBCII* BKNBPCLGHPB; // 0x108
		::RPG::GameCore::MarbleMatchInfoConfigRow* GPIEMOJADLM; // 0x110
		::System::String* BBCOHPKOEOF; // 0x118
		::PLHAEBMKIFA* FHPILMPBILI; // 0x120
		::RPG::GameCore::GameEntity* NBEMEHAHGEG; // 0x128
		::UnityEngine::GameObject* FDNIHBABPPJ; // 0x130
		::HJNDPHEDAGM* PDENFEFCAGN; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* HILODJJFJHP; // 0x140
		::System::Random* OLEEIPHBJKB; // 0x148
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x150
		::System::Collections::Generic::List_1<::System::UInt32>* IJPJCHNDPLD; // 0x158
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MonoEffect*>* COMLBCOADML; // 0x160
		::GFHCKBHCNDF* OFDPLBGNAMI; // 0x168
		::System::Single MEECCGANNAG; // 0x170
		::System::UInt32 PPBDHEEBAOL; // 0x174
		::UnityEngine::Vector3 AEGGCPFGBOL; // 0x178
		::FJPMJPEKLJL _GameMode_k__BackingField; // 0x184
		::System::Single AILFDBNLPNM; // 0x188
		::System::Single INJFDOCIPEJ; // 0x18C
		::System::Single IPFONLADGFD; // 0x190
		::System::Single EFLJPELIKAH; // 0x194
		::System::UInt32 GPIHDCJDCOO; // 0x198
		::UnityEngine::Vector3 LKBCLLCFEAL; // 0x19C
		::System::Int32 KBDPMBDJIOF; // 0x1A8
		::System::Boolean EFMNEMIGAID; // 0x1AC
		::System::Boolean JCJOKNDGPMG; // 0x1AD
		::System::Boolean PNLOEHDPKDJ; // 0x1AE
		::System::Boolean DLCDADAHGEK; // 0x1AF
		::System::Boolean FEFJLDILGJI; // 0x1B0
		::System::Nullable_1<::System::Boolean> AJPACLNPLJC; // 0x1B1
		::System::Boolean GFAMGLFOMGI; // 0x1B3
		::System::Boolean JKIJNMKLAGN; // 0x1B4
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PetMarbleLevelMode OPOBELBEFIM; // 0x1B8
		static ::System::String** StaticGet_PIBIMLHEFLC()
		{
			return (::System::String**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x25400);
		}

		static ::RPG::GameCore::GlobalMarbleEffectConfig** StaticGet_GMOHEHHEGGJ()
		{
			return (::RPG::GameCore::GlobalMarbleEffectConfig**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x25408);
		}

		static ::RPG::GameCore::MarbleGameConfig** StaticGet_DPHDFKHIMEC()
		{
			return (::RPG::GameCore::MarbleGameConfig**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x25410);
		}

		static ::System::String** StaticGet_KFOCMCJLIKB()
		{
			return (::System::String**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x25418);
		}

		static ::System::String** StaticGet_KGKNBALLEPD()
		{
			return (::System::String**)UnitySDK::FromName("", "NDHMIJHMGIL")->GetStaticField(0x25420);
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

		::System::UInt32 HKJECEOBJLA(::DFGDEHAHLHC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_HKJECEOBJLA_OFFSET))(this, a1);
		}

		::System::Int32 AABBCLIIJJB(::DFGDEHAHLHC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + NDHMIJHMGIL_AABBCLIIJJB_OFFSET))(this, a1);
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
