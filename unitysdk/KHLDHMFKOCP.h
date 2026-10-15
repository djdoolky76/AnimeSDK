#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIHOEEPIBAI.h"
#include "unitysdk/CKHKFIEAAII.h"
#include "unitysdk/DNLHKFILMLB.h"
#include "unitysdk/EJLGEOKIJKH.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleTitleCondition.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class AOKDLPNDMMO;
class DCECJENGJLD;
class DHFLEJMNGDL;
class EHEHDOKBFAL;
class FBDPOPBPHKP;
class GFFDMPOCAIP;
class GFFGIMJINFH;
class GFHCKBHCNDF;
class GPGLNCGCLLG;
class IFFJIHFGOBO;
class IOCAFIDJADI;
class JICPKADGNIF;
class KCNBJHLBNKE;
class KHLDHMFKOCP_FHMFJBMKDMN;
class KHLDHMFKOCP_GGJLGLKHCKL;
class KHLDHMFKOCP_KFHDKLFDNNH;
class KJGHJALPCCP;
class LDEKBGAOMFJ;
class LIJFHHMGBFE;
class MIBEBGCMPOL;
class NAGIOAKDDMJ;
class NBIBOKEFKIH;
class ODLEEMAALIP;
class OELHAMANGBN;
class OFADHJMIFKO;
class OHPEFFELPKG;
class OOBKAONOBAK;
class PBOFFJNBFMI;
class PLAGFACLPDL;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameTransformComponentConfig; }
namespace RPG::GameCore { class MarbleFieldComponentConfig; }
namespace RPG::GameCore { class MarbleItemComponentConfig; }
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace System { class Object; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHLDHMFKOCP_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0x1CB6EEF0)
#define KHLDHMFKOCP_ABLELGPMIGL_OFFSET UNITYSDK_OFFSET(0x1CB8FA10)
#define KHLDHMFKOCP_ACDHDCMPLLF_OFFSET UNITYSDK_OFFSET(0x1CB92170)
#define KHLDHMFKOCP_ACKLIKNJFIF_OFFSET UNITYSDK_OFFSET(0x1CB8D4B0)
#define KHLDHMFKOCP_ACOIJECFDNM_OFFSET UNITYSDK_OFFSET(0x1CB97840)
#define KHLDHMFKOCP_ADDLNJADPON_OFFSET UNITYSDK_OFFSET(0x1CB9B040)
#define KHLDHMFKOCP_AELFIKEAPOG_OFFSET UNITYSDK_OFFSET(0x1CBAE340)
#define KHLDHMFKOCP_AFJCALIMPGP_OFFSET UNITYSDK_OFFSET(0x1CB93250)
#define KHLDHMFKOCP_AFMCFBDPDEO_OFFSET UNITYSDK_OFFSET(0x1CBA2BE0)
#define KHLDHMFKOCP_AHBCMDAGJLI_OFFSET UNITYSDK_OFFSET(0x1CBA75A0)
#define KHLDHMFKOCP_AHOPPNCKLKD_OFFSET UNITYSDK_OFFSET(0x1CBA8720)
#define KHLDHMFKOCP_AKBODBCDPKG_OFFSET UNITYSDK_OFFSET(0x1CB9A4A0)
#define KHLDHMFKOCP_AKLHMDBLKDA_OFFSET UNITYSDK_OFFSET(0x1CBA24D0)
#define KHLDHMFKOCP_ANAADOEAPNE_OFFSET UNITYSDK_OFFSET(0x1CBAA030)
#define KHLDHMFKOCP_BAGPHIPKJFI_OFFSET UNITYSDK_OFFSET(0x1CB8E070)
#define KHLDHMFKOCP_BAIOMLLLCPK_OFFSET UNITYSDK_OFFSET(0x1CBA7AE0)
#define KHLDHMFKOCP_BBDLBDHKEBI_OFFSET UNITYSDK_OFFSET(0x1CB8B960)
#define KHLDHMFKOCP_BBMDKBOJLPA_OFFSET UNITYSDK_OFFSET(0x1CBA3310)
#define KHLDHMFKOCP_BEGGFDAHBAP_OFFSET UNITYSDK_OFFSET(0x1CB949B0)
#define KHLDHMFKOCP_BEIMJPLFPDH_OFFSET UNITYSDK_OFFSET(0x1CB8F0E0)
#define KHLDHMFKOCP_BEKALLLHNCO_OFFSET UNITYSDK_OFFSET(0x1CB8DC10)
#define KHLDHMFKOCP_BGCOIDIAGOE_OFFSET UNITYSDK_OFFSET(0x1CB95690)
#define KHLDHMFKOCP_BHENHIKLKGM_OFFSET UNITYSDK_OFFSET(0x1CB905B0)
#define KHLDHMFKOCP_BHNICHCCBDC_OFFSET UNITYSDK_OFFSET(0x1CBAC130)
#define KHLDHMFKOCP_BMHGDLBDPLE_OFFSET UNITYSDK_OFFSET(0x1CB8D3C0)
#define KHLDHMFKOCP_BMLJCLMJBPC_OFFSET UNITYSDK_OFFSET(0x1CB97900)
#define KHLDHMFKOCP_BNJALNCJHKE_OFFSET UNITYSDK_OFFSET(0x1CB8D000)
#define KHLDHMFKOCP_BOCPHJOJACJ_OFFSET UNITYSDK_OFFSET(0x1CB9B890)
#define KHLDHMFKOCP_BOGHHAPEKAB_OFFSET UNITYSDK_OFFSET(0x1CB91750)
#define KHLDHMFKOCP_BPDHIHPEKMH_OFFSET UNITYSDK_OFFSET(0x1CBA8860)
#define KHLDHMFKOCP_CAIKADMOIGL_OFFSET UNITYSDK_OFFSET(0x1CB66370)
#define KHLDHMFKOCP_CBGPBILBBPJ_OFFSET UNITYSDK_OFFSET(0x1CBA3030)
#define KHLDHMFKOCP_CBNJJMGBCJA_OFFSET UNITYSDK_OFFSET(0x1CBA6150)
#define KHLDHMFKOCP_CCBPCDNBBDA_OFFSET UNITYSDK_OFFSET(0x1CB908C0)
#define KHLDHMFKOCP_CDJCPDGGAAH_OFFSET UNITYSDK_OFFSET(0x1CB8D0A0)
#define KHLDHMFKOCP_CFEMFODPFLJ_OFFSET UNITYSDK_OFFSET(0x1CBA5EC0)
#define KHLDHMFKOCP_CGKNCEMAKOC_OFFSET UNITYSDK_OFFSET(0x1CB92430)
#define KHLDHMFKOCP_CHGLIHOLBNK_OFFSET UNITYSDK_OFFSET(0x1CB989F0)
#define KHLDHMFKOCP_CKDNEJOOJGI_OFFSET UNITYSDK_OFFSET(0x1CBA3E90)
#define KHLDHMFKOCP_CMPJHBDONPA_OFFSET UNITYSDK_OFFSET(0x1CB8D200)
#define KHLDHMFKOCP_CNIKEMHCBAM_OFFSET UNITYSDK_OFFSET(0x1CB6EEA0)
#define KHLDHMFKOCP_COILEEHOHGI_OFFSET UNITYSDK_OFFSET(0x1CBAC6E0)
#define KHLDHMFKOCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89EF0)
#define KHLDHMFKOCP_DCNEINMBJJH_OFFSET UNITYSDK_OFFSET(0x1CB8B050)
#define KHLDHMFKOCP_DFPIOBBPPKE_OFFSET UNITYSDK_OFFSET(0x1CBA0F60)
#define KHLDHMFKOCP_DJLFFGDBLKK_OFFSET UNITYSDK_OFFSET(0x1CB90410)
#define KHLDHMFKOCP_DKAKHBFJEAH_OFFSET UNITYSDK_OFFSET(0x1CBA9380)
#define KHLDHMFKOCP_DKGPFEPFKPA_OFFSET UNITYSDK_OFFSET(0x1CB91660)
#define KHLDHMFKOCP_DLKPEAGCOHE_OFFSET UNITYSDK_OFFSET(0x1CBA60B0)
#define KHLDHMFKOCP_EAHJMJKHEJC_OFFSET UNITYSDK_OFFSET(0x1CBAA380)
#define KHLDHMFKOCP_EIEGFODGHOB_OFFSET UNITYSDK_OFFSET(0x1CB97C30)
#define KHLDHMFKOCP_EMIJKFCDBDF_OFFSET UNITYSDK_OFFSET(0x1CB8AA80)
#define KHLDHMFKOCP_ENAFJKJNOCE_OFFSET UNITYSDK_OFFSET(0x1CB947C0)
#define KHLDHMFKOCP_ENMFMHBCOKH_OFFSET UNITYSDK_OFFSET(0x1CBAAE00)
#define KHLDHMFKOCP_EPLKDANFFPH_OFFSET UNITYSDK_OFFSET(0x1CB8B060)
#define KHLDHMFKOCP_EPPGMEKFFIB_OFFSET UNITYSDK_OFFSET(0x1CB94740)
#define KHLDHMFKOCP_FBEELECFOBN_OFFSET UNITYSDK_OFFSET(0x1CB9C250)
#define KHLDHMFKOCP_FDPIHHBOCEJ_OFFSET UNITYSDK_OFFSET(0x1CBAA310)
#define KHLDHMFKOCP_FELELDJGEAL_OFFSET UNITYSDK_OFFSET(0x1CBAD170)
#define KHLDHMFKOCP_FFIPACGAOHD_OFFSET UNITYSDK_OFFSET(0x1CB8ACF0)
#define KHLDHMFKOCP_FGCLGFMIOLM_OFFSET UNITYSDK_OFFSET(0x1CBA33D0)
#define KHLDHMFKOCP_FGFLAPDLGAB_OFFSET UNITYSDK_OFFSET(0x1CBAA6D0)
#define KHLDHMFKOCP_FGPMIGKECCM_OFFSET UNITYSDK_OFFSET(0x1CBA6260)
#define KHLDHMFKOCP_FHHMCEJMHAM_OFFSET UNITYSDK_OFFSET(0x1CB78530)
#define KHLDHMFKOCP_FHJMBIBCNMP_OFFSET UNITYSDK_OFFSET(0x1CBA3430)
#define KHLDHMFKOCP_FJLAMBDOHEG_OFFSET UNITYSDK_OFFSET(0x1CB92350)
#define KHLDHMFKOCP_FNNAKLCBEEN_OFFSET UNITYSDK_OFFSET(0x1CBAACD0)
#define KHLDHMFKOCP_FONJNAEEFGJ_OFFSET UNITYSDK_OFFSET(0x1CBA8A80)
#define KHLDHMFKOCP_GAEBMEDMDIJ_OFFSET UNITYSDK_OFFSET(0x1CB9E2D0)
#define KHLDHMFKOCP_GEGGIGNLEBD_OFFSET UNITYSDK_OFFSET(0x1CBA6B20)
#define KHLDHMFKOCP_GEIGKDIOGIE_OFFSET UNITYSDK_OFFSET(0x1CBAEB60)
#define KHLDHMFKOCP_GET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x1CBAEDD0)
#define KHLDHMFKOCP_GET_COOPALLYUSEAI_OFFSET UNITYSDK_OFFSET(0x1CBAED10)
#define KHLDHMFKOCP_GET_CURRENTACTIONPLAYERID_OFFSET UNITYSDK_OFFSET(0x1CBAEE50)
#define KHLDHMFKOCP_GET_CURRENTWAVEINDEX_OFFSET UNITYSDK_OFFSET(0x1CBAEE70)
#define KHLDHMFKOCP_GET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBAEEC0)
#define KHLDHMFKOCP_GET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x1CBAEEE0)
#define KHLDHMFKOCP_GET_GUEST_OFFSET UNITYSDK_OFFSET(0x1CBAEE90)
#define KHLDHMFKOCP_GET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x1CBAEDF0)
#define KHLDHMFKOCP_GET_INSTAT_OFFSET UNITYSDK_OFFSET(0x1CBAEB20)
#define KHLDHMFKOCP_GET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x1CBAEE10)
#define KHLDHMFKOCP_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x1CBAECF0)
#define KHLDHMFKOCP_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1CBAED90)
#define KHLDHMFKOCP_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1CBAEDB0)
#define KHLDHMFKOCP_GET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x1CBAED70)
#define KHLDHMFKOCP_GET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x1CBAED50)
#define KHLDHMFKOCP_GET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x1CBAED30)
#define KHLDHMFKOCP_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBAEB40)
#define KHLDHMFKOCP_GET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x1CBAEE30)
#define KHLDHMFKOCP_GFFAEABFJFJ_OFFSET UNITYSDK_OFFSET(0x1CBA6530)
#define KHLDHMFKOCP_GGMCFOOJHAG_OFFSET UNITYSDK_OFFSET(0x1CBA7050)
#define KHLDHMFKOCP_GJDEJMOJNHL_OFFSET UNITYSDK_OFFSET(0x1CB8FD70)
#define KHLDHMFKOCP_GJOHKNNNFJA_OFFSET UNITYSDK_OFFSET(0x1CB93210)
#define KHLDHMFKOCP_GKPFIBCNGJF_OFFSET UNITYSDK_OFFSET(0x1CB8CFA0)
#define KHLDHMFKOCP_GMLHJNHJEBG_OFFSET UNITYSDK_OFFSET(0x1CB8EE00)
#define KHLDHMFKOCP_GNBCHAPKEJF_OFFSET UNITYSDK_OFFSET(0x1CB8FC20)
#define KHLDHMFKOCP_GNJPOHDJLNL_OFFSET UNITYSDK_OFFSET(0x1CB94900)
#define KHLDHMFKOCP_HBCPAEFKFKL_OFFSET UNITYSDK_OFFSET(0x1CBA2760)
#define KHLDHMFKOCP_HBOIGIFOPFJ_OFFSET UNITYSDK_OFFSET(0x1CB8E190)
#define KHLDHMFKOCP_HCNHGGMANJA_OFFSET UNITYSDK_OFFSET(0x1CB8D250)
#define KHLDHMFKOCP_HCPBLDBELIA_OFFSET UNITYSDK_OFFSET(0x1CBAEC40)
#define KHLDHMFKOCP_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0x1CBAEEB0)
#define KHLDHMFKOCP_HGAMNMANFOJ_OFFSET UNITYSDK_OFFSET(0x1CB8E6D0)
#define KHLDHMFKOCP_HGLIODMFLAI_OFFSET UNITYSDK_OFFSET(0x1CBA91C0)
#define KHLDHMFKOCP_HKKCMPPACCP_OFFSET UNITYSDK_OFFSET(0x1CB96A20)
#define KHLDHMFKOCP_ICPHAPGEDOE_OFFSET UNITYSDK_OFFSET(0x1CB8DD70)
#define KHLDHMFKOCP_IEODJPPKCLC_OFFSET UNITYSDK_OFFSET(0x1CBA87D0)
#define KHLDHMFKOCP_IFEOBHGPEAK_OFFSET UNITYSDK_OFFSET(0x1CBA5D70)
#define KHLDHMFKOCP_IGCAPALDOAF_OFFSET UNITYSDK_OFFSET(0x1CBA4FF0)
#define KHLDHMFKOCP_IGMLHMKMONI_OFFSET UNITYSDK_OFFSET(0x1CB8F360)
#define KHLDHMFKOCP_IJLBDMIOFLE_OFFSET UNITYSDK_OFFSET(0x1CB8DEA0)
#define KHLDHMFKOCP_IMKGKNCFGCB_OFFSET UNITYSDK_OFFSET(0x1CBA30C0)
#define KHLDHMFKOCP_INBGFEJJNHH_OFFSET UNITYSDK_OFFSET(0x1CB6E310)
#define KHLDHMFKOCP_IPGEMMLNPGP_OFFSET UNITYSDK_OFFSET(0x1CB8DB10)
#define KHLDHMFKOCP_JGDIHOGPOGK_OFFSET UNITYSDK_OFFSET(0x1CB92FE0)
#define KHLDHMFKOCP_JHONCANNNIK_OFFSET UNITYSDK_OFFSET(0x1CB8F450)
#define KHLDHMFKOCP_JKIEIIBADCB_OFFSET UNITYSDK_OFFSET(0x1CB8F970)
#define KHLDHMFKOCP_JKNJFDLCHBC_OFFSET UNITYSDK_OFFSET(0x1CBA4D20)
#define KHLDHMFKOCP_JLJMJNDEJBJ_OFFSET UNITYSDK_OFFSET(0x1CB90970)
#define KHLDHMFKOCP_JLMBNOMBLPC_OFFSET UNITYSDK_OFFSET(0x1CB95BD0)
#define KHLDHMFKOCP_KAPDJOPDGDJ_OFFSET UNITYSDK_OFFSET(0x1CB9CAE0)
#define KHLDHMFKOCP_KBELKEFCLID_OFFSET UNITYSDK_OFFSET(0x1CBA0BF0)
#define KHLDHMFKOCP_KDBOHPFIAEE_OFFSET UNITYSDK_OFFSET(0x1CB99A40)
#define KHLDHMFKOCP_KEBIBCDLOAH_OFFSET UNITYSDK_OFFSET(0x1CB98CF0)
#define KHLDHMFKOCP_KENPHKPDKGF_OFFSET UNITYSDK_OFFSET(0x1CBAB430)
#define KHLDHMFKOCP_KFMKIILACOA_OFFSET UNITYSDK_OFFSET(0x1CB8BF20)
#define KHLDHMFKOCP_KIICBOFJBGJ_OFFSET UNITYSDK_OFFSET(0x1CB6F0F0)
#define KHLDHMFKOCP_KKFJOEOIKLA_OFFSET UNITYSDK_OFFSET(0x1CB9B2D0)
#define KHLDHMFKOCP_KKNFOIIINFP_OFFSET UNITYSDK_OFFSET(0x1CB64360)
#define KHLDHMFKOCP_LAIKMPBDLHC_OFFSET UNITYSDK_OFFSET(0x1CBA61E0)
#define KHLDHMFKOCP_LCGGJIEPAEF_OFFSET UNITYSDK_OFFSET(0x1CBA0100)
#define KHLDHMFKOCP_LDLMGJKNGEG_OFFSET UNITYSDK_OFFSET(0x1CB975D0)
#define KHLDHMFKOCP_LDPFFJAGJME_OFFSET UNITYSDK_OFFSET(0x1CBAD720)
#define KHLDHMFKOCP_LHBFDFPFCJG_OFFSET UNITYSDK_OFFSET(0x1CB94850)
#define KHLDHMFKOCP_LHOPNAKBDEP_OFFSET UNITYSDK_OFFSET(0x1CB8F890)
#define KHLDHMFKOCP_LKLJILKEOLA_OFFSET UNITYSDK_OFFSET(0x1CB9D500)
#define KHLDHMFKOCP_LPFLNDFOLNA_OFFSET UNITYSDK_OFFSET(0x1CB8CB10)
#define KHLDHMFKOCP_MAHHAGKFCCK_OFFSET UNITYSDK_OFFSET(0x1CBACB10)
#define KHLDHMFKOCP_MBEPMIKCDHJ_OFFSET UNITYSDK_OFFSET(0x1CBA9B70)
#define KHLDHMFKOCP_MCLABCLKNDM_OFFSET UNITYSDK_OFFSET(0x1CBA6020)
#define KHLDHMFKOCP_MCNBCHKJKDP_OFFSET UNITYSDK_OFFSET(0x1CB6F860)
#define KHLDHMFKOCP_MFNPPGJBEHD_OFFSET UNITYSDK_OFFSET(0x1CBADEF0)
#define KHLDHMFKOCP_MJGOODMPMBE_OFFSET UNITYSDK_OFFSET(0x1CB920F0)
#define KHLDHMFKOCP_MJJHELMAIJA_OFFSET UNITYSDK_OFFSET(0x1CB8B3B0)
#define KHLDHMFKOCP_MKBABFADLGL_OFFSET UNITYSDK_OFFSET(0x1CBAE2D0)
#define KHLDHMFKOCP_MKJABHGPPBF_OFFSET UNITYSDK_OFFSET(0x1CBABFB0)
#define KHLDHMFKOCP_MMEMJFDKPAK_OFFSET UNITYSDK_OFFSET(0x1CB94AE0)
#define KHLDHMFKOCP_MMONIMDDOOG_OFFSET UNITYSDK_OFFSET(0x1CB98140)
#define KHLDHMFKOCP_MNFFFKCGKJB_OFFSET UNITYSDK_OFFSET(0x1CB9D5A0)
#define KHLDHMFKOCP_MOBGINFLAEC_OFFSET UNITYSDK_OFFSET(0x1CBA59C0)
#define KHLDHMFKOCP_MPPFEJPFBIG_OFFSET UNITYSDK_OFFSET(0x1CB6FB00)
#define KHLDHMFKOCP_NBNHFOPOJIK_OFFSET UNITYSDK_OFFSET(0x1CB8DA20)
#define KHLDHMFKOCP_NCHDKJMACOD_OFFSET UNITYSDK_OFFSET(0x1CB6FA50)
#define KHLDHMFKOCP_NFGJCBIAFKF_OFFSET UNITYSDK_OFFSET(0x1CB8C9C0)
#define KHLDHMFKOCP_NMOIKOCPILN_OFFSET UNITYSDK_OFFSET(0x1CB9F610)
#define KHLDHMFKOCP_NNDEKJOODAI_OFFSET UNITYSDK_OFFSET(0x1CB8B0B0)
#define KHLDHMFKOCP_NPKKCFBAEOG_OFFSET UNITYSDK_OFFSET(0x1CB9E4F0)
#define KHLDHMFKOCP_OAJGKOBIBLE_OFFSET UNITYSDK_OFFSET(0x1CB9C320)
#define KHLDHMFKOCP_OCGECPAEELF_OFFSET UNITYSDK_OFFSET(0x1CBA7100)
#define KHLDHMFKOCP_OCLFMDGPOIK_OFFSET UNITYSDK_OFFSET(0x1CBA7A70)
#define KHLDHMFKOCP_ODBMHLAKHBB_OFFSET UNITYSDK_OFFSET(0x1CBA32C0)
#define KHLDHMFKOCP_OGLAJKJOLHL_OFFSET UNITYSDK_OFFSET(0x1CB9AE00)
#define KHLDHMFKOCP_OIIGNKKKMCD_OFFSET UNITYSDK_OFFSET(0x1CB93480)
#define KHLDHMFKOCP_OKCOJOFCBFA_OFFSET UNITYSDK_OFFSET(0x1CB8A9F0)
#define KHLDHMFKOCP_OKLIBPPGCLD_OFFSET UNITYSDK_OFFSET(0x1CBABA50)
#define KHLDHMFKOCP_OMAAMNAIGJI_OFFSET UNITYSDK_OFFSET(0x1CB924E0)
#define KHLDHMFKOCP_OMHHOBAIBJD_OFFSET UNITYSDK_OFFSET(0x1CB6F060)
#define KHLDHMFKOCP_OMMKAOPLDCB_OFFSET UNITYSDK_OFFSET(0x1CBA7D20)
#define KHLDHMFKOCP_ONOOHHMDKLA_OFFSET UNITYSDK_OFFSET(0x1CBA79F0)
#define KHLDHMFKOCP_OPMKKKADEBE_OFFSET UNITYSDK_OFFSET(0x1CB6F550)
#define KHLDHMFKOCP_PBGBMBGEGPE_OFFSET UNITYSDK_OFFSET(0x1CBA8C70)
#define KHLDHMFKOCP_PBMCOMKPBPB_OFFSET UNITYSDK_OFFSET(0x1CB8F720)
#define KHLDHMFKOCP_PCENJOJFGEJ_OFFSET UNITYSDK_OFFSET(0x1CB90060)
#define KHLDHMFKOCP_PFDBFOGJCHC_OFFSET UNITYSDK_OFFSET(0x1CB8AE10)
#define KHLDHMFKOCP_PKADLLAHGBK_OFFSET UNITYSDK_OFFSET(0x1CBA64A0)
#define KHLDHMFKOCP_PLPHFBEBKJN_OFFSET UNITYSDK_OFFSET(0x1CB93180)
#define KHLDHMFKOCP_PNNIDGDMKKG_OFFSET UNITYSDK_OFFSET(0x1CBA9660)
#define KHLDHMFKOCP_PNONKOLHMLD_OFFSET UNITYSDK_OFFSET(0x1CB8B290)
#define KHLDHMFKOCP_PPKLJJDJNHH_OFFSET UNITYSDK_OFFSET(0x1CB91430)
#define KHLDHMFKOCP_SET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x1CBAEDE0)
#define KHLDHMFKOCP_SET_COOPALLYUSEAI_OFFSET UNITYSDK_OFFSET(0x1CBAED20)
#define KHLDHMFKOCP_SET_CURRENTACTIONPLAYERID_OFFSET UNITYSDK_OFFSET(0x1CBAEE60)
#define KHLDHMFKOCP_SET_CURRENTWAVEINDEX_OFFSET UNITYSDK_OFFSET(0x1CBAEE80)
#define KHLDHMFKOCP_SET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBAEED0)
#define KHLDHMFKOCP_SET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x1CBAEEF0)
#define KHLDHMFKOCP_SET_GUEST_OFFSET UNITYSDK_OFFSET(0x1CBAEEA0)
#define KHLDHMFKOCP_SET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x1CBAEE00)
#define KHLDHMFKOCP_SET_INSTAT_OFFSET UNITYSDK_OFFSET(0x1CBAEB30)
#define KHLDHMFKOCP_SET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x1CBAEE20)
#define KHLDHMFKOCP_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x1CBAED00)
#define KHLDHMFKOCP_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1CBAEDA0)
#define KHLDHMFKOCP_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1CBAEDC0)
#define KHLDHMFKOCP_SET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x1CBAED80)
#define KHLDHMFKOCP_SET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x1CBAED60)
#define KHLDHMFKOCP_SET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x1CBAED40)
#define KHLDHMFKOCP_SET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBAEB50)
#define KHLDHMFKOCP_SET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x1CBAEE40)

inline static constexpr unsigned int KHLDHMFKOCP_TypeDefinitionIndex = 43067;

	class KHLDHMFKOCP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LDEKBGAOMFJ*>* CMEKKHCGDLP; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::MarbleItemFeature>* AKFDJNMJOMD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BIDCBHNFMAA; // 0x20
		::GFHCKBHCNDF* DCCILJIBPNK; // 0x28
		::GFFGIMJINFH* AJOBPDHDAHM; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* IKFOAGJBHGB; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* OGKKPCKIFFF; // 0x40
		::OFADHJMIFKO* OIBCHBJCHJE; // 0x48
		::NBIBOKEFKIH* _ActionItem_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::NBIBOKEFKIH*>* CLCELHPIGPN; // 0x58
		::AOKDLPNDMMO* DLADIILFIIF; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LKOKKIFECBC; // 0x68
		::OHPEFFELPKG* MPPPFBPBIHD; // 0x70
		::JICPKADGNIF* _SimulateScene_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DJJHKKLNFGE; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* IFLAEHOPAGB; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>* ICIOIKMDDCE; // 0x90
		::MIBEBGCMPOL* LLHEANFMKBM; // 0x98
		::NBIBOKEFKIH* EICEMHCOJCO; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NBIBOKEFKIH*>* LKICMLJHCAK; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::Int32>* LGELELIJKLN; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::Int32>* CAAFMBLONCD; // 0xB8
		::System::Collections::Generic::List_1<::IOCAFIDJADI*>* GALLKDKEPPP; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MOJPBDKKNKI; // 0xC8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DBEGNJJFDOJ; // 0xD0
		::System::Collections::Generic::List_1<::RPG::MVector2>* OCKPJPHIMAD; // 0xD8
		::System::Random* PLNDAGLIMKM; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>* JMPBGBOGMLH; // 0xE8
		::System::Collections::Generic::List_1<::System::Object*>* KHFGFPJKLFN; // 0xF0
		::System::Collections::Generic::List_1<::System::UInt32>* AGLPEHPCJJD; // 0xF8
		::System::Collections::Generic::List_1<::NBIBOKEFKIH*>* JGLNDFBMLJH; // 0x100
		::System::Random* MOLJDGDPCBA; // 0x108
		::System::Collections::Generic::List_1<::GPGLNCGCLLG*>* OCOIDGHBAEH; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::MVector2>*>* BABBCPJMMEP; // 0x118
		::System::Collections::Generic::List_1<::System::Object*>* DJOGODNHKEK; // 0x120
		::System::Collections::Generic::List_1<::RPG::MVector2>* HDNPHKBPDIL; // 0x128
		::System::Collections::Generic::HashSet_1<::System::Int32>* IMOJJBMKMNC; // 0x130
		::System::Collections::Generic::List_1<::System::Object*>* NPODAIKHGNF; // 0x138
		::IFFJIHFGOBO* _Guest_k__BackingField; // 0x140
		::KJGHJALPCCP* EIEOCLOHHIF; // 0x148
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>* ACBHIAPLFNH; // 0x150
		::System::String* DCMFINJOJIN; // 0x158
		::System::Collections::Generic::List_1<::System::UInt32>* LLGJDOOFNHP; // 0x160
		::System::Collections::Generic::List_1<::PBOFFJNBFMI*>* ELLMNBJOLDL; // 0x168
		::System::Collections::Generic::List_1<::System::UInt32>* COKHMMIIANB; // 0x170
		::OFADHJMIFKO* CJJMDMOCPDJ; // 0x178
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HOPNHMFHJIO; // 0x180
		::System::Collections::Generic::List_1<::PBOFFJNBFMI*>* CDDDBPDOOFH; // 0x188
		::System::UInt32 LIKMPCKOHIB; // 0x190
		::System::Single _FieldWidth_k__BackingField; // 0x194
		::System::Single MDEDLMIEKKO; // 0x198
		::FJPMJPEKLJL GICHGNGMBGD; // 0x19C
		::System::UInt32 _CurrentActionPlayerId_k__BackingField; // 0x1A0
		::System::UInt32 HFEENKFGAGB; // 0x1A4
		::System::Boolean CFMFHNEDJGP; // 0x1A8
		::System::Boolean GMJOCMHIMEI; // 0x1A9
		::System::Boolean _InSimulate_k__BackingField; // 0x1AA
		::System::Boolean _InStat_k__BackingField; // 0x1AB
		::System::UInt32 _WinScore_k__BackingField; // 0x1AC
		::System::Single _FieldLength_k__BackingField; // 0x1B0
		::System::Int32 FABPKNBFLMM; // 0x1B4
		::System::Boolean _IsFriend_k__BackingField; // 0x1B8
		::System::Boolean NKDNMBJLJMP; // 0x1B9
		::System::Boolean DBCDEFLJFJC; // 0x1BA
		::System::Boolean _RoundFirstTeamA_k__BackingField; // 0x1BB
		::EJLGEOKIJKH APCNOHIMPCB; // 0x1BC
		::System::Boolean _CoopAllyUseAi_k__BackingField; // 0x1C0
		::System::Boolean KLKDPINCGME; // 0x1C1
		::System::Boolean ABFAKINFBMH; // 0x1C2
		::System::Boolean BAFOLAJEPLK; // 0x1C3
		::System::Single LFCAFFKEIEH; // 0x1C4
		::System::UInt32 _LevelId_k__BackingField; // 0x1C8
		::System::UInt32 KOGJJOAFGDK; // 0x1CC
		::System::UInt32 BAOLKLHPGDM; // 0x1D0
		::System::UInt32 EHFBDAEBHPD; // 0x1D4
		::System::UInt32 _CurrentWaveIndex_k__BackingField; // 0x1D8
		::System::Single PNNKNFIDOJD; // 0x1DC
		::System::Int32 PAGLLJHEDIH; // 0x1E0
		::System::Int32 _TickCount_k__BackingField; // 0x1E4
		::System::Int32 FMGHAPHNLKP; // 0x1E8
		::System::Boolean _IsAIMode_k__BackingField; // 0x1EC
		::System::Boolean KLLGLIPALOB; // 0x1ED
		::System::Boolean _RoundTeamA_k__BackingField; // 0x1EE
		::System::Boolean JOHGADIOILC; // 0x1EF
		::DNLHKFILMLB _Phase_k__BackingField; // 0x1F0
		::System::UInt32 LPEHHMHPCMG; // 0x1F4
		::System::UInt32 LKDGPEILGJL; // 0x1F8
		::System::Void _ctor(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CTOR_OFFSET))(this, a1);
		}

		::NBIBOKEFKIH* FHHMCEJMHAM(::System::UInt32 a1)
		{
			return ((::NBIBOKEFKIH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FHHMCEJMHAM_OFFSET))(this, a1);
		}

		::System::UInt32 OKCOJOFCBFA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OKCOJOFCBFA_OFFSET))(this, a1);
		}

		::System::Boolean EMIJKFCDBDF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_EMIJKFCDBDF_OFFSET))(this, a1, a2);
		}

		::System::Boolean CAIKADMOIGL(::RPG::GameCore::MarbleItemFeature a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CAIKADMOIGL_OFFSET))(this, a1);
		}

		::System::Boolean DCNEINMBJJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_DCNEINMBJJH_OFFSET))(this);
		}

		::System::Void EPLKDANFFPH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_EPLKDANFFPH_OFFSET))(this, a1);
		}

		::System::Void NNDEKJOODAI(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_NNDEKJOODAI_OFFSET))(this, a1);
		}

		::System::Void BBDLBDHKEBI(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BBDLBDHKEBI_OFFSET))(this, a1);
		}

		::System::Void KFMKIILACOA(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KFMKIILACOA_OFFSET))(this, a1);
		}

		::System::Void NFGJCBIAFKF(::GFHCKBHCNDF* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_NFGJCBIAFKF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPFLNDFOLNA(::GFHCKBHCNDF* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LPFLNDFOLNA_OFFSET))(this, a1, a2);
		}

		::FBDPOPBPHKP* GKPFIBCNGJF(::System::UInt32 a1)
		{
			return ((::FBDPOPBPHKP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GKPFIBCNGJF_OFFSET))(this, a1);
		}

		::FBDPOPBPHKP* CDJCPDGGAAH(::System::UInt32 a1)
		{
			return ((::FBDPOPBPHKP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CDJCPDGGAAH_OFFSET))(this, a1);
		}

		::OFADHJMIFKO* BNJALNCJHKE(::System::UInt32 a1)
		{
			return ((::OFADHJMIFKO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BNJALNCJHKE_OFFSET))(this, a1);
		}

		::System::Void CMPJHBDONPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CMPJHBDONPA_OFFSET))(this);
		}

		::System::Void BMHGDLBDPLE(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BMHGDLBDPLE_OFFSET))(this, a1);
		}

		::System::Void MJJHELMAIJA(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MJJHELMAIJA_OFFSET))(this, a1, a2);
		}

		::System::Void PNONKOLHMLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PNONKOLHMLD_OFFSET))(this, a1);
		}

		::System::Void HCNHGGMANJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HCNHGGMANJA_OFFSET))(this);
		}

		::System::Boolean IPGEMMLNPGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IPGEMMLNPGP_OFFSET))(this);
		}

		::System::Boolean ACKLIKNJFIF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ACKLIKNJFIF_OFFSET))(this, a1);
		}

		::System::Void NBNHFOPOJIK(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_NBNHFOPOJIK_OFFSET))(this, a1, a2);
		}

		::System::Void BEKALLLHNCO(::System::UInt32 a1, ::IOCAFIDJADI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IOCAFIDJADI*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BEKALLLHNCO_OFFSET))(this, a1, a2);
		}

		::System::Boolean FFIPACGAOHD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FFIPACGAOHD_OFFSET))(this, a1);
		}

		::System::UInt32 PFDBFOGJCHC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PFDBFOGJCHC_OFFSET))(this, a1);
		}

		::System::Void IJLBDMIOFLE(::System::String* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IJLBDMIOFLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::JICPKADGNIF* BAGPHIPKJFI()
		{
			return ((::JICPKADGNIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BAGPHIPKJFI_OFFSET))(this);
		}

		::RPG::GameCore::MarbleFieldComponentConfig* HBOIGIFOPFJ(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameEntityConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* a2)
		{
			return ((::RPG::GameCore::MarbleFieldComponentConfig*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameEntityConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HBOIGIFOPFJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MarbleFieldComponentConfig* BEIMJPLFPDH(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::RPG::GameCore::MarbleFieldComponentConfig*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BEIMJPLFPDH_OFFSET))(this, a1);
		}

		::System::Void IGMLHMKMONI(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IGMLHMKMONI_OFFSET))(this, a1, a2);
		}

		::System::Void JHONCANNNIK(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_JHONCANNNIK_OFFSET))(this, a1);
		}

		::System::Void LHOPNAKBDEP(::System::UInt32 a1, ::RPG::GameCore::LittleGameTransformComponentConfig* a2, ::RPG::GameCore::MarbleItemComponentConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameTransformComponentConfig*, ::RPG::GameCore::MarbleItemComponentConfig*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LHOPNAKBDEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKIEIIBADCB(::System::UInt32 a1, ::RPG::GameCore::LittleGameTransformComponentConfig* a2, ::RPG::GameCore::MarbleItemComponentConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameTransformComponentConfig*, ::RPG::GameCore::MarbleItemComponentConfig*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_JKIEIIBADCB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGAMNMANFOJ(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::MarbleFieldComponentConfig* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::MarbleFieldComponentConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HGAMNMANFOJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GMLHJNHJEBG(::Il2CppArray<::System::UInt32>* a1, ::RPG::GameCore::MarbleFieldComponentConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::MarbleFieldComponentConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GMLHJNHJEBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DJLFFGDBLKK(::RPG::GameCore::MarbleFieldComponentConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleFieldComponentConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_DJLFFGDBLKK_OFFSET))(this, a1, a2);
		}

		::System::Void PCENJOJFGEJ(::RPG::GameCore::MarbleFieldComponentConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleFieldComponentConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PCENJOJFGEJ_OFFSET))(this, a1, a2);
		}

		::System::Void BHENHIKLKGM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BHENHIKLKGM_OFFSET))(this, a1);
		}

		::System::Void GJDEJMOJNHL(::System::UInt32 a1, ::System::Boolean a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GJDEJMOJNHL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean JLJMJNDEJBJ(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_JLJMJNDEJBJ_OFFSET))(this, a1);
		}

		::System::Boolean PPKLJJDJNHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PPKLJJDJNHH_OFFSET))(this);
		}

		::System::Boolean BOGHHAPEKAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BOGHHAPEKAB_OFFSET))(this);
		}

		::System::Boolean FJLAMBDOHEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FJLAMBDOHEG_OFFSET))(this);
		}

		::System::Boolean MJGOODMPMBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MJGOODMPMBE_OFFSET))(this);
		}

		::System::Void DKGPFEPFKPA(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_DKGPFEPFKPA_OFFSET))(this, a1, a2);
		}

		::System::Void GJOHKNNNFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GJOHKNNNFJA_OFFSET))(this);
		}

		::RPG::GameCore::MarbleSealLevelConfigRow* CCBPCDNBBDA(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CCBPCDNBBDA_OFFSET))(this, a1);
		}

		::System::Void GNBCHAPKEJF(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::UInt32 a4, ::RPG::GameCore::MarbleItemFeature a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GNBCHAPKEJF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ABLELGPMIGL(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::Il2CppArray<::System::UInt32>* a6, ::System::UInt32 a7, ::RPG::GameCore::MarbleItemFeature a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ABLELGPMIGL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void PBMCOMKPBPB(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::RPG::MVector2 a4, ::System::Boolean a5, ::System::UInt32 a6, ::RPG::GameCore::MarbleItemFeature a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::RPG::MVector2, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PBMCOMKPBPB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean AFJCALIMPGP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AFJCALIMPGP_OFFSET))(this, a1);
		}

		::System::Boolean OIIGNKKKMCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OIIGNKKKMCD_OFFSET))(this);
		}

		::System::Void EPPGMEKFFIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_EPPGMEKFFIB_OFFSET))(this);
		}

		::System::Void JGDIHOGPOGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_JGDIHOGPOGK_OFFSET))(this);
		}

		::System::Void ACDHDCMPLLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ACDHDCMPLLF_OFFSET))(this);
		}

		::System::Void PLPHFBEBKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PLPHFBEBKJN_OFFSET))(this);
		}

		::System::Void ENAFJKJNOCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ENAFJKJNOCE_OFFSET))(this);
		}

		::System::Void LHBFDFPFCJG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LHBFDFPFCJG_OFFSET))(this, a1);
		}

		::System::Void GNJPOHDJLNL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GNJPOHDJLNL_OFFSET))(this, a1);
		}

		::System::Void CGKNCEMAKOC(::CIHOEEPIBAI a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::CIHOEEPIBAI, ::System::Single))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CGKNCEMAKOC_OFFSET))(this, a1, a2);
		}

		::System::Void BEGGFDAHBAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BEGGFDAHBAP_OFFSET))(this);
		}

		::System::UInt32 MMEMJFDKPAK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MMEMJFDKPAK_OFFSET))(this);
		}

		::System::Void OMAAMNAIGJI(::CKHKFIEAAII a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKHKFIEAAII))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OMAAMNAIGJI_OFFSET))(this, a1);
		}

		::System::Void BGCOIDIAGOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BGCOIDIAGOE_OFFSET))(this);
		}

		::System::Void JLMBNOMBLPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_JLMBNOMBLPC_OFFSET))(this);
		}

		::System::Void HKKCMPPACCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HKKCMPPACCP_OFFSET))(this);
		}

		::KCNBJHLBNKE* ICPHAPGEDOE(::System::UInt32 a1)
		{
			return ((::KCNBJHLBNKE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ICPHAPGEDOE_OFFSET))(this, a1);
		}

		::System::Void BMLJCLMJBPC(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BMLJCLMJBPC_OFFSET))(this, a1, a2);
		}

		::System::Void EIEGFODGHOB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_EIEGFODGHOB_OFFSET))(this, a1, a2);
		}

		::System::Single MMONIMDDOOG(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::Boolean a4, ::System::UInt64 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::Boolean, ::System::UInt64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MMONIMDDOOG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::MVector2 CHGLIHOLBNK(::NBIBOKEFKIH* a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::NBIBOKEFKIH*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CHGLIHOLBNK_OFFSET))(this, a1, a2);
		}

		::System::Void ADDLNJADPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ADDLNJADPON_OFFSET))(this, a1);
		}

		::System::Void ACOIJECFDNM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ACOIJECFDNM_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::UInt32>* KKFJOEOIKLA(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KKFJOEOIKLA_OFFSET))(this, a1);
		}

		::RPG::MVector2 BOCPHJOJACJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BOCPHJOJACJ_OFFSET))(this, a1, a2);
		}

		::System::Void FBEELECFOBN(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::Boolean a4, ::System::UInt64 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FBEELECFOBN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 OAJGKOBIBLE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OAJGKOBIBLE_OFFSET))(this, a1);
		}

		::System::UInt32 KAPDJOPDGDJ(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KAPDJOPDGDJ_OFFSET))(this, a1);
		}

		::System::UInt32 LKLJILKEOLA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LKLJILKEOLA_OFFSET))(this, a1);
		}

		::System::Void MNFFFKCGKJB(::RPG::GameCore::MarbleTitleValue a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MNFFFKCGKJB_OFFSET))(this, a1);
		}

		::System::Int32 GAEBMEDMDIJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GAEBMEDMDIJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 LDLMGJKNGEG(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LDLMGJKNGEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPKKCFBAEOG(::RPG::GameCore::MarbleTitleValue a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_NPKKCFBAEOG_OFFSET))(this, a1);
		}

		::System::Void NMOIKOCPILN(::RPG::GameCore::MarbleTitleValue a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_NMOIKOCPILN_OFFSET))(this, a1, a2);
		}

		::System::Void LCGGJIEPAEF(::RPG::GameCore::MarbleTitleValue a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LCGGJIEPAEF_OFFSET))(this, a1, a2);
		}

		::System::Void KBELKEFCLID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KBELKEFCLID_OFFSET))(this);
		}

		::System::Void DFPIOBBPPKE(::System::UInt32 a1, ::RPG::GameCore::MarbleTitleValue a2, ::RPG::GameCore::MarbleTitleCondition a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MarbleTitleValue, ::RPG::GameCore::MarbleTitleCondition, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_DFPIOBBPPKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OMHHOBAIBJD(::MIBEBGCMPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OMHHOBAIBJD_OFFSET))(this, a1);
		}

		::System::Void NCHDKJMACOD(::MIBEBGCMPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_NCHDKJMACOD_OFFSET))(this, a1);
		}

		::System::Void KIICBOFJBGJ(::MIBEBGCMPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KIICBOFJBGJ_OFFSET))(this, a1);
		}

		::System::Void MCNBCHKJKDP(::MIBEBGCMPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MCNBCHKJKDP_OFFSET))(this, a1);
		}

		::System::Void OPMKKKADEBE(::MIBEBGCMPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OPMKKKADEBE_OFFSET))(this, a1);
		}

		::System::Void MPPFEJPFBIG(::MIBEBGCMPOL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MIBEBGCMPOL*, ::System::Single))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MPPFEJPFBIG_OFFSET))(this, a1, a2);
		}

		::System::Void AAKDGCAPKKB(::DHFLEJMNGDL* a1, ::DHFLEJMNGDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHFLEJMNGDL*, ::DHFLEJMNGDL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AAKDGCAPKKB_OFFSET))(this, a1, a2);
		}

		::System::Void CNIKEMHCBAM(::DHFLEJMNGDL* a1, ::DHFLEJMNGDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHFLEJMNGDL*, ::DHFLEJMNGDL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CNIKEMHCBAM_OFFSET))(this, a1, a2);
		}

		::System::Void INBGFEJJNHH(::DHFLEJMNGDL* a1, ::DHFLEJMNGDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHFLEJMNGDL*, ::DHFLEJMNGDL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_INBGFEJJNHH_OFFSET))(this, a1, a2);
		}

		::System::Boolean AKLHMDBLKDA(::NBIBOKEFKIH* a1, ::RPG::Client::LittleGame::Marble::MarbleActionSource a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBIBOKEFKIH*, ::RPG::Client::LittleGame::Marble::MarbleActionSource, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AKLHMDBLKDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OGLAJKJOLHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OGLAJKJOLHL_OFFSET))(this);
		}

		::System::Void HBCPAEFKFKL(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HBCPAEFKFKL_OFFSET))(this, a1);
		}

		::System::Int32 AFMCFBDPDEO(::FBDPOPBPHKP* a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FBDPOPBPHKP*, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AFMCFBDPDEO_OFFSET))(this, a1, a2);
		}

		::System::Void CBGPBILBBPJ(::NBIBOKEFKIH* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CBGPBILBBPJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::LIJFHHMGBFE*>* IMKGKNCFGCB()
		{
			return ((::Il2CppArray<::LIJFHHMGBFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IMKGKNCFGCB_OFFSET))(this);
		}

		::Il2CppArray<::LIJFHHMGBFE*>* ODBMHLAKHBB()
		{
			return ((::Il2CppArray<::LIJFHHMGBFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ODBMHLAKHBB_OFFSET))(this);
		}

		::System::Void BBMDKBOJLPA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BBMDKBOJLPA_OFFSET))(this, a1, a2);
		}

		::System::Void FGCLGFMIOLM(::PLAGFACLPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGFACLPDL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FGCLGFMIOLM_OFFSET))(this, a1);
		}

		::System::Void FHJMBIBCNMP(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FHJMBIBCNMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKDNEJOOJGI(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CKDNEJOOJGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKNJFDLCHBC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt64 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_JKNJFDLCHBC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KEBIBCDLOAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KEBIBCDLOAH_OFFSET))(this);
		}

		::System::Void KDBOHPFIAEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KDBOHPFIAEE_OFFSET))(this);
		}

		::System::Void MOBGINFLAEC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MOBGINFLAEC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CFEMFODPFLJ(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::Marble::MarbleHpType a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::LittleGame::Marble::MarbleHpType, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CFEMFODPFLJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MCLABCLKNDM(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MCLABCLKNDM_OFFSET))(this, a1, a2);
		}

		::System::Void CBNJJMGBCJA(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_CBNJJMGBCJA_OFFSET))(this, a1, a2);
		}

		::System::Void LAIKMPBDLHC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LAIKMPBDLHC_OFFSET))(this, a1);
		}

		::System::Void FGPMIGKECCM(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Boolean a4, ::System::UInt64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FGPMIGKECCM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PKADLLAHGBK(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PKADLLAHGBK_OFFSET))(this, a1);
		}

		static ::System::Void DLKPEAGCOHE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_DLKPEAGCOHE_OFFSET))(a1, a2, a3);
		}

		::System::Void IFEOBHGPEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IFEOBHGPEAK_OFFSET))(this);
		}

		::System::Void GFFAEABFJFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GFFAEABFJFJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GEGGIGNLEBD()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GEGGIGNLEBD_OFFSET))(this);
		}

		::GFFDMPOCAIP* GGMCFOOJHAG(::KHLDHMFKOCP_FHMFJBMKDMN* a1)
		{
			return ((::GFFDMPOCAIP*(*)(::PVOID, ::KHLDHMFKOCP_FHMFJBMKDMN*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GGMCFOOJHAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* OCGECPAEELF(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OCGECPAEELF_OFFSET))(this, a1);
		}

		::KHLDHMFKOCP_GGJLGLKHCKL* AHBCMDAGJLI(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::KHLDHMFKOCP_GGJLGLKHCKL*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AHBCMDAGJLI_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 ONOOHHMDKLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ONOOHHMDKLA_OFFSET))(this);
		}

		::System::UInt32 OCLFMDGPOIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OCLFMDGPOIK_OFFSET))(this);
		}

		::System::String* BAIOMLLLCPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BAIOMLLLCPK_OFFSET))(this);
		}

		::System::UInt32 OMMKAOPLDCB(::KHLDHMFKOCP_GGJLGLKHCKL* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::KHLDHMFKOCP_GGJLGLKHCKL*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OMMKAOPLDCB_OFFSET))(this, a1);
		}

		::System::UInt32 AHOPPNCKLKD(::KHLDHMFKOCP_GGJLGLKHCKL* a1, ::System::Boolean a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::KHLDHMFKOCP_GGJLGLKHCKL*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AHOPPNCKLKD_OFFSET))(this, a1, a2);
		}

		static ::NAGIOAKDDMJ* IEODJPPKCLC(::NAGIOAKDDMJ* a1)
		{
			return ((::NAGIOAKDDMJ*(*)(::NAGIOAKDDMJ*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IEODJPPKCLC_OFFSET))(a1);
		}

		::NAGIOAKDDMJ* BPDHIHPEKMH(::NBIBOKEFKIH* a1)
		{
			return ((::NAGIOAKDDMJ*(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BPDHIHPEKMH_OFFSET))(this, a1);
		}

		::NAGIOAKDDMJ* FONJNAEEFGJ(::System::UInt32 a1)
		{
			return ((::NAGIOAKDDMJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FONJNAEEFGJ_OFFSET))(this, a1);
		}

		::System::Void PBGBMBGEGPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PBGBMBGEGPE_OFFSET))(this);
		}

		::System::Void HGLIODMFLAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HGLIODMFLAI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>* DKAKHBFJEAH(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_DKAKHBFJEAH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* IGCAPALDOAF()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_IGCAPALDOAF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>* PNNIDGDMKKG(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_PNNIDGDMKKG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>* MBEPMIKCDHJ(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MBEPMIKCDHJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>* ANAADOEAPNE(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::NAGIOAKDDMJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ANAADOEAPNE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 FDPIHHBOCEJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FDPIHHBOCEJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Object*>* EAHJMJKHEJC()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_EAHJMJKHEJC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DCECJENGJLD*>* FGFLAPDLGAB(::System::Collections::Generic::IEnumerable_1<::System::Object*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::DCECJENGJLD*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FGFLAPDLGAB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Object*>* FNNAKLCBEEN()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FNNAKLCBEEN_OFFSET))(this);
		}

		::System::Void ENMFMHBCOKH(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_ENMFMHBCOKH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::OELHAMANGBN*>* KENPHKPDKGF(::System::Collections::Generic::IEnumerable_1<::System::Object*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::OELHAMANGBN*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KENPHKPDKGF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::OOBKAONOBAK*>* OKLIBPPGCLD(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::OOBKAONOBAK*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_OKLIBPPGCLD_OFFSET))(this, a1);
		}

		::KHLDHMFKOCP_KFHDKLFDNNH* MKJABHGPPBF(::System::UInt32 a1)
		{
			return ((::KHLDHMFKOCP_KFHDKLFDNNH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MKJABHGPPBF_OFFSET))(this, a1);
		}

		::System::Void BHNICHCCBDC(::EHEHDOKBFAL* a1, ::System::UInt32 a2, ::NBIBOKEFKIH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EHEHDOKBFAL*, ::System::UInt32, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_BHNICHCCBDC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void COILEEHOHGI(::System::Boolean a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_COILEEHOHGI_OFFSET))(this, a1, a2);
		}

		::System::Void MAHHAGKFCCK(::System::Boolean a1, ::System::UInt64 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MAHHAGKFCCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FELELDJGEAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FELELDJGEAL_OFFSET))(this, a1);
		}

		::ODLEEMAALIP* MFNPPGJBEHD(::KHLDHMFKOCP_KFHDKLFDNNH* a1, ::System::Collections::Generic::HashSet_1<::System::UInt64>* a2)
		{
			return ((::ODLEEMAALIP*(*)(::PVOID, ::KHLDHMFKOCP_KFHDKLFDNNH*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MFNPPGJBEHD_OFFSET))(this, a1, a2);
		}

		::System::Void MKBABFADLGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_MKBABFADLGL_OFFSET))(this);
		}

		::System::Void AELFIKEAPOG(::System::Boolean a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AELFIKEAPOG_OFFSET))(this, a1, a2);
		}

		::System::Void LDPFFJAGJME(::System::Boolean a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_LDPFFJAGJME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AKBODBCDPKG(::System::UInt32 a1, ::NBIBOKEFKIH* a2, ::System::Boolean a3, ::System::UInt64 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NBIBOKEFKIH*, ::System::Boolean, ::System::UInt64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_AKBODBCDPKG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_InStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_INSTAT_OFFSET))(this);
		}

		::System::Void set_InStat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_INSTAT_OFFSET))(this, a1);
		}

		::System::Int32 get_TickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_TICKCOUNT_OFFSET))(this);
		}

		::System::Void set_TickCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_TICKCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean GEIGKDIOGIE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GEIGKDIOGIE_OFFSET))(this, a1, a2);
		}

		::System::Void HCPBLDBELIA(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HCPBLDBELIA_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_ISFRIEND_OFFSET))(this);
		}

		::System::Void set_IsFriend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_ISFRIEND_OFFSET))(this, a1);
		}

		::System::Boolean get_CoopAllyUseAi()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_COOPALLYUSEAI_OFFSET))(this);
		}

		::System::Void set_CoopAllyUseAi(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_COOPALLYUSEAI_OFFSET))(this, a1);
		}

		::JICPKADGNIF* get_SimulateScene()
		{
			return ((::JICPKADGNIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_SIMULATESCENE_OFFSET))(this);
		}

		::System::Void set_SimulateScene(::JICPKADGNIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JICPKADGNIF*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_SIMULATESCENE_OFFSET))(this, a1);
		}

		::System::Boolean get_RoundTeamA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_ROUNDTEAMA_OFFSET))(this);
		}

		::System::Void set_RoundTeamA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_ROUNDTEAMA_OFFSET))(this, a1);
		}

		::System::Boolean get_RoundFirstTeamA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_ROUNDFIRSTTEAMA_OFFSET))(this);
		}

		::System::Void set_RoundFirstTeamA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_ROUNDFIRSTTEAMA_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_LEVELID_OFFSET))(this, a1);
		}

		::DNLHKFILMLB get_Phase()
		{
			return ((::DNLHKFILMLB(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::DNLHKFILMLB a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLHKFILMLB))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_PHASE_OFFSET))(this, a1);
		}

		::NBIBOKEFKIH* get_ActionItem()
		{
			return ((::NBIBOKEFKIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_ACTIONITEM_OFFSET))(this);
		}

		::System::Void set_ActionItem(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_ACTIONITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_InSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_INSIMULATE_OFFSET))(this);
		}

		::System::Void set_InSimulate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_INSIMULATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAIMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_ISAIMODE_OFFSET))(this);
		}

		::System::Void set_IsAIMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_ISAIMODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_WinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_WINSCORE_OFFSET))(this);
		}

		::System::Void set_WinScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_WINSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentActionPlayerId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_CURRENTACTIONPLAYERID_OFFSET))(this);
		}

		::System::Void set_CurrentActionPlayerId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_CURRENTACTIONPLAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentWaveIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_CURRENTWAVEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentWaveIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_CURRENTWAVEINDEX_OFFSET))(this, a1);
		}

		::IFFJIHFGOBO* get_Guest()
		{
			return ((::IFFJIHFGOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_GUEST_OFFSET))(this);
		}

		::System::Void set_Guest(::IFFJIHFGOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFFJIHFGOBO*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_GUEST_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL HFPODBLDFOI()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HFPODBLDFOI_OFFSET))(this);
		}

		::RPG::GameCore::MultiPlayerGameMode KKNFOIIINFP()
		{
			return ((::RPG::GameCore::MultiPlayerGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_KKNFOIIINFP_OFFSET))(this);
		}

		::System::Single get_FieldLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_FIELDLENGTH_OFFSET))(this);
		}

		::System::Void set_FieldLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_FIELDLENGTH_OFFSET))(this, a1);
		}

		::System::Single get_FieldWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_GET_FIELDWIDTH_OFFSET))(this);
		}

		::System::Void set_FieldWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_SET_FIELDWIDTH_OFFSET))(this, a1);
		}

	};
