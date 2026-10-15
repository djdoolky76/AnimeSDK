#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCHGAEGOFBO_TriggerDisableReason.h"
#include "unitysdk/MIGEAMGGJFN_JNCGDICPOAJ.h"
#include "unitysdk/NCPLKHJEBFG.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/SummonUnitHideMask.h"
#include "unitysdk/RPG/GameCore/SummonUnitTaskSeqType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNGIEBCPNIB;
class EDLDHDMLJDH;
class EKFMIDBJDIA;
class ENEIHJJPNPI;
class HCHGAEGOFBO;
class HHCKNGMIAKL;
class KFELGAIGHAP;
class LDJLOIJHLOC_MLGMADEFLMC;
class LDMKDJJLOIL;
class LLADGGNOJPG;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SummonUnitAIConfig; }
namespace RPG::GameCore { class SummonUnitBeAttackConfig; }
namespace RPG::GameCore { class SummonUnitCharacterAnimConfig; }
namespace RPG::GameCore { class SummonUnitConfig; }
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace RPG::GameCore { class SummonUnitGatherConfig; }
namespace RPG::GameCore { class SummonUnitGroupConfig; }
namespace RPG::GameCore { class SummonUnitMiscConfig; }
namespace RPG::GameCore { class SummonUnitMoveConfig; }
namespace RPG::GameCore { class SummonUnitSkillConfig; }
namespace RPG::GameCore { class SummonUnitTriggerConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDJLOIJHLOC_ADLFGKJBEHF_OFFSET UNITYSDK_OFFSET(0xB6287A0)
#define LDJLOIJHLOC_AIAIKBMADMP_OFFSET UNITYSDK_OFFSET(0xB62A0A0)
#define LDJLOIJHLOC_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0xB634FD0)
#define LDJLOIJHLOC_ALAAECDBOBA_OFFSET UNITYSDK_OFFSET(0xB629500)
#define LDJLOIJHLOC_ALKOMLIACMP_OFFSET UNITYSDK_OFFSET(0xB6351A0)
#define LDJLOIJHLOC_AMIINIAAGPN_OFFSET UNITYSDK_OFFSET(0xB6293A0)
#define LDJLOIJHLOC_ANIDIKCAKAN_OFFSET UNITYSDK_OFFSET(0xB628CE0)
#define LDJLOIJHLOC_AOGACFIOJKK_OFFSET UNITYSDK_OFFSET(0xB628930)
#define LDJLOIJHLOC_BCBKNIEEMME_OFFSET UNITYSDK_OFFSET(0xB62D990)
#define LDJLOIJHLOC_BCJPOGODOGK_OFFSET UNITYSDK_OFFSET(0xB6353D0)
#define LDJLOIJHLOC_BDAIEEDEPKG_OFFSET UNITYSDK_OFFSET(0xB628290)
#define LDJLOIJHLOC_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0xB631C30)
#define LDJLOIJHLOC_BEHKLCONPMP_OFFSET UNITYSDK_OFFSET(0xB62FB50)
#define LDJLOIJHLOC_BENGNMGIADJ_OFFSET UNITYSDK_OFFSET(0xB626050)
#define LDJLOIJHLOC_BFPJHDNDBNO_OFFSET UNITYSDK_OFFSET(0xB632120)
#define LDJLOIJHLOC_BGKJIMHCJGN_OFFSET UNITYSDK_OFFSET(0xB628190)
#define LDJLOIJHLOC_BHNFMGOAJLD_OFFSET UNITYSDK_OFFSET(0xB62FC10)
#define LDJLOIJHLOC_BLEHAIHFIKC_OFFSET UNITYSDK_OFFSET(0xB62D7B0)
#define LDJLOIJHLOC_BMEPACCFAJK_OFFSET UNITYSDK_OFFSET(0xB632B70)
#define LDJLOIJHLOC_BMPEECCINFB_OFFSET UNITYSDK_OFFSET(0xB62E900)
#define LDJLOIJHLOC_BOFJEGFODBF_OFFSET UNITYSDK_OFFSET(0xB629A30)
#define LDJLOIJHLOC_CCKPKAGNPFB_OFFSET UNITYSDK_OFFSET(0xB6272C0)
#define LDJLOIJHLOC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB635590)
#define LDJLOIJHLOC_CIBBJINBBIF_OFFSET UNITYSDK_OFFSET(0xB6353F0)
#define LDJLOIJHLOC_CIGOOLCBCAP_OFFSET UNITYSDK_OFFSET(0xB634130)
#define LDJLOIJHLOC_CLOHOJKAPKE_OFFSET UNITYSDK_OFFSET(0xB629590)
#define LDJLOIJHLOC_CLPLOMKOKPO_OFFSET UNITYSDK_OFFSET(0xB627F30)
#define LDJLOIJHLOC_CMPJPJIHHGA_OFFSET UNITYSDK_OFFSET(0xB62FAE0)
#define LDJLOIJHLOC_CTOR_OFFSET UNITYSDK_OFFSET(0xB635410)
#define LDJLOIJHLOC_DFLFDFEEBLJ_OFFSET UNITYSDK_OFFSET(0xB627A00)
#define LDJLOIJHLOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB631D70)
#define LDJLOIJHLOC_DKLLHJFKFBL_OFFSET UNITYSDK_OFFSET(0xB6300F0)
#define LDJLOIJHLOC_DNLAELIKIEE_OFFSET UNITYSDK_OFFSET(0xB62A530)
#define LDJLOIJHLOC_EAHGFLELEOG_OFFSET UNITYSDK_OFFSET(0xB6298A0)
#define LDJLOIJHLOC_EHEMHMFCIEM_OFFSET UNITYSDK_OFFSET(0xB633710)
#define LDJLOIJHLOC_EKMGHAEKHPE_OFFSET UNITYSDK_OFFSET(0xB629830)
#define LDJLOIJHLOC_EMEGDGNPFGL_OFFSET UNITYSDK_OFFSET(0xB629780)
#define LDJLOIJHLOC_EMGAAPJFBBP_OFFSET UNITYSDK_OFFSET(0xB631EE0)
#define LDJLOIJHLOC_EPDAHMGJPKN_OFFSET UNITYSDK_OFFSET(0xB627330)
#define LDJLOIJHLOC_FFNJAJMDPEO_OFFSET UNITYSDK_OFFSET(0xB6338A0)
#define LDJLOIJHLOC_FHKEHPNPHMD_OFFSET UNITYSDK_OFFSET(0xB629060)
#define LDJLOIJHLOC_FIMKGHFOMOL_OFFSET UNITYSDK_OFFSET(0xB6286E0)
#define LDJLOIJHLOC_FINJJOOAOMD_OFFSET UNITYSDK_OFFSET(0xB631430)
#define LDJLOIJHLOC_FJLEENBONGO_OFFSET UNITYSDK_OFFSET(0xB630630)
#define LDJLOIJHLOC_FKGFNDGDKKH_OFFSET UNITYSDK_OFFSET(0xB630380)
#define LDJLOIJHLOC_FLAHNLHGGHJ_OFFSET UNITYSDK_OFFSET(0xB6260D0)
#define LDJLOIJHLOC_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xB635190)
#define LDJLOIJHLOC_GCELLBIPOPC_OFFSET UNITYSDK_OFFSET(0xB62E450)
#define LDJLOIJHLOC_GDGDMKLINGE_OFFSET UNITYSDK_OFFSET(0xB62FD80)
#define LDJLOIJHLOC_GET_CLOSEOWNERIDLESHOW_OFFSET UNITYSDK_OFFSET(0xB6351F0)
#define LDJLOIJHLOC_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB635230)
#define LDJLOIJHLOC_GET_DEF_OFFSET UNITYSDK_OFFSET(0xB6351D0)
#define LDJLOIJHLOC_GET_ISREBUILT_OFFSET UNITYSDK_OFFSET(0xB635210)
#define LDJLOIJHLOC_GET_REMAINLIFETIME_OFFSET UNITYSDK_OFFSET(0xB635350)
#define LDJLOIJHLOC_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xB6351B0)
#define LDJLOIJHLOC_GET_SUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xB635170)
#define LDJLOIJHLOC_GKDCAELJPJF_OFFSET UNITYSDK_OFFSET(0xB631A60)
#define LDJLOIJHLOC_GMECMBPHJLK_OFFSET UNITYSDK_OFFSET(0xB6338E0)
#define LDJLOIJHLOC_GOECAPLFJMP_OFFSET UNITYSDK_OFFSET(0xB635370)
#define LDJLOIJHLOC_GPCFNCICFCC_OFFSET UNITYSDK_OFFSET(0xB62B5D0)
#define LDJLOIJHLOC_HBBEOMJJMGH_OFFSET UNITYSDK_OFFSET(0xB628FD0)
#define LDJLOIJHLOC_HDDFGNLCJLI_OFFSET UNITYSDK_OFFSET(0xB635120)
#define LDJLOIJHLOC_HEKFDIPGEFC_OFFSET UNITYSDK_OFFSET(0xB631160)
#define LDJLOIJHLOC_HFENLKOGFPI_OFFSET UNITYSDK_OFFSET(0xB631AA0)
#define LDJLOIJHLOC_HIBFGMFGAPB_OFFSET UNITYSDK_OFFSET(0xB62DDD0)
#define LDJLOIJHLOC_IBKPJFCAKKE_OFFSET UNITYSDK_OFFSET(0xB633F70)
#define LDJLOIJHLOC_IDGFHCCMMGE_OFFSET UNITYSDK_OFFSET(0xB631540)
#define LDJLOIJHLOC_IFMFPMIDKMF_OFFSET UNITYSDK_OFFSET(0xB630330)
#define LDJLOIJHLOC_IHGJFPGFHBP_OFFSET UNITYSDK_OFFSET(0xB630440)
#define LDJLOIJHLOC_ILNMLFDOOBD_OFFSET UNITYSDK_OFFSET(0xB630680)
#define LDJLOIJHLOC_IOPOMDHAHDN_OFFSET UNITYSDK_OFFSET(0xB633850)
#define LDJLOIJHLOC_IPLFJAHFCHI_OFFSET UNITYSDK_OFFSET(0xB629AC0)
#define LDJLOIJHLOC_JAPONACAEOM_OFFSET UNITYSDK_OFFSET(0xB62EC90)
#define LDJLOIJHLOC_JDBKJBAEAGG_OFFSET UNITYSDK_OFFSET(0xB62B080)
#define LDJLOIJHLOC_JEMPPFPFMCK_OFFSET UNITYSDK_OFFSET(0xB634400)
#define LDJLOIJHLOC_JHAPCHLLIDH_OFFSET UNITYSDK_OFFSET(0xB626B40)
#define LDJLOIJHLOC_JHEJOGFAJHC_OFFSET UNITYSDK_OFFSET(0xB628DC0)
#define LDJLOIJHLOC_JKKIKFJPMKK_OFFSET UNITYSDK_OFFSET(0xB632E50)
#define LDJLOIJHLOC_JKPMJAIICGA_OFFSET UNITYSDK_OFFSET(0xB634010)
#define LDJLOIJHLOC_JLENPCKFLHG_OFFSET UNITYSDK_OFFSET(0xB62A040)
#define LDJLOIJHLOC_JLMEPHOHOHE_OFFSET UNITYSDK_OFFSET(0xB631C80)
#define LDJLOIJHLOC_JLPKDFBHGLG_OFFSET UNITYSDK_OFFSET(0xB62D9F0)
#define LDJLOIJHLOC_JMOCBNGENNE_OFFSET UNITYSDK_OFFSET(0xB631610)
#define LDJLOIJHLOC_JNBBJMFHODM_OFFSET UNITYSDK_OFFSET(0xB6292A0)
#define LDJLOIJHLOC_JOJGICABPGK_OFFSET UNITYSDK_OFFSET(0xB626790)
#define LDJLOIJHLOC_KBENBHJIJGK_OFFSET UNITYSDK_OFFSET(0xB635250)
#define LDJLOIJHLOC_KFAHOONFEDC_OFFSET UNITYSDK_OFFSET(0xB62DA60)
#define LDJLOIJHLOC_KFEFFKLCCNI_OFFSET UNITYSDK_OFFSET(0xB6353E0)
#define LDJLOIJHLOC_KFPFGBIIOHF_OFFSET UNITYSDK_OFFSET(0xB633EC0)
#define LDJLOIJHLOC_KGBNPGPFNEK_OFFSET UNITYSDK_OFFSET(0xB62B930)
#define LDJLOIJHLOC_KGJFDHAJKDI_OFFSET UNITYSDK_OFFSET(0xB62A870)
#define LDJLOIJHLOC_KGPALFDMIIK_OFFSET UNITYSDK_OFFSET(0xB62D490)
#define LDJLOIJHLOC_KJOEPDIEBID_OFFSET UNITYSDK_OFFSET(0xB635050)
#define LDJLOIJHLOC_KNNPEGEGEFM_OFFSET UNITYSDK_OFFSET(0xB631BE0)
#define LDJLOIJHLOC_LADJCIMGEPJ_OFFSET UNITYSDK_OFFSET(0xB627D20)
#define LDJLOIJHLOC_LALNHIHMFAK_OFFSET UNITYSDK_OFFSET(0xB634E70)
#define LDJLOIJHLOC_LBFKFHKLNIC_OFFSET UNITYSDK_OFFSET(0xB626D20)
#define LDJLOIJHLOC_LBIIJNGBEHM_OFFSET UNITYSDK_OFFSET(0xB6275A0)
#define LDJLOIJHLOC_LCFLJJBEOEC_OFFSET UNITYSDK_OFFSET(0xB631980)
#define LDJLOIJHLOC_LFJFCMNJAIJ_OFFSET UNITYSDK_OFFSET(0xB6284E0)
#define LDJLOIJHLOC_LGHLJLLHAOC_OFFSET UNITYSDK_OFFSET(0xB6316C0)
#define LDJLOIJHLOC_LJBOCPFHCKH_OFFSET UNITYSDK_OFFSET(0xB6299E0)
#define LDJLOIJHLOC_LJDKIFCCEGC_OFFSET UNITYSDK_OFFSET(0xB633930)
#define LDJLOIJHLOC_LJEBJHAMBKE_OFFSET UNITYSDK_OFFSET(0xB625D30)
#define LDJLOIJHLOC_LJEKKBBEBEM_OFFSET UNITYSDK_OFFSET(0xB628680)
#define LDJLOIJHLOC_LLDBBALNNDN_OFFSET UNITYSDK_OFFSET(0xB626500)
#define LDJLOIJHLOC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB6324D0)
#define LDJLOIJHLOC_LMGPANGLHFP_OFFSET UNITYSDK_OFFSET(0xB6263C0)
#define LDJLOIJHLOC_LOGOMCPMIOI_OFFSET UNITYSDK_OFFSET(0xB62D800)
#define LDJLOIJHLOC_LPBHFNKIGPK_OFFSET UNITYSDK_OFFSET(0xB628880)
#define LDJLOIJHLOC_MBAENPIEMBF_OFFSET UNITYSDK_OFFSET(0xB62E250)
#define LDJLOIJHLOC_MENOEMDOHDE_OFFSET UNITYSDK_OFFSET(0xB6332E0)
#define LDJLOIJHLOC_MFPGGADCFEH_OFFSET UNITYSDK_OFFSET(0xB6274E0)
#define LDJLOIJHLOC_MICGFKBLMKG_OFFSET UNITYSDK_OFFSET(0xB62FFD0)
#define LDJLOIJHLOC_MJCEIELKHGE_OFFSET UNITYSDK_OFFSET(0xB633980)
#define LDJLOIJHLOC_MKGMJKLOHND_OFFSET UNITYSDK_OFFSET(0xB62E120)
#define LDJLOIJHLOC_MKMBPBMMDOJ_OFFSET UNITYSDK_OFFSET(0xB631000)
#define LDJLOIJHLOC_MMNMBOOHCGH_OFFSET UNITYSDK_OFFSET(0xB62DEF0)
#define LDJLOIJHLOC_MNNAHAPGMDN_OFFSET UNITYSDK_OFFSET(0xB629AD0)
#define LDJLOIJHLOC_NBMONNACLDP_OFFSET UNITYSDK_OFFSET(0xB62BA00)
#define LDJLOIJHLOC_NCHOFNAPEGB_OFFSET UNITYSDK_OFFSET(0xB625CA0)
#define LDJLOIJHLOC_NFODBDONHGD_OFFSET UNITYSDK_OFFSET(0xB62B8C0)
#define LDJLOIJHLOC_NFOHHJMEBNG_OFFSET UNITYSDK_OFFSET(0xB634E20)
#define LDJLOIJHLOC_NIHGOACGCJG_OFFSET UNITYSDK_OFFSET(0xB631300)
#define LDJLOIJHLOC_NJMNGAPIKDI_OFFSET UNITYSDK_OFFSET(0xB6314A0)
#define LDJLOIJHLOC_NOLHPOHCMOP_OFFSET UNITYSDK_OFFSET(0xB632A00)
#define LDJLOIJHLOC_OFDPDCHKPOG_OFFSET UNITYSDK_OFFSET(0xB632EC0)
#define LDJLOIJHLOC_OGILMEKDMLN_OFFSET UNITYSDK_OFFSET(0xB630870)
#define LDJLOIJHLOC_OGINMMDMOJN_OFFSET UNITYSDK_OFFSET(0xB633240)
#define LDJLOIJHLOC_OGPGJMILILM_OFFSET UNITYSDK_OFFSET(0xB633490)
#define LDJLOIJHLOC_OHCFCJPFMNP_OFFSET UNITYSDK_OFFSET(0xB635400)
#define LDJLOIJHLOC_OKIOAHBPHMP_OFFSET UNITYSDK_OFFSET(0xB626E40)
#define LDJLOIJHLOC_OLFIKKFIDOF_OFFSET UNITYSDK_OFFSET(0xB629BF0)
#define LDJLOIJHLOC_OLPLKFDALFC_OFFSET UNITYSDK_OFFSET(0xB627550)
#define LDJLOIJHLOC_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB634940)
#define LDJLOIJHLOC_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB634A20)
#define LDJLOIJHLOC_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB634880)
#define LDJLOIJHLOC_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB634900)
#define LDJLOIJHLOC_ONPDDDNLLFH_OFFSET UNITYSDK_OFFSET(0xB6264B0)
#define LDJLOIJHLOC_PBFHPNNDABK_OFFSET UNITYSDK_OFFSET(0xB631E70)
#define LDJLOIJHLOC_PCDGKBICIAF_OFFSET UNITYSDK_OFFSET(0xB630970)
#define LDJLOIJHLOC_PGKPJBBFGKD_OFFSET UNITYSDK_OFFSET(0xB62FE60)
#define LDJLOIJHLOC_PGMGKMEGEND_OFFSET UNITYSDK_OFFSET(0xB62FE10)
#define LDJLOIJHLOC_PKOPGPAHIGM_OFFSET UNITYSDK_OFFSET(0xB626C30)
#define LDJLOIJHLOC_PLEKHEPCOOI_OFFSET UNITYSDK_OFFSET(0xB6297E0)
#define LDJLOIJHLOC_PLGMCJJFCFJ_OFFSET UNITYSDK_OFFSET(0xB629EA0)
#define LDJLOIJHLOC_SET_CLOSEOWNERIDLESHOW_OFFSET UNITYSDK_OFFSET(0xB635200)
#define LDJLOIJHLOC_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB635240)
#define LDJLOIJHLOC_SET_DEF_OFFSET UNITYSDK_OFFSET(0xB6351E0)
#define LDJLOIJHLOC_SET_ISREBUILT_OFFSET UNITYSDK_OFFSET(0xB635220)
#define LDJLOIJHLOC_SET_REMAINLIFETIME_OFFSET UNITYSDK_OFFSET(0xB635360)
#define LDJLOIJHLOC_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xB6351C0)
#define LDJLOIJHLOC_SET_SUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xB635180)
#define LDJLOIJHLOC_TICK_OFFSET UNITYSDK_OFFSET(0xB634A60)

	class LDJLOIJHLOC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::Il2CppArray<::KFELGAIGHAP*>* LPCEJCGNBEK; // 0x18
		::RPG::Client::CameraBlendCurve* MOLDGMMECDC; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* IKIPMIEOGEA; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* NIAKECAMCGP; // 0x30
		::RPG::Client::CameraBlendCurve* KLHGFACIFAL; // 0x38
		::RPG::GameCore::GameEntity* NICGHAMJPFK; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::HHCKNGMIAKL* IEGBIPMGBPA; // 0x50
		::RPG::Client::CameraBlendCurve* HKDDNLGCNMG; // 0x58
		::LLADGGNOJPG* _Def_k__BackingField; // 0x60
		::RPG::GameCore::SummonUnitDataRow* _RowData_k__BackingField; // 0x68
		::RPG::GameCore::GameEntity* _SummonerEntity_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* KMLIICIOPAC; // 0x78
		::RPG::GameCore::GameEntity* OCHJAHNPODC; // 0x80
		::System::Action* GDECIELGDGG; // 0x88
		::RPG::Client::Stage* CDOEIINFGHM; // 0x90
		::System::Collections::Generic::List_1<::System::Single>* GCCMJODFOEL; // 0x98
		::Il2CppArray<::HCHGAEGOFBO*>* BJLAHBDAACO; // 0xA0
		::System::Collections::Generic::List_1<::System::Object*>* CMCLKJHCJPC; // 0xA8
		::Il2CppArray<::System::String*>* BPFDANICMLK; // 0xB0
		::System::Collections::Generic::List_1<::System::Int32>* INCFGBOJHIN; // 0xB8
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* BLFFCOLDABM; // 0xC0
		::RPG::GameCore::GameEntity* OHDOEKNKNHE; // 0xC8
		::RPG::GameCore::SummonUnitGroupConfig* GMPOBFODLCK; // 0xD0
		::System::String* LLKDMBLKFPM; // 0xD8
		::RPG::GameCore::SummonUnitConfig* IGHAHBNLIJA; // 0xE0
		::System::Single DNCFBBMIPEP; // 0xE8
		::System::Boolean JJKNFIELGEC; // 0xEC
		::System::Boolean _IsRebuilt_k__BackingField; // 0xED
		::System::Boolean OMLEMECGCBK; // 0xEE
		::System::Boolean LDACIOOOBHO; // 0xEF
		::UnityEngine::Vector3 BJJJDDJEFOC; // 0xF0
		::System::Int32 LELEDPHMACI; // 0xFC
		::System::Single _RemainLifeTime_k__BackingField; // 0x100
		::System::Boolean NHBOKBJBAFG; // 0x104
		::System::Boolean OAJOKAGIGAI; // 0x105
		::System::Boolean HGGDCBDFOJF; // 0x106
		::System::Boolean HMLJOCBCHKG; // 0x107
		::NCPLKHJEBFG ENCDNPKMPMI; // 0x108
		::System::Single EEHMPHBHMDK; // 0x11C
		::System::Single AJGIOIMOKBC; // 0x120
		::UnityEngine::Vector3 BAJFFEPFLOO; // 0x124
		::UnityEngine::Vector3 EHGKBLNOMJB; // 0x130
		::System::Single ALDCNIKIEIE; // 0x13C
		::UnityEngine::Vector3 BJIJHHGJNJD; // 0x140
		::System::Single JLLIBIHCHNG; // 0x14C
		::System::UInt64 _CreateTimeStamp_k__BackingField; // 0x150
		::System::Single HABFJCJJJND; // 0x158
		::System::Single NNJBHLDIDOP; // 0x15C
		::UnityEngine::Quaternion GMPBDDGBHGC; // 0x160
		::System::Single OPJDNPDNNCE; // 0x170
		::System::Boolean KJMDEHGJEKE; // 0x174
		::System::Boolean DDNNMLAKMEI; // 0x175
		::System::Boolean CCKKFCNMHDK; // 0x176
		::System::Boolean FMNEEONAMNO; // 0x177
		::System::Boolean ODKBMMPLFOP; // 0x178
		::System::Boolean IBGEBDBCOEG; // 0x179
		::System::Boolean HCGHLHHMAHA; // 0x17A
		::System::Boolean FLHKHKOMCFG; // 0x17B
		::UnityEngine::Vector3 NIBJFOGAALE; // 0x17C
		::System::Single OJJDJKEKDOJ; // 0x188
		::RPG::GameCore::SummonUnitHideMask CPGJGIOLIJD; // 0x18C
		::System::Single FLBDOGAIAOJ; // 0x190
		::System::Single FCJBLDNPAHF; // 0x194
		::System::Boolean ONBGPONFCFO; // 0x198
		::System::Boolean NKPADJEMGLN; // 0x199
		::System::Boolean HEHOLEILJAP; // 0x19A
		::System::Boolean DEDKKDFDDGI; // 0x19B
		::UnityEngine::Vector3 MBOFOLDGNIL; // 0x19C
		::System::Single OIPILEGDEPE; // 0x1A8
		::System::Single DOHIKBEPMJN; // 0x1AC
		::System::Single MMABICKFMLC; // 0x1B0
		::System::Single BCIDPMHCFCB; // 0x1B4
		::System::Int32 PIACHDHAPAI; // 0x1B8
		::MIGEAMGGJFN_JNCGDICPOAJ FPPIPINGDBJ; // 0x1BC
		::System::Single BOKBLMPAFOP; // 0x1C8
		::System::Boolean CGPGFJJOLIM; // 0x1CC
		::System::Boolean _CloseOwnerIdleShow_k__BackingField; // 0x1CD
		static ::System::Single* StaticGet_HJAAPBIGOPO()
		{
			return (::System::Single*)UnitySDK::FromName("", "LDJLOIJHLOC")->GetStaticField(0x13160);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GDMDBGOEJDG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "LDJLOIJHLOC")->GetStaticField(0x13164);
		}

		static ::System::Single* StaticGet_ILCJBMOIKNC()
		{
			return (::System::Single*)UnitySDK::FromName("", "LDJLOIJHLOC")->GetStaticField(0x13168);
		}

		// static const ::System::Object NFPJABJGOOA; // 0x0
		// static const ::System::Object EGIIBBPCJAE; // 0x0
		// static const ::System::Object HKDMFCJAHJI; // 0x0
		// static const ::System::Object ANJOACCMCKI; // 0x0
		// static const ::System::String* NGLINONBJBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CCTOR_OFFSET))();
		}

		::System::Void NCHOFNAPEGB(::RPG::GameCore::SummonUnitAIConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitAIConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NCHOFNAPEGB_OFFSET))(this, a1);
		}

		::System::Void LJEBJHAMBKE(::RPG::GameCore::SummonUnitAIConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitAIConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LJEBJHAMBKE_OFFSET))(this, a1);
		}

		::System::Void BENGNMGIADJ(::RPG::GameCore::SummonUnitAIConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitAIConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BENGNMGIADJ_OFFSET))(this, a1);
		}

		::System::Void LMGPANGLHFP(::RPG::GameCore::SummonUnitAIConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitAIConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LMGPANGLHFP_OFFSET))(this, a1);
		}

		::System::Void FLAHNLHGGHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FLAHNLHGGHJ_OFFSET))(this);
		}

		::System::Void ONPDDDNLLFH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ONPDDDNLLFH_OFFSET))(this, a1);
		}

		::System::Void LLDBBALNNDN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LLDBBALNNDN_OFFSET))(this, a1);
		}

		::System::Void JHAPCHLLIDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JHAPCHLLIDH_OFFSET))(this);
		}

		::System::Void PKOPGPAHIGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PKOPGPAHIGM_OFFSET))(this);
		}

		::System::Void LBFKFHKLNIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LBFKFHKLNIC_OFFSET))(this);
		}

		::System::Void OKIOAHBPHMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OKIOAHBPHMP_OFFSET))(this);
		}

		::System::Void EPDAHMGJPKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_EPDAHMGJPKN_OFFSET))(this);
		}

		::System::Void JOJGICABPGK(::NCPLKHJEBFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPLKHJEBFG))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JOJGICABPGK_OFFSET))(this, a1);
		}

		::System::Void OLPLKFDALFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OLPLKFDALFC_OFFSET))(this);
		}

		::System::Void DFLFDFEEBLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_DFLFDFEEBLJ_OFFSET))(this);
		}

		::System::Void LADJCIMGEPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LADJCIMGEPJ_OFFSET))(this);
		}

		::System::Void CLPLOMKOKPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CLPLOMKOKPO_OFFSET))(this);
		}

		::System::Void BGKJIMHCJGN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BGKJIMHCJGN_OFFSET))(this, a1);
		}

		::System::Void BDAIEEDEPKG(::DNGIEBCPNIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGIEBCPNIB*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BDAIEEDEPKG_OFFSET))(this, a1);
		}

		::System::Void LJEKKBBEBEM(::DNGIEBCPNIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGIEBCPNIB*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LJEKKBBEBEM_OFFSET))(this, a1);
		}

		::System::Void FIMKGHFOMOL(::RPG::GameCore::SummonUnitHideMask a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitHideMask, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FIMKGHFOMOL_OFFSET))(this, a1, a2);
		}

		::System::Void ADLFGKJBEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ADLFGKJBEHF_OFFSET))(this);
		}

		::System::Void LPBHFNKIGPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LPBHFNKIGPK_OFFSET))(this);
		}

		::System::Void JHEJOGFAJHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JHEJOGFAJHC_OFFSET))(this);
		}

		::System::Void HBBEOMJJMGH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_HBBEOMJJMGH_OFFSET))(this, a1);
		}

		::System::Void FHKEHPNPHMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FHKEHPNPHMD_OFFSET))(this, a1);
		}

		::System::Void AMIINIAAGPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_AMIINIAAGPN_OFFSET))(this, a1);
		}

		::System::Void ALAAECDBOBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ALAAECDBOBA_OFFSET))(this, a1);
		}

		::System::Void JNBBJMFHODM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JNBBJMFHODM_OFFSET))(this, a1);
		}

		::System::Boolean CLOHOJKAPKE(::RPG::GameCore::PropType a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CLOHOJKAPKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EMEGDGNPFGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_EMEGDGNPFGL_OFFSET))(this);
		}

		::System::Void PLEKHEPCOOI(::RPG::GameCore::SummonUnitBeAttackConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitBeAttackConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PLEKHEPCOOI_OFFSET))(this, a1);
		}

		::System::Void EKMGHAEKHPE(::RPG::GameCore::SummonUnitBeAttackConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitBeAttackConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_EKMGHAEKHPE_OFFSET))(this, a1);
		}

		::System::Void LJBOCPFHCKH(::RPG::GameCore::SummonUnitBeAttackConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitBeAttackConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LJBOCPFHCKH_OFFSET))(this, a1);
		}

		::System::Void BOFJEGFODBF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AttackDamageType a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackDamageType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BOFJEGFODBF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IPLFJAHFCHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_IPLFJAHFCHI_OFFSET))(this);
		}

		::System::Void MNNAHAPGMDN(::RPG::GameCore::SummonUnitCharacterAnimConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitCharacterAnimConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MNNAHAPGMDN_OFFSET))(this, a1);
		}

		::System::Void OLFIKKFIDOF(::RPG::GameCore::SummonUnitCharacterAnimConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitCharacterAnimConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OLFIKKFIDOF_OFFSET))(this, a1);
		}

		::System::Void JLENPCKFLHG(::RPG::GameCore::SummonUnitCharacterAnimConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitCharacterAnimConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JLENPCKFLHG_OFFSET))(this, a1);
		}

		::System::Void PLGMCJJFCFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PLGMCJJFCFJ_OFFSET))(this);
		}

		::System::Void AIAIKBMADMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_AIAIKBMADMP_OFFSET))(this, a1);
		}

		::System::Void DNLAELIKIEE(::RPG::GameCore::SummonUnitGatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitGatherConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_DNLAELIKIEE_OFFSET))(this, a1);
		}

		::System::Void GPCFNCICFCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GPCFNCICFCC_OFFSET))(this);
		}

		::System::Void NFODBDONHGD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NFODBDONHGD_OFFSET))(this, a1, a2);
		}

		::System::Void KGBNPGPFNEK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KGBNPGPFNEK_OFFSET))(this, a1);
		}

		::System::Void BLEHAIHFIKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BLEHAIHFIKC_OFFSET))(this);
		}

		::System::Void LOGOMCPMIOI(::System::Single a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LOGOMCPMIOI_OFFSET))(this, a1, a2);
		}

		::System::Void BCBKNIEEMME(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BCBKNIEEMME_OFFSET))(this, a1);
		}

		::System::Void JLPKDFBHGLG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JLPKDFBHGLG_OFFSET))(this, a1);
		}

		::System::Void HIBFGMFGAPB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_HIBFGMFGAPB_OFFSET))(this, a1);
		}

		::System::Void KGPALFDMIIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KGPALFDMIIK_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* MMNMBOOHCGH(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MMNMBOOHCGH_OFFSET))(this, a1);
		}

		::System::Void KGJFDHAJKDI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KGJFDHAJKDI_OFFSET))(this, a1);
		}

		::System::Void GCELLBIPOPC(::LDJLOIJHLOC_MLGMADEFLMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJLOIJHLOC_MLGMADEFLMC*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GCELLBIPOPC_OFFSET))(this, a1);
		}

		::System::Void KFAHOONFEDC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KFAHOONFEDC_OFFSET))(this, a1);
		}

		::System::Void JDBKJBAEAGG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JDBKJBAEAGG_OFFSET))(this, a1);
		}

		::System::Boolean BMPEECCINFB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BMPEECCINFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 JAPONACAEOM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JAPONACAEOM_OFFSET))(this, a1, a2);
		}

		::System::Void NBMONNACLDP(::System::Single a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NBMONNACLDP_OFFSET))(this, a1, a2);
		}

		::System::Boolean CMPJPJIHHGA(::LDJLOIJHLOC_MLGMADEFLMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDJLOIJHLOC_MLGMADEFLMC*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CMPJPJIHHGA_OFFSET))(this, a1);
		}

		static ::System::Boolean MKGMJKLOHND(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MKGMJKLOHND_OFFSET))(a1);
		}

		static ::System::Single MBAENPIEMBF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MBAENPIEMBF_OFFSET))(a1);
		}

		::System::Void BEHKLCONPMP(::RPG::GameCore::SummonUnitMiscConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitMiscConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BEHKLCONPMP_OFFSET))(this, a1);
		}

		::System::Void BHNFMGOAJLD(::RPG::GameCore::SummonUnitMiscConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitMiscConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BHNFMGOAJLD_OFFSET))(this, a1);
		}

		::System::Void GDGDMKLINGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GDGDMKLINGE_OFFSET))(this);
		}

		::System::Void PGMGKMEGEND(::RPG::GameCore::SummonUnitMiscConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitMiscConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PGMGKMEGEND_OFFSET))(this, a1);
		}

		::System::Void PGKPJBBFGKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PGKPJBBFGKD_OFFSET))(this);
		}

		::System::Void MICGFKBLMKG(::RPG::GameCore::SummonUnitMoveConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitMoveConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MICGFKBLMKG_OFFSET))(this, a1);
		}

		::System::Void DKLLHJFKFBL(::RPG::GameCore::SummonUnitMoveConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitMoveConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_DKLLHJFKFBL_OFFSET))(this, a1);
		}

		::System::Void IFMFPMIDKMF(::RPG::GameCore::SummonUnitMoveConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitMoveConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_IFMFPMIDKMF_OFFSET))(this, a1);
		}

		::System::Void FKGFNDGDKKH(::RPG::GameCore::SummonUnitSkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitSkillConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FKGFNDGDKKH_OFFSET))(this, a1);
		}

		::System::Void IHGJFPGFHBP(::RPG::GameCore::SummonUnitSkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitSkillConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_IHGJFPGFHBP_OFFSET))(this, a1);
		}

		::System::Void FJLEENBONGO(::RPG::GameCore::SummonUnitSkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitSkillConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FJLEENBONGO_OFFSET))(this, a1);
		}

		::System::Void AOGACFIOJKK(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2, ::HCHGAEGOFBO_TriggerDisableReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::HCHGAEGOFBO_TriggerDisableReason))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_AOGACFIOJKK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OGILMEKDMLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OGILMEKDMLN_OFFSET))(this);
		}

		::System::Void ILNMLFDOOBD(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2, ::HCHGAEGOFBO_TriggerDisableReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::HCHGAEGOFBO_TriggerDisableReason))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ILNMLFDOOBD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MKMBPBMMDOJ(::System::String* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MKMBPBMMDOJ_OFFSET))(this, a1, a2);
		}

		::System::Void HEKFDIPGEFC(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_HEKFDIPGEFC_OFFSET))(this, a1, a2);
		}

		::System::Void NIHGOACGCJG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NIHGOACGCJG_OFFSET))(this, a1);
		}

		::System::Void FINJJOOAOMD(::RPG::GameCore::SummonUnitTriggerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FINJJOOAOMD_OFFSET))(this, a1);
		}

		::System::Void NJMNGAPIKDI(::RPG::GameCore::SummonUnitTriggerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NJMNGAPIKDI_OFFSET))(this, a1);
		}

		::System::Void IDGFHCCMMGE(::RPG::GameCore::SummonUnitTriggerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_IDGFHCCMMGE_OFFSET))(this, a1);
		}

		::System::Void JMOCBNGENNE(::RPG::GameCore::SummonUnitTriggerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JMOCBNGENNE_OFFSET))(this, a1);
		}

		::System::Void LGHLJLLHAOC(::RPG::GameCore::SummonUnitTriggerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LGHLJLLHAOC_OFFSET))(this, a1);
		}

		::System::Void LCFLJJBEOEC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LCFLJJBEOEC_OFFSET))(this, a1);
		}

		::System::Void GKDCAELJPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GKDCAELJPJF_OFFSET))(this);
		}

		::System::Boolean HFENLKOGFPI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_HFENLKOGFPI_OFFSET))(this, a1);
		}

		::System::Void PCDGKBICIAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PCDGKBICIAF_OFFSET))(this);
		}

		::System::Void KNNPEGEGEFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KNNPEGEGEFM_OFFSET))(this);
		}

		::System::Void BeforeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BEFOREDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::SummonUnitConfig* a1, ::RPG::GameCore::SummonUnitDataRow* a2, ::LLADGGNOJPG* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5, ::ENEIHJJPNPI* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitConfig*, ::RPG::GameCore::SummonUnitDataRow*, ::LLADGGNOJPG*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::SummonUnitGroupConfig* NOLHPOHCMOP(::System::String* a1)
		{
			return ((::RPG::GameCore::SummonUnitGroupConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NOLHPOHCMOP_OFFSET))(a1);
		}

		::System::Void OGINMMDMOJN(::LLADGGNOJPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLADGGNOJPG*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OGINMMDMOJN_OFFSET))(this, a1);
		}

		::System::Void BMEPACCFAJK(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BMEPACCFAJK_OFFSET))(this, a1);
		}

		::System::Void OFDPDCHKPOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OFDPDCHKPOG_OFFSET))(this);
		}

		::System::Void JLMEPHOHOHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JLMEPHOHOHE_OFFSET))(this);
		}

		::System::Void EMGAAPJFBBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_EMGAAPJFBBP_OFFSET))(this);
		}

		::System::Void IOPOMDHAHDN(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_IOPOMDHAHDN_OFFSET))(this, a1, a2);
		}

		::System::Void FFNJAJMDPEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FFNJAJMDPEO_OFFSET))(this);
		}

		::System::Void GMECMBPHJLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GMECMBPHJLK_OFFSET))(this);
		}

		::System::Void PBFHPNNDABK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_PBFHPNNDABK_OFFSET))(this);
		}

		::System::Void LFJFCMNJAIJ(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LFJFCMNJAIJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LJDKIFCCEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LJDKIFCCEGC_OFFSET))(this);
		}

		::System::Void MJCEIELKHGE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MJCEIELKHGE_OFFSET))(this, a1);
		}

		::System::Void ANIDIKCAKAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ANIDIKCAKAN_OFFSET))(this);
		}

		::System::Void KFPFGBIIOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KFPFGBIIOHF_OFFSET))(this);
		}

		::System::Void IBKPJFCAKKE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_IBKPJFCAKKE_OFFSET))(this, a1);
		}

		::System::Void BFPJHDNDBNO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BFPJHDNDBNO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CIGOOLCBCAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CIGOOLCBCAP_OFFSET))(this, a1);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void JKKIKFJPMKK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JKKIKFJPMKK_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_TICK_OFFSET))(this, a1);
		}

		::System::Void NFOHHJMEBNG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_NFOHHJMEBNG_OFFSET))(this, a1);
		}

		::System::Void MENOEMDOHDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MENOEMDOHDE_OFFSET))(this);
		}

		::System::Void EAHGFLELEOG(::RPG::GameCore::SummonUnitTaskSeqType a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTaskSeqType, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_EAHGFLELEOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean CCKPKAGNPFB(::RPG::GameCore::SummonUnitTaskSeqType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SummonUnitTaskSeqType))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CCKPKAGNPFB_OFFSET))(this, a1);
		}

		::System::Void LBIIJNGBEHM(::RPG::GameCore::SummonUnitTaskSeqType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTaskSeqType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LBIIJNGBEHM_OFFSET))(this, a1, a2);
		}

		::System::Void LALNHIHMFAK(::RPG::GameCore::SummonUnitTaskSeqType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitTaskSeqType))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_LALNHIHMFAK_OFFSET))(this, a1);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_AKAMIKMOPMD_OFFSET))(this, a1);
		}

		::System::Void JEMPPFPFMCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JEMPPFPFMCK_OFFSET))(this);
		}

		::System::Void OGPGJMILILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OGPGJMILILM_OFFSET))(this);
		}

		::System::Void EHEMHMFCIEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_EHEMHMFCIEM_OFFSET))(this);
		}

		::System::Void KJOEPDIEBID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KJOEPDIEBID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* JKPMJAIICGA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_JKPMJAIICGA_OFFSET))(this);
		}

		::System::UInt32 HDDFGNLCJLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_HDDFGNLCJLI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SummonerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_SUMMONERENTITY_OFFSET))(this);
		}

		::System::Void set_SummonerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_SUMMONERENTITY_OFFSET))(this, a1);
		}

		::System::Boolean MFPGGADCFEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_MFPGGADCFEH_OFFSET))(this);
		}

		::RPG::GameCore::SummonUnitConfig* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::SummonUnitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_FMHKLHAKMKO_OFFSET))(this);
		}

		::RPG::GameCore::SummonUnitGroupConfig* ALKOMLIACMP()
		{
			return ((::RPG::GameCore::SummonUnitGroupConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_ALKOMLIACMP_OFFSET))(this);
		}

		::RPG::GameCore::SummonUnitDataRow* get_RowData()
		{
			return ((::RPG::GameCore::SummonUnitDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_ROWDATA_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::SummonUnitDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitDataRow*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_ROWDATA_OFFSET))(this, a1);
		}

		::LLADGGNOJPG* get_Def()
		{
			return ((::LLADGGNOJPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_DEF_OFFSET))(this);
		}

		::System::Void set_Def(::LLADGGNOJPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLADGGNOJPG*))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_DEF_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseOwnerIdleShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_CLOSEOWNERIDLESHOW_OFFSET))(this);
		}

		::System::Void set_CloseOwnerIdleShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_CLOSEOWNERIDLESHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRebuilt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_ISREBUILT_OFFSET))(this);
		}

		::System::Void set_IsRebuilt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_ISREBUILT_OFFSET))(this, a1);
		}

		::System::UInt64 get_CreateTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_CREATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreateTimeStamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_CREATETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Single KBENBHJIJGK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KBENBHJIJGK_OFFSET))(this);
		}

		::System::Single get_RemainLifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GET_REMAINLIFETIME_OFFSET))(this);
		}

		::System::Void set_RemainLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_SET_REMAINLIFETIME_OFFSET))(this, a1);
		}

		::System::Boolean GOECAPLFJMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_GOECAPLFJMP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BCJPOGODOGK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_BCJPOGODOGK_OFFSET))(this);
		}

		::System::Boolean KFEFFKLCCNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_KFEFFKLCCNI_OFFSET))(this);
		}

		::System::Boolean CIBBJINBBIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_CIBBJINBBIF_OFFSET))(this);
		}

		::System::Boolean OHCFCJPFMNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJLOIJHLOC_OHCFCJPFMNP_OFFSET))(this);
		}

	};
