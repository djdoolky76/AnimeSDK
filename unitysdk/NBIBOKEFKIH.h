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

#define NBIBOKEFKIH_AAABMEJNIEE_OFFSET UNITYSDK_OFFSET(0x1C912460)
#define NBIBOKEFKIH_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0x1C909110)
#define NBIBOKEFKIH_ABGGMOBCOPF_OFFSET UNITYSDK_OFFSET(0x1C90FE20)
#define NBIBOKEFKIH_ACDIIFBMMBD_OFFSET UNITYSDK_OFFSET(0x1C90AB80)
#define NBIBOKEFKIH_ACOIEHKMKCC_OFFSET UNITYSDK_OFFSET(0x1C9112C0)
#define NBIBOKEFKIH_AGIBIFOOFMB_OFFSET UNITYSDK_OFFSET(0x1C907FE0)
#define NBIBOKEFKIH_ANFKOFPIJBF_OFFSET UNITYSDK_OFFSET(0x1C914610)
#define NBIBOKEFKIH_AOCKFBJLPMI_OFFSET UNITYSDK_OFFSET(0x1C911220)
#define NBIBOKEFKIH_BJALMGHBFBB_OFFSET UNITYSDK_OFFSET(0x1C90D8A0)
#define NBIBOKEFKIH_BMPOEDJFHKO_OFFSET UNITYSDK_OFFSET(0x1C908A20)
#define NBIBOKEFKIH_BOEMEMBGLLO_OFFSET UNITYSDK_OFFSET(0x1C910260)
#define NBIBOKEFKIH_BPADPNEBHIE_OFFSET UNITYSDK_OFFSET(0x1C90D9E0)
#define NBIBOKEFKIH_CGNGEEKGJEB_OFFSET UNITYSDK_OFFSET(0x1C909C40)
#define NBIBOKEFKIH_CJKNKDBALDK_OFFSET UNITYSDK_OFFSET(0x1C90D370)
#define NBIBOKEFKIH_CMNGIBCAEGA_OFFSET UNITYSDK_OFFSET(0x1C909BE0)
#define NBIBOKEFKIH_CMPNCFCJCNE_OFFSET UNITYSDK_OFFSET(0x1C8F0AA0)
#define NBIBOKEFKIH_COFECKNHBJH_OFFSET UNITYSDK_OFFSET(0x1C908990)
#define NBIBOKEFKIH_COGELOCEBIN_OFFSET UNITYSDK_OFFSET(0x1C912910)
#define NBIBOKEFKIH_COPDEMMPDKG_OFFSET UNITYSDK_OFFSET(0x1C9111A0)
#define NBIBOKEFKIH_CPFLDOFIHAL_OFFSET UNITYSDK_OFFSET(0x1C912CE0)
#define NBIBOKEFKIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9076A0)
#define NBIBOKEFKIH_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C907B80)
#define NBIBOKEFKIH_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C907DC0)
#define NBIBOKEFKIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C906F90)
#define NBIBOKEFKIH_DBBHPHFHCME_OFFSET UNITYSDK_OFFSET(0x1C90AEB0)
#define NBIBOKEFKIH_DDADIFMFGBA_OFFSET UNITYSDK_OFFSET(0x1C90D270)
#define NBIBOKEFKIH_DDLAAHMEFAI_OFFSET UNITYSDK_OFFSET(0x1C912F10)
#define NBIBOKEFKIH_DEPECPCJCKA_OFFSET UNITYSDK_OFFSET(0x1C90FF30)
#define NBIBOKEFKIH_DFNEFIFNDOE_OFFSET UNITYSDK_OFFSET(0x1C908970)
#define NBIBOKEFKIH_DIIJKKDCECD_OFFSET UNITYSDK_OFFSET(0x1C910AC0)
#define NBIBOKEFKIH_DMMILDBCHHD_OFFSET UNITYSDK_OFFSET(0x1C914040)
#define NBIBOKEFKIH_DPHDGMCEDLK_OFFSET UNITYSDK_OFFSET(0x1C907470)
#define NBIBOKEFKIH_DPICNGBHFAC_OFFSET UNITYSDK_OFFSET(0x1C90EAE0)
#define NBIBOKEFKIH_DPKCLLOGKPK_OFFSET UNITYSDK_OFFSET(0x1C90E820)
#define NBIBOKEFKIH_DPLFACBGKIB_OFFSET UNITYSDK_OFFSET(0x1C911D40)
#define NBIBOKEFKIH_EALPDOMAKEO_OFFSET UNITYSDK_OFFSET(0x1C907580)
#define NBIBOKEFKIH_ECHADDFICPO_OFFSET UNITYSDK_OFFSET(0x1C90DEA0)
#define NBIBOKEFKIH_EGELKAMKMOK_OFFSET UNITYSDK_OFFSET(0x1C90D4F0)
#define NBIBOKEFKIH_EJGFBHEHDBK_OFFSET UNITYSDK_OFFSET(0x1C90D090)
#define NBIBOKEFKIH_ENLJFEPPIGH_OFFSET UNITYSDK_OFFSET(0x1C909490)
#define NBIBOKEFKIH_FMOLJEMMNFF_OFFSET UNITYSDK_OFFSET(0x1C908A00)
#define NBIBOKEFKIH_FOHJKMFFCHM_OFFSET UNITYSDK_OFFSET(0x1C911500)
#define NBIBOKEFKIH_FOKHLHPADMC_OFFSET UNITYSDK_OFFSET(0x1C913040)
#define NBIBOKEFKIH_GALFCDCBKLG_OFFSET UNITYSDK_OFFSET(0x1C90DD10)
#define NBIBOKEFKIH_GDPCOCEOBBP_OFFSET UNITYSDK_OFFSET(0x1C9123D0)
#define NBIBOKEFKIH_GET_ACTIONATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911040)
#define NBIBOKEFKIH_GET_ACTIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C914E90)
#define NBIBOKEFKIH_GET_AISTRATEGYID_OFFSET UNITYSDK_OFFSET(0x1C914E50)
#define NBIBOKEFKIH_GET_ALLYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9110C0)
#define NBIBOKEFKIH_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1C910E00)
#define NBIBOKEFKIH_GET_ATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911080)
#define NBIBOKEFKIH_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1C910FC0)
#define NBIBOKEFKIH_GET_BASEATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911060)
#define NBIBOKEFKIH_GET_BASEDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C910FE0)
#define NBIBOKEFKIH_GET_CHROMAID_OFFSET UNITYSDK_OFFSET(0x1C908750)
#define NBIBOKEFKIH_GET_CRITICALFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911140)
#define NBIBOKEFKIH_GET_CRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1C911120)
#define NBIBOKEFKIH_GET_DAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911000)
#define NBIBOKEFKIH_GET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x1C910E20)
#define NBIBOKEFKIH_GET_ENEMYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9110A0)
#define NBIBOKEFKIH_GET_FEATURE_OFFSET UNITYSDK_OFFSET(0x1C9087F0)
#define NBIBOKEFKIH_GET_HASIMMUNESHIELD_OFFSET UNITYSDK_OFFSET(0x1C911180)
#define NBIBOKEFKIH_GET_HASSHIELD_OFFSET UNITYSDK_OFFSET(0x1C911160)
#define NBIBOKEFKIH_GET_HP_OFFSET UNITYSDK_OFFSET(0x1C910F60)
#define NBIBOKEFKIH_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C908710)
#define NBIBOKEFKIH_GET_IMMUNEATTACKBACK_OFFSET UNITYSDK_OFFSET(0x1C9110E0)
#define NBIBOKEFKIH_GET_IMMUNEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C911100)
#define NBIBOKEFKIH_GET_INITFORWARD_OFFSET UNITYSDK_OFFSET(0x1C908870)
#define NBIBOKEFKIH_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1C908850)
#define NBIBOKEFKIH_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C908A30)
#define NBIBOKEFKIH_GET_ISATTACKER_OFFSET UNITYSDK_OFFSET(0x1C910E40)
#define NBIBOKEFKIH_GET_ISDAMAGEMAKER_OFFSET UNITYSDK_OFFSET(0x1C910E60)
#define NBIBOKEFKIH_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1C910EE0)
#define NBIBOKEFKIH_GET_ISREALDEAD_OFFSET UNITYSDK_OFFSET(0x1C910F00)
#define NBIBOKEFKIH_GET_ISTEAMA_OFFSET UNITYSDK_OFFSET(0x1C9087B0)
#define NBIBOKEFKIH_GET_LASTMAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C910E80)
#define NBIBOKEFKIH_GET_LAUNCHVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C910EA0)
#define NBIBOKEFKIH_GET_LEVELUPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C914E70)
#define NBIBOKEFKIH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C910EC0)
#define NBIBOKEFKIH_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C910F80)
#define NBIBOKEFKIH_GET_ONFIELD_OFFSET UNITYSDK_OFFSET(0x1C910F20)
#define NBIBOKEFKIH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C908830)
#define NBIBOKEFKIH_GET_SEALID_OFFSET UNITYSDK_OFFSET(0x1C908730)
#define NBIBOKEFKIH_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C908810)
#define NBIBOKEFKIH_GET_SPINEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911020)
#define NBIBOKEFKIH_GET_SUBSEALID_OFFSET UNITYSDK_OFFSET(0x1C908770)
#define NBIBOKEFKIH_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x1C908790)
#define NBIBOKEFKIH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C9087D0)
#define NBIBOKEFKIH_GET_WAITONFIELD_OFFSET UNITYSDK_OFFSET(0x1C910F40)
#define NBIBOKEFKIH_GET_WHITEATTACK_OFFSET UNITYSDK_OFFSET(0x1C910FA0)
#define NBIBOKEFKIH_GICKFEFIHJK_OFFSET UNITYSDK_OFFSET(0x1C913510)
#define NBIBOKEFKIH_GOLMAPJDLBD_OFFSET UNITYSDK_OFFSET(0x1C90FBB0)
#define NBIBOKEFKIH_HIFLPPBFLBN_OFFSET UNITYSDK_OFFSET(0x1C90D660)
#define NBIBOKEFKIH_HINOFPAJGGN_OFFSET UNITYSDK_OFFSET(0x1C914450)
#define NBIBOKEFKIH_HJHDOBENHLM_OFFSET UNITYSDK_OFFSET(0x1C912540)
#define NBIBOKEFKIH_HJLJHLHOOOO_1_OFFSET UNITYSDK_OFFSET(0x1C9084E0)
#define NBIBOKEFKIH_HJLJHLHOOOO_2_OFFSET UNITYSDK_OFFSET(0x1C908630)
#define NBIBOKEFKIH_HJLJHLHOOOO_OFFSET UNITYSDK_OFFSET(0x1C9083E0)
#define NBIBOKEFKIH_HKHICEIPEEL_OFFSET UNITYSDK_OFFSET(0x1C911310)
#define NBIBOKEFKIH_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0x1C90B340)
#define NBIBOKEFKIH_IAKLKAFFNBC_OFFSET UNITYSDK_OFFSET(0x1C90FAF0)
#define NBIBOKEFKIH_IBIFHIAPPFG_OFFSET UNITYSDK_OFFSET(0x1C909F80)
#define NBIBOKEFKIH_IBIOPOKGBFB_OFFSET UNITYSDK_OFFSET(0x1C912ED0)
#define NBIBOKEFKIH_ICFOECHKEEG_OFFSET UNITYSDK_OFFSET(0x1C914300)
#define NBIBOKEFKIH_IDJPAAKFCKI_OFFSET UNITYSDK_OFFSET(0x1C90EF80)
#define NBIBOKEFKIH_IFLBAAABKAI_OFFSET UNITYSDK_OFFSET(0x1C90B7C0)
#define NBIBOKEFKIH_IFOOEPKGGAG_OFFSET UNITYSDK_OFFSET(0x1C90F110)
#define NBIBOKEFKIH_IHNMMLPAHMB_OFFSET UNITYSDK_OFFSET(0x1C9151D0)
#define NBIBOKEFKIH_IICLMKCAEBH_OFFSET UNITYSDK_OFFSET(0x1C915080)
#define NBIBOKEFKIH_ILKPCONCNIG_OFFSET UNITYSDK_OFFSET(0x1C913E30)
#define NBIBOKEFKIH_INBGFEJJNHH_OFFSET UNITYSDK_OFFSET(0x1C9092D0)
#define NBIBOKEFKIH_IOKDMGGLMEP_OFFSET UNITYSDK_OFFSET(0x1C9126F0)
#define NBIBOKEFKIH_IOMDBOGAMBN_OFFSET UNITYSDK_OFFSET(0x1C9124B0)
#define NBIBOKEFKIH_JBBJBDMMODL_OFFSET UNITYSDK_OFFSET(0x1C90FEC0)
#define NBIBOKEFKIH_JGDNDNGNEMC_OFFSET UNITYSDK_OFFSET(0x1C914FE0)
#define NBIBOKEFKIH_JJELIOEPIHG_OFFSET UNITYSDK_OFFSET(0x1C913360)
#define NBIBOKEFKIH_JLNKLBPKDPB_OFFSET UNITYSDK_OFFSET(0x1C914EB0)
#define NBIBOKEFKIH_KAGDEFKDENG_OFFSET UNITYSDK_OFFSET(0x1C90D6D0)
#define NBIBOKEFKIH_KCJAHDOHDFF_OFFSET UNITYSDK_OFFSET(0x1C910470)
#define NBIBOKEFKIH_KEACICAMLJM_OFFSET UNITYSDK_OFFSET(0x1C9148C0)
#define NBIBOKEFKIH_KEOIKHKHGII_OFFSET UNITYSDK_OFFSET(0x1C90E560)
#define NBIBOKEFKIH_KFOCEOKIJFC_OFFSET UNITYSDK_OFFSET(0x1C910960)
#define NBIBOKEFKIH_KIICBOFJBGJ_OFFSET UNITYSDK_OFFSET(0x1C908BD0)
#define NBIBOKEFKIH_KJIPDNHFBGL_OFFSET UNITYSDK_OFFSET(0x1C909770)
#define NBIBOKEFKIH_LAEJDKMFGJJ_OFFSET UNITYSDK_OFFSET(0x1C910680)
#define NBIBOKEFKIH_LDFGCOIOKLD_OFFSET UNITYSDK_OFFSET(0x1C90A630)
#define NBIBOKEFKIH_LJHMPIKLGAF_OFFSET UNITYSDK_OFFSET(0x1C910D90)
#define NBIBOKEFKIH_LKLEMIEDPKE_OFFSET UNITYSDK_OFFSET(0x1C914D90)
#define NBIBOKEFKIH_LMIEABFHDDO_OFFSET UNITYSDK_OFFSET(0x1C908A50)
#define NBIBOKEFKIH_MBBAKKMHFAN_OFFSET UNITYSDK_OFFSET(0x1C909DB0)
#define NBIBOKEFKIH_MCNBCHKJKDP_OFFSET UNITYSDK_OFFSET(0x1C908D90)
#define NBIBOKEFKIH_MDGNOFJBPDA_OFFSET UNITYSDK_OFFSET(0x1C909600)
#define NBIBOKEFKIH_MGIPKHHDFMJ_OFFSET UNITYSDK_OFFSET(0x1C913A70)
#define NBIBOKEFKIH_MIKJEGODBLA_OFFSET UNITYSDK_OFFSET(0x1C90D470)
#define NBIBOKEFKIH_MINLEAAIEPC_OFFSET UNITYSDK_OFFSET(0x1C9108A0)
#define NBIBOKEFKIH_MKJFPJCCLKE_OFFSET UNITYSDK_OFFSET(0x1C9125D0)
#define NBIBOKEFKIH_MNDCJGALGCN_OFFSET UNITYSDK_OFFSET(0x1C9078A0)
#define NBIBOKEFKIH_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1C90B620)
#define NBIBOKEFKIH_MODBPEPAGBO_OFFSET UNITYSDK_OFFSET(0x1C90B180)
#define NBIBOKEFKIH_NBFELBKOOCN_OFFSET UNITYSDK_OFFSET(0x1C90D920)
#define NBIBOKEFKIH_NDBCLOOJBKC_OFFSET UNITYSDK_OFFSET(0x1C914F70)
#define NBIBOKEFKIH_NEDMEFNNENN_OFFSET UNITYSDK_OFFSET(0x1C9144D0)
#define NBIBOKEFKIH_NELLAEEMILM_OFFSET UNITYSDK_OFFSET(0x1C908380)
#define NBIBOKEFKIH_NHMGFHDBDLN_OFFSET UNITYSDK_OFFSET(0x1C90FB50)
#define NBIBOKEFKIH_NIEJLOICAEC_OFFSET UNITYSDK_OFFSET(0x1C90A1A0)
#define NBIBOKEFKIH_NJKPCFOCDLI_OFFSET UNITYSDK_OFFSET(0x1C9105E0)
#define NBIBOKEFKIH_NOKEHEMIDGL_OFFSET UNITYSDK_OFFSET(0x1C90FDA0)
#define NBIBOKEFKIH_OEGGCNKNCDJ_OFFSET UNITYSDK_OFFSET(0x1C908890)
#define NBIBOKEFKIH_OFOFICGMGJF_OFFSET UNITYSDK_OFFSET(0x1C9131E0)
#define NBIBOKEFKIH_OIFAPNBDGLA_OFFSET UNITYSDK_OFFSET(0x1C90A9C0)
#define NBIBOKEFKIH_OKCOJOFCBFA_OFFSET UNITYSDK_OFFSET(0x1C911270)
#define NBIBOKEFKIH_OKNFFOLGNKJ_OFFSET UNITYSDK_OFFSET(0x1C9108F0)
#define NBIBOKEFKIH_OLDGMPCLDJD_OFFSET UNITYSDK_OFFSET(0x1C9088B0)
#define NBIBOKEFKIH_OPDBOINFMCA_OFFSET UNITYSDK_OFFSET(0x1C90B4B0)
#define NBIBOKEFKIH_PAECBMBALEP_OFFSET UNITYSDK_OFFSET(0x1C9141A0)
#define NBIBOKEFKIH_PFEMMKDADIN_OFFSET UNITYSDK_OFFSET(0x1C90A5C0)
#define NBIBOKEFKIH_PGCGDKIDLED_OFFSET UNITYSDK_OFFSET(0x1C90D210)
#define NBIBOKEFKIH_PKNCAEOLICH_OFFSET UNITYSDK_OFFSET(0x1C90D3F0)
#define NBIBOKEFKIH_PLPHIIMLNLD_OFFSET UNITYSDK_OFFSET(0x1C90D2F0)
#define NBIBOKEFKIH_POKICHGJLJA_OFFSET UNITYSDK_OFFSET(0x1C90F6E0)
#define NBIBOKEFKIH_PPAIJKBBJJE_OFFSET UNITYSDK_OFFSET(0x1C908F50)
#define NBIBOKEFKIH_SET_ACTIONATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911050)
#define NBIBOKEFKIH_SET_ACTIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C914EA0)
#define NBIBOKEFKIH_SET_AISTRATEGYID_OFFSET UNITYSDK_OFFSET(0x1C914E60)
#define NBIBOKEFKIH_SET_ALLYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9110D0)
#define NBIBOKEFKIH_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1C910E10)
#define NBIBOKEFKIH_SET_ATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911090)
#define NBIBOKEFKIH_SET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1C910FD0)
#define NBIBOKEFKIH_SET_BASEATTACKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911070)
#define NBIBOKEFKIH_SET_BASEDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C910FF0)
#define NBIBOKEFKIH_SET_CHROMAID_OFFSET UNITYSDK_OFFSET(0x1C908760)
#define NBIBOKEFKIH_SET_CRITICALFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911150)
#define NBIBOKEFKIH_SET_CRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1C911130)
#define NBIBOKEFKIH_SET_DAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911010)
#define NBIBOKEFKIH_SET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x1C910E30)
#define NBIBOKEFKIH_SET_ENEMYCOLLISIONIMPULSEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9110B0)
#define NBIBOKEFKIH_SET_FEATURE_OFFSET UNITYSDK_OFFSET(0x1C908800)
#define NBIBOKEFKIH_SET_HASIMMUNESHIELD_OFFSET UNITYSDK_OFFSET(0x1C911190)
#define NBIBOKEFKIH_SET_HASSHIELD_OFFSET UNITYSDK_OFFSET(0x1C911170)
#define NBIBOKEFKIH_SET_HP_OFFSET UNITYSDK_OFFSET(0x1C910F70)
#define NBIBOKEFKIH_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C908720)
#define NBIBOKEFKIH_SET_IMMUNEATTACKBACK_OFFSET UNITYSDK_OFFSET(0x1C9110F0)
#define NBIBOKEFKIH_SET_IMMUNEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C911110)
#define NBIBOKEFKIH_SET_INITFORWARD_OFFSET UNITYSDK_OFFSET(0x1C908880)
#define NBIBOKEFKIH_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1C908860)
#define NBIBOKEFKIH_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C908A40)
#define NBIBOKEFKIH_SET_ISATTACKER_OFFSET UNITYSDK_OFFSET(0x1C910E50)
#define NBIBOKEFKIH_SET_ISDAMAGEMAKER_OFFSET UNITYSDK_OFFSET(0x1C910E70)
#define NBIBOKEFKIH_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1C910EF0)
#define NBIBOKEFKIH_SET_ISREALDEAD_OFFSET UNITYSDK_OFFSET(0x1C910F10)
#define NBIBOKEFKIH_SET_ISTEAMA_OFFSET UNITYSDK_OFFSET(0x1C9087C0)
#define NBIBOKEFKIH_SET_LASTMAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C910E90)
#define NBIBOKEFKIH_SET_LAUNCHVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C910EB0)
#define NBIBOKEFKIH_SET_LEVELUPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C914E80)
#define NBIBOKEFKIH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C910ED0)
#define NBIBOKEFKIH_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C910F90)
#define NBIBOKEFKIH_SET_ONFIELD_OFFSET UNITYSDK_OFFSET(0x1C910F30)
#define NBIBOKEFKIH_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C908840)
#define NBIBOKEFKIH_SET_SEALID_OFFSET UNITYSDK_OFFSET(0x1C908740)
#define NBIBOKEFKIH_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C908820)
#define NBIBOKEFKIH_SET_SPINEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C911030)
#define NBIBOKEFKIH_SET_SUBSEALID_OFFSET UNITYSDK_OFFSET(0x1C908780)
#define NBIBOKEFKIH_SET_TEAM_OFFSET UNITYSDK_OFFSET(0x1C9087A0)
#define NBIBOKEFKIH_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C9087E0)
#define NBIBOKEFKIH_SET_WAITONFIELD_OFFSET UNITYSDK_OFFSET(0x1C910F50)
#define NBIBOKEFKIH_SET_WHITEATTACK_OFFSET UNITYSDK_OFFSET(0x1C910FB0)

inline static constexpr unsigned int NBIBOKEFKIH_TypeDefinitionIndex = 43082;

	class NBIBOKEFKIH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LNMLGFLELAE; // 0x10
		::DHFLEJMNGDL* MMHNHOHIODC; // 0x18
		::FBDPOPBPHKP* _Team_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::AOMMEMBHKKG*>* JIILNFBDFDK; // 0x28
		::MIBEBGCMPOL* PHFKFBLIBKG; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* CFGEEIGDHLH; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* LHFLHJADJCH; // 0x40
		::Il2CppArray<::System::UInt32>* GCIHCJPLLIN; // 0x48
		::NBIBOKEFKIH* _Defender_k__BackingField; // 0x50
		::KHLDHMFKOCP* _Instance_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::NDEAGEPIBKK*>* BCEFDINCEMD; // 0x60
		::NBIBOKEFKIH* _Attacker_k__BackingField; // 0x68
		::System::Int32 EDMKJDNECNE; // 0x70
		::System::Single _EnemyCollisionImpulseFactor_k__BackingField; // 0x74
		::System::Int32 OLOIDCBDNFF; // 0x78
		::System::Single _BaseDamageFactor_k__BackingField; // 0x7C
		::System::Single PGDKIGEIBAA; // 0x80
		::System::Int32 JGAEMBFOOJO; // 0x84
		::System::Int32 NCIIBAGFPAN; // 0x88
		::System::Int32 _Attack_k__BackingField; // 0x8C
		::System::Int32 KAANGICPCFJ; // 0x90
		::System::Int32 _WhiteAttack_k__BackingField; // 0x94
		::RPG::MVector2 _InitPosition_k__BackingField; // 0x98
		::System::UInt32 _ActionPriority_k__BackingField; // 0xA0
		::System::Single HOOPIIAFPMJ; // 0xA4
		::RPG::MVector2 EDGNGCFCNID; // 0xA8
		::System::Int32 _Hp_k__BackingField; // 0xB0
		::System::Int32 BALKKBGOKMJ; // 0xB4
		::System::Int32 KDMPKIPAIDJ; // 0xB8
		::System::Boolean _ImmuneDamage_k__BackingField; // 0xBC
		::System::Boolean _OnField_k__BackingField; // 0xBD
		::System::Boolean _HasImmuneShield_k__BackingField; // 0xBE
		::System::Boolean _IsTeamA_k__BackingField; // 0xBF
		::RPG::MVector2 _InitForward_k__BackingField; // 0xC0
		::System::Single MPFODHPHDAK; // 0xC8
		::System::Boolean AEGFKBDCHDH; // 0xCC
		::System::Boolean _WaitOnField_k__BackingField; // 0xCD
		::System::Boolean _IsAttacker_k__BackingField; // 0xCE
		::System::Boolean HIAABIICDNJ; // 0xCF
		::System::Int32 FKLOIKNNNNM; // 0xD0
		::System::Int32 BKPBGNPDICC; // 0xD4
		::System::Single _BaseAttackFactor_k__BackingField; // 0xD8
		::System::Int32 NHDFLELAOLM; // 0xDC
		::System::UInt32 PGBAAEBGHCN; // 0xE0
		::System::Single _SpineFactor_k__BackingField; // 0xE4
		::RPG::MVector2 _LaunchVelocity_k__BackingField; // 0xE8
		::System::Int32 JJBMDMBJPDH; // 0xF0
		::System::Int32 GGADMHMOGMI; // 0xF4
		::System::Int32 FCNGODBIBNC; // 0xF8
		::System::Int32 _MaxHp_k__BackingField; // 0xFC
		::System::Int32 EHHEJCLMFPD; // 0x100
		::System::Single NNFJPKPBAHO; // 0x104
		::System::Int32 _LastMakeDamage_k__BackingField; // 0x108
		::System::Boolean MKAKPEAHBDH; // 0x10C
		::System::Boolean _IsRealDead_k__BackingField; // 0x10D
		::System::Boolean _IsDamageMaker_k__BackingField; // 0x10E
		::System::Boolean _IsDead_k__BackingField; // 0x10F
		::RPG::GameCore::MarbleItemType _Type_k__BackingField; // 0x110
		::System::Int32 OPDGFFEPEHG; // 0x114
		::System::Single _AllyCollisionImpulseFactor_k__BackingField; // 0x118
		::System::Single _ActionAttackFactor_k__BackingField; // 0x11C
		::System::UInt32 MDKFLGDEJCN; // 0x120
		::System::Single _Radius_k__BackingField; // 0x124
		::System::Int32 NKKFGAPJCIJ; // 0x128
		::System::Int32 FNCNIJOMLJD; // 0x12C
		::System::Int32 GNAFGGAAKDF; // 0x130
		::System::UInt32 _LevelUpPriority_k__BackingField; // 0x134
		::RPG::GameCore::MarbleShapeType _Shape_k__BackingField; // 0x138
		::System::Int32 LPEKDDPLGAB; // 0x13C
		::System::Int32 PDEMOPHANLA; // 0x140
		::System::Single _CriticalRate_k__BackingField; // 0x144
		::System::Int32 KOJHGKLDGKB; // 0x148
		::System::Int32 LDBMDDKCNAJ; // 0x14C
		::System::Single _CriticalFactor_k__BackingField; // 0x150
		::System::UInt32 _ChromaId_k__BackingField; // 0x154
		::System::UInt32 _SealId_k__BackingField; // 0x158
		::System::UInt32 _SubSealId_k__BackingField; // 0x15C
		::System::Int32 HJEPLCAOMKL; // 0x160
		::System::Int32 GKKIPIMCBAD; // 0x164
		::RPG::GameCore::MarbleItemFeature _Feature_k__BackingField; // 0x168
		::System::Single PGFBFDJIDLM; // 0x16C
		::System::Boolean _HasShield_k__BackingField; // 0x170
		::System::Boolean _ImmuneAttackBack_k__BackingField; // 0x171
		::System::Boolean FBFMAMCDIOI; // 0x172
		::System::Boolean OBKJNIFAFJK; // 0x173
		::System::Single _AttackFactor_k__BackingField; // 0x174
		::System::Single LCAGMAJBMHF; // 0x178
		::System::UInt32 _Level_k__BackingField; // 0x17C
		::System::Single _DamageFactor_k__BackingField; // 0x180
		::RPG::Client::LittleGame::Marble::MarbleActionSource NBLFAKIGNFN; // 0x184
		::System::Int32 HODNPDPDFDO; // 0x188
		::System::Int32 CHHDAKCOACO; // 0x18C
		::System::UInt32 _AIStrategyId_k__BackingField; // 0x190
		::System::UInt32 _Id_k__BackingField; // 0x194
		::System::Single OEGILHECMHI; // 0x198
		::System::Single EOBEBJDJEBJ; // 0x19C
		::System::UInt32 ALMOJACJHFH; // 0x1A0
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
