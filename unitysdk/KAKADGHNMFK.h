#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelGameState.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelMarkerType.h"
#include "unitysdk/RPG/Client/LittleGame/DuelChimeraState.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class AHGPAGNBOHA;
class AILGEOEGMJK;
class AJPMKPMEHAA;
class APLFCCFDGEG;
class BEPHFOHAGJO;
class CEHLPJAPDIP;
class DALHPEPACNI;
class DODPFANHNDG;
class DOLCCLMMLAE;
class EHMIDEMOFCD;
class FODHKECLOJF;
class GGONIJIDEED;
class GJEGDPICOHD;
class GKEHCGJDOIE;
class GMPMKKLLNFC;
class GPADPKLBLNP;
class HEHGNAHJINL;
class IEAIEOGFNOG;
class IHCCOKDAFNE;
class JGEJNOJNDOL;
class JJKIGLIJCPA;
class JOLBKPNAIFC;
class KEOAHACPAFG;
class KJGGGLCOJIA;
class KKILJMLMGEB;
class MCDGJEMFCOA;
class MDPMJLDHNAD;
class MLPJPKIJGGF;
class NBFCOGKMDGA;
class NBJLLEBFGPD;
class NLKGKLHJKBB;
class OBCPOJCNNAA;
class OEOEAGAHINJ;
class OLBJJCONPDB;
class PGFJBCEDDLN;
class PHLHNGJGOHK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define KAKADGHNMFK_AACMGEEBJMN_OFFSET UNITYSDK_OFFSET(0x1CB80720)
#define KAKADGHNMFK_ACBNFPOECNL_OFFSET UNITYSDK_OFFSET(0x1CB7E920)
#define KAKADGHNMFK_ACCKHGOCBPN_OFFSET UNITYSDK_OFFSET(0x1CB7F2C0)
#define KAKADGHNMFK_ADCCPOEOAOK_OFFSET UNITYSDK_OFFSET(0x1CB7F600)
#define KAKADGHNMFK_ADNAEPIOAAI_OFFSET UNITYSDK_OFFSET(0x1CB7EB60)
#define KAKADGHNMFK_AEGLIOCKGIP_OFFSET UNITYSDK_OFFSET(0x1CB7FE50)
#define KAKADGHNMFK_AEIGLPKHCFJ_OFFSET UNITYSDK_OFFSET(0x1CB81B10)
#define KAKADGHNMFK_AGECIJNLDKK_OFFSET UNITYSDK_OFFSET(0x1CB80610)
#define KAKADGHNMFK_AHBNANAIPLJ_OFFSET UNITYSDK_OFFSET(0x1CB80A50)
#define KAKADGHNMFK_AHCEPNHPFGA_OFFSET UNITYSDK_OFFSET(0x1CB7B0E0)
#define KAKADGHNMFK_AIICFKMCAGO_OFFSET UNITYSDK_OFFSET(0x1CB7E820)
#define KAKADGHNMFK_ALEBFCLPPJL_OFFSET UNITYSDK_OFFSET(0x1CB7D210)
#define KAKADGHNMFK_ALMEBJJHHBC_OFFSET UNITYSDK_OFFSET(0x1CB7DD00)
#define KAKADGHNMFK_AMCMCBOFACF_OFFSET UNITYSDK_OFFSET(0x1CB7D570)
#define KAKADGHNMFK_AOOGMFNNIFF_OFFSET UNITYSDK_OFFSET(0x1CB7AEE0)
#define KAKADGHNMFK_BCEBMODKCFP_OFFSET UNITYSDK_OFFSET(0x1CB7C340)
#define KAKADGHNMFK_BDEABHGBNNP_OFFSET UNITYSDK_OFFSET(0x1CB7D370)
#define KAKADGHNMFK_BELHCJFNOGA_OFFSET UNITYSDK_OFFSET(0x1CB805B0)
#define KAKADGHNMFK_BENCCJGOKEJ_OFFSET UNITYSDK_OFFSET(0x1CB7CE70)
#define KAKADGHNMFK_BFGGPLNAKDD_OFFSET UNITYSDK_OFFSET(0x1CB7CA30)
#define KAKADGHNMFK_BFJBPEDIKGH_OFFSET UNITYSDK_OFFSET(0x1CB7E550)
#define KAKADGHNMFK_BHNIAKIJLHP_OFFSET UNITYSDK_OFFSET(0x1CB7D790)
#define KAKADGHNMFK_BJJIEFDEJEB_OFFSET UNITYSDK_OFFSET(0x1CB7BE40)
#define KAKADGHNMFK_BMJJOHODAND_OFFSET UNITYSDK_OFFSET(0x1CB7E660)
#define KAKADGHNMFK_CBJLGDNLCCF_OFFSET UNITYSDK_OFFSET(0x1CB7F0D0)
#define KAKADGHNMFK_CDHCDCJFGLA_OFFSET UNITYSDK_OFFSET(0x1CB7CA90)
#define KAKADGHNMFK_CGNIHENGMPP_OFFSET UNITYSDK_OFFSET(0x1CB7BC50)
#define KAKADGHNMFK_CHGKNDPILKE_OFFSET UNITYSDK_OFFSET(0x1CB7AF90)
#define KAKADGHNMFK_CJLNEOKNJDO_OFFSET UNITYSDK_OFFSET(0x1CB813A0)
#define KAKADGHNMFK_CKIOLLDJIFI_OFFSET UNITYSDK_OFFSET(0x1CB818F0)
#define KAKADGHNMFK_CLIJLJPJGFF_OFFSET UNITYSDK_OFFSET(0x1CB7DF50)
#define KAKADGHNMFK_CLOCKOHEGKP_OFFSET UNITYSDK_OFFSET(0x1CB7D4C0)
#define KAKADGHNMFK_CNMMJMNKFLC_OFFSET UNITYSDK_OFFSET(0x1CB7EFE0)
#define KAKADGHNMFK_COKEEHONOIJ_OFFSET UNITYSDK_OFFSET(0x1CB7E870)
#define KAKADGHNMFK_COLAIMKDPAM_OFFSET UNITYSDK_OFFSET(0x1CB7DBB0)
#define KAKADGHNMFK_CPGIHBCBHLN_OFFSET UNITYSDK_OFFSET(0x1CB7EED0)
#define KAKADGHNMFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB81F00)
#define KAKADGHNMFK_DAIAFICOAOP_OFFSET UNITYSDK_OFFSET(0x1CB81670)
#define KAKADGHNMFK_DALNJDCNBJO_OFFSET UNITYSDK_OFFSET(0x1CB7E980)
#define KAKADGHNMFK_DBBBLPCNEGN_OFFSET UNITYSDK_OFFSET(0x1CB7B2D0)
#define KAKADGHNMFK_DBEHPMNEMEF_OFFSET UNITYSDK_OFFSET(0x1CB80AB0)
#define KAKADGHNMFK_DCHFDBFKLEC_OFFSET UNITYSDK_OFFSET(0x1CB7E340)
#define KAKADGHNMFK_DEFGBLODJMB_OFFSET UNITYSDK_OFFSET(0x1CB7DAB0)
#define KAKADGHNMFK_DIMLMGKDLGD_OFFSET UNITYSDK_OFFSET(0x1CB80260)
#define KAKADGHNMFK_DJBAJBIOJBA_OFFSET UNITYSDK_OFFSET(0x1CB81C20)
#define KAKADGHNMFK_DLLNNODALBG_OFFSET UNITYSDK_OFFSET(0x1CB7C450)
#define KAKADGHNMFK_DMFEJLABBMB_OFFSET UNITYSDK_OFFSET(0x1CB7FB80)
#define KAKADGHNMFK_DPDHEBBFGDC_OFFSET UNITYSDK_OFFSET(0x1CB81EA0)
#define KAKADGHNMFK_EFJCMCHEAND_OFFSET UNITYSDK_OFFSET(0x1CB7D5D0)
#define KAKADGHNMFK_EFNHJPHBOMN_OFFSET UNITYSDK_OFFSET(0x1CB7A0D0)
#define KAKADGHNMFK_EIMANDPAJPF_OFFSET UNITYSDK_OFFSET(0x1CB7A180)
#define KAKADGHNMFK_EIOABMEMKKI_OFFSET UNITYSDK_OFFSET(0x1CB7F940)
#define KAKADGHNMFK_EKHIPKFFDCG_OFFSET UNITYSDK_OFFSET(0x1CB7B950)
#define KAKADGHNMFK_EKOALMGLNJC_OFFSET UNITYSDK_OFFSET(0x1CB7A2E0)
#define KAKADGHNMFK_ENGMCFFLHBE_OFFSET UNITYSDK_OFFSET(0x1CB815C0)
#define KAKADGHNMFK_EOLHGGHFIGJ_OFFSET UNITYSDK_OFFSET(0x1CB81330)
#define KAKADGHNMFK_FCJGLFDALGH_OFFSET UNITYSDK_OFFSET(0x1CB81560)
#define KAKADGHNMFK_FHBBJPAHLAN_OFFSET UNITYSDK_OFFSET(0x1CB7EDA0)
#define KAKADGHNMFK_FILHFMBHKAH_OFFSET UNITYSDK_OFFSET(0x1CB7C850)
#define KAKADGHNMFK_FIPMEOOIMME_OFFSET UNITYSDK_OFFSET(0x1CB7E2D0)
#define KAKADGHNMFK_FKEHOHONNKP_OFFSET UNITYSDK_OFFSET(0x1CB7E090)
#define KAKADGHNMFK_FKOKDKNGALE_OFFSET UNITYSDK_OFFSET(0x1CB7B1D0)
#define KAKADGHNMFK_FLMDKCPLINM_OFFSET UNITYSDK_OFFSET(0x1CB81D90)
#define KAKADGHNMFK_FNAAFDMIBGK_OFFSET UNITYSDK_OFFSET(0x1CB7BA80)
#define KAKADGHNMFK_FOAMEBOJGBF_OFFSET UNITYSDK_OFFSET(0x1CB81E40)
#define KAKADGHNMFK_FOOPHADDBPL_OFFSET UNITYSDK_OFFSET(0x1CB7F410)
#define KAKADGHNMFK_FPOBMNHMKMJ_OFFSET UNITYSDK_OFFSET(0x1CB7D7E0)
#define KAKADGHNMFK_GCDDNHFLKCP_OFFSET UNITYSDK_OFFSET(0x1CB81A00)
#define KAKADGHNMFK_GDEPGDLJEPG_OFFSET UNITYSDK_OFFSET(0x1CB7F500)
#define KAKADGHNMFK_GDMGEHGFNPO_OFFSET UNITYSDK_OFFSET(0x1CB7F750)
#define KAKADGHNMFK_GFKKEFGEINA_OFFSET UNITYSDK_OFFSET(0x1CB81D30)
#define KAKADGHNMFK_GGEDIHHHJDL_OFFSET UNITYSDK_OFFSET(0x1CB7D470)
#define KAKADGHNMFK_GLDPHNJGIMI_OFFSET UNITYSDK_OFFSET(0x1CB7D8F0)
#define KAKADGHNMFK_GOLBKLKKMAN_OFFSET UNITYSDK_OFFSET(0x1CB80D80)
#define KAKADGHNMFK_GOOPFLEODHC_OFFSET UNITYSDK_OFFSET(0x1CB7C2F0)
#define KAKADGHNMFK_HAHMDOAONOC_OFFSET UNITYSDK_OFFSET(0x1CB7F9A0)
#define KAKADGHNMFK_HAKLCJOEDHL_OFFSET UNITYSDK_OFFSET(0x1CB7A790)
#define KAKADGHNMFK_HCAPHNJMOAG_OFFSET UNITYSDK_OFFSET(0x1CB7A5D0)
#define KAKADGHNMFK_HDBBNHNLPLC_OFFSET UNITYSDK_OFFSET(0x1CB7E220)
#define KAKADGHNMFK_HDIOPNEGHIG_OFFSET UNITYSDK_OFFSET(0x1CB7C660)
#define KAKADGHNMFK_HDNIOOHGHBE_OFFSET UNITYSDK_OFFSET(0x1CB7DC10)
#define KAKADGHNMFK_HFMKEMDOOGD_OFFSET UNITYSDK_OFFSET(0x1CB7BBA0)
#define KAKADGHNMFK_HGAIOKLHOMI_OFFSET UNITYSDK_OFFSET(0x1CB7F550)
#define KAKADGHNMFK_HGKOOPDDJIC_OFFSET UNITYSDK_OFFSET(0x1CB7B510)
#define KAKADGHNMFK_HHDCCANNEID_OFFSET UNITYSDK_OFFSET(0x1CB7AB70)
#define KAKADGHNMFK_HHOJILLMGBG_OFFSET UNITYSDK_OFFSET(0x1CB7F840)
#define KAKADGHNMFK_HIFCFGFINFO_OFFSET UNITYSDK_OFFSET(0x1CB80E90)
#define KAKADGHNMFK_HINNMKFHMML_OFFSET UNITYSDK_OFFSET(0x1CB7BFD0)
#define KAKADGHNMFK_HJIKNGOGJID_OFFSET UNITYSDK_OFFSET(0x1CB7F660)
#define KAKADGHNMFK_HJLDBBIJAMH_OFFSET UNITYSDK_OFFSET(0x1CB7C0D0)
#define KAKADGHNMFK_HKBELJJFDOB_OFFSET UNITYSDK_OFFSET(0x1CB80B60)
#define KAKADGHNMFK_HKEICBMKKID_OFFSET UNITYSDK_OFFSET(0x1CB7BCB0)
#define KAKADGHNMFK_HLANDDAHALP_OFFSET UNITYSDK_OFFSET(0x1CB809A0)
#define KAKADGHNMFK_HNMHNBBHFKN_OFFSET UNITYSDK_OFFSET(0x1CB7F210)
#define KAKADGHNMFK_HOBHKJNHDOL_OFFSET UNITYSDK_OFFSET(0x1CB7AA30)
#define KAKADGHNMFK_HOLDCBELAHF_OFFSET UNITYSDK_OFFSET(0x1CB7F320)
#define KAKADGHNMFK_ICABLKCDMBA_OFFSET UNITYSDK_OFFSET(0x1CB81A60)
#define KAKADGHNMFK_IDDBBOCGJJI_OFFSET UNITYSDK_OFFSET(0x1CB7A7E0)
#define KAKADGHNMFK_IEGOKIICBCL_OFFSET UNITYSDK_OFFSET(0x1CB7E420)
#define KAKADGHNMFK_IEHHONLAKKF_OFFSET UNITYSDK_OFFSET(0x1CB7CD10)
#define KAKADGHNMFK_IHCEBOKFKGD_OFFSET UNITYSDK_OFFSET(0x1CB7DE40)
#define KAKADGHNMFK_IHGFFOLICBI_OFFSET UNITYSDK_OFFSET(0x1CB7A570)
#define KAKADGHNMFK_IHLPHCLMMJD_OFFSET UNITYSDK_OFFSET(0x1CB7C980)
#define KAKADGHNMFK_IHNLCCCIEPO_OFFSET UNITYSDK_OFFSET(0x1CB7A230)
#define KAKADGHNMFK_IIBFLPICCGK_OFFSET UNITYSDK_OFFSET(0x1CB7E740)
#define KAKADGHNMFK_IJDCEOENLPB_OFFSET UNITYSDK_OFFSET(0x1CB7C610)
#define KAKADGHNMFK_ILHLEJEIEDL_OFFSET UNITYSDK_OFFSET(0x1CB81780)
#define KAKADGHNMFK_IMHOIMHNFHL_OFFSET UNITYSDK_OFFSET(0x1CB7ECC0)
#define KAKADGHNMFK_INBJGMIHMAF_OFFSET UNITYSDK_OFFSET(0x1CB7B220)
#define KAKADGHNMFK_INHLNCFBCAP_OFFSET UNITYSDK_OFFSET(0x1CB81950)
#define KAKADGHNMFK_IOADEACDDNE_OFFSET UNITYSDK_OFFSET(0x1CB80500)
#define KAKADGHNMFK_JBMOCDOFOGJ_OFFSET UNITYSDK_OFFSET(0x1CB7D6B0)
#define KAKADGHNMFK_JCANAGJFNNN_OFFSET UNITYSDK_OFFSET(0x1CB816D0)
#define KAKADGHNMFK_JHOADPJKILD_OFFSET UNITYSDK_OFFSET(0x1CB7FA90)
#define KAKADGHNMFK_JILKKKPPKCO_OFFSET UNITYSDK_OFFSET(0x1CB7C710)
#define KAKADGHNMFK_JKLOKBPCFPG_OFFSET UNITYSDK_OFFSET(0x1CB7C210)
#define KAKADGHNMFK_JKNCBBAAHPA_OFFSET UNITYSDK_OFFSET(0x1CB7B560)
#define KAKADGHNMFK_JLFBNCHNGGK_OFFSET UNITYSDK_OFFSET(0x1CB7D110)
#define KAKADGHNMFK_JNAGBHKMMFJ_OFFSET UNITYSDK_OFFSET(0x1CB7BB50)
#define KAKADGHNMFK_JNFEIOJFKHA_OFFSET UNITYSDK_OFFSET(0x1CB807D0)
#define KAKADGHNMFK_JNILLJPJKCC_OFFSET UNITYSDK_OFFSET(0x1CB7B330)
#define KAKADGHNMFK_KFFGMJNOPPD_OFFSET UNITYSDK_OFFSET(0x1CB7C770)
#define KAKADGHNMFK_KFMHJGIDGFL_OFFSET UNITYSDK_OFFSET(0x1CB7E500)
#define KAKADGHNMFK_KGHPDHHAIMI_OFFSET UNITYSDK_OFFSET(0x1CB7ADB0)
#define KAKADGHNMFK_KIBOPJMBNEP_OFFSET UNITYSDK_OFFSET(0x1CB7F1C0)
#define KAKADGHNMFK_KKELFHBLJHO_OFFSET UNITYSDK_OFFSET(0x1CB7B420)
#define KAKADGHNMFK_KNMHGNNDBJI_OFFSET UNITYSDK_OFFSET(0x1CB7B760)
#define KAKADGHNMFK_KOFBEFPGAJL_OFFSET UNITYSDK_OFFSET(0x1CB7EE80)
#define KAKADGHNMFK_LADFCHDLCBN_OFFSET UNITYSDK_OFFSET(0x1CB80BC0)
#define KAKADGHNMFK_LAGNCBGJMOM_OFFSET UNITYSDK_OFFSET(0x1CB80830)
#define KAKADGHNMFK_LALEJACFHLB_OFFSET UNITYSDK_OFFSET(0x1CB7FC80)
#define KAKADGHNMFK_LGPCKOPAHNB_OFFSET UNITYSDK_OFFSET(0x1CB810B0)
#define KAKADGHNMFK_LKDEDHLLHLA_OFFSET UNITYSDK_OFFSET(0x1CB808E0)
#define KAKADGHNMFK_LKGDAEBDMKN_OFFSET UNITYSDK_OFFSET(0x1CB7F890)
#define KAKADGHNMFK_LLBAOGMMPEK_OFFSET UNITYSDK_OFFSET(0x1CB7A4C0)
#define KAKADGHNMFK_LMIFCDNECAL_OFFSET UNITYSDK_OFFSET(0x1CB806C0)
#define KAKADGHNMFK_LONADNEJLOB_OFFSET UNITYSDK_OFFSET(0x1CB7E600)
#define KAKADGHNMFK_MBAMELJADDI_OFFSET UNITYSDK_OFFSET(0x1CB7B850)
#define KAKADGHNMFK_MBDLENGDIDL_OFFSET UNITYSDK_OFFSET(0x1CB7B670)
#define KAKADGHNMFK_MCADDOAKCGO_OFFSET UNITYSDK_OFFSET(0x1CB7EF80)
#define KAKADGHNMFK_MFHAAEGCFAC_OFFSET UNITYSDK_OFFSET(0x1CB7C530)
#define KAKADGHNMFK_MGJOGBMLPGI_OFFSET UNITYSDK_OFFSET(0x1CB7E1D0)
#define KAKADGHNMFK_MHGCCMJBOPF_OFFSET UNITYSDK_OFFSET(0x1CB7D890)
#define KAKADGHNMFK_MJCOFFAOFMD_OFFSET UNITYSDK_OFFSET(0x1CB7B8A0)
#define KAKADGHNMFK_MJJBMNPFCDE_OFFSET UNITYSDK_OFFSET(0x1CB803F0)
#define KAKADGHNMFK_MKFNIJDMFKC_OFFSET UNITYSDK_OFFSET(0x1CB814B0)
#define KAKADGHNMFK_MLADNIEILGD_OFFSET UNITYSDK_OFFSET(0x1CB7A890)
#define KAKADGHNMFK_MLGKDABIBIG_OFFSET UNITYSDK_OFFSET(0x1CB81840)
#define KAKADGHNMFK_MMBCGEHFBGO_OFFSET UNITYSDK_OFFSET(0x1CB7FFC0)
#define KAKADGHNMFK_MMDPNPCOFOB_OFFSET UNITYSDK_OFFSET(0x1CB81280)
#define KAKADGHNMFK_MOCMFFJAFLG_OFFSET UNITYSDK_OFFSET(0x1CB80120)
#define KAKADGHNMFK_MOIOKMGKFKG_OFFSET UNITYSDK_OFFSET(0x1CB80EF0)
#define KAKADGHNMFK_MPGPMGBLOEA_OFFSET UNITYSDK_OFFSET(0x1CB7C020)
#define KAKADGHNMFK_MPNFPPDCHHL_OFFSET UNITYSDK_OFFSET(0x1CB7A8F0)
#define KAKADGHNMFK_NFBDGDEMOON_OFFSET UNITYSDK_OFFSET(0x1CB7A6B0)
#define KAKADGHNMFK_NGAGPONIBLP_OFFSET UNITYSDK_OFFSET(0x1CB7CD60)
#define KAKADGHNMFK_NJECIGBOMHM_OFFSET UNITYSDK_OFFSET(0x1CB7ABC0)
#define KAKADGHNMFK_NKGFFCCICCF_OFFSET UNITYSDK_OFFSET(0x1CB7DEF0)
#define KAKADGHNMFK_NMPDEGPEOJA_OFFSET UNITYSDK_OFFSET(0x1CB81B70)
#define KAKADGHNMFK_NNIBEGNPEOP_OFFSET UNITYSDK_OFFSET(0x1CB7C3F0)
#define KAKADGHNMFK_NOIJELJPHLJ_OFFSET UNITYSDK_OFFSET(0x1CB7CBD0)
#define KAKADGHNMFK_OAHBCKJLFNC_OFFSET UNITYSDK_OFFSET(0x1CB800C0)
#define KAKADGHNMFK_OCMGEEGGMCD_OFFSET UNITYSDK_OFFSET(0x1CB7EBB0)
#define KAKADGHNMFK_ODAKLFPAHFE_OFFSET UNITYSDK_OFFSET(0x1CB81220)
#define KAKADGHNMFK_ODGLDEPGMKE_OFFSET UNITYSDK_OFFSET(0x1CB803A0)
#define KAKADGHNMFK_ODJKEGMNFHJ_OFFSET UNITYSDK_OFFSET(0x1CB7DB00)
#define KAKADGHNMFK_ODNHOCKIPOC_OFFSET UNITYSDK_OFFSET(0x1CB804A0)
#define KAKADGHNMFK_OEGJLBKGJHJ_OFFSET UNITYSDK_OFFSET(0x1CB80010)
#define KAKADGHNMFK_OHGBOGOHLJO_OFFSET UNITYSDK_OFFSET(0x1CB81000)
#define KAKADGHNMFK_OJMHINEFHIP_OFFSET UNITYSDK_OFFSET(0x1CB811C0)
#define KAKADGHNMFK_OKECMHNOAJJ_OFFSET UNITYSDK_OFFSET(0x1CB81C80)
#define KAKADGHNMFK_OKLCNOOEEEP_OFFSET UNITYSDK_OFFSET(0x1CB7B610)
#define KAKADGHNMFK_OKOEIJCDPDN_OFFSET UNITYSDK_OFFSET(0x1CB7EA70)
#define KAKADGHNMFK_OLBMLENEOHO_OFFSET UNITYSDK_OFFSET(0x1CB7DDF0)
#define KAKADGHNMFK_OLMIKMIIMIL_OFFSET UNITYSDK_OFFSET(0x1CB7CE10)
#define KAKADGHNMFK_OMKCFAEGMEP_OFFSET UNITYSDK_OFFSET(0x1CB81450)
#define KAKADGHNMFK_OMOLKEPAMKI_OFFSET UNITYSDK_OFFSET(0x1CB817E0)
#define KAKADGHNMFK_ONEKLOAECFG_OFFSET UNITYSDK_OFFSET(0x1CB7AE90)
#define KAKADGHNMFK_ONGONFNAMBB_OFFSET UNITYSDK_OFFSET(0x1CB7ACD0)
#define KAKADGHNMFK_OOKBEELAJPP_OFFSET UNITYSDK_OFFSET(0x1CB7AC70)
#define KAKADGHNMFK_OOMEOAIHHNM_OFFSET UNITYSDK_OFFSET(0x1CB80FA0)
#define KAKADGHNMFK_OPOILGCPCCP_OFFSET UNITYSDK_OFFSET(0x1CB80C70)
#define KAKADGHNMFK_PABGOIJJLJA_OFFSET UNITYSDK_OFFSET(0x1CB7D270)
#define KAKADGHNMFK_PCLGCDHJAIA_OFFSET UNITYSDK_OFFSET(0x1CB80940)
#define KAKADGHNMFK_PEIIIDHLILD_OFFSET UNITYSDK_OFFSET(0x1CB7FCE0)
#define KAKADGHNMFK_PEPEDLCEDEG_OFFSET UNITYSDK_OFFSET(0x1CB80CD0)
#define KAKADGHNMFK_PHJMMNLBDIM_OFFSET UNITYSDK_OFFSET(0x1CB7EC60)
#define KAKADGHNMFK_PIMNECKCIBN_OFFSET UNITYSDK_OFFSET(0x1CB7C130)
#define KAKADGHNMFK_PJAIJGBCAMJ_OFFSET UNITYSDK_OFFSET(0x1CB80DE0)
#define KAKADGHNMFK_PKDCDHAHAGP_OFFSET UNITYSDK_OFFSET(0x1CB7D160)
#define KAKADGHNMFK_PKFLPNCMDFK_OFFSET UNITYSDK_OFFSET(0x1CB7C930)
#define KAKADGHNMFK_PMDNCBBMNFD_OFFSET UNITYSDK_OFFSET(0x1CB7B9B0)
#define KAKADGHNMFK_PMOKHGKPJGI_OFFSET UNITYSDK_OFFSET(0x1CB7CFC0)
#define KAKADGHNMFK_POGNFFKNDFO_OFFSET UNITYSDK_OFFSET(0x1CB7AFF0)
#define KAKADGHNMFK_PPHCIGAKEPK_OFFSET UNITYSDK_OFFSET(0x1CB81110)
#define KAKADGHNMFK_PPKPKBDDBBN_OFFSET UNITYSDK_OFFSET(0x1CB7D9D0)
#define KAKADGHNMFK_PPPAJGDDFOK_OFFSET UNITYSDK_OFFSET(0x1CB7FBD0)

inline static constexpr unsigned int KAKADGHNMFK_TypeDefinitionIndex = 42573;

	class KAKADGHNMFK : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CTOR_OFFSET))(this);
		}

		::JGEJNOJNDOL* LLBAOGMMPEK()
		{
			return ((::JGEJNOJNDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LLBAOGMMPEK_OFFSET))(this);
		}

		::System::Boolean IHGFFOLICBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IHGFFOLICBI_OFFSET))(this);
		}

		::System::Void HCAPHNJMOAG(::System::Collections::Generic::List_1<::CEHLPJAPDIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CEHLPJAPDIP*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HCAPHNJMOAG_OFFSET))(this, a1);
		}

		::System::Void NFBDGDEMOON(::System::Collections::Generic::List_1<::CEHLPJAPDIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CEHLPJAPDIP*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NFBDGDEMOON_OFFSET))(this, a1);
		}

		::System::Void HAKLCJOEDHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HAKLCJOEDHL_OFFSET))(this);
		}

		::MLPJPKIJGGF* IDDBBOCGJJI()
		{
			return ((::MLPJPKIJGGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IDDBBOCGJJI_OFFSET))(this);
		}

		::System::Boolean MLADNIEILGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MLADNIEILGD_OFFSET))(this);
		}

		::System::Void MPNFPPDCHHL(::RPG::Client::LittleGame::ChimeraDuelGameState a1, ::DODPFANHNDG* a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelGameState, ::DODPFANHNDG*, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MPNFPPDCHHL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HOBHKJNHDOL(::RPG::Client::LittleGame::ChimeraDuelGameState a1, ::DODPFANHNDG* a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelGameState, ::DODPFANHNDG*, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HOBHKJNHDOL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HHDCCANNEID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HHDCCANNEID_OFFSET))(this);
		}

		::KKILJMLMGEB* NJECIGBOMHM()
		{
			return ((::KKILJMLMGEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NJECIGBOMHM_OFFSET))(this);
		}

		::System::Boolean OOKBEELAJPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OOKBEELAJPP_OFFSET))(this);
		}

		::System::Void ONGONFNAMBB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ONGONFNAMBB_OFFSET))(this, a1);
		}

		::System::Void KGHPDHHAIMI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KGHPDHHAIMI_OFFSET))(this, a1);
		}

		::System::Void ONEKLOAECFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ONEKLOAECFG_OFFSET))(this);
		}

		::IEAIEOGFNOG* AOOGMFNNIFF()
		{
			return ((::IEAIEOGFNOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AOOGMFNNIFF_OFFSET))(this);
		}

		::System::Boolean CHGKNDPILKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CHGKNDPILKE_OFFSET))(this);
		}

		::System::Void POGNFFKNDFO(::System::Collections::Generic::Queue_1<::IHCCOKDAFNE*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::IHCCOKDAFNE*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_POGNFFKNDFO_OFFSET))(this, a1, a2);
		}

		::System::Void AHCEPNHPFGA(::System::Collections::Generic::Queue_1<::IHCCOKDAFNE*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::IHCCOKDAFNE*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AHCEPNHPFGA_OFFSET))(this, a1, a2);
		}

		::System::Void FKOKDKNGALE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FKOKDKNGALE_OFFSET))(this);
		}

		::OLBJJCONPDB* INBJGMIHMAF()
		{
			return ((::OLBJJCONPDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_INBJGMIHMAF_OFFSET))(this);
		}

		::System::Boolean DBBBLPCNEGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DBBBLPCNEGN_OFFSET))(this);
		}

		::System::Void JNILLJPJKCC(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEventType, ::System::Collections::Generic::List_1<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEventType, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JNILLJPJKCC_OFFSET))(this, a1, a2);
		}

		::System::Void KKELFHBLJHO(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEventType, ::System::Collections::Generic::List_1<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEventType, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KKELFHBLJHO_OFFSET))(this, a1, a2);
		}

		::System::Void HGKOOPDDJIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HGKOOPDDJIC_OFFSET))(this);
		}

		::GGONIJIDEED* JKNCBBAAHPA()
		{
			return ((::GGONIJIDEED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JKNCBBAAHPA_OFFSET))(this);
		}

		::System::Boolean OKLCNOOEEEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OKLCNOOEEEP_OFFSET))(this);
		}

		::System::Void MBDLENGDIDL(::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>* a1, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>*, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MBDLENGDIDL_OFFSET))(this, a1, a2);
		}

		::System::Void KNMHGNNDBJI(::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>* a1, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>*, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KNMHGNNDBJI_OFFSET))(this, a1, a2);
		}

		::System::Void MBAMELJADDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MBAMELJADDI_OFFSET))(this);
		}

		::GKEHCGJDOIE* MJCOFFAOFMD()
		{
			return ((::GKEHCGJDOIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MJCOFFAOFMD_OFFSET))(this);
		}

		::System::Boolean EKHIPKFFDCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EKHIPKFFDCG_OFFSET))(this);
		}

		::System::Void PMDNCBBMNFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PMDNCBBMNFD_OFFSET))(this, a1);
		}

		::System::Void FNAAFDMIBGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FNAAFDMIBGK_OFFSET))(this, a1);
		}

		::System::Void JNAGBHKMMFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JNAGBHKMMFJ_OFFSET))(this);
		}

		::APLFCCFDGEG* HFMKEMDOOGD()
		{
			return ((::APLFCCFDGEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HFMKEMDOOGD_OFFSET))(this);
		}

		::System::Boolean CGNIHENGMPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CGNIHENGMPP_OFFSET))(this);
		}

		::System::Void HKEICBMKKID(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HKEICBMKKID_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void BJJIEFDEJEB(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BJJIEFDEJEB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HINNMKFHMML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HINNMKFHMML_OFFSET))(this);
		}

		::DALHPEPACNI* MPGPMGBLOEA()
		{
			return ((::DALHPEPACNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MPGPMGBLOEA_OFFSET))(this);
		}

		::System::Boolean HJLDBBIJAMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HJLDBBIJAMH_OFFSET))(this);
		}

		::System::Void PIMNECKCIBN(::System::Collections::Generic::List_1<::AILGEOEGMJK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AILGEOEGMJK*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PIMNECKCIBN_OFFSET))(this, a1);
		}

		::System::Void JKLOKBPCFPG(::System::Collections::Generic::List_1<::AILGEOEGMJK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AILGEOEGMJK*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JKLOKBPCFPG_OFFSET))(this, a1);
		}

		::System::Void GOOPFLEODHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GOOPFLEODHC_OFFSET))(this);
		}

		::FODHKECLOJF* BCEBMODKCFP()
		{
			return ((::FODHKECLOJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BCEBMODKCFP_OFFSET))(this);
		}

		::System::Boolean NNIBEGNPEOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NNIBEGNPEOP_OFFSET))(this);
		}

		::System::Void DLLNNODALBG(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DLLNNODALBG_OFFSET))(this, a1);
		}

		::System::Void MFHAAEGCFAC(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MFHAAEGCFAC_OFFSET))(this, a1);
		}

		::System::Void IJDCEOENLPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IJDCEOENLPB_OFFSET))(this);
		}

		::MDPMJLDHNAD* HDIOPNEGHIG()
		{
			return ((::MDPMJLDHNAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HDIOPNEGHIG_OFFSET))(this);
		}

		::System::Boolean JILKKKPPKCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JILKKKPPKCO_OFFSET))(this);
		}

		::System::Void KFFGMJNOPPD(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KFFGMJNOPPD_OFFSET))(this, a1);
		}

		::System::Void FILHFMBHKAH(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FILHFMBHKAH_OFFSET))(this, a1);
		}

		::System::Void PKFLPNCMDFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PKFLPNCMDFK_OFFSET))(this);
		}

		::PHLHNGJGOHK* IHLPHCLMMJD()
		{
			return ((::PHLHNGJGOHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IHLPHCLMMJD_OFFSET))(this);
		}

		::System::Boolean BFGGPLNAKDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BFGGPLNAKDD_OFFSET))(this);
		}

		::System::Void CDHCDCJFGLA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CDHCDCJFGLA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NOIJELJPHLJ(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NOIJELJPHLJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IEHHONLAKKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IEHHONLAKKF_OFFSET))(this);
		}

		::NLKGKLHJKBB* NGAGPONIBLP()
		{
			return ((::NLKGKLHJKBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NGAGPONIBLP_OFFSET))(this);
		}

		::System::Boolean OLMIKMIIMIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OLMIKMIIMIL_OFFSET))(this);
		}

		::System::Void BENCCJGOKEJ(::RPG::GameCore::ChimeraDuelEffectConfig* a1, ::System::Int32 a2, ::System::UInt32 a3, ::RPG::GameCore::ChimeraDuelBuffType a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::System::Int32, ::System::UInt32, ::RPG::GameCore::ChimeraDuelBuffType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BENCCJGOKEJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PMOKHGKPJGI(::RPG::GameCore::ChimeraDuelEffectConfig* a1, ::System::Int32 a2, ::System::UInt32 a3, ::RPG::GameCore::ChimeraDuelBuffType a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::System::Int32, ::System::UInt32, ::RPG::GameCore::ChimeraDuelBuffType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PMOKHGKPJGI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JLFBNCHNGGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JLFBNCHNGGK_OFFSET))(this);
		}

		::EHMIDEMOFCD* PKDCDHAHAGP()
		{
			return ((::EHMIDEMOFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PKDCDHAHAGP_OFFSET))(this);
		}

		::System::Boolean ALEBFCLPPJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ALEBFCLPPJL_OFFSET))(this);
		}

		::System::Void PABGOIJJLJA(::System::Single a1, ::System::Collections::Generic::Stack_1<::JOLBKPNAIFC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Stack_1<::JOLBKPNAIFC*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PABGOIJJLJA_OFFSET))(this, a1, a2);
		}

		::System::Void BDEABHGBNNP(::System::Single a1, ::System::Collections::Generic::Stack_1<::JOLBKPNAIFC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Stack_1<::JOLBKPNAIFC*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BDEABHGBNNP_OFFSET))(this, a1, a2);
		}

		::System::Void GGEDIHHHJDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GGEDIHHHJDL_OFFSET))(this);
		}

		::OEOEAGAHINJ* CLOCKOHEGKP()
		{
			return ((::OEOEAGAHINJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CLOCKOHEGKP_OFFSET))(this);
		}

		::System::Boolean AMCMCBOFACF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AMCMCBOFACF_OFFSET))(this);
		}

		::System::Void EFJCMCHEAND(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NBJLLEBFGPD*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NBJLLEBFGPD*>*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EFJCMCHEAND_OFFSET))(this, a1);
		}

		::System::Void JBMOCDOFOGJ(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NBJLLEBFGPD*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NBJLLEBFGPD*>*>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JBMOCDOFOGJ_OFFSET))(this, a1);
		}

		::System::Void BHNIAKIJLHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BHNIAKIJLHP_OFFSET))(this);
		}

		::OBCPOJCNNAA* FPOBMNHMKMJ()
		{
			return ((::OBCPOJCNNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FPOBMNHMKMJ_OFFSET))(this);
		}

		::System::Boolean MHGCCMJBOPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MHGCCMJBOPF_OFFSET))(this);
		}

		::System::Void GLDPHNJGIMI(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GLDPHNJGIMI_OFFSET))(this, a1);
		}

		::System::Void PPKPKBDDBBN(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PPKPKBDDBBN_OFFSET))(this, a1);
		}

		::System::Void DEFGBLODJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DEFGBLODJMB_OFFSET))(this);
		}

		::AHGPAGNBOHA* ODJKEGMNFHJ()
		{
			return ((::AHGPAGNBOHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ODJKEGMNFHJ_OFFSET))(this);
		}

		::System::Boolean COLAIMKDPAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_COLAIMKDPAM_OFFSET))(this);
		}

		::System::Void HDNIOOHGHBE(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HDNIOOHGHBE_OFFSET))(this, a1, a2);
		}

		::System::Void ALMEBJJHHBC(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ALMEBJJHHBC_OFFSET))(this, a1, a2);
		}

		::System::Void OLBMLENEOHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OLBMLENEOHO_OFFSET))(this);
		}

		::MCDGJEMFCOA* IHCEBOKFKGD()
		{
			return ((::MCDGJEMFCOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IHCEBOKFKGD_OFFSET))(this);
		}

		::System::Boolean NKGFFCCICCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NKGFFCCICCF_OFFSET))(this);
		}

		::System::Void CLIJLJPJGFF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CLIJLJPJGFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FKEHOHONNKP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FKEHOHONNKP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MGJOGBMLPGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MGJOGBMLPGI_OFFSET))(this);
		}

		::BEPHFOHAGJO* HDBBNHNLPLC()
		{
			return ((::BEPHFOHAGJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HDBBNHNLPLC_OFFSET))(this);
		}

		::System::Boolean FIPMEOOIMME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FIPMEOOIMME_OFFSET))(this);
		}

		::System::Void DCHFDBFKLEC(::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::ChimeraDuelMarkerType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::ChimeraDuelMarkerType>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DCHFDBFKLEC_OFFSET))(this, a1);
		}

		::System::Void IEGOKIICBCL(::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::ChimeraDuelMarkerType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::ChimeraDuelMarkerType>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IEGOKIICBCL_OFFSET))(this, a1);
		}

		::System::Void KFMHJGIDGFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KFMHJGIDGFL_OFFSET))(this);
		}

		::AJPMKPMEHAA* BFJBPEDIKGH()
		{
			return ((::AJPMKPMEHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BFJBPEDIKGH_OFFSET))(this);
		}

		::System::Boolean LONADNEJLOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LONADNEJLOB_OFFSET))(this);
		}

		::System::Void BMJJOHODAND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BMJJOHODAND_OFFSET))(this, a1);
		}

		::System::Void IIBFLPICCGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IIBFLPICCGK_OFFSET))(this, a1);
		}

		::System::Void AIICFKMCAGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AIICFKMCAGO_OFFSET))(this);
		}

		::GPADPKLBLNP* COKEEHONOIJ()
		{
			return ((::GPADPKLBLNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_COKEEHONOIJ_OFFSET))(this);
		}

		::System::Boolean ACBNFPOECNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ACBNFPOECNL_OFFSET))(this);
		}

		::System::Void DALNJDCNBJO(::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusConfig*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DALNJDCNBJO_OFFSET))(this, a1, a2);
		}

		::System::Void OKOEIJCDPDN(::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusConfig*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OKOEIJCDPDN_OFFSET))(this, a1, a2);
		}

		::System::Void ADNAEPIOAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ADNAEPIOAAI_OFFSET))(this);
		}

		::KJGGGLCOJIA* OCMGEEGGMCD()
		{
			return ((::KJGGGLCOJIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OCMGEEGGMCD_OFFSET))(this);
		}

		::System::Boolean PHJMMNLBDIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PHJMMNLBDIM_OFFSET))(this);
		}

		::System::Void IMHOIMHNFHL(::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IMHOIMHNFHL_OFFSET))(this, a1);
		}

		::System::Void FHBBJPAHLAN(::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FHBBJPAHLAN_OFFSET))(this, a1);
		}

		::System::Void KOFBEFPGAJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KOFBEFPGAJL_OFFSET))(this);
		}

		::HEHGNAHJINL* CPGIHBCBHLN()
		{
			return ((::HEHGNAHJINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CPGIHBCBHLN_OFFSET))(this);
		}

		::System::Boolean MCADDOAKCGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MCADDOAKCGO_OFFSET))(this);
		}

		::System::Void CNMMJMNKFLC(::NBFCOGKMDGA* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBFCOGKMDGA*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CNMMJMNKFLC_OFFSET))(this, a1, a2);
		}

		::System::Void CBJLGDNLCCF(::NBFCOGKMDGA* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBFCOGKMDGA*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CBJLGDNLCCF_OFFSET))(this, a1, a2);
		}

		::System::Void KIBOPJMBNEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_KIBOPJMBNEP_OFFSET))(this);
		}

		::GJEGDPICOHD* HNMHNBBHFKN()
		{
			return ((::GJEGDPICOHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HNMHNBBHFKN_OFFSET))(this);
		}

		::System::Boolean ACCKHGOCBPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ACCKHGOCBPN_OFFSET))(this);
		}

		::System::Void HOLDCBELAHF(::RPG::GameCore::ChimeraDuelTeamType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HOLDCBELAHF_OFFSET))(this, a1, a2);
		}

		::System::Void FOOPHADDBPL(::RPG::GameCore::ChimeraDuelTeamType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FOOPHADDBPL_OFFSET))(this, a1, a2);
		}

		::System::Void GDEPGDLJEPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GDEPGDLJEPG_OFFSET))(this);
		}

		::DOLCCLMMLAE* HGAIOKLHOMI()
		{
			return ((::DOLCCLMMLAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HGAIOKLHOMI_OFFSET))(this);
		}

		::System::Boolean ADCCPOEOAOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ADCCPOEOAOK_OFFSET))(this);
		}

		::System::Void HJIKNGOGJID(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HJIKNGOGJID_OFFSET))(this, a1, a2);
		}

		::System::Void GDMGEHGFNPO(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GDMGEHGFNPO_OFFSET))(this, a1, a2);
		}

		::System::Void HHOJILLMGBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HHOJILLMGBG_OFFSET))(this);
		}

		::GMPMKKLLNFC* LKGDAEBDMKN()
		{
			return ((::GMPMKKLLNFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LKGDAEBDMKN_OFFSET))(this);
		}

		::System::Boolean EIOABMEMKKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EIOABMEMKKI_OFFSET))(this);
		}

		::System::Void HAHMDOAONOC(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HAHMDOAONOC_OFFSET))(this, a1, a2);
		}

		::System::Void JHOADPJKILD(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JHOADPJKILD_OFFSET))(this, a1, a2);
		}

		::System::Void DMFEJLABBMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DMFEJLABBMB_OFFSET))(this);
		}

		::PGFJBCEDDLN* PPPAJGDDFOK()
		{
			return ((::PGFJBCEDDLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PPPAJGDDFOK_OFFSET))(this);
		}

		::System::Boolean LALEJACFHLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LALEJACFHLB_OFFSET))(this);
		}

		::System::Void PEIIIDHLILD(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PEIIIDHLILD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void AEGLIOCKGIP(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AEGLIOCKGIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MMBCGEHFBGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MMBCGEHFBGO_OFFSET))(this);
		}

		::JJKIGLIJCPA* OEGJLBKGJHJ()
		{
			return ((::JJKIGLIJCPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OEGJLBKGJHJ_OFFSET))(this);
		}

		::System::Boolean OAHBCKJLFNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OAHBCKJLFNC_OFFSET))(this);
		}

		::System::Void MOCMFFJAFLG(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::LittleGame::DuelChimeraState a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::DuelChimeraState))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MOCMFFJAFLG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DIMLMGKDLGD(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::LittleGame::DuelChimeraState a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::DuelChimeraState))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DIMLMGKDLGD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ODGLDEPGMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ODGLDEPGMKE_OFFSET))(this);
		}

		::GKEHCGJDOIE* MJJBMNPFCDE()
		{
			return ((::GKEHCGJDOIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MJJBMNPFCDE_OFFSET))(this);
		}

		::System::Boolean ODNHOCKIPOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ODNHOCKIPOC_OFFSET))(this);
		}

		::APLFCCFDGEG* IOADEACDDNE()
		{
			return ((::APLFCCFDGEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IOADEACDDNE_OFFSET))(this);
		}

		::System::Boolean BELHCJFNOGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_BELHCJFNOGA_OFFSET))(this);
		}

		::DALHPEPACNI* AGECIJNLDKK()
		{
			return ((::DALHPEPACNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AGECIJNLDKK_OFFSET))(this);
		}

		::System::Boolean LMIFCDNECAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LMIFCDNECAL_OFFSET))(this);
		}

		::FODHKECLOJF* AACMGEEBJMN()
		{
			return ((::FODHKECLOJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AACMGEEBJMN_OFFSET))(this);
		}

		::System::Boolean JNFEIOJFKHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JNFEIOJFKHA_OFFSET))(this);
		}

		::MDPMJLDHNAD* LAGNCBGJMOM()
		{
			return ((::MDPMJLDHNAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LAGNCBGJMOM_OFFSET))(this);
		}

		::System::Boolean LKDEDHLLHLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LKDEDHLLHLA_OFFSET))(this);
		}

		::PHLHNGJGOHK* EKOALMGLNJC()
		{
			return ((::PHLHNGJGOHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EKOALMGLNJC_OFFSET))(this);
		}

		::System::Boolean PCLGCDHJAIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PCLGCDHJAIA_OFFSET))(this);
		}

		::NLKGKLHJKBB* HLANDDAHALP()
		{
			return ((::NLKGKLHJKBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HLANDDAHALP_OFFSET))(this);
		}

		::System::Boolean AHBNANAIPLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AHBNANAIPLJ_OFFSET))(this);
		}

		::EHMIDEMOFCD* DBEHPMNEMEF()
		{
			return ((::EHMIDEMOFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DBEHPMNEMEF_OFFSET))(this);
		}

		::System::Boolean HKBELJJFDOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HKBELJJFDOB_OFFSET))(this);
		}

		::JGEJNOJNDOL* LADFCHDLCBN()
		{
			return ((::JGEJNOJNDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LADFCHDLCBN_OFFSET))(this);
		}

		::System::Boolean OPOILGCPCCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OPOILGCPCCP_OFFSET))(this);
		}

		::OEOEAGAHINJ* PEPEDLCEDEG()
		{
			return ((::OEOEAGAHINJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PEPEDLCEDEG_OFFSET))(this);
		}

		::System::Boolean GOLBKLKKMAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GOLBKLKKMAN_OFFSET))(this);
		}

		::AHGPAGNBOHA* PJAIJGBCAMJ()
		{
			return ((::AHGPAGNBOHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PJAIJGBCAMJ_OFFSET))(this);
		}

		::System::Boolean HIFCFGFINFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_HIFCFGFINFO_OFFSET))(this);
		}

		::OBCPOJCNNAA* MOIOKMGKFKG()
		{
			return ((::OBCPOJCNNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MOIOKMGKFKG_OFFSET))(this);
		}

		::System::Boolean OOMEOAIHHNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OOMEOAIHHNM_OFFSET))(this);
		}

		::MLPJPKIJGGF* OHGBOGOHLJO()
		{
			return ((::MLPJPKIJGGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OHGBOGOHLJO_OFFSET))(this);
		}

		::System::Boolean LGPCKOPAHNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_LGPCKOPAHNB_OFFSET))(this);
		}

		::KKILJMLMGEB* PPHCIGAKEPK()
		{
			return ((::KKILJMLMGEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_PPHCIGAKEPK_OFFSET))(this);
		}

		::System::Boolean OJMHINEFHIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OJMHINEFHIP_OFFSET))(this);
		}

		::MCDGJEMFCOA* IHNLCCCIEPO()
		{
			return ((::MCDGJEMFCOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_IHNLCCCIEPO_OFFSET))(this);
		}

		::System::Boolean ODAKLFPAHFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ODAKLFPAHFE_OFFSET))(this);
		}

		::BEPHFOHAGJO* MMDPNPCOFOB()
		{
			return ((::BEPHFOHAGJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MMDPNPCOFOB_OFFSET))(this);
		}

		::System::Boolean EOLHGGHFIGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EOLHGGHFIGJ_OFFSET))(this);
		}

		::AJPMKPMEHAA* CJLNEOKNJDO()
		{
			return ((::AJPMKPMEHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CJLNEOKNJDO_OFFSET))(this);
		}

		::System::Boolean OMKCFAEGMEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OMKCFAEGMEP_OFFSET))(this);
		}

		::GPADPKLBLNP* MKFNIJDMFKC()
		{
			return ((::GPADPKLBLNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MKFNIJDMFKC_OFFSET))(this);
		}

		::System::Boolean FCJGLFDALGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FCJGLFDALGH_OFFSET))(this);
		}

		::KJGGGLCOJIA* ENGMCFFLHBE()
		{
			return ((::KJGGGLCOJIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ENGMCFFLHBE_OFFSET))(this);
		}

		::System::Boolean DAIAFICOAOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DAIAFICOAOP_OFFSET))(this);
		}

		::HEHGNAHJINL* JCANAGJFNNN()
		{
			return ((::HEHGNAHJINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_JCANAGJFNNN_OFFSET))(this);
		}

		::System::Boolean ILHLEJEIEDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ILHLEJEIEDL_OFFSET))(this);
		}

		::GJEGDPICOHD* EIMANDPAJPF()
		{
			return ((::GJEGDPICOHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EIMANDPAJPF_OFFSET))(this);
		}

		::System::Boolean OMOLKEPAMKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OMOLKEPAMKI_OFFSET))(this);
		}

		::DOLCCLMMLAE* MLGKDABIBIG()
		{
			return ((::DOLCCLMMLAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_MLGKDABIBIG_OFFSET))(this);
		}

		::System::Boolean CKIOLLDJIFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_CKIOLLDJIFI_OFFSET))(this);
		}

		::IEAIEOGFNOG* INHLNCFBCAP()
		{
			return ((::IEAIEOGFNOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_INHLNCFBCAP_OFFSET))(this);
		}

		::System::Boolean GCDDNHFLKCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GCDDNHFLKCP_OFFSET))(this);
		}

		::GMPMKKLLNFC* ICABLKCDMBA()
		{
			return ((::GMPMKKLLNFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_ICABLKCDMBA_OFFSET))(this);
		}

		::System::Boolean AEIGLPKHCFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_AEIGLPKHCFJ_OFFSET))(this);
		}

		::PGFJBCEDDLN* NMPDEGPEOJA()
		{
			return ((::PGFJBCEDDLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_NMPDEGPEOJA_OFFSET))(this);
		}

		::System::Boolean DJBAJBIOJBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DJBAJBIOJBA_OFFSET))(this);
		}

		::OLBJJCONPDB* OKECMHNOAJJ()
		{
			return ((::OLBJJCONPDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_OKECMHNOAJJ_OFFSET))(this);
		}

		::System::Boolean GFKKEFGEINA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_GFKKEFGEINA_OFFSET))(this);
		}

		::GGONIJIDEED* FLMDKCPLINM()
		{
			return ((::GGONIJIDEED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FLMDKCPLINM_OFFSET))(this);
		}

		::System::Boolean FOAMEBOJGBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_FOAMEBOJGBF_OFFSET))(this);
		}

		::JJKIGLIJCPA* EFNHJPHBOMN()
		{
			return ((::JJKIGLIJCPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_EFNHJPHBOMN_OFFSET))(this);
		}

		::System::Boolean DPDHEBBFGDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKADGHNMFK_DPDHEBBFGDC_OFFSET))(this);
		}

	};
