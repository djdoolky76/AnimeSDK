#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/DLFHENCHFHK.h"
#include "unitysdk/EHMBKLJKIHD_OHJIOJFIGFF.h"
#include "unitysdk/FKCPBAAEJJO.h"
#include "unitysdk/GDIACAHPLBB_MNPPEMJJLGL.h"
#include "unitysdk/LGOHGEEFIKJ.h"
#include "unitysdk/MFCAMPFHMCP_GMAMIIPANLM.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/NMIOIJEMKDM.h"
#include "unitysdk/OMGDBNFKEDI.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/GDIACAHPLBB_DAEFHDKNNEL.h"
#include "unitysdk/GDIACAHPLBB_GHADOMFGCCC.h"
#include "unitysdk/GDIACAHPLBB_IOKMLJCDHOO.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/LKGACDKKAIL.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class BFLPANDDGHG;
class BOHOIMABHPG;
class CJMCICODFBN;
class CLBFDOIGIMB;
class EHKKPCGAJHO;
class EIJNABNFPJJ;
class GDIACAHPLBB_GPFNIFHHPKI;
class GEIHCPAOKKK;
class HGGBGKKEBCC;
class HJGOAJHNEGC;
class JCADHFOKIHK;
class KFGGFDDILAG;
class KHOCACCCFLJ;
class MGIBONABFJB;
class MJHDNMKGLBJ;
class MLFADFNMJFO;
class ODAGEGFJONC;
class OJDOCJLOJGG;
class PLNFNMOHHLI;
namespace MoleMole { class CGRuntimeUnit; }
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace MoleMole::Config { class StageEntry; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GDIACAHPLBB_AACFEGADPCM_OFFSET UNITYSDK_OFFSET(0x1752C720)
#define GDIACAHPLBB_AACFNPPMGNE_OFFSET UNITYSDK_OFFSET(0x17541220)
#define GDIACAHPLBB_AAHHBLKOPAI_OFFSET UNITYSDK_OFFSET(0x17550B20)
#define GDIACAHPLBB_AALKFAMJDJM_1_OFFSET UNITYSDK_OFFSET(0x1755ACF0)
#define GDIACAHPLBB_AALKFAMJDJM_OFFSET UNITYSDK_OFFSET(0x175541D0)
#define GDIACAHPLBB_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x17531110)
#define GDIACAHPLBB_AELIIHGNBEE_OFFSET UNITYSDK_OFFSET(0x17535B30)
#define GDIACAHPLBB_AHGBHNNBNPE_OFFSET UNITYSDK_OFFSET(0x175535C0)
#define GDIACAHPLBB_AHHOKNPIHMA_OFFSET UNITYSDK_OFFSET(0x17548AD0)
#define GDIACAHPLBB_AILCPPAKKGA_OFFSET UNITYSDK_OFFSET(0x1754A210)
#define GDIACAHPLBB_AJALOKJAJHH_1_OFFSET UNITYSDK_OFFSET(0x175595C0)
#define GDIACAHPLBB_AJALOKJAJHH_OFFSET UNITYSDK_OFFSET(0x17549FD0)
#define GDIACAHPLBB_AJGKGFJBHIH_OFFSET UNITYSDK_OFFSET(0x175317A0)
#define GDIACAHPLBB_AKFLAHAOJLI_1_OFFSET UNITYSDK_OFFSET(0x1754EFF0)
#define GDIACAHPLBB_AKFLAHAOJLI_OFFSET UNITYSDK_OFFSET(0x17558900)
#define GDIACAHPLBB_AKJODJAAMOD_OFFSET UNITYSDK_OFFSET(0x17549C00)
#define GDIACAHPLBB_BDEHCEHPMOI_OFFSET UNITYSDK_OFFSET(0x17539D90)
#define GDIACAHPLBB_BFIEEDGJFON_OFFSET UNITYSDK_OFFSET(0x1752D5E0)
#define GDIACAHPLBB_BFPJGLNKLPP_OFFSET UNITYSDK_OFFSET(0x17540220)
#define GDIACAHPLBB_BIEKDFKGNKH_OFFSET UNITYSDK_OFFSET(0x1753FFE0)
#define GDIACAHPLBB_BJGHGGGPFMG_OFFSET UNITYSDK_OFFSET(0x17542C20)
#define GDIACAHPLBB_BPGFFDIPLED_OFFSET UNITYSDK_OFFSET(0x1753A6A0)
#define GDIACAHPLBB_CAJCPIGODHD_OFFSET UNITYSDK_OFFSET(0x175386C0)
#define GDIACAHPLBB_CBADODKNCJB_OFFSET UNITYSDK_OFFSET(0x17544F70)
#define GDIACAHPLBB_CBCNHJCMHLA_OFFSET UNITYSDK_OFFSET(0x17526B00)
#define GDIACAHPLBB_CCBHKGNGICN_OFFSET UNITYSDK_OFFSET(0x175468D0)
#define GDIACAHPLBB_CDGEPPFPDAJ_OFFSET UNITYSDK_OFFSET(0x1755C120)
#define GDIACAHPLBB_CKJADPBAIBG_OFFSET UNITYSDK_OFFSET(0x17555070)
#define GDIACAHPLBB_CLMFMAKCPBK_1_OFFSET UNITYSDK_OFFSET(0x17554D10)
#define GDIACAHPLBB_CLMFMAKCPBK_OFFSET UNITYSDK_OFFSET(0x1753A710)
#define GDIACAHPLBB_CMEEDAIGKEG_OFFSET UNITYSDK_OFFSET(0x175562E0)
#define GDIACAHPLBB_CNKFKLJJLNH_OFFSET UNITYSDK_OFFSET(0x17558B80)
#define GDIACAHPLBB_CPGNHGHNHHN_OFFSET UNITYSDK_OFFSET(0x17534810)
#define GDIACAHPLBB_DAFKEMMGCPI_OFFSET UNITYSDK_OFFSET(0x1754B460)
#define GDIACAHPLBB_DFEHDELELAK_OFFSET UNITYSDK_OFFSET(0x1752C7F0)
#define GDIACAHPLBB_DFIDLGEFBGK_OFFSET UNITYSDK_OFFSET(0x1755B860)
#define GDIACAHPLBB_DHDPLBHKCLF_OFFSET UNITYSDK_OFFSET(0x175459F0)
#define GDIACAHPLBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17531190)
#define GDIACAHPLBB_DKJBLOPEGME_OFFSET UNITYSDK_OFFSET(0x17532B90)
#define GDIACAHPLBB_DKOJIOBCKGN_OFFSET UNITYSDK_OFFSET(0x17551550)
#define GDIACAHPLBB_DLNIDPGPIHI_OFFSET UNITYSDK_OFFSET(0x1755C6A0)
#define GDIACAHPLBB_DOAMDJJFEBJ_OFFSET UNITYSDK_OFFSET(0x17557E60)
#define GDIACAHPLBB_EBOIKEIKGFC_OFFSET UNITYSDK_OFFSET(0x1752FF90)
#define GDIACAHPLBB_ECCFBLPAFPJ_OFFSET UNITYSDK_OFFSET(0x17546A70)
#define GDIACAHPLBB_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x17531150)
#define GDIACAHPLBB_EEJALMABAMF_OFFSET UNITYSDK_OFFSET(0x175269F0)
#define GDIACAHPLBB_EFGOADGCJMA_1_OFFSET UNITYSDK_OFFSET(0x17557E70)
#define GDIACAHPLBB_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x17532210)
#define GDIACAHPLBB_EFIEDAIKLAE_OFFSET UNITYSDK_OFFSET(0x17534670)
#define GDIACAHPLBB_EHEKAKHGDAO_OFFSET UNITYSDK_OFFSET(0x175517D0)
#define GDIACAHPLBB_EIBBNINDPDL_OFFSET UNITYSDK_OFFSET(0x1753AA40)
#define GDIACAHPLBB_EIMKFKGAHBN_OFFSET UNITYSDK_OFFSET(0x175490E0)
#define GDIACAHPLBB_EKHOEPDEHNI_OFFSET UNITYSDK_OFFSET(0x1754CC10)
#define GDIACAHPLBB_EKOAIDCMPCE_1_OFFSET UNITYSDK_OFFSET(0x17528B60)
#define GDIACAHPLBB_EKOAIDCMPCE_OFFSET UNITYSDK_OFFSET(0x17528600)
#define GDIACAHPLBB_EKOMLILDFFM_OFFSET UNITYSDK_OFFSET(0x17544990)
#define GDIACAHPLBB_ELNINANOONF_1_OFFSET UNITYSDK_OFFSET(0x175573E0)
#define GDIACAHPLBB_ELNINANOONF_OFFSET UNITYSDK_OFFSET(0x17542520)
#define GDIACAHPLBB_EMMMDLLFOPI_OFFSET UNITYSDK_OFFSET(0x175327A0)
#define GDIACAHPLBB_ENKCFJONKCI_OFFSET UNITYSDK_OFFSET(0x17542AA0)
#define GDIACAHPLBB_EOMEMLCJMOD_OFFSET UNITYSDK_OFFSET(0x1753B180)
#define GDIACAHPLBB_FABPBHJLAOP_OFFSET UNITYSDK_OFFSET(0x17542B20)
#define GDIACAHPLBB_FBHPODBAMGO_OFFSET UNITYSDK_OFFSET(0x17547980)
#define GDIACAHPLBB_FDPMJKGBPDE_OFFSET UNITYSDK_OFFSET(0x17544CB0)
#define GDIACAHPLBB_FEELPCHJJGB_1_OFFSET UNITYSDK_OFFSET(0x1752DB20)
#define GDIACAHPLBB_FEELPCHJJGB_OFFSET UNITYSDK_OFFSET(0x1754AA70)
#define GDIACAHPLBB_FEMLLLEJFIA_OFFSET UNITYSDK_OFFSET(0x17556F40)
#define GDIACAHPLBB_FGHMJPFIBNJ_OFFSET UNITYSDK_OFFSET(0x1754F1C0)
#define GDIACAHPLBB_FHIHKKLKINL_OFFSET UNITYSDK_OFFSET(0x17547890)
#define GDIACAHPLBB_FJPMIPEAIIE_OFFSET UNITYSDK_OFFSET(0x1753C2A0)
#define GDIACAHPLBB_FLDMAIHKIFH_1_OFFSET UNITYSDK_OFFSET(0x17555080)
#define GDIACAHPLBB_FLDMAIHKIFH_OFFSET UNITYSDK_OFFSET(0x17539AB0)
#define GDIACAHPLBB_FPJIGEJCAMO_OFFSET UNITYSDK_OFFSET(0x1753AED0)
#define GDIACAHPLBB_GFEPBBGMLAO_OFFSET UNITYSDK_OFFSET(0x17535C20)
#define GDIACAHPLBB_GGHCLENPKDO_OFFSET UNITYSDK_OFFSET(0x17552E00)
#define GDIACAHPLBB_GJODHNKNPJD_OFFSET UNITYSDK_OFFSET(0x1752CA90)
#define GDIACAHPLBB_GKGCOPFBHKC_OFFSET UNITYSDK_OFFSET(0x175582C0)
#define GDIACAHPLBB_GKLJINIHIPB_OFFSET UNITYSDK_OFFSET(0x175465D0)
#define GDIACAHPLBB_GLJGMMODEBE_OFFSET UNITYSDK_OFFSET(0x1755B160)
#define GDIACAHPLBB_GMEDPANGIPD_OFFSET UNITYSDK_OFFSET(0x17551170)
#define GDIACAHPLBB_GOEMANCEOEN_OFFSET UNITYSDK_OFFSET(0x17559660)
#define GDIACAHPLBB_GOJHCFDGJON_OFFSET UNITYSDK_OFFSET(0x17535370)
#define GDIACAHPLBB_GPAOHEEKFCD_1_OFFSET UNITYSDK_OFFSET(0x175483F0)
#define GDIACAHPLBB_GPAOHEEKFCD_2_OFFSET UNITYSDK_OFFSET(0x17551760)
#define GDIACAHPLBB_GPAOHEEKFCD_3_OFFSET UNITYSDK_OFFSET(0x1753BE90)
#define GDIACAHPLBB_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x17527B90)
#define GDIACAHPLBB_GPCCGAPFDEH_OFFSET UNITYSDK_OFFSET(0x17539C70)
#define GDIACAHPLBB_HACPPJFJECB_OFFSET UNITYSDK_OFFSET(0x17558A10)
#define GDIACAHPLBB_HCLDCGKGBFJ_1_OFFSET UNITYSDK_OFFSET(0x175488A0)
#define GDIACAHPLBB_HCLDCGKGBFJ_2_OFFSET UNITYSDK_OFFSET(0x1754F060)
#define GDIACAHPLBB_HCLDCGKGBFJ_3_OFFSET UNITYSDK_OFFSET(0x1755BF80)
#define GDIACAHPLBB_HCLDCGKGBFJ_4_OFFSET UNITYSDK_OFFSET(0x1755C0C0)
#define GDIACAHPLBB_HCLDCGKGBFJ_OFFSET UNITYSDK_OFFSET(0x17544FD0)
#define GDIACAHPLBB_HEBKHEFKIFK_OFFSET UNITYSDK_OFFSET(0x175583F0)
#define GDIACAHPLBB_HFILBJHOHAF_OFFSET UNITYSDK_OFFSET(0x17538B20)
#define GDIACAHPLBB_HFNKCDHAIIF_OFFSET UNITYSDK_OFFSET(0x17547470)
#define GDIACAHPLBB_HGJMEFBJNIC_OFFSET UNITYSDK_OFFSET(0x17547550)
#define GDIACAHPLBB_HKCALIMAJLO_1_OFFSET UNITYSDK_OFFSET(0x1753F490)
#define GDIACAHPLBB_HKCALIMAJLO_OFFSET UNITYSDK_OFFSET(0x17545D00)
#define GDIACAHPLBB_HLPPNMMCOAB_OFFSET UNITYSDK_OFFSET(0x1752B790)
#define GDIACAHPLBB_HNODJODAHDM_OFFSET UNITYSDK_OFFSET(0x17557910)
#define GDIACAHPLBB_HOOFNANBCMC_OFFSET UNITYSDK_OFFSET(0x1754A790)
#define GDIACAHPLBB_IBKBMIMPDIJ_OFFSET UNITYSDK_OFFSET(0x175484A0)
#define GDIACAHPLBB_IBOGANHKGKB_OFFSET UNITYSDK_OFFSET(0x17530680)
#define GDIACAHPLBB_ICDGBCPBNGG_OFFSET UNITYSDK_OFFSET(0x1753A630)
#define GDIACAHPLBB_ICHPPFPGCKH_OFFSET UNITYSDK_OFFSET(0x17559F30)
#define GDIACAHPLBB_IFFICIDICEI_OFFSET UNITYSDK_OFFSET(0x1752E490)
#define GDIACAHPLBB_IFFMHPDHFMK_OFFSET UNITYSDK_OFFSET(0x17555130)
#define GDIACAHPLBB_IFJFKMHFEFN_1_OFFSET UNITYSDK_OFFSET(0x17543370)
#define GDIACAHPLBB_IFJFKMHFEFN_OFFSET UNITYSDK_OFFSET(0x17538FE0)
#define GDIACAHPLBB_IGGFKOOMGMD_OFFSET UNITYSDK_OFFSET(0x1753B8F0)
#define GDIACAHPLBB_ILGEMBKPMOC_OFFSET UNITYSDK_OFFSET(0x17547B80)
#define GDIACAHPLBB_INKNGCOKNEO_OFFSET UNITYSDK_OFFSET(0x17542BA0)
#define GDIACAHPLBB_IOFOJNIGPNO_OFFSET UNITYSDK_OFFSET(0x17536090)
#define GDIACAHPLBB_JFAELNDAKNK_OFFSET UNITYSDK_OFFSET(0x1753A400)
#define GDIACAHPLBB_JFGGADHCPDO_OFFSET UNITYSDK_OFFSET(0x17531E20)
#define GDIACAHPLBB_JFLJNCFMPCH_OFFSET UNITYSDK_OFFSET(0x17559AF0)
#define GDIACAHPLBB_JHGDJKKNHDJ_OFFSET UNITYSDK_OFFSET(0x17557AE0)
#define GDIACAHPLBB_JHJOOIDNBBP_OFFSET UNITYSDK_OFFSET(0x17542CA0)
#define GDIACAHPLBB_JKHCGBLKEND_OFFSET UNITYSDK_OFFSET(0x17554AE0)
#define GDIACAHPLBB_JMIEDJADFJF_OFFSET UNITYSDK_OFFSET(0x1753FB60)
#define GDIACAHPLBB_JOHOEIBAGCP_OFFSET UNITYSDK_OFFSET(0x17558810)
#define GDIACAHPLBB_KBFECNKHJBE_OFFSET UNITYSDK_OFFSET(0x1753F750)
#define GDIACAHPLBB_KBPAILNOKKH_OFFSET UNITYSDK_OFFSET(0x17538CB0)
#define GDIACAHPLBB_KCBPDECHPPK_OFFSET UNITYSDK_OFFSET(0x17543220)
#define GDIACAHPLBB_KFOLBJCAFMG_OFFSET UNITYSDK_OFFSET(0x175497E0)
#define GDIACAHPLBB_KGGHHODKELA_OFFSET UNITYSDK_OFFSET(0x17546030)
#define GDIACAHPLBB_KIJGAJJPKMH_OFFSET UNITYSDK_OFFSET(0x175489C0)
#define GDIACAHPLBB_KNLIBDBLEDA_OFFSET UNITYSDK_OFFSET(0x17557FA0)
#define GDIACAHPLBB_KOFHEDEJBEG_OFFSET UNITYSDK_OFFSET(0x17532D50)
#define GDIACAHPLBB_KOOIDKELFDK_OFFSET UNITYSDK_OFFSET(0x1754F800)
#define GDIACAHPLBB_KPBDOHDMCKA_OFFSET UNITYSDK_OFFSET(0x17555220)
#define GDIACAHPLBB_KPPDNGLKBPN_OFFSET UNITYSDK_OFFSET(0x17539F70)
#define GDIACAHPLBB_LALDOHAAHEG_1_OFFSET UNITYSDK_OFFSET(0x17559670)
#define GDIACAHPLBB_LALDOHAAHEG_OFFSET UNITYSDK_OFFSET(0x17549330)
#define GDIACAHPLBB_LBAJCOFJAME_OFFSET UNITYSDK_OFFSET(0x17546870)
#define GDIACAHPLBB_LBKBLLOGMDJ_OFFSET UNITYSDK_OFFSET(0x17544A80)
#define GDIACAHPLBB_LCLDMGCEIBE_OFFSET UNITYSDK_OFFSET(0x17546220)
#define GDIACAHPLBB_LJPJBPCIEAF_1_OFFSET UNITYSDK_OFFSET(0x17534F50)
#define GDIACAHPLBB_LJPJBPCIEAF_2_OFFSET UNITYSDK_OFFSET(0x1755B170)
#define GDIACAHPLBB_LJPJBPCIEAF_3_OFFSET UNITYSDK_OFFSET(0x1755B4E0)
#define GDIACAHPLBB_LJPJBPCIEAF_4_OFFSET UNITYSDK_OFFSET(0x17547E10)
#define GDIACAHPLBB_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x17524D60)
#define GDIACAHPLBB_LKNGOOCLIOJ_OFFSET UNITYSDK_OFFSET(0x1753CB60)
#define GDIACAHPLBB_LMFHLPIGMFO_OFFSET UNITYSDK_OFFSET(0x17543530)
#define GDIACAHPLBB_LNBMGDCPELE_OFFSET UNITYSDK_OFFSET(0x17533180)
#define GDIACAHPLBB_LNHKKKAECAP_OFFSET UNITYSDK_OFFSET(0x17539440)
#define GDIACAHPLBB_LPGEJBKAPOE_OFFSET UNITYSDK_OFFSET(0x175533B0)
#define GDIACAHPLBB_MACNGGKABNK_OFFSET UNITYSDK_OFFSET(0x16CADA10)
#define GDIACAHPLBB_MBIMCADPJKJ_OFFSET UNITYSDK_OFFSET(0x17557340)
#define GDIACAHPLBB_MCJGBNLJEMM_OFFSET UNITYSDK_OFFSET(0x1754F6B0)
#define GDIACAHPLBB_MDGBLNCOHEM_OFFSET UNITYSDK_OFFSET(0x17543090)
#define GDIACAHPLBB_MKOOKENGFNG_OFFSET UNITYSDK_OFFSET(0x17543110)
#define GDIACAHPLBB_MLAIGPFOMAJ_1_OFFSET UNITYSDK_OFFSET(0x17548920)
#define GDIACAHPLBB_MLAIGPFOMAJ_OFFSET UNITYSDK_OFFSET(0x175343C0)
#define GDIACAHPLBB_MNBBBNAEKGC_OFFSET UNITYSDK_OFFSET(0x17550920)
#define GDIACAHPLBB_MOICIBBOKGD_OFFSET UNITYSDK_OFFSET(0x17541A90)
#define GDIACAHPLBB_NBIMCCDOIPG_OFFSET UNITYSDK_OFFSET(0x1754F550)
#define GDIACAHPLBB_NDGBIDKGBEN_OFFSET UNITYSDK_OFFSET(0x17553650)
#define GDIACAHPLBB_NELOJAGCOFA_OFFSET UNITYSDK_OFFSET(0x17545060)
#define GDIACAHPLBB_NGCAIJHIHDN_OFFSET UNITYSDK_OFFSET(0x1754EB90)
#define GDIACAHPLBB_NIFGEEPBIFJ_OFFSET UNITYSDK_OFFSET(0x1754FD30)
#define GDIACAHPLBB_NIHGJMDOLDL_OFFSET UNITYSDK_OFFSET(0x1755C130)
#define GDIACAHPLBB_NKINMKELJPH_OFFSET UNITYSDK_OFFSET(0x1752A710)
#define GDIACAHPLBB_NNHINFOCGGM_OFFSET UNITYSDK_OFFSET(0x17536CA0)
#define GDIACAHPLBB_OHFKFADKBKJ_OFFSET UNITYSDK_OFFSET(0x175536F0)
#define GDIACAHPLBB_OIJGADJFDMN_OFFSET UNITYSDK_OFFSET(0x1753A230)
#define GDIACAHPLBB_OIOFCBIIFIB_OFFSET UNITYSDK_OFFSET(0x1754A270)
#define GDIACAHPLBB_OJCDIHLICBA_OFFSET UNITYSDK_OFFSET(0x17533F30)
#define GDIACAHPLBB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17558970)
#define GDIACAHPLBB_OKOMNBJCNPO_OFFSET UNITYSDK_OFFSET(0x17554610)
#define GDIACAHPLBB_OLLAOKHLILC_OFFSET UNITYSDK_OFFSET(0x17555A50)
#define GDIACAHPLBB_OMHOBHGIGEB_OFFSET UNITYSDK_OFFSET(0x16CADFA0)
#define GDIACAHPLBB_OMKPNKEIIMN_1_OFFSET UNITYSDK_OFFSET(0x17558850)
#define GDIACAHPLBB_OMKPNKEIIMN_OFFSET UNITYSDK_OFFSET(0x17549160)
#define GDIACAHPLBB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x175310D0)
#define GDIACAHPLBB_ONGAKHHLINM_OFFSET UNITYSDK_OFFSET(0x17547C60)
#define GDIACAHPLBB_OONBJDBCPIF_OFFSET UNITYSDK_OFFSET(0x1753FF30)
#define GDIACAHPLBB_OONBNFKKPEA_OFFSET UNITYSDK_OFFSET(0x175515B0)
#define GDIACAHPLBB_OPBBMOLIDCD_OFFSET UNITYSDK_OFFSET(0x1754EAA0)
#define GDIACAHPLBB_PDPJPGHGNEJ_OFFSET UNITYSDK_OFFSET(0x17527C40)
#define GDIACAHPLBB_PHHBDFGGEKE_OFFSET UNITYSDK_OFFSET(0x1755C690)
#define GDIACAHPLBB_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x17542120)
#define GDIACAHPLBB_PMAGKFNGMHO_1_OFFSET UNITYSDK_OFFSET(0x1754D730)
#define GDIACAHPLBB_PMAGKFNGMHO_2_OFFSET UNITYSDK_OFFSET(0x1754E070)
#define GDIACAHPLBB_PMAGKFNGMHO_OFFSET UNITYSDK_OFFSET(0x17534910)
#define GDIACAHPLBB_PMMOPOLMPEL_1_OFFSET UNITYSDK_OFFSET(0x17542060)
#define GDIACAHPLBB_PMMOPOLMPEL_OFFSET UNITYSDK_OFFSET(0x175358E0)
#define GDIACAHPLBB_PNDMNJLHOLG_OFFSET UNITYSDK_OFFSET(0x1754A540)
#define GDIACAHPLBB_PNDPCBCHCGC_1_OFFSET UNITYSDK_OFFSET(0x17553840)
#define GDIACAHPLBB_PNDPCBCHCGC_OFFSET UNITYSDK_OFFSET(0x17545070)
#define GDIACAHPLBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17532B50)
#define GDIACAHPLBB__CTOR_OFFSET UNITYSDK_OFFSET(0x17530830)

inline static constexpr unsigned int GDIACAHPLBB_TypeDefinitionIndex = 73271;

class GDIACAHPLBB
{
public:
	static ::System::Int32* StaticGet_MALLIFNIPCL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC970);
	}
	static ::System::Int32* StaticGet_FHPFKECDFPD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC974);
	}
	static ::System::Int32* StaticGet_GEJJGAIJPNI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC978);
	}
	static ::System::Int32* StaticGet_FLBIEIALHLI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC97C);
	}
	static ::System::Boolean* StaticGet_EBJCAEDDFFJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC980);
	}
	static ::System::Boolean* StaticGet_KCIDGIDFOFE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC981);
	}
	static ::System::Boolean* StaticGet_LAGGNANCANE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC982);
	}
	static ::System::Boolean* StaticGet_NCNICACMFAK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC983);
	}
	static ::System::Boolean* StaticGet_ECNCGGNGLML()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC984);
	}
	static ::System::Boolean* StaticGet_HJIFPDGJJEM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC985);
	}
	static ::System::Boolean* StaticGet_AJKCLPNOINM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC986);
	}
	static ::System::Boolean* StaticGet_CIENKPOHFGK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC987);
	}
	static ::System::Int32* StaticGet_NIFJPHOBFHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC988);
	}
	static ::System::Boolean* StaticGet_OGKBGLANDDP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC98C);
	}
	static ::System::Boolean* StaticGet_DNAFFIMKOED()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC98D);
	}
	static ::System::Boolean* StaticGet_FDLHNNLBIHE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC98E);
	}
	static ::System::Boolean* StaticGet_OPOFPMNODCO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB_TypeDefinitionIndex)->GetStaticField(0xC98F);
	}
	// static const ::System::String* FNJHBKLKIBP; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>*>* LBPAGABJNLP; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* NJNEILODFHA; // 0x18
	::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>* CKHBOCMNJCM; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::System::Int32>* ENAKJHLOMMB; // 0x28
	::GDIACAHPLBB_GPFNIFHHPKI* DHANEKNKINN; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* PJKOKAJMCNM; // 0x38
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::System::Object*>* GGGAALGMMNJ; // 0x40
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* CFHMPPNKCKG; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CPMIGPMHCCN; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LNCOGIKGBIF; // 0x58
	::UnityEngine::GameObject* PFPEPLHEICC; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* BOEDHJONAIL; // 0x68
	::System::Collections::Generic::Queue_1<::MoleMole::EntityHandle>* BGHEGNODDIH; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* DLONKBKFFIE; // 0x78
	::System::Collections::Generic::List_1<::System::Object*>* OABKEMBPLMA; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GLDEPJALJPC; // 0x88
	::GDIACAHPLBB_GPFNIFHHPKI* DFGCLNEEIHJ; // 0x90
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::System::Object*>* BMHMAGKLADN; // 0x98
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EFIJGFCFOJI; // 0xA0
	::System::Collections::Generic::List_1<::System::UInt32>* NANDODHONAN; // 0xA8
	::System::Collections::Generic::List_1<::System::Object*>* HKIPFMCOEOF; // 0xB0
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* DFIHPNDHAEJ; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* _CMJAFIFCKCE_k__BackingField; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* JJMFKLAICEI; // 0xC8
	::System::Int32 ANGMMHDIGOK; // 0xD0
	::System::Boolean _KFBACLKNPAE_k__BackingField; // 0xD4
	::System::Boolean ABEDNPMNAEI; // 0xD5
	::System::Boolean DBLNPBGMPKN; // 0xD6
	::System::Boolean DLKOGGJPCLG; // 0xD7
	::System::Single GGGAJMMNMOC; // 0xD8
	::System::Int32 JECKBBMOOKF; // 0xDC
	::System::Boolean _BPHKCNHKNOB_k__BackingField; // 0xE0
	::System::Boolean AFJFMFAJHCB; // 0xE1
	::System::Byte _padding0[0x2];
	::System::UInt32 DHLFJDCJBMM; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIACAHPLBB__CCTOR_OFFSET))();
	}

	::MoleMole::Battle::Entity* EEJALMABAMF(::System::Boolean EIPELKONNME, ::System::String* GNLHDJJEPDJ, ::System::Boolean BFOODCLEBLG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EEJALMABAMF_OFFSET))(this, EIPELKONNME, GNLHDJJEPDJ, BFOODCLEBLG);
	}

	::MoleMole::Battle::Entity* CBCNHJCMHLA(::System::Boolean EIPELKONNME, ::MoleMole::Config::StageEntry* HNMINGJFFPA, ::System::Boolean BFOODCLEBLG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CBCNHJCMHLA_OFFSET))(this, EIPELKONNME, HNMINGJFFPA, BFOODCLEBLG);
	}

	::MoleMole::Battle::Entity* PDPJPGHGNEJ(::System::Int32 OIKFFGKDHME, ::System::Int32 JHFKDGBCOBA, ::UnityEngine::Vector3 FMJGOHNLJNA, ::FKCPBAAEJJO ANABLMFCGBH, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::System::Boolean MKFNCEIIPKH, ::System::Int32 NOKMIJNFMBH, ::System::Nullable_1<::System::Object*> KMGJPMEJDJJ, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* ABMOHLBOBOP, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::FKCPBAAEJJO, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::System::Object*>, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PDPJPGHGNEJ_OFFSET))(this, OIKFFGKDHME, JHFKDGBCOBA, FMJGOHNLJNA, ANABLMFCGBH, CKPGOKHECCH, HBOHIAPEIMH, MKFNCEIIPKH, NOKMIJNFMBH, KMGJPMEJDJJ, ABMOHLBOBOP, DJKNNEEKHGK);
	}

	::MoleMole::Battle::Entity* EKOAIDCMPCE(::UnityEngine::GameObject* GHCHJIHPLAJ, ::System::Single DKKHJHILMGM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EKOAIDCMPCE_OFFSET))(this, GHCHJIHPLAJ, DKKHJHILMGM);
	}

	::MoleMole::Battle::Entity* EKOAIDCMPCE_1(::UnityEngine::GameObject* ALFGDOFNCAJ, ::BFLPANDDGHG* ALLCJOCNFLI, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::DLFHENCHFHK FCPCLIJNDLA, ::System::Single DKKHJHILMGM, ::LGOHGEEFIKJ ONPLLFPEAKO)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::BFLPANDDGHG*, ::GDIACAHPLBB_IOKMLJCDHOO, ::DLFHENCHFHK, ::System::Single, ::LGOHGEEFIKJ))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EKOAIDCMPCE_1_OFFSET))(this, ALFGDOFNCAJ, ALLCJOCNFLI, INGHGKDGJPJ, FCPCLIJNDLA, DKKHJHILMGM, ONPLLFPEAKO);
	}

	::MoleMole::Battle::Entity* GJODHNKNPJD(::System::Int32 AKGHKOKPPKK, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::GDIACAHPLBB_GHADOMFGCCC AILBDGGEINN, ::UnityEngine::GameObject* ALFGDOFNCAJ, ::LGOHGEEFIKJ ONPLLFPEAKO, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* CKHMMFCFKMD)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::GDIACAHPLBB_IOKMLJCDHOO, ::GDIACAHPLBB_GHADOMFGCCC, ::UnityEngine::GameObject*, ::LGOHGEEFIKJ, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GJODHNKNPJD_OFFSET))(this, AKGHKOKPPKK, INGHGKDGJPJ, AILBDGGEINN, ALFGDOFNCAJ, ONPLLFPEAKO, CKHMMFCFKMD);
	}

	::MoleMole::Battle::Entity* IFFICIDICEI(::ODAGEGFJONC* ALLCJOCNFLI, ::System::Boolean OECHNBLPKLB, ::System::UInt32 BNJIAGILAGG, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* JMKEMGKMGGI, ::MJHDNMKGLBJ* DIKBLHHJGBD)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::ODAGEGFJONC*, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IFFICIDICEI_OFFSET))(this, ALLCJOCNFLI, OECHNBLPKLB, BNJIAGILAGG, JMKEMGKMGGI, DIKBLHHJGBD);
	}

	::MoleMole::Battle::Entity* EBOIKEIKGFC(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Boolean CIJNHPMPPLH, ::System::UInt32 IPBDNMMELHK, ::System::UInt32 KHBAJKCFJBN, ::System::Single DKKHJHILMGM, ::System::Collections::Generic::List_1<::OMGDBNFKEDI>* PMMLEKAKMIC, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::System::Boolean LNPCFDMNMDE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Collections::Generic::List_1<::OMGDBNFKEDI>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EBOIKEIKGFC_OFFSET))(this, OHOGDOMNHNK, CFJFMMGPGKE, KBHFBLJPFJH, CIJNHPMPPLH, IPBDNMMELHK, KHBAJKCFJBN, DKKHJHILMGM, PMMLEKAKMIC, DJKNNEEKHGK, LNPCFDMNMDE);
	}

	::MoleMole::Battle::Entity* IBOGANHKGKB()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IBOGANHKGKB_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean EFGOADGCJMA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean PDABBPAODHC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EFGOADGCJMA_OFFSET))(this, KECKGDFIALJ, PDABBPAODHC);
	}

	::System::Void DKJBLOPEGME(::System::UInt32 MMMAPFIJFGA, ::MoleMole::Battle::Entity* DMOKPOFNHBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKJBLOPEGME_OFFSET))(this, MMMAPFIJFGA, DMOKPOFNHBI);
	}

	::MoleMole::Battle::Entity* KOFHEDEJBEG(::System::Int32 DPJLKNKHIKA, ::System::String* IDNOPIBFBNC, ::System::String* FKOHLNEKEJH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AKBJMFGBNPJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KOFHEDEJBEG_OFFSET))(this, DPJLKNKHIKA, IDNOPIBFBNC, FKOHLNEKEJH, AKBJMFGBNPJ);
	}

	::System::Void OJCDIHLICBA(::System::UInt32 MMMAPFIJFGA, ::System::String* AELLPLBJELA, ::System::Boolean ABCNGAEFBNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OJCDIHLICBA_OFFSET))(this, MMMAPFIJFGA, AELLPLBJELA, ABCNGAEFBNL);
	}

	::System::Void MLAIGPFOMAJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::Nap::NapECS::ComponentMask& HGJGKEPIINH, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MLAIGPFOMAJ_OFFSET))(this, KECKGDFIALJ, HGJGKEPIINH, FNGBEJKAECI);
	}

	::System::Boolean CPGNHGHNHHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CPGNHGHNHHN_OFFSET))(this);
	}

	::System::Void PMAGKFNGMHO(::System::String* NCHCMKEAHCD, ::MoleMole::Config::ConfigPosRot* JMKFFMEAIEP, ::System::String* JMBNHKNMAND, ::UnityEngine::Vector3 CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean BJJEMEIGJJC, ::BOHOIMABHPG* NJDABJNCIJL, ::JCADHFOKIHK* KADBFNFHENH, ::System::Boolean EBAJLMBGMFE, ::System::String* AELLPLBJELA, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::BOHOIMABHPG*, ::JCADHFOKIHK*, ::System::Boolean, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PMAGKFNGMHO_OFFSET))(this, NCHCMKEAHCD, JMKFFMEAIEP, JMBNHKNMAND, CLMNLPKFBFA, AMNIHACKELI, BJJEMEIGJJC, NJDABJNCIJL, KADBFNFHENH, EBAJLMBGMFE, AELLPLBJELA, LIBPKNHDIGP, PBLAIBLPPOO, HLFADLPEEDJ);
	}

	static ::System::Boolean GOJHCFDGJON(::KFGGFDDILAG* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::KFGGFDDILAG*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GOJHCFDGJON_OFFSET))(DEKJDEPKKLH);
	}

	::MoleMole::Battle::Entity* GFEPBBGMLAO(::HGGBGKKEBCC* HMMMOCJAEOA, ::System::Int32 MGMDLMBEDJF, ::System::UInt64 ACHBBPJIBIE, ::System::Int32 AELLPLBJELA, ::KFGGFDDILAG* DEKJDEPKKLH, ::UnityEngine::Vector3 MIPENCPJPEA, ::UnityEngine::Quaternion NDAAPJNEHFI, ::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::String* MCEPDOAAMMH, ::MFCAMPFHMCP_GMAMIIPANLM NFBMPNHHOBF, ::System::Boolean OECHNBLPKLB, ::System::Boolean LCBJJKDGGGA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HGGBGKKEBCC*, ::System::Int32, ::System::UInt64, ::System::Int32, ::KFGGFDDILAG*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Config::EntityType, ::System::String*, ::MFCAMPFHMCP_GMAMIIPANLM, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GFEPBBGMLAO_OFFSET))(this, HMMMOCJAEOA, MGMDLMBEDJF, ACHBBPJIBIE, AELLPLBJELA, DEKJDEPKKLH, MIPENCPJPEA, NDAAPJNEHFI, MKCOMJHINNJ, MCEPDOAAMMH, NFBMPNHHOBF, OECHNBLPKLB, LCBJJKDGGGA);
	}

	::System::Boolean CAJCPIGODHD(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean HIHGEPIOMON)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CAJCPIGODHD_OFFSET))(this, KECKGDFIALJ, AELLPLBJELA, HIHGEPIOMON);
	}

	::System::Void JFGGADHCPDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JFGGADHCPDO_OFFSET))(this);
	}

	static ::System::Boolean PMMOPOLMPEL(::KFGGFDDILAG* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::KFGGFDDILAG*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PMMOPOLMPEL_OFFSET))(DEKJDEPKKLH);
	}

	::System::Boolean KBPAILNOKKH(::MoleMole::Battle::Entity* OLKHDAAGGAA, ::MoleMole::Battle::Entity* NJLNJCLGLNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KBPAILNOKKH_OFFSET))(this, OLKHDAAGGAA, NJLNJCLGLNO);
	}

	::MoleMole::Battle::Entity* IFJFKMHFEFN(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::Vector3 JMFFGJMMCAC, ::System::Single CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::UnityEngine::Transform* ADANBLPKILM, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 ODNKEAPMILG, ::UnityEngine::Vector3 GEDCCBHAEDM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IFJFKMHFEFN_OFFSET))(this, CJBJONJDOLI, JMFFGJMMCAC, CLMNLPKFBFA, AMNIHACKELI, ADANBLPKILM, DNIJMEGMFCE, ODNKEAPMILG, GEDCCBHAEDM);
	}

	::System::Void LNHKKKAECAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LNHKKKAECAP_OFFSET))(this);
	}

	::System::Void FLDMAIHKIFH(::System::UInt32 BKLGNCBNEGM, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FLDMAIHKIFH_OFFSET))(this, BKLGNCBNEGM, DMPEOJCCCLO);
	}

	::MoleMole::Battle::Entity* GPCCGAPFDEH(::System::Int32 MGMDLMBEDJF, ::UnityEngine::Vector3 MIPENCPJPEA, ::UnityEngine::Quaternion JIOHHPBNDMJ, ::System::Boolean OECHNBLPKLB)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GPCCGAPFDEH_OFFSET))(this, MGMDLMBEDJF, MIPENCPJPEA, JIOHHPBNDMJ, OECHNBLPKLB);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* BDEHCEHPMOI()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_BDEHCEHPMOI_OFFSET))(this);
	}

	::System::Void OIJGADJFDMN(::MoleMole::Config::EntityType OBNIAHNMHPF, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OIJGADJFDMN_OFFSET))(this, OBNIAHNMHPF, KECKGDFIALJ);
	}

	::System::Void JFAELNDAKNK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean KICLNPMPOEI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JFAELNDAKNK_OFFSET))(this, KECKGDFIALJ, KICLNPMPOEI);
	}

	::System::Void CLMFMAKCPBK(::MoleMole::Battle::Entity* PNJNAAHKAIB, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EPGFFDBHIIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CLMFMAKCPBK_OFFSET))(this, PNJNAAHKAIB, EPGFFDBHIIF);
	}

	::System::Void EIBBNINDPDL(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EntityType OBNIAHNMHPF, ::Nap::NapECS::ComponentMask& BPOJOMKPFGH, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::System::Boolean IDGDCIBCLAH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EIBBNINDPDL_OFFSET))(this, KECKGDFIALJ, OBNIAHNMHPF, BPOJOMKPFGH, FNGBEJKAECI, IDGDCIBCLAH);
	}

	::System::Void EOMEMLCJMOD(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::KHOCACCCFLJ* BADGDCJFCGC, ::System::Boolean DHHKDCDLLFD, ::UnityEngine::GameObject* LHPFMGBDFPN, ::MoleMole::CharacterScriptConfig* NLAKPPOFLDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::BFLPANDDGHG*, ::GDIACAHPLBB_IOKMLJCDHOO, ::KHOCACCCFLJ*, ::System::Boolean, ::UnityEngine::GameObject*, ::MoleMole::CharacterScriptConfig*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EOMEMLCJMOD_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, INGHGKDGJPJ, BADGDCJFCGC, DHHKDCDLLFD, LHPFMGBDFPN, NLAKPPOFLDN);
	}

	::System::Void IGGFKOOMGMD(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean NOLBECKFLEK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IGGFKOOMGMD_OFFSET))(this, KECKGDFIALJ, NOLBECKFLEK);
	}

	::MoleMole::Battle::Entity* GPAOHEEKFCD(::MoleMole::Config::EntityType OBNIAHNMHPF, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::System::Boolean IDGDCIBCLAH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GPAOHEEKFCD_OFFSET))(this, OBNIAHNMHPF, FNGBEJKAECI, IDGDCIBCLAH);
	}

	static ::System::Void FJPMIPEAIIE(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FJPMIPEAIIE_OFFSET))(param_0);
	}

	::MoleMole::Battle::Entity* LKNGOOCLIOJ(::HJGOAJHNEGC* ALLCJOCNFLI, ::MoleMole::Config::CampType PEDKGCGKOFD, ::System::Boolean OECHNBLPKLB, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* JMKEMGKMGGI, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::Foundation::AssetPath NACKAHKHILM, ::UnityEngine::GameObject* DOKDOOMEDJO, ::System::Boolean JADLOGIHPPK, ::System::Boolean CABPLBPDJPJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HJGOAJHNEGC*, ::MoleMole::Config::CampType, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LKNGOOCLIOJ_OFFSET))(this, ALLCJOCNFLI, PEDKGCGKOFD, OECHNBLPKLB, JMKEMGKMGGI, DJKNNEEKHGK, NACKAHKHILM, DOKDOOMEDJO, JADLOGIHPPK, CABPLBPDJPJ);
	}

	::System::Void KBFECNKHJBE(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Collections::Generic::IList_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KBFECNKHJBE_OFFSET))(this, KECKGDFIALJ, JMDOANHOEJG);
	}

	static ::System::Void OONBJDBCPIF(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OONBJDBCPIF_OFFSET))(param_0);
	}

	static ::System::Boolean BIEKDFKGNKH(::MoleMole::Config::SceneConfigRuntimeDataArea PHLLHLMCOAC, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeDataArea, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_BIEKDFKGNKH_OFFSET))(PHLLHLMCOAC, KECKGDFIALJ);
	}

	::MoleMole::Battle::Entity* BFPJGLNKLPP(::HJGOAJHNEGC* ALLCJOCNFLI)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HJGOAJHNEGC*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_BFPJGLNKLPP_OFFSET))(this, ALLCJOCNFLI);
	}

	::System::Void AACFNPPMGNE(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Transform* CCFOEPIAHON, ::NMIOIJEMKDM IOOHOBCELHE, ::NMIOIJEMKDM AHDHDAGHAJB, ::UnityEngine::Vector3 JLMKNKAOADH, ::UnityEngine::Vector3 COIJBFLIPGM, ::UnityEngine::Vector3& JMFFGJMMCAC, ::UnityEngine::Quaternion& CKMIDJKEGFP)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::UnityEngine::Transform*, ::NMIOIJEMKDM, ::NMIOIJEMKDM, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AACFNPPMGNE_OFFSET))(this, OHPJHPEOFLD, CCFOEPIAHON, IOOHOBCELHE, AHDHDAGHAJB, JLMKNKAOADH, COIJBFLIPGM, JMFFGJMMCAC, CKMIDJKEGFP);
	}

	::MoleMole::Battle::Entity* MOICIBBOKGD(::HGGBGKKEBCC* HMMMOCJAEOA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HGGBGKKEBCC*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MOICIBBOKGD_OFFSET))(this, HMMMOCJAEOA);
	}

	static ::System::Boolean PMMOPOLMPEL_1(::System::Int32 BBOLKIABJHA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PMMOPOLMPEL_1_OFFSET))(BBOLKIABJHA);
	}

	::System::Void PLCJNBHECGC(::System::Single LAMNHJNAFJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PLCJNBHECGC_OFFSET))(this, LAMNHJNAFJN);
	}

	::System::Void EMMMDLLFOPI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EntityType OBNIAHNMHPF, ::System::Boolean GPCHIMBGNJO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EMMMDLLFOPI_OFFSET))(this, KECKGDFIALJ, OBNIAHNMHPF, GPCHIMBGNJO);
	}

	::MoleMole::Battle::Entity* ELNINANOONF(::UnityEngine::GameObject* ALFGDOFNCAJ, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean FEMDGAMFEAO)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ELNINANOONF_OFFSET))(this, ALFGDOFNCAJ, AMNIHACKELI, FEMDGAMFEAO);
	}

	static ::System::Void ENKCFJONKCI(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ENKCFJONKCI_OFFSET))(param_0);
	}

	::System::Void BFIEEDGJFON(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::System::Int32 AKGHKOKPPKK, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::GDIACAHPLBB_GHADOMFGCCC AILBDGGEINN, ::UnityEngine::GameObject* ALFGDOFNCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::Int32, ::GDIACAHPLBB_IOKMLJCDHOO, ::GDIACAHPLBB_GHADOMFGCCC, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_BFIEEDGJFON_OFFSET))(this, FNGBEJKAECI, AKGHKOKPPKK, INGHGKDGJPJ, AILBDGGEINN, ALFGDOFNCAJ);
	}

	static ::System::Void JHJOOIDNBBP(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JHJOOIDNBBP_OFFSET))(param_0);
	}

	::MoleMole::Battle::Entity* IFJFKMHFEFN_1(::System::String* CJBJONJDOLI, ::UnityEngine::Vector3 JMFFGJMMCAC, ::System::Single CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::UnityEngine::Transform* ADANBLPKILM, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 ODNKEAPMILG, ::UnityEngine::Vector3 GEDCCBHAEDM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IFJFKMHFEFN_1_OFFSET))(this, CJBJONJDOLI, JMFFGJMMCAC, CLMNLPKFBFA, AMNIHACKELI, ADANBLPKILM, DNIJMEGMFCE, ODNKEAPMILG, GEDCCBHAEDM);
	}

	::System::Boolean LMFHLPIGMFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LMFHLPIGMFO_OFFSET))(this);
	}

	::System::Void HCLDCGKGBFJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::Nap::NapECS::ComponentMask& CPFMIOAAMAI, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::System::Boolean IDGDCIBCLAH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HCLDCGKGBFJ_OFFSET))(this, KECKGDFIALJ, CPFMIOAAMAI, FNGBEJKAECI, IDGDCIBCLAH);
	}

	::System::Void NELOJAGCOFA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NELOJAGCOFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PNDPCBCHCGC(::System::String* NCHCMKEAHCD, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::MoleMole::Battle::Entity* AMNIHACKELI, ::MoleMole::Config::ConfigPosRot* JMKFFMEAIEP, ::System::String* AELLPLBJELA, ::LFGBJHCEJID CIENIIDMJLE, ::UnityEngine::Vector3 CLMNLPKFBFA, ::BOHOIMABHPG* NJDABJNCIJL, ::System::Boolean HLFADLPEEDJ, ::AEMCAOEICDG*& OHPJHPEOFLD, ::EHKKPCGAJHO*& POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::LFGBJHCEJID, ::UnityEngine::Vector3, ::BOHOIMABHPG*, ::System::Boolean, ::AEMCAOEICDG*&, ::EHKKPCGAJHO*&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PNDPCBCHCGC_OFFSET))(this, NCHCMKEAHCD, PBLAIBLPPOO, AMNIHACKELI, JMKFFMEAIEP, AELLPLBJELA, CIENIIDMJLE, CLMNLPKFBFA, NJDABJNCIJL, HLFADLPEEDJ, OHPJHPEOFLD, POBADKEDFOE);
	}

	::MoleMole::Battle::Entity* DHDPLBHKCLF(::MoleMole::Battle::Entity* BCMPPBLJNIG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DHDPLBHKCLF_OFFSET))(this, BCMPPBLJNIG);
	}

	::System::Void HKCALIMAJLO(::MoleMole::CharacterScriptConfig* LPPGAGBKDEG, ::System::Int32 CJPLACFCFBP, ::System::Collections::Generic::List_1<::System::Int32>* JEHINDLIHNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HKCALIMAJLO_OFFSET))(this, LPPGAGBKDEG, CJPLACFCFBP, JEHINDLIHNH);
	}

	::System::Boolean KGGHHODKELA(::MoleMole::GameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*& FGICKMCDOPM, ::System::Boolean BFIAPCFMNFG, ::System::Boolean DHLPHDPAHEO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KGGHHODKELA_OFFSET))(this, AELLPLBJELA, FGICKMCDOPM, BFIAPCFMNFG, DHLPHDPAHEO);
	}

	::System::Void LCLDMGCEIBE(::MoleMole::Battle::Entity* PNJNAAHKAIB, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EPGFFDBHIIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LCLDMGCEIBE_OFFSET))(this, PNJNAAHKAIB, EPGFFDBHIIF);
	}

	::MoleMole::Battle::Entity* GKLJINIHIPB(::MoleMole::Config::StageEntry* HNMINGJFFPA, ::System::Boolean EFLPKKJJDHI)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GKLJINIHIPB_OFFSET))(this, HNMINGJFFPA, EFLPKKJJDHI);
	}

	::System::UInt32 LBAJCOFJAME(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LBAJCOFJAME_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CCBHKGNGICN(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CCBHKGNGICN_OFFSET))(this, FNGBEJKAECI);
	}

	::MoleMole::Battle::Entity* ECCFBLPAFPJ(::MoleMole::CGRuntimeUnit* DGCGOJNDKPM, ::System::Single CLMNLPKFBFA, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* NGBEIOPNHAJ, ::System::Collections::Generic::List_1<::System::Int32>* KEEFNDKMMMJ, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LNIDMABKFOE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::System::Single, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ECCFBLPAFPJ_OFFSET))(this, DGCGOJNDKPM, CLMNLPKFBFA, NGBEIOPNHAJ, KEEFNDKMMMJ, LNIDMABKFOE);
	}

	::System::Boolean HFNKCDHAIIF(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HFNKCDHAIIF_OFFSET))(this, KECKGDFIALJ, JMDOANHOEJG);
	}

	::MoleMole::Battle::Entity* HGJMEFBJNIC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HGJMEFBJNIC_OFFSET))(this);
	}

	::System::Void FHIHKKLKINL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FHIHKKLKINL_OFFSET))(this);
	}

	::System::Boolean FBHPODBAMGO(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MJHDNMKGLBJ* GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FBHPODBAMGO_OFFSET))(this, KECKGDFIALJ, GBELIHABEDH);
	}

	::System::Void ILGEMBKPMOC(::System::Int32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ILGEMBKPMOC_OFFSET))(this, NJNCGJLHLKC);
	}

	::MoleMole::Battle::Entity* LJPJBPCIEAF(::System::String* IEOIDDDKNFI, ::UnityEngine::Vector3 CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 JLMKNKAOADH, ::UnityEngine::Vector3 COIJBFLIPGM, ::NMIOIJEMKDM IOOHOBCELHE, ::NMIOIJEMKDM AHDHDAGHAJB, ::System::Boolean BJJEMEIGJJC, ::System::Boolean PDLNCLINHEA, ::BOHOIMABHPG* NJDABJNCIJL, ::System::String* AELLPLBJELA, ::System::Boolean LOOCMJBNOLC, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* DDCCBACEPJP, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::System::Boolean HLFADLPEEDJ, ::MGIBONABFJB* ICMEAOHFOOB)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NMIOIJEMKDM, ::NMIOIJEMKDM, ::System::Boolean, ::System::Boolean, ::BOHOIMABHPG*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Boolean, ::MGIBONABFJB*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LJPJBPCIEAF_OFFSET))(this, IEOIDDDKNFI, CLMNLPKFBFA, AMNIHACKELI, DNIJMEGMFCE, JLMKNKAOADH, COIJBFLIPGM, IOOHOBCELHE, AHDHDAGHAJB, BJJEMEIGJJC, PDLNCLINHEA, NJDABJNCIJL, AELLPLBJELA, LOOCMJBNOLC, DDCCBACEPJP, PBLAIBLPPOO, HLFADLPEEDJ, ICMEAOHFOOB);
	}

	::MoleMole::Battle::Entity* GPAOHEEKFCD_1(::MoleMole::Config::EntityType OBNIAHNMHPF)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GPAOHEEKFCD_1_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void LBKBLLOGMDJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 LPOIBLLILAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LBKBLLOGMDJ_OFFSET))(this, KECKGDFIALJ, LPOIBLLILAA);
	}

	::Nap::NapECS::EcsEntity* IBKBMIMPDIJ()
	{
		return ((::Nap::NapECS::EcsEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IBKBMIMPDIJ_OFFSET))(this);
	}

	::System::Void HCLDCGKGBFJ_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::System::Boolean IDGDCIBCLAH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HCLDCGKGBFJ_1_OFFSET))(this, KECKGDFIALJ, FNGBEJKAECI, IDGDCIBCLAH);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* KIJGAJJPKMH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KIJGAJJPKMH_OFFSET))(this);
	}

	static ::System::Void KCBPDECHPPK(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KCBPDECHPPK_OFFSET))(param_0);
	}

	::System::Void AHHOKNPIHMA(::System::Text::StringBuilder* CKGGMNHMKDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AHHOKNPIHMA_OFFSET))(this, CKGGMNHMKDB);
	}

	::System::Void HLPPNMMCOAB(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::CJMCICODFBN* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::System::Int32 HMAPIOGKBNB, ::System::Int32 OCEOJGHJCOM, ::MoleMole::Battle::MonsterAlertInitParams PFCEINCACMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::BFLPANDDGHG*, ::CJMCICODFBN*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Int32, ::System::Int32, ::MoleMole::Battle::MonsterAlertInitParams))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HLPPNMMCOAB_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB, HMAPIOGKBNB, OCEOJGHJCOM, PFCEINCACMD);
	}

	::MoleMole::Battle::Entity* EIMKFKGAHBN(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EIMKFKGAHBN_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void OMKPNKEIIMN(::System::UInt32 BKLGNCBNEGM, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OMKPNKEIIMN_OFFSET))(this, BKLGNCBNEGM, DMPEOJCCCLO);
	}

	::System::Boolean LALDOHAAHEG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::System::String*>* JMDOANHOEJG, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LALDOHAAHEG_OFFSET))(this, KECKGDFIALJ, JMDOANHOEJG, BFIAPCFMNFG);
	}

	::MoleMole::Battle::Entity* IOFOJNIGPNO(::HGGBGKKEBCC* HMMMOCJAEOA, ::System::Int32 MGMDLMBEDJF, ::System::UInt64 ACHBBPJIBIE, ::System::Int32 AELLPLBJELA, ::UnityEngine::Vector3 MIPENCPJPEA, ::UnityEngine::Quaternion JIOHHPBNDMJ, ::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::Int32 JBDONIFPPCJ, ::System::Int32 OEFEBKMHLDC, ::System::Int32 KMBKMLKKKAJ, ::System::Boolean LAMIFGDEHBJ, ::MFCAMPFHMCP_GMAMIIPANLM NFBMPNHHOBF)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HGGBGKKEBCC*, ::System::Int32, ::System::UInt64, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::MFCAMPFHMCP_GMAMIIPANLM))((::PBYTE)hIl2Cpp + GDIACAHPLBB_IOFOJNIGPNO_OFFSET))(this, HMMMOCJAEOA, MGMDLMBEDJF, ACHBBPJIBIE, AELLPLBJELA, MIPENCPJPEA, JIOHHPBNDMJ, MKCOMJHINNJ, JBDONIFPPCJ, OEFEBKMHLDC, KMBKMLKKKAJ, LAMIFGDEHBJ, NFBMPNHHOBF);
	}

	::System::Void AKJODJAAMOD(::System::UInt32 AEAJFDPHCIK, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CKCMCFAOLCE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AKJODJAAMOD_OFFSET))(this, AEAJFDPHCIK, AELLPLBJELA, CKCMCFAOLCE);
	}

	::System::Void AJALOKJAJHH(::System::Int64 OAKIADBHPBP, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* LEOMPPIGAFI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AJALOKJAJHH_OFFSET))(this, OAKIADBHPBP, LEOMPPIGAFI);
	}

	::System::Void OIOFCBIIFIB(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OIOFCBIIFIB_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean HOOFNANBCMC(::System::String*& NCHCMKEAHCD, ::MoleMole::Battle::Entity* AMNIHACKELI, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& PBLAIBLPPOO, ::System::Boolean OICHCJDHJOF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HOOFNANBCMC_OFFSET))(this, NCHCMKEAHCD, AMNIHACKELI, PBLAIBLPPOO, OICHCJDHJOF);
	}

	::System::Void FEELPCHJJGB(::MoleMole::Battle::Entity* CDLJLMNHMAL, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::System::Int32 AKGHKOKPPKK, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::Int32, ::GDIACAHPLBB_IOKMLJCDHOO))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FEELPCHJJGB_OFFSET))(this, CDLJLMNHMAL, FNGBEJKAECI, AKGHKOKPPKK, INGHGKDGJPJ);
	}

	::MoleMole::Battle::Entity* DAFKEMMGCPI(::EIJNABNFPJJ* ALLCJOCNFLI)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::EIJNABNFPJJ*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DAFKEMMGCPI_OFFSET))(this, ALLCJOCNFLI);
	}

	::MoleMole::Battle::Entity* EKHOEPDEHNI(::UnityEngine::GameObject* JCFADCIKCOM, ::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::Int32 HKHHHJHCGKL, ::System::Single CLMNLPKFBFA, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* NGBEIOPNHAJ, ::System::Int32 OADCNNFCALF, ::System::Boolean PJNGOCCHGAC)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EKHOEPDEHNI_OFFSET))(this, JCFADCIKCOM, MKCOMJHINNJ, HKHHHJHCGKL, CLMNLPKFBFA, NGBEIOPNHAJ, OADCNNFCALF, PJNGOCCHGAC);
	}

	::System::Void PMAGKFNGMHO_1(::System::String* IEOIDDDKNFI, ::UnityEngine::Vector3 CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 JLMKNKAOADH, ::UnityEngine::Vector3 COIJBFLIPGM, ::NMIOIJEMKDM IOOHOBCELHE, ::NMIOIJEMKDM AHDHDAGHAJB, ::System::Boolean BJJEMEIGJJC, ::System::Boolean PDLNCLINHEA, ::System::Action_1<::MoleMole::Battle::Entity*>* EDEDLPAJMHB, ::System::Boolean EBAJLMBGMFE, ::BOHOIMABHPG* NJDABJNCIJL, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NMIOIJEMKDM, ::NMIOIJEMKDM, ::System::Boolean, ::System::Boolean, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::System::Boolean, ::BOHOIMABHPG*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PMAGKFNGMHO_1_OFFSET))(this, IEOIDDDKNFI, CLMNLPKFBFA, AMNIHACKELI, DNIJMEGMFCE, JLMKNKAOADH, COIJBFLIPGM, IOOHOBCELHE, AHDHDAGHAJB, BJJEMEIGJJC, PDLNCLINHEA, EDEDLPAJMHB, EBAJLMBGMFE, NJDABJNCIJL, HLFADLPEEDJ);
	}

	::System::Void OPBBMOLIDCD(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean AGJGPFFDDPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPBBMOLIDCD_OFFSET))(this, KECKGDFIALJ, AGJGPFFDDPG);
	}

	::System::Void NGCAIJHIHDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NGCAIJHIHDN_OFFSET))(this);
	}

	::System::Void HCLDCGKGBFJ_2(::MoleMole::Battle::Entity* KECKGDFIALJ, ::Nap::NapECS::EcsComponent* JGNKBCCPKGD, ::Nap::NapECS::EcsComponent* NBBPFMNJAFK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Nap::NapECS::EcsComponent*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HCLDCGKGBFJ_2_OFFSET))(this, KECKGDFIALJ, JGNKBCCPKGD, NBBPFMNJAFK);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EKOMLILDFFM(::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EKOMLILDFFM_OFFSET))(this, MKCOMJHINNJ);
	}

	::MoleMole::Battle::Entity* FGHMJPFIBNJ(::MoleMole::Battle::Entity* HBKBNNKEEIA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FGHMJPFIBNJ_OFFSET))(this, HBKBNNKEEIA);
	}

	::System::Boolean NBIMCCDOIPG(::System::UInt32 BKLGNCBNEGM, ::System::Int32 IJMOMICKHEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NBIMCCDOIPG_OFFSET))(this, BKLGNCBNEGM, IJMOMICKHEN);
	}

	static ::System::Void FABPBHJLAOP(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FABPBHJLAOP_OFFSET))(param_0);
	}

	::System::Void KOOIDKELFDK(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::KHOCACCCFLJ* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::BFLPANDDGHG*, ::KHOCACCCFLJ*, ::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KOOIDKELFDK_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB);
	}

	::System::Void NKINMKELJPH(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::CJMCICODFBN* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::BFLPANDDGHG* ALLCJOCNFLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::CJMCICODFBN*, ::MoleMole::SkillCharacterScriptConfig*, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NKINMKELJPH_OFFSET))(this, FNGBEJKAECI, BADGDCJFCGC, DFMKILICPFB, ALLCJOCNFLI);
	}

	::MoleMole::Battle::Entity* AAHHBLKOPAI(::System::String* ABOMFKBGCAJ, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::OJDOCJLOJGG* OOMJGFAPKKD, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean FEMDGAMFEAO, ::EHMBKLJKIHD_OHJIOJFIGFF OBNIAHNMHPF, ::System::String* BHNHOEONIBL, ::ABLJDBEJNNI JJPEDAMOOLA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::OJDOCJLOJGG*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::EHMBKLJKIHD_OHJIOJFIGFF, ::System::String*, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AAHHBLKOPAI_OFFSET))(this, ABOMFKBGCAJ, CKPGOKHECCH, CFJFMMGPGKE, OOMJGFAPKKD, AMNIHACKELI, FEMDGAMFEAO, OBNIAHNMHPF, BHNHOEONIBL, JJPEDAMOOLA);
	}

	::MoleMole::Battle::Entity* GMEDPANGIPD(::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* DDECGPLFKEC, ::System::UInt64 ACHBBPJIBIE, ::System::Int32 AELLPLBJELA, ::MFCAMPFHMCP_GMAMIIPANLM NFBMPNHHOBF)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::UInt64, ::System::Int32, ::MFCAMPFHMCP_GMAMIIPANLM))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GMEDPANGIPD_OFFSET))(this, MKCOMJHINNJ, DDECGPLFKEC, ACHBBPJIBIE, AELLPLBJELA, NFBMPNHHOBF);
	}

	::System::Boolean MCJGBNLJEMM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MJHDNMKGLBJ* PEMCBJPGEFA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MCJGBNLJEMM_OFFSET))(this, KECKGDFIALJ, PEMCBJPGEFA);
	}

	::UnityEngine::GameObject* DKOJIOBCKGN(::System::String* EOFKCOBCNNI)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKOJIOBCKGN_OFFSET))(this, EOFKCOBCNNI);
	}

	::MoleMole::Battle::Entity* GPAOHEEKFCD_2(::MoleMole::Config::EntityType OBNIAHNMHPF, ::Nap::NapECS::ComponentMask& BPOJOMKPFGH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GPAOHEEKFCD_2_OFFSET))(this, OBNIAHNMHPF, BPOJOMKPFGH);
	}

	::MoleMole::Battle::Entity* LJPJBPCIEAF_1(::System::String* NCHCMKEAHCD, ::MoleMole::Config::ConfigPosRot* JMKFFMEAIEP, ::UnityEngine::Vector3 CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean BJJEMEIGJJC, ::BOHOIMABHPG* NJDABJNCIJL, ::JCADHFOKIHK* KADBFNFHENH, ::System::Boolean LOOCMJBNOLC, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* DDCCBACEPJP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::System::Boolean HLFADLPEEDJ, ::MGIBONABFJB* ICMEAOHFOOB)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::BOHOIMABHPG*, ::JCADHFOKIHK*, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Boolean, ::MGIBONABFJB*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LJPJBPCIEAF_1_OFFSET))(this, NCHCMKEAHCD, JMKFFMEAIEP, CLMNLPKFBFA, AMNIHACKELI, BJJEMEIGJJC, NJDABJNCIJL, KADBFNFHENH, LOOCMJBNOLC, AELLPLBJELA, DDCCBACEPJP, LIBPKNHDIGP, PBLAIBLPPOO, HLFADLPEEDJ, ICMEAOHFOOB);
	}

	static ::System::Boolean CBADODKNCJB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CBADODKNCJB_OFFSET))(KECKGDFIALJ);
	}

	::MoleMole::Battle::Entity* LPGEJBKAPOE(::System::UInt32 AEAJFDPHCIK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LPGEJBKAPOE_OFFSET))(this, AEAJFDPHCIK);
	}

	static ::System::Void AHGBHNNBNPE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIACAHPLBB_AHGBHNNBNPE_OFFSET))();
	}

	::System::Void NDGBIDKGBEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NDGBIDKGBEN_OFFSET))(this);
	}

	::System::Boolean DFEHDELELAK(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean HIHGEPIOMON, ::System::Boolean MIGAILJFMOP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DFEHDELELAK_OFFSET))(this, KECKGDFIALJ, AELLPLBJELA, HIHGEPIOMON, MIGAILJFMOP);
	}

	static ::System::Int64 OHFKFADKBKJ(::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>* MLHKAPEEMAA)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OHFKFADKBKJ_OFFSET))(MLHKAPEEMAA);
	}

	::System::Void FEELPCHJJGB_1(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::System::Int32 AKGHKOKPPKK, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::Int32, ::GDIACAHPLBB_IOKMLJCDHOO))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FEELPCHJJGB_1_OFFSET))(this, FNGBEJKAECI, AKGHKOKPPKK, INGHGKDGJPJ);
	}

	::System::Void JMIEDJADFJF(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean MIGAILJFMOP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JMIEDJADFJF_OFFSET))(this, KECKGDFIALJ, AELLPLBJELA, MIGAILJFMOP);
	}

	::System::Void PNDPCBCHCGC_1(::System::String* NCHCMKEAHCD, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::MoleMole::Battle::Entity* AMNIHACKELI, ::UnityEngine::Transform* ADANBLPKILM, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 ODNKEAPMILG, ::UnityEngine::Vector3 GEDCCBHAEDM, ::System::String* AELLPLBJELA, ::System::Boolean OICHCJDHJOF, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 IPPHHNPKAFP, ::UnityEngine::Vector3 CLMNLPKFBFA, ::BOHOIMABHPG* NJDABJNCIJL, ::System::Boolean HLFADLPEEDJ, ::AEMCAOEICDG*& OHPJHPEOFLD, ::EHKKPCGAJHO*& POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::BOHOIMABHPG*, ::System::Boolean, ::AEMCAOEICDG*&, ::EHKKPCGAJHO*&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PNDPCBCHCGC_1_OFFSET))(this, NCHCMKEAHCD, PBLAIBLPPOO, AMNIHACKELI, ADANBLPKILM, DNIJMEGMFCE, ODNKEAPMILG, GEDCCBHAEDM, AELLPLBJELA, OICHCJDHJOF, JMFFGJMMCAC, CFJFMMGPGKE, IPPHHNPKAFP, CLMNLPKFBFA, NJDABJNCIJL, HLFADLPEEDJ, OHPJHPEOFLD, POBADKEDFOE);
	}

	::System::Void PMAGKFNGMHO_2(::System::String* NCHCMKEAHCD, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::UnityEngine::Transform* ADANBLPKILM, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 ODNKEAPMILG, ::UnityEngine::Vector3 GEDCCBHAEDM, ::System::Boolean BJJEMEIGJJC, ::System::Boolean PDLNCLINHEA, ::System::Action_1<::MoleMole::Battle::Entity*>* EDEDLPAJMHB, ::System::Boolean OICHCJDHJOF, ::System::Boolean EBAJLMBGMFE, ::BOHOIMABHPG* NJDABJNCIJL, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::System::Boolean, ::System::Boolean, ::BOHOIMABHPG*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PMAGKFNGMHO_2_OFFSET))(this, NCHCMKEAHCD, JMFFGJMMCAC, CFJFMMGPGKE, KBHFBLJPFJH, CLMNLPKFBFA, AMNIHACKELI, ADANBLPKILM, DNIJMEGMFCE, ODNKEAPMILG, GEDCCBHAEDM, BJJEMEIGJJC, PDLNCLINHEA, EDEDLPAJMHB, OICHCJDHJOF, EBAJLMBGMFE, NJDABJNCIJL, PBLAIBLPPOO, HLFADLPEEDJ);
	}

	::System::Boolean FDPMJKGBPDE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FDPMJKGBPDE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AALKFAMJDJM(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Collections::Generic::IList_1<::MoleMole::GameplayTag>* JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::IList_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AALKFAMJDJM_OFFSET))(this, KECKGDFIALJ, JMDOANHOEJG);
	}

	::MoleMole::Battle::Entity* OKOMNBJCNPO(::System::UInt32 AEAJFDPHCIK, ::System::Single NCCDJLDKFGA, ::System::Single MDPPNMIPDMP, ::System::Single KKAMDFNMMJH, ::UnityEngine::Vector3 NAGMALJOFMN, ::System::Boolean BKCGLMJKDMF, ::System::String* AELLPLBJELA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OKOMNBJCNPO_OFFSET))(this, AEAJFDPHCIK, NCCDJLDKFGA, MDPPNMIPDMP, KKAMDFNMMJH, NAGMALJOFMN, BKCGLMJKDMF, AELLPLBJELA);
	}

	::System::Void JKHCGBLKEND(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::KHOCACCCFLJ* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::System::Int32 HMAPIOGKBNB, ::System::Int32 OCEOJGHJCOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::BFLPANDDGHG*, ::KHOCACCCFLJ*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JKHCGBLKEND_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB, HMAPIOGKBNB, OCEOJGHJCOM);
	}

	::System::Boolean KFOLBJCAFMG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KFOLBJCAFMG_OFFSET))(this, KECKGDFIALJ, AELLPLBJELA, BFIAPCFMNFG);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CLMFMAKCPBK_1(::MoleMole::Battle::Entity* PNJNAAHKAIB)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CLMFMAKCPBK_1_OFFSET))(this, PNJNAAHKAIB);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* CKJADPBAIBG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CKJADPBAIBG_OFFSET))(this);
	}

	::System::Void FLDMAIHKIFH_1(::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FLDMAIHKIFH_1_OFFSET))(this, DMPEOJCCCLO);
	}

	static ::System::Single IFFMHPDHFMK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GDIACAHPLBB_IFFMHPDHFMK_OFFSET))();
	}

	::MoleMole::Battle::Entity* KPBDOHDMCKA(::BFLPANDDGHG* ALLCJOCNFLI, ::System::Int32 GBJPFAPBDIJ, ::System::Byte CCMEMAALPHG, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::System::Boolean OAKEJJFKDIP, ::System::Int32 DKJOJIDOCMI, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::BFLPANDDGHG*, ::System::Int32, ::System::Byte, ::GDIACAHPLBB_IOKMLJCDHOO, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KPBDOHDMCKA_OFFSET))(this, ALLCJOCNFLI, GBJPFAPBDIJ, CCMEMAALPHG, INGHGKDGJPJ, OAKEJJFKDIP, DKJOJIDOCMI, DJKNNEEKHGK);
	}

	::System::Collections::IEnumerator* MBIMCADPJKJ(::System::Single FNIOPKPHDEH, ::System::Action* DMPEOJCCCLO)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MBIMCADPJKJ_OFFSET))(this, FNIOPKPHDEH, DMPEOJCCCLO);
	}

	::MoleMole::Battle::Entity* ELNINANOONF_1(::System::String* ABOMFKBGCAJ, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Single NCCDJLDKFGA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean FEMDGAMFEAO, ::System::String* BHNHOEONIBL, ::ABLJDBEJNNI JJPEDAMOOLA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ELNINANOONF_1_OFFSET))(this, ABOMFKBGCAJ, CKPGOKHECCH, CFJFMMGPGKE, NCCDJLDKFGA, AMNIHACKELI, FEMDGAMFEAO, BHNHOEONIBL, JJPEDAMOOLA);
	}

	::MoleMole::Battle::Entity* HNODJODAHDM(::System::String* AABLMHIPMLF, ::System::String* AELLPLBJELA, ::System::String* FPBNHPCLHMI, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HNODJODAHDM_OFFSET))(this, AABLMHIPMLF, AELLPLBJELA, FPBNHPCLHMI, DJHFOGHIFEJ);
	}

	::System::Void FEMLLLEJFIA(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::CJMCICODFBN* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::System::Int32 OCEOJGHJCOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::BFLPANDDGHG*, ::CJMCICODFBN*, ::MoleMole::SkillCharacterScriptConfig*, ::GDIACAHPLBB_IOKMLJCDHOO, ::System::Int32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FEMLLLEJFIA_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB, INGHGKDGJPJ, OCEOJGHJCOM);
	}

	::System::Boolean PNDMNJLHOLG(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PNDMNJLHOLG_OFFSET))(this, KECKGDFIALJ, AELLPLBJELA);
	}

	::MoleMole::Battle::Entity* JHGDJKKNHDJ(::System::String* JNPDFEGBIOL, ::ABLJDBEJNNI ENFJKIKHPHP, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 EKKKBHBPOOB, ::UnityEngine::Vector3 BEPMDFENBMH, ::System::Boolean DILDOHFJHNP, ::System::Boolean BMPOALLAFJN)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::ABLJDBEJNNI, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JHGDJKKNHDJ_OFFSET))(this, JNPDFEGBIOL, ENFJKIKHPHP, OHOGDOMNHNK, EKKKBHBPOOB, BEPMDFENBMH, DILDOHFJHNP, BMPOALLAFJN);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* DOAMDJJFEBJ()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DOAMDJJFEBJ_OFFSET))(this);
	}

	::System::Boolean EFGOADGCJMA_1(::System::UInt32 NJNCGJLHLKC, ::System::Boolean PDABBPAODHC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EFGOADGCJMA_1_OFFSET))(this, NJNCGJLHLKC, PDABBPAODHC);
	}

	::System::Void KNLIBDBLEDA(::System::UInt32 AEAJFDPHCIK, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CKCMCFAOLCE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KNLIBDBLEDA_OFFSET))(this, AEAJFDPHCIK, CKCMCFAOLCE);
	}

	::System::Void OLLAOKHLILC(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::CJMCICODFBN* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::System::Boolean DHHKDCDLLFD, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::BFLPANDDGHG*, ::CJMCICODFBN*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Boolean, ::GDIACAHPLBB_IOKMLJCDHOO))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OLLAOKHLILC_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB, DHHKDCDLLFD, INGHGKDGJPJ);
	}

	::System::Void AJGKGFJBHIH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AJGKGFJBHIH_OFFSET))(this, KECKGDFIALJ);
	}

	::MoleMole::Battle::Entity* EHEKAKHGDAO(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean PDLNCLINHEA, ::System::Boolean BJJEMEIGJJC, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* DDCCBACEPJP, ::System::Boolean JKPEACLJNEP, ::System::Action_1<::MoleMole::Battle::Entity*>* PECNAJNPEKK, ::System::Boolean HLFADLPEEDJ, ::PLNFNMOHHLI* HGDMBHDKFPK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::System::Boolean, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::System::Boolean, ::PLNFNMOHHLI*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EHEKAKHGDAO_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE, AMNIHACKELI, PDLNCLINHEA, BJJEMEIGJJC, DDCCBACEPJP, JKPEACLJNEP, PECNAJNPEKK, HLFADLPEEDJ, HGDMBHDKFPK);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* JOHOEIBAGCP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JOHOEIBAGCP_OFFSET))(this);
	}

	::System::Void HFILBJHOHAF(::MoleMole::EntityHandle KECKGDFIALJ, ::GDIACAHPLBB_MNPPEMJJLGL BPINANLEDPD, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::GDIACAHPLBB_MNPPEMJJLGL, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HFILBJHOHAF_OFFSET))(this, KECKGDFIALJ, BPINANLEDPD, AELLPLBJELA);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* AELIIHGNBEE(::MoleMole::Config::EntityType OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AELIIHGNBEE_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void OMKPNKEIIMN_1(::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::MoleMole::EntityHandle, ::System::Object*, ::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OMKPNKEIIMN_1_OFFSET))(this, DMPEOJCCCLO);
	}

	static ::System::Void MKOOKENGFNG(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MKOOKENGFNG_OFFSET))(param_0);
	}

	::System::Boolean AKFLAHAOJLI(::System::UInt32 NJNCGJLHLKC, ::System::Boolean PDABBPAODHC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AKFLAHAOJLI_OFFSET))(this, NJNCGJLHLKC, PDABBPAODHC);
	}

	::System::Void ICDGBCPBNGG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ICDGBCPBNGG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OKJCHFGIKBH(::System::Single LAMNHJNAFJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OKJCHFGIKBH_OFFSET))(this, LAMNHJNAFJN);
	}

	::System::Void AACFEGADPCM(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::GDIACAHPLBB_IOKMLJCDHOO))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AACFEGADPCM_OFFSET))(this, FNGBEJKAECI, INGHGKDGJPJ);
	}

	::System::Void CMEEDAIGKEG(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::CJMCICODFBN* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::BFLPANDDGHG*, ::CJMCICODFBN*, ::MoleMole::SkillCharacterScriptConfig*, ::GDIACAHPLBB_IOKMLJCDHOO))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CMEEDAIGKEG_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB, INGHGKDGJPJ);
	}

	::System::Void EFIEDAIKLAE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_EFIEDAIKLAE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GKGCOPFBHKC(::MoleMole::Config::EntityType OBNIAHNMHPF, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GKGCOPFBHKC_OFFSET))(this, OBNIAHNMHPF, KECKGDFIALJ);
	}

	static ::System::Void MDGBLNCOHEM(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MDGBLNCOHEM_OFFSET))(param_0);
	}

	::MoleMole::Battle::Entity* HACPPJFJECB(::BFLPANDDGHG* ALLCJOCNFLI, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::System::Boolean EJDDDPDMCHB, ::System::Boolean DHHKDCDLLFD, ::System::Int32 DKJOJIDOCMI, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::MoleMole::Battle::MonsterAlertInitParams PFCEINCACMD, ::System::Collections::Generic::List_1<::System::String*>* EGDAPONDHCE, ::System::Collections::Generic::List_1<::System::String*>* NOMGGIJCGLE, ::System::Action_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* IFLJGNDENPM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::BFLPANDDGHG*, ::GDIACAHPLBB_IOKMLJCDHOO, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::MoleMole::Battle::MonsterAlertInitParams, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HACPPJFJECB_OFFSET))(this, ALLCJOCNFLI, INGHGKDGJPJ, EJDDDPDMCHB, DHHKDCDLLFD, DKJOJIDOCMI, DJKNNEEKHGK, PFCEINCACMD, EGDAPONDHCE, NOMGGIJCGLE, IFLJGNDENPM);
	}

	::System::Void AJALOKJAJHH_1(::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>* MLHKAPEEMAA, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* FPPOOCHLOHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AJALOKJAJHH_1_OFFSET))(this, MLHKAPEEMAA, FPPOOCHLOHJ);
	}

	::System::Boolean GOEMANCEOEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GOEMANCEOEN_OFFSET))(this);
	}

	::System::Void BPGFFDIPLED(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_BPGFFDIPLED_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void NIFGEEPBIFJ(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::KHOCACCCFLJ* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::BFLPANDDGHG* ALLCJOCNFLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::KHOCACCCFLJ*, ::MoleMole::SkillCharacterScriptConfig*, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NIFGEEPBIFJ_OFFSET))(this, FNGBEJKAECI, BADGDCJFCGC, DFMKILICPFB, ALLCJOCNFLI);
	}

	::System::Boolean LALDOHAAHEG_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* JMDOANHOEJG, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LALDOHAAHEG_1_OFFSET))(this, KECKGDFIALJ, JMDOANHOEJG, BFIAPCFMNFG);
	}

	::MoleMole::Battle::Entity* JFLJNCFMPCH()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_JFLJNCFMPCH_OFFSET))(this);
	}

	static ::System::Boolean KPPDNGLKBPN(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_KPPDNGLKBPN_OFFSET))(HODAIDNDKHD);
	}

	::System::Void ICHPPFPGCKH(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::BFLPANDDGHG* ALLCJOCNFLI, ::CJMCICODFBN* BADGDCJFCGC, ::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::System::Boolean DHHKDCDLLFD, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::BFLPANDDGHG*, ::CJMCICODFBN*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Boolean, ::GDIACAHPLBB_IOKMLJCDHOO))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ICHPPFPGCKH_OFFSET))(this, FNGBEJKAECI, ALLCJOCNFLI, BADGDCJFCGC, DFMKILICPFB, DHHKDCDLLFD, INGHGKDGJPJ);
	}

	::System::Void AALKFAMJDJM_1(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Collections::Generic::IList_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AALKFAMJDJM_1_OFFSET))(this, KECKGDFIALJ, JMDOANHOEJG);
	}

	::MoleMole::Battle::Entity* GPAOHEEKFCD_3(::MoleMole::Config::EntityType OBNIAHNMHPF, ::Nap::NapECS::ComponentMask& BPOJOMKPFGH, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& FNGBEJKAECI, ::System::Boolean IDGDCIBCLAH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Config::EntityType, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GPAOHEEKFCD_3_OFFSET))(this, OBNIAHNMHPF, BPOJOMKPFGH, FNGBEJKAECI, IDGDCIBCLAH);
	}

	::System::Void GLJGMMODEBE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GLJGMMODEBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MLAIGPFOMAJ_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MLAIGPFOMAJ_1_OFFSET))(this, KECKGDFIALJ, FNGBEJKAECI);
	}

	::MoleMole::Battle::Entity* LJPJBPCIEAF_2(::System::String* IEOIDDDKNFI, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LJPJBPCIEAF_2_OFFSET))(this, IEOIDDDKNFI, OHOGDOMNHNK, BFBELMDIAHI, AMNIHACKELI, HLFADLPEEDJ);
	}

	::MoleMole::Battle::Entity* NNHINFOCGGM(::HGGBGKKEBCC* HMMMOCJAEOA, ::System::Int32 GNACJDDHNDC, ::System::UInt64 ACHBBPJIBIE, ::System::Int32 AELLPLBJELA, ::KFGGFDDILAG* DEKJDEPKKLH, ::UnityEngine::Vector3 MIPENCPJPEA, ::UnityEngine::Quaternion JIOHHPBNDMJ, ::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::String* MCEPDOAAMMH, ::MFCAMPFHMCP_GMAMIIPANLM NFBMPNHHOBF, ::System::Boolean OECHNBLPKLB, ::System::Boolean LCBJJKDGGGA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HGGBGKKEBCC*, ::System::Int32, ::System::UInt64, ::System::Int32, ::KFGGFDDILAG*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Config::EntityType, ::System::String*, ::MFCAMPFHMCP_GMAMIIPANLM, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NNHINFOCGGM_OFFSET))(this, HMMMOCJAEOA, GNACJDDHNDC, ACHBBPJIBIE, AELLPLBJELA, DEKJDEPKKLH, MIPENCPJPEA, JIOHHPBNDMJ, MKCOMJHINNJ, MCEPDOAAMMH, NFBMPNHHOBF, OECHNBLPKLB, LCBJJKDGGGA);
	}

	::UnityEngine::Transform* ONGAKHHLINM(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* DNIJMEGMFCE)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::GEIHCPAOKKK*, ::System::String*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_ONGAKHHLINM_OFFSET))(this, OHPJHPEOFLD, DNIJMEGMFCE);
	}

	::UnityEngine::GameObject* OONBNFKKPEA()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OONBNFKKPEA_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* LJPJBPCIEAF_3(::System::String* IEOIDDDKNFI, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Boolean HLFADLPEEDJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LJPJBPCIEAF_3_OFFSET))(this, IEOIDDDKNFI, OHOGDOMNHNK, BFBELMDIAHI, JNLBPMKIFNK, HLFADLPEEDJ);
	}

	::MoleMole::Battle::Entity* LNBMGDCPELE(::System::Int32 DPJLKNKHIKA, ::UnityEngine::Vector3 MIPENCPJPEA, ::UnityEngine::Vector3 NDAAPJNEHFI, ::System::String* FKOHLNEKEJH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AKBJMFGBNPJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LNBMGDCPELE_OFFSET))(this, DPJLKNKHIKA, MIPENCPJPEA, NDAAPJNEHFI, FKOHLNEKEJH, AKBJMFGBNPJ);
	}

	::MoleMole::Battle::Entity* GGHCLENPKDO(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean PDLNCLINHEA, ::System::String* AELLPLBJELA, ::System::Boolean BJJEMEIGJJC, ::System::Int32 MLKLCEKJGPE, ::System::Boolean JKPEACLJNEP, ::System::Boolean HLFADLPEEDJ, ::PLNFNMOHHLI* HGDMBHDKFPK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PLNFNMOHHLI*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GGHCLENPKDO_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE, AMNIHACKELI, PDLNCLINHEA, AELLPLBJELA, BJJEMEIGJJC, MLKLCEKJGPE, JKPEACLJNEP, HLFADLPEEDJ, HGDMBHDKFPK);
	}

	static ::UnityEngine::AsyncOperation* HEBKHEFKIFK(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE, ::UnityEngine::GameObject*& DMFLKNFLLDE, ::Foundation::AssetRequestHandle& BEDJECEBHNG)
	{
		return ((::UnityEngine::AsyncOperation*(*)(::AEMCAOEICDG*, ::EHKKPCGAJHO*, ::UnityEngine::GameObject*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HEBKHEFKIFK_OFFSET))(OHPJHPEOFLD, POBADKEDFOE, DMFLKNFLLDE, BEDJECEBHNG);
	}

	::MoleMole::Battle::Entity* LJPJBPCIEAF_4(::System::String* NCHCMKEAHCD, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 CLMNLPKFBFA, ::MoleMole::Battle::Entity* AMNIHACKELI, ::UnityEngine::Transform* ADANBLPKILM, ::System::String* DNIJMEGMFCE, ::UnityEngine::Vector3 ODNKEAPMILG, ::UnityEngine::Vector3 GEDCCBHAEDM, ::System::Boolean BJJEMEIGJJC, ::System::Boolean PDLNCLINHEA, ::UnityEngine::Vector3 IPPHHNPKAFP, ::BOHOIMABHPG* NJDABJNCIJL, ::System::Boolean OICHCJDHJOF, ::System::Boolean LOOCMJBNOLC, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* DDCCBACEPJP, ::System::Action_1<::MoleMole::Battle::Entity*>* PECNAJNPEKK, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::System::Boolean HLFADLPEEDJ, ::MGIBONABFJB* ICMEAOHFOOB, ::PLNFNMOHHLI* HGDMBHDKFPK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::BOHOIMABHPG*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Boolean, ::MGIBONABFJB*, ::PLNFNMOHHLI*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_LJPJBPCIEAF_4_OFFSET))(this, NCHCMKEAHCD, JMFFGJMMCAC, CFJFMMGPGKE, CLMNLPKFBFA, AMNIHACKELI, ADANBLPKILM, DNIJMEGMFCE, ODNKEAPMILG, GEDCCBHAEDM, BJJEMEIGJJC, PDLNCLINHEA, IPPHHNPKAFP, NJDABJNCIJL, OICHCJDHJOF, LOOCMJBNOLC, AELLPLBJELA, DDCCBACEPJP, PECNAJNPEKK, PBLAIBLPPOO, HLFADLPEEDJ, ICMEAOHFOOB, HGDMBHDKFPK);
	}

	::MoleMole::Battle::Entity* DFIDLGEFBGK(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ContinueAttackDetect* NMCJECFIOHC, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Quaternion GHEAAGFCKGH, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* KBABOEEDDHE, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 PONMIAPMPML, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MLFADFNMJFO*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DFIDLGEFBGK_OFFSET))(this, MFMPICKHAMJ, LBPBFHIPIBF, NMCJECFIOHC, FBNGKPGLADH, BBFAJBKOAOB, JMFFGJMMCAC, GHEAAGFCKGH, FOJFMJKALKO, KBABOEEDDHE, KMMGKJPAOMF, PONMIAPMPML, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	static ::System::Boolean AILCPPAKKGA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int64 OAKIADBHPBP)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Int64))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AILCPPAKKGA_OFFSET))(KECKGDFIALJ, OAKIADBHPBP);
	}

	::System::Void HCLDCGKGBFJ_3(::MoleMole::Battle::Entity* KECKGDFIALJ, ::Nap::NapECS::EcsComponent* JGNKBCCPKGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HCLDCGKGBFJ_3_OFFSET))(this, KECKGDFIALJ, JGNKBCCPKGD);
	}

	::System::Void HCLDCGKGBFJ_4(::MoleMole::Battle::Entity* KECKGDFIALJ, ::Nap::NapECS::ComponentMask& CPFMIOAAMAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HCLDCGKGBFJ_4_OFFSET))(this, KECKGDFIALJ, CPFMIOAAMAI);
	}

	static ::System::Void BJGHGGGPFMG(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_BJGHGGGPFMG_OFFSET))(param_0);
	}

	::System::Void HKCALIMAJLO_1(::MoleMole::CharacterScriptConfig* LPPGAGBKDEG, ::BFLPANDDGHG* ALLCJOCNFLI, ::System::Collections::Generic::List_1<::System::Int32>* JEHINDLIHNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*, ::BFLPANDDGHG*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_HKCALIMAJLO_1_OFFSET))(this, LPPGAGBKDEG, ALLCJOCNFLI, JEHINDLIHNH);
	}

	::System::Void CDGEPPFPDAJ(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CDGEPPFPDAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean AKFLAHAOJLI_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean PDABBPAODHC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_AKFLAHAOJLI_1_OFFSET))(this, KECKGDFIALJ, PDABBPAODHC);
	}

	static ::System::Void INKNGCOKNEO(::GDIACAHPLBB_DAEFHDKNNEL& param_0)
	{
		return ((::System::Void(*)(::GDIACAHPLBB_DAEFHDKNNEL&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_INKNGCOKNEO_OFFSET))(param_0);
	}

	::MoleMole::Battle::Entity* NIHGJMDOLDL(::HGGBGKKEBCC* HMMMOCJAEOA, ::System::Int32 MGMDLMBEDJF, ::System::UInt64 ACHBBPJIBIE, ::System::Int32 AELLPLBJELA, ::MFCAMPFHMCP_GMAMIIPANLM NFBMPNHHOBF, ::System::Boolean LCBJJKDGGGA, ::UnityEngine::Vector3 FJAALFOEMBL, ::System::Single HCABLHBGCKA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::HGGBGKKEBCC*, ::System::Int32, ::System::UInt64, ::System::Int32, ::MFCAMPFHMCP_GMAMIIPANLM, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GDIACAHPLBB_NIHGJMDOLDL_OFFSET))(this, HMMMOCJAEOA, MGMDLMBEDJF, ACHBBPJIBIE, AELLPLBJELA, NFBMPNHHOBF, LCBJJKDGGGA, FJAALFOEMBL, HCABLHBGCKA);
	}

	::System::Void FPJIGEJCAMO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_FPJIGEJCAMO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean PHHBDFGGEKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_PHHBDFGGEKE_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* DLNIDPGPIHI(::BFLPANDDGHG* ALLCJOCNFLI, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::System::Boolean DHHKDCDLLFD, ::UnityEngine::GameObject* LHPFMGBDFPN, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::BFLPANDDGHG*, ::GDIACAHPLBB_IOKMLJCDHOO, ::System::Boolean, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DLNIDPGPIHI_OFFSET))(this, ALLCJOCNFLI, INGHGKDGJPJ, DHHKDCDLLFD, LHPFMGBDFPN, DJKNNEEKHGK);
	}

	static ::System::Int32 MNBBBNAEKGC()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + GDIACAHPLBB_MNBBBNAEKGC_OFFSET))();
	}

	::MoleMole::Battle::Entity* CNKFKLJJLNH(::MoleMole::Battle::Entity* EILBLDPNNMF, ::BFLPANDDGHG* ALLCJOCNFLI, ::GDIACAHPLBB_IOKMLJCDHOO INGHGKDGJPJ, ::System::Boolean EJDDDPDMCHB, ::System::Boolean DHHKDCDLLFD, ::System::Int32 DKJOJIDOCMI, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::MoleMole::Battle::MonsterAlertInitParams PFCEINCACMD, ::System::Collections::Generic::List_1<::System::String*>* EGDAPONDHCE, ::System::Collections::Generic::List_1<::System::String*>* NOMGGIJCGLE, ::System::Action_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* IFLJGNDENPM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::BFLPANDDGHG*, ::GDIACAHPLBB_IOKMLJCDHOO, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::MoleMole::Battle::MonsterAlertInitParams, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>*))((::PBYTE)hIl2Cpp + GDIACAHPLBB_CNKFKLJJLNH_OFFSET))(this, EILBLDPNNMF, ALLCJOCNFLI, INGHGKDGJPJ, EJDDDPDMCHB, DHHKDCDLLFD, DKJOJIDOCMI, DJKNNEEKHGK, PFCEINCACMD, EGDAPONDHCE, NOMGGIJCGLE, IFLJGNDENPM);
	}

	::MoleMole::Battle::Entity* MACNGGKABNK(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ContinueAttackDetect* NMCJECFIOHC, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Quaternion GHEAAGFCKGH, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* KBABOEEDDHE, ::System::UInt32 KMMGKJPAOMF, ::System::UInt32 IBJNHPABKLL, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MLFADFNMJFO*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_MACNGGKABNK_OFFSET))(this, MFMPICKHAMJ, LBPBFHIPIBF, NMCJECFIOHC, FBNGKPGLADH, BBFAJBKOAOB, JMFFGJMMCAC, GHEAAGFCKGH, FOJFMJKALKO, KBABOEEDDHE, KMMGKJPAOMF, IBJNHPABKLL, OCKMDPLBKFH, NPBJIFNEMHG);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* OMHOBHGIGEB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OMHOBHGIGEB_OFFSET))(this);
	}
};
