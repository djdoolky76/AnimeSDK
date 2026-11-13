#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIHOEEPIBAI.h"
#include "unitysdk/GPEEFAOIBNB.h"
#include "unitysdk/LMGECGDAPEN.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleBuffEffect.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarbleFloatToInt.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class AOMMEMBHKKG;
class DHFLEJMNGDL;
class FBDPOPBPHKP;
class KHLDHMFKOCP;
class LIJFHHMGBFE;
class MIBEBGCMPOL;
class NBIBOKEFKIH;
class NDEAGEPIBKK;
class PCDPIIHCLNB;
namespace RPG::GameCore { class MarbleBuffConfig; }
namespace RPG::GameCore { class MarbleSkillConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBIBOKEFKIH_AAABMEJNIEE_OFFSET UNITYSDK_OFFSET(0x1C277AE0)
#define NBIBOKEFKIH_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0x1C26E2C0)
#define NBIBOKEFKIH_ABGGMOBCOPF_OFFSET UNITYSDK_OFFSET(0x1C2754D0)
#define NBIBOKEFKIH_ACDIIFBMMBD_OFFSET UNITYSDK_OFFSET(0x1C26FD40)
#define NBIBOKEFKIH_ACOIEHKMKCC_OFFSET UNITYSDK_OFFSET(0x1C276950)
#define NBIBOKEFKIH_AGIBIFOOFMB_OFFSET UNITYSDK_OFFSET(0x1C26D180)
#define NBIBOKEFKIH_ANFKOFPIJBF_OFFSET UNITYSDK_OFFSET(0x1C279C70)
#define NBIBOKEFKIH_AOCKFBJLPMI_OFFSET UNITYSDK_OFFSET(0x1C2768B0)
#define NBIBOKEFKIH_BJALMGHBFBB_OFFSET UNITYSDK_OFFSET(0x1C272A60)
#define NBIBOKEFKIH_BMPOEDJFHKO_OFFSET UNITYSDK_OFFSET(0x1C26DBD0)
#define NBIBOKEFKIH_BOEMEMBGLLO_OFFSET UNITYSDK_OFFSET(0x1C275900)
#define NBIBOKEFKIH_BPADPNEBHIE_OFFSET UNITYSDK_OFFSET(0x1C272BA0)
#define NBIBOKEFKIH_CGNGEEKGJEB_OFFSET UNITYSDK_OFFSET(0x1C26EE10)
#define NBIBOKEFKIH_CJKNKDBALDK_OFFSET UNITYSDK_OFFSET(0x1C272530)
#define NBIBOKEFKIH_CMNGIBCAEGA_OFFSET UNITYSDK_OFFSET(0x1C26EDB0)
#define NBIBOKEFKIH_CMPNCFCJCNE_OFFSET UNITYSDK_OFFSET(0x1C274BA0)
#define NBIBOKEFKIH_COFECKNHBJH_OFFSET UNITYSDK_OFFSET(0x1C26DB30)
#define NBIBOKEFKIH_COGELOCEBIN_OFFSET UNITYSDK_OFFSET(0x1C277F90)
#define NBIBOKEFKIH_COPDEMMPDKG_OFFSET UNITYSDK_OFFSET(0x1C276830)
#define NBIBOKEFKIH_CPFLDOFIHAL_OFFSET UNITYSDK_OFFSET(0x1C278360)
#define NBIBOKEFKIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C26C830)
#define NBIBOKEFKIH_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C26CD10)
#define NBIBOKEFKIH_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C26CF50)
#define NBIBOKEFKIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C26C120)
#define NBIBOKEFKIH_DBBHPHFHCME_OFFSET UNITYSDK_OFFSET(0x1C270060)
#define NBIBOKEFKIH_DDADIFMFGBA_OFFSET UNITYSDK_OFFSET(0x1C272430)
#define NBIBOKEFKIH_DDLAAHMEFAI_OFFSET UNITYSDK_OFFSET(0x1C278590)
#define NBIBOKEFKIH_DEPECPCJCKA_OFFSET UNITYSDK_OFFSET(0x1C2755E0)
#define NBIBOKEFKIH_DFNEFIFNDOE_OFFSET UNITYSDK_OFFSET(0x1C26DB10)
#define NBIBOKEFKIH_DIIJKKDCECD_OFFSET UNITYSDK_OFFSET(0x1C276150)
#define NBIBOKEFKIH_DMMILDBCHHD_OFFSET UNITYSDK_OFFSET(0x1C2796A0)
#define NBIBOKEFKIH_DPHDGMCEDLK_OFFSET UNITYSDK_OFFSET(0x1C26C5F0)
#define NBIBOKEFKIH_DPICNGBHFAC_OFFSET UNITYSDK_OFFSET(0x1C273C90)
#define NBIBOKEFKIH_DPKCLLOGKPK_OFFSET UNITYSDK_OFFSET(0x1C2739D0)
#define NBIBOKEFKIH_DPLFACBGKIB_OFFSET UNITYSDK_OFFSET(0x1C2773C0)
#define NBIBOKEFKIH_EALPDOMAKEO_OFFSET UNITYSDK_OFFSET(0x1C26C700)
#define NBIBOKEFKIH_ECHADDFICPO_OFFSET UNITYSDK_OFFSET(0x1C273050)
#define NBIBOKEFKIH_EGELKAMKMOK_OFFSET UNITYSDK_OFFSET(0x1C2726B0)
#define NBIBOKEFKIH_EJGFBHEHDBK_OFFSET UNITYSDK_OFFSET(0x1C272250)
#define NBIBOKEFKIH_ENLJFEPPIGH_OFFSET UNITYSDK_OFFSET(0x1C26E660)
#define NBIBOKEFKIH_FMOLJEMMNFF_OFFSET UNITYSDK_OFFSET(0x1C26DBB0)
#define NBIBOKEFKIH_FOHJKMFFCHM_OFFSET UNITYSDK_OFFSET(0x1C276B90)
#define NBIBOKEFKIH_FOKHLHPADMC_OFFSET UNITYSDK_OFFSET(0x1C2786C0)
#define NBIBOKEFKIH_GALFCDCBKLG_OFFSET UNITYSDK_OFFSET(0x1C272ED0)
#define NBIBOKEFKIH_GDPCOCEOBBP_OFFSET UNITYSDK_OFFSET(0x1C277A50)
#define NBIBOKEFKIH_GET_ACTIONATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2766D0)
#define NBIBOKEFKIH_GET_ACTIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C27A510)
#define NBIBOKEFKIH_GET_AISTRATEGYID_OFFSET UNITYSDK_OFFSET(0x1C27A4D0)
#define NBIBOKEFKIH_GET_ALLYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276750)
#define NBIBOKEFKIH_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1C276490)
#define NBIBOKEFKIH_GET_ATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276710)
#define NBIBOKEFKIH_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1C276650)
#define NBIBOKEFKIH_GET_BASEATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2766F0)
#define NBIBOKEFKIH_GET_BASEDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276670)
#define NBIBOKEFKIH_GET_CHROMAID_OFFSET UNITYSDK_OFFSET(0x1C26D8F0)
#define NBIBOKEFKIH_GET_CRITICALFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2767D0)
#define NBIBOKEFKIH_GET_CRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1C2767B0)
#define NBIBOKEFKIH_GET_DAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276690)
#define NBIBOKEFKIH_GET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x1C2764B0)
#define NBIBOKEFKIH_GET_ENEMYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276730)
#define NBIBOKEFKIH_GET_FEATURE_OFFSET UNITYSDK_OFFSET(0x1C26D990)
#define NBIBOKEFKIH_GET_HASIMMUNESHIELD_OFFSET UNITYSDK_OFFSET(0x1C276810)
#define NBIBOKEFKIH_GET_HASSHIELD_OFFSET UNITYSDK_OFFSET(0x1C2767F0)
#define NBIBOKEFKIH_GET_HP_OFFSET UNITYSDK_OFFSET(0x1C2765F0)
#define NBIBOKEFKIH_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C26D8B0)
#define NBIBOKEFKIH_GET_IMMUNEATTACKBACK_OFFSET UNITYSDK_OFFSET(0x1C276770)
#define NBIBOKEFKIH_GET_IMMUNEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C276790)
#define NBIBOKEFKIH_GET_INITFORWARD_OFFSET UNITYSDK_OFFSET(0x1C26DA10)
#define NBIBOKEFKIH_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1C26D9F0)
#define NBIBOKEFKIH_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C26DBE0)
#define NBIBOKEFKIH_GET_ISATTACKER_OFFSET UNITYSDK_OFFSET(0x1C2764D0)
#define NBIBOKEFKIH_GET_ISDAMAGEMAKER_OFFSET UNITYSDK_OFFSET(0x1C2764F0)
#define NBIBOKEFKIH_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1C276570)
#define NBIBOKEFKIH_GET_ISREALDEAD_OFFSET UNITYSDK_OFFSET(0x1C276590)
#define NBIBOKEFKIH_GET_ISTEAMA_OFFSET UNITYSDK_OFFSET(0x1C26D950)
#define NBIBOKEFKIH_GET_LASTMAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C276510)
#define NBIBOKEFKIH_GET_LAUNCHVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C276530)
#define NBIBOKEFKIH_GET_LEVELUPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C27A4F0)
#define NBIBOKEFKIH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C276550)
#define NBIBOKEFKIH_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C276610)
#define NBIBOKEFKIH_GET_ONFIELD_OFFSET UNITYSDK_OFFSET(0x1C2765B0)
#define NBIBOKEFKIH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C26D9D0)
#define NBIBOKEFKIH_GET_SEALID_OFFSET UNITYSDK_OFFSET(0x1C26D8D0)
#define NBIBOKEFKIH_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C26D9B0)
#define NBIBOKEFKIH_GET_SPINEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2766B0)
#define NBIBOKEFKIH_GET_SUBSEALID_OFFSET UNITYSDK_OFFSET(0x1C26D910)
#define NBIBOKEFKIH_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x1C26D930)
#define NBIBOKEFKIH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C26D970)
#define NBIBOKEFKIH_GET_WAITONFIELD_OFFSET UNITYSDK_OFFSET(0x1C2765D0)
#define NBIBOKEFKIH_GET_WHITEATTACK_OFFSET UNITYSDK_OFFSET(0x1C276630)
#define NBIBOKEFKIH_GICKFEFIHJK_OFFSET UNITYSDK_OFFSET(0x1C278B90)
#define NBIBOKEFKIH_GOLMAPJDLBD_OFFSET UNITYSDK_OFFSET(0x1C275260)
#define NBIBOKEFKIH_HIFLPPBFLBN_OFFSET UNITYSDK_OFFSET(0x1C272820)
#define NBIBOKEFKIH_HINOFPAJGGN_OFFSET UNITYSDK_OFFSET(0x1C279AB0)
#define NBIBOKEFKIH_HJHDOBENHLM_OFFSET UNITYSDK_OFFSET(0x1C277BC0)
#define NBIBOKEFKIH_HJLJHLHOOOO_1_OFFSET UNITYSDK_OFFSET(0x1C26D680)
#define NBIBOKEFKIH_HJLJHLHOOOO_2_OFFSET UNITYSDK_OFFSET(0x1C26D7D0)
#define NBIBOKEFKIH_HJLJHLHOOOO_OFFSET UNITYSDK_OFFSET(0x1C26D580)
#define NBIBOKEFKIH_HKHICEIPEEL_OFFSET UNITYSDK_OFFSET(0x1C2769A0)
#define NBIBOKEFKIH_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0x1C2704F0)
#define NBIBOKEFKIH_IAKLKAFFNBC_OFFSET UNITYSDK_OFFSET(0x1C2751A0)
#define NBIBOKEFKIH_IBIFHIAPPFG_OFFSET UNITYSDK_OFFSET(0x1C26F140)
#define NBIBOKEFKIH_IBIOPOKGBFB_OFFSET UNITYSDK_OFFSET(0x1C278550)
#define NBIBOKEFKIH_ICFOECHKEEG_OFFSET UNITYSDK_OFFSET(0x1C279960)
#define NBIBOKEFKIH_IDJPAAKFCKI_OFFSET UNITYSDK_OFFSET(0x1C274130)
#define NBIBOKEFKIH_IFLBAAABKAI_OFFSET UNITYSDK_OFFSET(0x1C270970)
#define NBIBOKEFKIH_IFOOEPKGGAG_OFFSET UNITYSDK_OFFSET(0x1C2742C0)
#define NBIBOKEFKIH_IHNMMLPAHMB_OFFSET UNITYSDK_OFFSET(0x1C27A850)
#define NBIBOKEFKIH_IICLMKCAEBH_OFFSET UNITYSDK_OFFSET(0x1C27A700)
#define NBIBOKEFKIH_ILKPCONCNIG_OFFSET UNITYSDK_OFFSET(0x1C279490)
#define NBIBOKEFKIH_INBGFEJJNHH_OFFSET UNITYSDK_OFFSET(0x1C26E490)
#define NBIBOKEFKIH_IOKDMGGLMEP_OFFSET UNITYSDK_OFFSET(0x1C277D70)
#define NBIBOKEFKIH_IOMDBOGAMBN_OFFSET UNITYSDK_OFFSET(0x1C277B30)
#define NBIBOKEFKIH_JBBJBDMMODL_OFFSET UNITYSDK_OFFSET(0x1C275570)
#define NBIBOKEFKIH_JGDNDNGNEMC_OFFSET UNITYSDK_OFFSET(0x1C27A660)
#define NBIBOKEFKIH_JJELIOEPIHG_OFFSET UNITYSDK_OFFSET(0x1C2789F0)
#define NBIBOKEFKIH_JLNKLBPKDPB_OFFSET UNITYSDK_OFFSET(0x1C27A530)
#define NBIBOKEFKIH_KAGDEFKDENG_OFFSET UNITYSDK_OFFSET(0x1C2728A0)
#define NBIBOKEFKIH_KCJAHDOHDFF_OFFSET UNITYSDK_OFFSET(0x1C275B00)
#define NBIBOKEFKIH_KEACICAMLJM_OFFSET UNITYSDK_OFFSET(0x1C279F20)
#define NBIBOKEFKIH_KEOIKHKHGII_OFFSET UNITYSDK_OFFSET(0x1C273710)
#define NBIBOKEFKIH_KFOCEOKIJFC_OFFSET UNITYSDK_OFFSET(0x1C275FF0)
#define NBIBOKEFKIH_KIICBOFJBGJ_OFFSET UNITYSDK_OFFSET(0x1C26DD80)
#define NBIBOKEFKIH_KJIPDNHFBGL_OFFSET UNITYSDK_OFFSET(0x1C26E940)
#define NBIBOKEFKIH_LAEJDKMFGJJ_OFFSET UNITYSDK_OFFSET(0x1C275D10)
#define NBIBOKEFKIH_LDFGCOIOKLD_OFFSET UNITYSDK_OFFSET(0x1C26F7E0)
#define NBIBOKEFKIH_LJHMPIKLGAF_OFFSET UNITYSDK_OFFSET(0x1C276420)
#define NBIBOKEFKIH_LKLEMIEDPKE_OFFSET UNITYSDK_OFFSET(0x1C27A410)
#define NBIBOKEFKIH_LMIEABFHDDO_OFFSET UNITYSDK_OFFSET(0x1C26DC00)
#define NBIBOKEFKIH_MBBAKKMHFAN_OFFSET UNITYSDK_OFFSET(0x1C26EF80)
#define NBIBOKEFKIH_MCNBCHKJKDP_OFFSET UNITYSDK_OFFSET(0x1C26DF40)
#define NBIBOKEFKIH_MDGNOFJBPDA_OFFSET UNITYSDK_OFFSET(0x1C26E7D0)
#define NBIBOKEFKIH_MGIPKHHDFMJ_OFFSET UNITYSDK_OFFSET(0x1C2790E0)
#define NBIBOKEFKIH_MIKJEGODBLA_OFFSET UNITYSDK_OFFSET(0x1C272630)
#define NBIBOKEFKIH_MINLEAAIEPC_OFFSET UNITYSDK_OFFSET(0x1C275F30)
#define NBIBOKEFKIH_MKJFPJCCLKE_OFFSET UNITYSDK_OFFSET(0x1C277C50)
#define NBIBOKEFKIH_MNDCJGALGCN_OFFSET UNITYSDK_OFFSET(0x1C26CA30)
#define NBIBOKEFKIH_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1C2707D0)
#define NBIBOKEFKIH_MODBPEPAGBO_OFFSET UNITYSDK_OFFSET(0x1C270320)
#define NBIBOKEFKIH_NBFELBKOOCN_OFFSET UNITYSDK_OFFSET(0x1C272AE0)
#define NBIBOKEFKIH_NDBCLOOJBKC_OFFSET UNITYSDK_OFFSET(0x1C27A5F0)
#define NBIBOKEFKIH_NEDMEFNNENN_OFFSET UNITYSDK_OFFSET(0x1C279B30)
#define NBIBOKEFKIH_NELLAEEMILM_OFFSET UNITYSDK_OFFSET(0x1C26D520)
#define NBIBOKEFKIH_NHMGFHDBDLN_OFFSET UNITYSDK_OFFSET(0x1C275200)
#define NBIBOKEFKIH_NIEJLOICAEC_OFFSET UNITYSDK_OFFSET(0x1C26F360)
#define NBIBOKEFKIH_NJKPCFOCDLI_OFFSET UNITYSDK_OFFSET(0x1C275C70)
#define NBIBOKEFKIH_NOKEHEMIDGL_OFFSET UNITYSDK_OFFSET(0x1C275450)
#define NBIBOKEFKIH_OEGGCNKNCDJ_OFFSET UNITYSDK_OFFSET(0x1C26DA30)
#define NBIBOKEFKIH_OFOFICGMGJF_OFFSET UNITYSDK_OFFSET(0x1C278870)
#define NBIBOKEFKIH_OIFAPNBDGLA_OFFSET UNITYSDK_OFFSET(0x1C26FB70)
#define NBIBOKEFKIH_OKCOJOFCBFA_OFFSET UNITYSDK_OFFSET(0x1C276900)
#define NBIBOKEFKIH_OKNFFOLGNKJ_OFFSET UNITYSDK_OFFSET(0x1C275F80)
#define NBIBOKEFKIH_OLDGMPCLDJD_OFFSET UNITYSDK_OFFSET(0x1C26DA50)
#define NBIBOKEFKIH_OPDBOINFMCA_OFFSET UNITYSDK_OFFSET(0x1C270660)
#define NBIBOKEFKIH_PAECBMBALEP_OFFSET UNITYSDK_OFFSET(0x1C279800)
#define NBIBOKEFKIH_PFEMMKDADIN_OFFSET UNITYSDK_OFFSET(0x1C26F770)
#define NBIBOKEFKIH_PGCGDKIDLED_OFFSET UNITYSDK_OFFSET(0x1C2723D0)
#define NBIBOKEFKIH_PKNCAEOLICH_OFFSET UNITYSDK_OFFSET(0x1C2725B0)
#define NBIBOKEFKIH_PLPHIIMLNLD_OFFSET UNITYSDK_OFFSET(0x1C2724B0)
#define NBIBOKEFKIH_POKICHGJLJA_OFFSET UNITYSDK_OFFSET(0x1C274890)
#define NBIBOKEFKIH_PPAIJKBBJJE_OFFSET UNITYSDK_OFFSET(0x1C26E100)
#define NBIBOKEFKIH_SET_ACTIONATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2766E0)
#define NBIBOKEFKIH_SET_ACTIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C27A520)
#define NBIBOKEFKIH_SET_AISTRATEGYID_OFFSET UNITYSDK_OFFSET(0x1C27A4E0)
#define NBIBOKEFKIH_SET_ALLYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276760)
#define NBIBOKEFKIH_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1C2764A0)
#define NBIBOKEFKIH_SET_ATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276720)
#define NBIBOKEFKIH_SET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1C276660)
#define NBIBOKEFKIH_SET_BASEATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276700)
#define NBIBOKEFKIH_SET_BASEDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276680)
#define NBIBOKEFKIH_SET_CHROMAID_OFFSET UNITYSDK_OFFSET(0x1C26D900)
#define NBIBOKEFKIH_SET_CRITICALFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2767E0)
#define NBIBOKEFKIH_SET_CRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1C2767C0)
#define NBIBOKEFKIH_SET_DAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2766A0)
#define NBIBOKEFKIH_SET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x1C2764C0)
#define NBIBOKEFKIH_SET_ENEMYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C276740)
#define NBIBOKEFKIH_SET_FEATURE_OFFSET UNITYSDK_OFFSET(0x1C26D9A0)
#define NBIBOKEFKIH_SET_HASIMMUNESHIELD_OFFSET UNITYSDK_OFFSET(0x1C276820)
#define NBIBOKEFKIH_SET_HASSHIELD_OFFSET UNITYSDK_OFFSET(0x1C276800)
#define NBIBOKEFKIH_SET_HP_OFFSET UNITYSDK_OFFSET(0x1C276600)
#define NBIBOKEFKIH_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C26D8C0)
#define NBIBOKEFKIH_SET_IMMUNEATTACKBACK_OFFSET UNITYSDK_OFFSET(0x1C276780)
#define NBIBOKEFKIH_SET_IMMUNEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C2767A0)
#define NBIBOKEFKIH_SET_INITFORWARD_OFFSET UNITYSDK_OFFSET(0x1C26DA20)
#define NBIBOKEFKIH_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1C26DA00)
#define NBIBOKEFKIH_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C26DBF0)
#define NBIBOKEFKIH_SET_ISATTACKER_OFFSET UNITYSDK_OFFSET(0x1C2764E0)
#define NBIBOKEFKIH_SET_ISDAMAGEMAKER_OFFSET UNITYSDK_OFFSET(0x1C276500)
#define NBIBOKEFKIH_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1C276580)
#define NBIBOKEFKIH_SET_ISREALDEAD_OFFSET UNITYSDK_OFFSET(0x1C2765A0)
#define NBIBOKEFKIH_SET_ISTEAMA_OFFSET UNITYSDK_OFFSET(0x1C26D960)
#define NBIBOKEFKIH_SET_LASTMAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C276520)
#define NBIBOKEFKIH_SET_LAUNCHVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C276540)
#define NBIBOKEFKIH_SET_LEVELUPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C27A500)
#define NBIBOKEFKIH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C276560)
#define NBIBOKEFKIH_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C276620)
#define NBIBOKEFKIH_SET_ONFIELD_OFFSET UNITYSDK_OFFSET(0x1C2765C0)
#define NBIBOKEFKIH_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C26D9E0)
#define NBIBOKEFKIH_SET_SEALID_OFFSET UNITYSDK_OFFSET(0x1C26D8E0)
#define NBIBOKEFKIH_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C26D9C0)
#define NBIBOKEFKIH_SET_SPINEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C2766C0)
#define NBIBOKEFKIH_SET_SUBSEALID_OFFSET UNITYSDK_OFFSET(0x1C26D920)
#define NBIBOKEFKIH_SET_TEAM_OFFSET UNITYSDK_OFFSET(0x1C26D940)
#define NBIBOKEFKIH_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C26D980)
#define NBIBOKEFKIH_SET_WAITONFIELD_OFFSET UNITYSDK_OFFSET(0x1C2765E0)
#define NBIBOKEFKIH_SET_WHITEATTACK_OFFSET UNITYSDK_OFFSET(0x1C276640)

inline static constexpr unsigned int NBIBOKEFKIH_TypeDefinitionIndex = 44063;

	class NBIBOKEFKIH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LHFLHJADJCH; // 0x10
		::NBIBOKEFKIH* _Attacker_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::AOMMEMBHKKG*>* JIILNFBDFDK; // 0x20
		::Il2CppArray<::System::UInt32>* GCIHCJPLLIN; // 0x28
		::Il2CppArray<::System::UInt32>* LNMLGFLELAE; // 0x30
		::MIBEBGCMPOL* PHFKFBLIBKG; // 0x38
		::System::Collections::Generic::List_1<::NDEAGEPIBKK*>* BCEFDINCEMD; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* CFGEEIGDHLH; // 0x48
		::KHLDHMFKOCP* _Instance_k__BackingField; // 0x50
		::DHFLEJMNGDL* MMHNHOHIODC; // 0x58
		::NBIBOKEFKIH* _Defender_k__BackingField; // 0x60
		::FBDPOPBPHKP* _Team_k__BackingField; // 0x68
		::System::Int32 GKKIPIMCBAD; // 0x70
		::System::Int32 KAANGICPCFJ; // 0x74
		::System::Int32 _MaxHp_k__BackingField; // 0x78
		::System::UInt32 _ChromaId_k__BackingField; // 0x7C
		::System::Int32 EHHEJCLMFPD; // 0x80
		::System::UInt32 ALMOJACJHFH; // 0x84
		::System::UInt32 _Level_k__BackingField; // 0x88
		::System::Single _ActionAttackFactor_k__BackingField; // 0x8C
		::System::UInt32 _SubSealId_k__BackingField; // 0x90
		::System::Single PGDKIGEIBAA; // 0x94
		::RPG::GameCore::MarbleShapeType _Shape_k__BackingField; // 0x98
		::System::UInt32 _LevelUpPriority_k__BackingField; // 0x9C
		::System::Single _EnemyCollisionImpulseFactor_k__BackingField; // 0xA0
		::RPG::GameCore::MarbleItemFeature _Feature_k__BackingField; // 0xA4
		::System::Single _Radius_k__BackingField; // 0xA8
		::System::Int32 BKPBGNPDICC; // 0xAC
		::System::Int32 FNCNIJOMLJD; // 0xB0
		::System::Single PGFBFDJIDLM; // 0xB4
		::System::Boolean MKAKPEAHBDH; // 0xB8
		::System::Boolean AEGFKBDCHDH; // 0xB9
		::System::Boolean _IsTeamA_k__BackingField; // 0xBA
		::System::Boolean OBKJNIFAFJK; // 0xBB
		::RPG::GameCore::MarbleItemType _Type_k__BackingField; // 0xBC
		::System::Int32 KOJHGKLDGKB; // 0xC0
		::System::Int32 PDEMOPHANLA; // 0xC4
		::System::Boolean _IsDead_k__BackingField; // 0xC8
		::System::Boolean FBFMAMCDIOI; // 0xC9
		::System::Boolean _IsAttacker_k__BackingField; // 0xCA
		::System::Boolean _OnField_k__BackingField; // 0xCB
		::System::Int32 NKKFGAPJCIJ; // 0xCC
		::System::Int32 CHHDAKCOACO; // 0xD0
		::System::Int32 KDMPKIPAIDJ; // 0xD4
		::System::Single _CriticalFactor_k__BackingField; // 0xD8
		::System::Int32 _LastMakeDamage_k__BackingField; // 0xDC
		::RPG::MVector2 _LaunchVelocity_k__BackingField; // 0xE0
		::System::Single _CriticalRate_k__BackingField; // 0xE8
		::System::Int32 LPEKDDPLGAB; // 0xEC
		::System::Int32 JJBMDMBJPDH; // 0xF0
		::System::Int32 NHDFLELAOLM; // 0xF4
		::System::Single MPFODHPHDAK; // 0xF8
		::System::Single NNFJPKPBAHO; // 0xFC
		::System::Int32 FCNGODBIBNC; // 0x100
		::System::Int32 HJEPLCAOMKL; // 0x104
		::System::Single HOOPIIAFPMJ; // 0x108
		::System::Int32 _WhiteAttack_k__BackingField; // 0x10C
		::System::Int32 FKLOIKNNNNM; // 0x110
		::System::UInt32 _Id_k__BackingField; // 0x114
		::System::Single _SpineFactor_k__BackingField; // 0x118
		::System::Int32 _Hp_k__BackingField; // 0x11C
		::System::Int32 GGADMHMOGMI; // 0x120
		::RPG::MVector2 _InitPosition_k__BackingField; // 0x124
		::System::Int32 LDBMDDKCNAJ; // 0x12C
		::System::Int32 NCIIBAGFPAN; // 0x130
		::System::Int32 EDMKJDNECNE; // 0x134
		::System::UInt32 _AIStrategyId_k__BackingField; // 0x138
		::RPG::MVector2 _InitForward_k__BackingField; // 0x13C
		::System::Boolean _HasImmuneShield_k__BackingField; // 0x144
		::System::Boolean _HasShield_k__BackingField; // 0x145
		::System::Boolean _WaitOnField_k__BackingField; // 0x146
		::System::Boolean _ImmuneDamage_k__BackingField; // 0x147
		::System::Single _AttackFactor_k__BackingField; // 0x148
		::System::Int32 HODNPDPDFDO; // 0x14C
		::System::Single _BaseAttackFactor_k__BackingField; // 0x150
		::System::Int32 BALKKBGOKMJ; // 0x154
		::System::Single OEGILHECMHI; // 0x158
		::System::Int32 GNAFGGAAKDF; // 0x15C
		::System::Boolean HIAABIICDNJ; // 0x160
		::System::Boolean _IsRealDead_k__BackingField; // 0x161
		::System::Boolean _IsDamageMaker_k__BackingField; // 0x162
		::System::Boolean _ImmuneAttackBack_k__BackingField; // 0x163
		::System::Single LCAGMAJBMHF; // 0x164
		::System::Single _DamageFactor_k__BackingField; // 0x168
		::System::Int32 OPDGFFEPEHG; // 0x16C
		::System::UInt32 _ActionPriority_k__BackingField; // 0x170
		::RPG::Client::LittleGame::Marble::MarbleActionSource NBLFAKIGNFN; // 0x174
		::System::Int32 JGAEMBFOOJO; // 0x178
		::System::Single EOBEBJDJEBJ; // 0x17C
		::System::UInt32 _SealId_k__BackingField; // 0x180
		::RPG::MVector2 EDGNGCFCNID; // 0x184
		::System::Int32 _Attack_k__BackingField; // 0x18C
		::System::UInt32 MDKFLGDEJCN; // 0x190
		::System::UInt32 PGBAAEBGHCN; // 0x194
		::System::Single _BaseDamageFactor_k__BackingField; // 0x198
		::System::Single _AllyCollisionImpulseFactor_k__BackingField; // 0x19C
		::System::Int32 OLOIDCBDNFF; // 0x1A0
		::System::Void _ctor(::KHLDHMFKOCP* a1, ::FBDPOPBPHKP* a2, ::System::UInt32 a3, ::System::Boolean a4, ::RPG::MVector2 a5, ::RPG::MVector2 a6, ::System::UInt32 a7, ::System::UInt32 a8, ::System::UInt32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::FBDPOPBPHKP*, ::System::UInt32, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void _ctor_1(::KHLDHMFKOCP* a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::Single a4, ::System::UInt32 a5, ::RPG::GameCore::MarbleItemFeature a6)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_2(::KHLDHMFKOCP* a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::Il2CppArray<::System::UInt32>* a7, ::System::UInt32 a8, ::RPG::GameCore::MarbleItemFeature a9)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void _ctor_3(::KHLDHMFKOCP* a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::Single a4, ::RPG::MVector2 a5, ::System::Boolean a6, ::System::UInt32 a7, ::RPG::GameCore::MarbleItemFeature a8)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::RPG::MVector2, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AGIBIFOOFMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_AGIBIFOOFMB_OFFSET))(this);
		}

		::System::Void EALPDOMAKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_EALPDOMAKEO_OFFSET))(this);
		}

		::System::Boolean NELLAEEMILM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NELLAEEMILM_OFFSET))(this);
		}

		::System::Void HJLJHLHOOOO(::System::Boolean a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HJLJHLHOOOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HJLJHLHOOOO_1(::System::Boolean a1, ::System::Single a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HJLJHLHOOOO_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HJLJHLHOOOO_2(::System::Boolean a1, ::System::Single a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HJLJHLHOOOO_2_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SealId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_SEALID_OFFSET))(this);
		}

		::System::Void set_SealId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_SEALID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChromaId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_CHROMAID_OFFSET))(this);
		}

		::System::Void set_ChromaId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_CHROMAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubSealId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_SUBSEALID_OFFSET))(this);
		}

		::System::Void set_SubSealId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_SUBSEALID_OFFSET))(this, a1);
		}

		::FBDPOPBPHKP* get_Team()
		{
			return ((::FBDPOPBPHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::FBDPOPBPHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBDPOPBPHKP*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_TEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTeamA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ISTEAMA_OFFSET))(this);
		}

		::System::Void set_IsTeamA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ISTEAMA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleItemType get_Type()
		{
			return ((::RPG::GameCore::MarbleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::MarbleItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleItemFeature get_Feature()
		{
			return ((::RPG::GameCore::MarbleItemFeature(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_FEATURE_OFFSET))(this);
		}

		::System::Void set_Feature(::RPG::GameCore::MarbleItemFeature a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_FEATURE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleShapeType get_Shape()
		{
			return ((::RPG::GameCore::MarbleShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::RPG::GameCore::MarbleShapeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleShapeType))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_SHAPE_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_RADIUS_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_InitPosition()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_INITPOSITION_OFFSET))(this);
		}

		::System::Void set_InitPosition(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_INITPOSITION_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_InitForward()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_INITFORWARD_OFFSET))(this);
		}

		::System::Void set_InitForward(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_INITFORWARD_OFFSET))(this, a1);
		}

		::RPG::MVector2 OEGGCNKNCDJ()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OEGGCNKNCDJ_OFFSET))(this);
		}

		::RPG::MVector2 OLDGMPCLDJD()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OLDGMPCLDJD_OFFSET))(this);
		}

		::RPG::MVector2 DFNEFIFNDOE()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DFNEFIFNDOE_OFFSET))(this);
		}

		::System::Single COFECKNHBJH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_COFECKNHBJH_OFFSET))(this);
		}

		::System::UInt32 FMOLJEMMNFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_FMOLJEMMNFF_OFFSET))(this);
		}

		::DHFLEJMNGDL* BMPOEDJFHKO()
		{
			return ((::DHFLEJMNGDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_BMPOEDJFHKO_OFFSET))(this);
		}

		::KHLDHMFKOCP* get_Instance()
		{
			return ((::KHLDHMFKOCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::KHLDHMFKOCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_INSTANCE_OFFSET))(this, a1);
		}

		::System::Void LMIEABFHDDO(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_LMIEABFHDDO_OFFSET))(this, a1);
		}

		::System::Void KIICBOFJBGJ(::NBIBOKEFKIH* a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KIICBOFJBGJ_OFFSET))(this, a1, a2);
		}

		::System::Void MCNBCHKJKDP(::NBIBOKEFKIH* a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MCNBCHKJKDP_OFFSET))(this, a1, a2);
		}

		::System::Void PPAIJKBBJJE(::NBIBOKEFKIH* a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_PPAIJKBBJJE_OFFSET))(this, a1, a2);
		}

		::System::Void AAKDGCAPKKB(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_AAKDGCAPKKB_OFFSET))(this, a1);
		}

		::System::Void INBGFEJJNHH(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_INBGFEJJNHH_OFFSET))(this, a1);
		}

		::System::Void ENLJFEPPIGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ENLJFEPPIGH_OFFSET))(this);
		}

		::System::Void MDGNOFJBPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MDGNOFJBPDA_OFFSET))(this);
		}

		::System::Void KJIPDNHFBGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KJIPDNHFBGL_OFFSET))(this);
		}

		::System::Void CGNGEEKGJEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CGNGEEKGJEB_OFFSET))(this);
		}

		::System::Void MBBAKKMHFAN(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MBBAKKMHFAN_OFFSET))(this, a1);
		}

		::System::Void IBIFHIAPPFG(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IBIFHIAPPFG_OFFSET))(this, a1);
		}

		::System::Void NIEJLOICAEC(::System::Single a1, ::NBIBOKEFKIH* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NBIBOKEFKIH*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NIEJLOICAEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDFGCOIOKLD(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_LDFGCOIOKLD_OFFSET))(this, a1, a2);
		}

		::System::Void MODBPEPAGBO(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MODBPEPAGBO_OFFSET))(this, a1);
		}

		::System::Void HLFAPFCOBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HLFAPFCOBGJ_OFFSET))(this);
		}

		::System::Void OPDBOINFMCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OPDBOINFMCA_OFFSET))(this);
		}

		::System::Void OIFAPNBDGLA(::RPG::Client::LittleGame::Marble::MarbleHpType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::MarbleHpType))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OIFAPNBDGLA_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP(::RPG::GameCore::MarbleValue a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::MarbleValue, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MNGGAOFNGIP_OFFSET))(this, a1, a2);
		}

		::System::Void IFLBAAABKAI(::RPG::GameCore::MarbleValue a1, ::RPG::GameCore::MarbleOperation a2, ::System::Single a3, ::System::UInt32 a4, ::RPG::GameCore::MarbleFloatToInt a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleValue, ::RPG::GameCore::MarbleOperation, ::System::Single, ::System::UInt32, ::RPG::GameCore::MarbleFloatToInt, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IFLBAAABKAI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EGELKAMKMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_EGELKAMKMOK_OFFSET))(this);
		}

		::System::Boolean DPICNGBHFAC(::RPG::GameCore::MarbleValue a1, ::RPG::GameCore::MarbleCompare a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarbleValue, ::RPG::GameCore::MarbleCompare, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DPICNGBHFAC_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 IDJPAAKFCKI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IDJPAAKFCKI_OFFSET))(this, a1, a2);
		}

		::System::Void IFOOEPKGGAG(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IFOOEPKGGAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CMPNCFCJCNE(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CMPNCFCJCNE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean POKICHGJLJA(::System::UInt32 a1, ::RPG::GameCore::MarbleBuffConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MarbleBuffConfig*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_POKICHGJLJA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IAKLKAFFNBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IAKLKAFFNBC_OFFSET))(this);
		}

		::System::Void NHMGFHDBDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NHMGFHDBDLN_OFFSET))(this);
		}

		::System::Void NOKEHEMIDGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NOKEHEMIDGL_OFFSET))(this);
		}

		::System::Void DDADIFMFGBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DDADIFMFGBA_OFFSET))(this);
		}

		::System::Void ABGGMOBCOPF(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ABGGMOBCOPF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JBBJBDMMODL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_JBBJBDMMODL_OFFSET))(this);
		}

		::System::Void MNDCJGALGCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MNDCJGALGCN_OFFSET))(this, a1);
		}

		::System::Void KCJAHDOHDFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KCJAHDOHDFF_OFFSET))(this, a1);
		}

		::System::Void NJKPCFOCDLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NJKPCFOCDLI_OFFSET))(this);
		}

		::System::Boolean BOEMEMBGLLO(::System::UInt32 a1, ::RPG::GameCore::MarbleSkillConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MarbleSkillConfig*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_BOEMEMBGLLO_OFFSET))(this, a1, a2);
		}

		::System::Boolean LAEJDKMFGJJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_LAEJDKMFGJJ_OFFSET))(this, a1);
		}

		::System::Void MINLEAAIEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MINLEAAIEPC_OFFSET))(this);
		}

		::System::Void OKNFFOLGNKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OKNFFOLGNKJ_OFFSET))(this);
		}

		::System::Boolean PGCGDKIDLED(::RPG::GameCore::MarbleBuffEffect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarbleBuffEffect))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_PGCGDKIDLED_OFFSET))(this, a1);
		}

		::NDEAGEPIBKK* EJGFBHEHDBK(::RPG::GameCore::MarbleBuffEffect a1)
		{
			return ((::NDEAGEPIBKK*(*)(::PVOID, ::RPG::GameCore::MarbleBuffEffect))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_EJGFBHEHDBK_OFFSET))(this, a1);
		}

		::NDEAGEPIBKK* KFOCEOKIJFC(::System::UInt32 a1)
		{
			return ((::NDEAGEPIBKK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KFOCEOKIJFC_OFFSET))(this, a1);
		}

		::System::Void DEPECPCJCKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DEPECPCJCKA_OFFSET))(this);
		}

		::System::Void CMNGIBCAEGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CMNGIBCAEGA_OFFSET))(this);
		}

		::System::Void ECHADDFICPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ECHADDFICPO_OFFSET))(this);
		}

		::System::Void KEOIKHKHGII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KEOIKHKHGII_OFFSET))(this);
		}

		::System::Void DPKCLLOGKPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DPKCLLOGKPK_OFFSET))(this);
		}

		::System::Void DPHDGMCEDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DPHDGMCEDLK_OFFSET))(this);
		}

		::System::Void DIIJKKDCECD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DIIJKKDCECD_OFFSET))(this, a1, a2);
		}

		::System::Boolean LJHMPIKLGAF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_LJHMPIKLGAF_OFFSET))(this, a1);
		}

		::NBIBOKEFKIH* get_Attacker()
		{
			return ((::NBIBOKEFKIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ATTACKER_OFFSET))(this);
		}

		::System::Void set_Attacker(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ATTACKER_OFFSET))(this, a1);
		}

		::NBIBOKEFKIH* get_Defender()
		{
			return ((::NBIBOKEFKIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_DEFENDER_OFFSET))(this);
		}

		::System::Void set_Defender(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_DEFENDER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttacker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ISATTACKER_OFFSET))(this);
		}

		::System::Void set_IsAttacker(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ISATTACKER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDamageMaker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ISDAMAGEMAKER_OFFSET))(this);
		}

		::System::Void set_IsDamageMaker(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ISDAMAGEMAKER_OFFSET))(this, a1);
		}

		::System::Int32 get_LastMakeDamage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_LASTMAKEDAMAGE_OFFSET))(this);
		}

		::System::Void set_LastMakeDamage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_LASTMAKEDAMAGE_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_LaunchVelocity()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_LAUNCHVELOCITY_OFFSET))(this);
		}

		::System::Void set_LaunchVelocity(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_LAUNCHVELOCITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ISDEAD_OFFSET))(this);
		}

		::System::Void set_IsDead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ISDEAD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRealDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ISREALDEAD_OFFSET))(this);
		}

		::System::Void set_IsRealDead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ISREALDEAD_OFFSET))(this, a1);
		}

		::System::Boolean get_OnField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ONFIELD_OFFSET))(this);
		}

		::System::Void set_OnField(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ONFIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitOnField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_WAITONFIELD_OFFSET))(this);
		}

		::System::Void set_WaitOnField(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_WAITONFIELD_OFFSET))(this, a1);
		}

		::System::Int32 get_Hp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_HP_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Int32 get_WhiteAttack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_WHITEATTACK_OFFSET))(this);
		}

		::System::Void set_WhiteAttack(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_WHITEATTACK_OFFSET))(this, a1);
		}

		::System::Int32 get_Attack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ATTACK_OFFSET))(this);
		}

		::System::Void set_Attack(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ATTACK_OFFSET))(this, a1);
		}

		::System::Single get_BaseDamageFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_BASEDAMAGEFACTOR_OFFSET))(this);
		}

		::System::Void set_BaseDamageFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_BASEDAMAGEFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_DamageFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_DAMAGEFACTOR_OFFSET))(this);
		}

		::System::Void set_DamageFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_DAMAGEFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_SpineFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_SPINEFACTOR_OFFSET))(this);
		}

		::System::Void set_SpineFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_SPINEFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_ActionAttackFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ACTIONATTACKFACTOR_OFFSET))(this);
		}

		::System::Void set_ActionAttackFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ACTIONATTACKFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_BaseAttackFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_BASEATTACKFACTOR_OFFSET))(this);
		}

		::System::Void set_BaseAttackFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_BASEATTACKFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_AttackFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ATTACKFACTOR_OFFSET))(this);
		}

		::System::Void set_AttackFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ATTACKFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_EnemyCollisionImpulseFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ENEMYCOLLISIONIMPULSEFACTOR_OFFSET))(this);
		}

		::System::Void set_EnemyCollisionImpulseFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ENEMYCOLLISIONIMPULSEFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_AllyCollisionImpulseFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ALLYCOLLISIONIMPULSEFACTOR_OFFSET))(this);
		}

		::System::Void set_AllyCollisionImpulseFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ALLYCOLLISIONIMPULSEFACTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_ImmuneAttackBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_IMMUNEATTACKBACK_OFFSET))(this);
		}

		::System::Void set_ImmuneAttackBack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_IMMUNEATTACKBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_ImmuneDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_IMMUNEDAMAGE_OFFSET))(this);
		}

		::System::Void set_ImmuneDamage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_IMMUNEDAMAGE_OFFSET))(this, a1);
		}

		::System::Single get_CriticalRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_CRITICALRATE_OFFSET))(this);
		}

		::System::Void set_CriticalRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_CRITICALRATE_OFFSET))(this, a1);
		}

		::System::Single get_CriticalFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_CRITICALFACTOR_OFFSET))(this);
		}

		::System::Void set_CriticalFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_CRITICALFACTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_HASSHIELD_OFFSET))(this);
		}

		::System::Void set_HasShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_HASSHIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_HasImmuneShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_HASIMMUNESHIELD_OFFSET))(this);
		}

		::System::Void set_HasImmuneShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_HASIMMUNESHIELD_OFFSET))(this, a1);
		}

		::System::Int32 NBFELBKOOCN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NBFELBKOOCN_OFFSET))(this);
		}

		::System::Boolean COPDEMMPDKG(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_COPDEMMPDKG_OFFSET))(this, a1, a2);
		}

		::System::Void AOCKFBJLPMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_AOCKFBJLPMI_OFFSET))(this, a1);
		}

		::System::UInt32 OKCOJOFCBFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OKCOJOFCBFA_OFFSET))(this);
		}

		::System::Void ACOIEHKMKCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ACOIEHKMKCC_OFFSET))(this);
		}

		::System::Void HKHICEIPEEL(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HKHICEIPEEL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FOHJKMFFCHM(::PCDPIIHCLNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCDPIIHCLNB*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_FOHJKMFFCHM_OFFSET))(this, a1);
		}

		::System::Void DPLFACBGKIB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DPLFACBGKIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GDPCOCEOBBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GDPCOCEOBBP_OFFSET))(this);
		}

		::System::Void AAABMEJNIEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_AAABMEJNIEE_OFFSET))(this);
		}

		::System::Void IOMDBOGAMBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IOMDBOGAMBN_OFFSET))(this);
		}

		::System::Void HJHDOBENHLM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HJHDOBENHLM_OFFSET))(this, a1);
		}

		::System::Void DBBHPHFHCME(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DBBHPHFHCME_OFFSET))(this, a1, a2);
		}

		::System::Void MKJFPJCCLKE(::System::Single a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MKJFPJCCLKE_OFFSET))(this, a1, a2);
		}

		::System::Void IOKDMGGLMEP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IOKDMGGLMEP_OFFSET))(this, a1, a2);
		}

		::System::Void COGELOCEBIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_COGELOCEBIN_OFFSET))(this);
		}

		::System::Void IBIOPOKGBFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IBIOPOKGBFB_OFFSET))(this);
		}

		::System::Boolean DDLAAHMEFAI(::NBIBOKEFKIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DDLAAHMEFAI_OFFSET))(this, a1);
		}

		::System::Void FOKHLHPADMC(::System::Single a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_FOKHLHPADMC_OFFSET))(this, a1, a2);
		}

		::System::Void OFOFICGMGJF(::System::Single a1, ::NBIBOKEFKIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_OFOFICGMGJF_OFFSET))(this, a1, a2);
		}

		::System::Void CPFLDOFIHAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CPFLDOFIHAL_OFFSET))(this, a1);
		}

		::System::Void JJELIOEPIHG(::System::Single a1, ::CIHOEEPIBAI a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::CIHOEEPIBAI, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_JJELIOEPIHG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ACDIIFBMMBD(::System::Single a1, ::CIHOEEPIBAI a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::CIHOEEPIBAI))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ACDIIFBMMBD_OFFSET))(this, a1, a2);
		}

		::System::Void KAGDEFKDENG(::System::Int32 a1, ::System::Int32 a2, ::LMGECGDAPEN a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::LMGECGDAPEN, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KAGDEFKDENG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BPADPNEBHIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_BPADPNEBHIE_OFFSET))(this, a1);
		}

		::System::Void GICKFEFIHJK(::System::Single a1, ::RPG::MVector2 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::GPEEFAOIBNB a5, ::MIBEBGCMPOL* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::MVector2, ::System::UInt32, ::System::UInt32, ::GPEEFAOIBNB, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GICKFEFIHJK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MGIPKHHDFMJ(::System::Single a1, ::CIHOEEPIBAI a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::CIHOEEPIBAI))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MGIPKHHDFMJ_OFFSET))(this, a1, a2);
		}

		::System::Void ILKPCONCNIG(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ILKPCONCNIG_OFFSET))(this, a1, a2);
		}

		::System::Void DMMILDBCHHD(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_DMMILDBCHHD_OFFSET))(this, a1, a2);
		}

		::System::Void PAECBMBALEP(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_PAECBMBALEP_OFFSET))(this, a1, a2);
		}

		::System::Void ICFOECHKEEG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ICFOECHKEEG_OFFSET))(this, a1);
		}

		::System::Void GOLMAPJDLBD(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GOLMAPJDLBD_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 HINOFPAJGGN(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HINOFPAJGGN_OFFSET))(this, a1);
		}

		::System::Void NEDMEFNNENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NEDMEFNNENN_OFFSET))(this);
		}

		::System::Void ANFKOFPIJBF(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_ANFKOFPIJBF_OFFSET))(this, a1);
		}

		::System::Void KEACICAMLJM(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_KEACICAMLJM_OFFSET))(this, a1);
		}

		::System::Void LKLEMIEDPKE(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_LKLEMIEDPKE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AIStrategyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_AISTRATEGYID_OFFSET))(this);
		}

		::System::Void set_AIStrategyId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_AISTRATEGYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelUpPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_LEVELUPPRIORITY_OFFSET))(this);
		}

		::System::Void set_LevelUpPriority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_LEVELUPPRIORITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GET_ACTIONPRIORITY_OFFSET))(this);
		}

		::System::Void set_ActionPriority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_SET_ACTIONPRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 JLNKLBPKDPB(::RPG::GameCore::MarbleTitleValue a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_JLNKLBPKDPB_OFFSET))(this, a1);
		}

		::System::Void CJKNKDBALDK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_CJKNKDBALDK_OFFSET))(this, a1);
		}

		::System::Void PLPHIIMLNLD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_PLPHIIMLNLD_OFFSET))(this, a1);
		}

		::System::Void MIKJEGODBLA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_MIKJEGODBLA_OFFSET))(this, a1);
		}

		::System::Void BJALMGHBFBB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_BJALMGHBFBB_OFFSET))(this, a1);
		}

		::System::Void HIFLPPBFLBN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_HIFLPPBFLBN_OFFSET))(this, a1);
		}

		::System::Void NDBCLOOJBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_NDBCLOOJBKC_OFFSET))(this);
		}

		::System::Void PKNCAEOLICH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_PKNCAEOLICH_OFFSET))(this, a1);
		}

		::System::Void PFEMMKDADIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_PFEMMKDADIN_OFFSET))(this);
		}

		::System::Void GALFCDCBKLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_GALFCDCBKLG_OFFSET))(this);
		}

		::System::Void JGDNDNGNEMC(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_JGDNDNGNEMC_OFFSET))(this, a1, a2, a3, a4);
		}

		::LIJFHHMGBFE* IICLMKCAEBH()
		{
			return ((::LIJFHHMGBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IICLMKCAEBH_OFFSET))(this);
		}

		::LIJFHHMGBFE* IHNMMLPAHMB()
		{
			return ((::LIJFHHMGBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBOKEFKIH_IHNMMLPAHMB_OFFSET))(this);
		}

	};
