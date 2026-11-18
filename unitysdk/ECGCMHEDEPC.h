#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMJMDJAMPKE_AAHIEPCFDBO.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/BFJIMHBAHBI.h"
#include "unitysdk/NLKHPEDIDGM.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AAMALCPGOCL;
class DBBGIOILHKB;
class OGJNHDLJIBM;
class PACNCJFIFEH;
class PEIPCHALOLP;
namespace MoleMole { class UIInLevelLocalRoleShieldChildWindowController; }
namespace MoleMole { class UIInLevelMPTeammateInfoChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudLevelChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudTagChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole { class UIZenkovAlertPointChildWindowController; }
namespace MoleMole { class UIZenkovGuideAlertItemChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class MGBMBFBKFED_1;

#define ECGCMHEDEPC_ACDLMOEHHHB_OFFSET UNITYSDK_OFFSET(0x1546D440)
#define ECGCMHEDEPC_ADGLDIDGPAL_OFFSET UNITYSDK_OFFSET(0x15479BB0)
#define ECGCMHEDEPC_AJNBMHJADEA_OFFSET UNITYSDK_OFFSET(0x15478100)
#define ECGCMHEDEPC_AMDBMBAKHPO_OFFSET UNITYSDK_OFFSET(0x15478760)
#define ECGCMHEDEPC_AMHCELDOAIE_OFFSET UNITYSDK_OFFSET(0x1546B5B0)
#define ECGCMHEDEPC_AMMGMNMJOGK_OFFSET UNITYSDK_OFFSET(0x1547A830)
#define ECGCMHEDEPC_AOJALIDMKNF_OFFSET UNITYSDK_OFFSET(0x1546ADF0)
#define ECGCMHEDEPC_AOOICOPNIEP_OFFSET UNITYSDK_OFFSET(0x15479B20)
#define ECGCMHEDEPC_BACADELFKJP_OFFSET UNITYSDK_OFFSET(0x1546A790)
#define ECGCMHEDEPC_BBKPADCFBBI_OFFSET UNITYSDK_OFFSET(0x15479080)
#define ECGCMHEDEPC_BDFMMCCCFPN_OFFSET UNITYSDK_OFFSET(0x1547B250)
#define ECGCMHEDEPC_BDJJNIBOOCK_OFFSET UNITYSDK_OFFSET(0x1546D870)
#define ECGCMHEDEPC_BHJKAEMEONJ_OFFSET UNITYSDK_OFFSET(0x15479C50)
#define ECGCMHEDEPC_BIJNHJGBNAH_OFFSET UNITYSDK_OFFSET(0x1546BE80)
#define ECGCMHEDEPC_BJDIDJCCDIL_OFFSET UNITYSDK_OFFSET(0x154728E0)
#define ECGCMHEDEPC_BKNLDFLJJGK_OFFSET UNITYSDK_OFFSET(0x154786E0)
#define ECGCMHEDEPC_BLIJFCNBMON_OFFSET UNITYSDK_OFFSET(0x1546ABA0)
#define ECGCMHEDEPC_BOJLFIKDPKO_OFFSET UNITYSDK_OFFSET(0x1546D900)
#define ECGCMHEDEPC_BPDMFMINFBF_OFFSET UNITYSDK_OFFSET(0x1547D9E0)
#define ECGCMHEDEPC_BPGIHGNFFLJ_OFFSET UNITYSDK_OFFSET(0x1546AA00)
#define ECGCMHEDEPC_CAPEFNNIFHP_OFFSET UNITYSDK_OFFSET(0x15471D10)
#define ECGCMHEDEPC_CDDOHGNIHAA_OFFSET UNITYSDK_OFFSET(0x154799A0)
#define ECGCMHEDEPC_CHFIDNFEPLO_OFFSET UNITYSDK_OFFSET(0x15472F00)
#define ECGCMHEDEPC_CJPDLLHIEJN_OFFSET UNITYSDK_OFFSET(0x15476CB0)
#define ECGCMHEDEPC_CKDHDKBLBFB_OFFSET UNITYSDK_OFFSET(0x1546E620)
#define ECGCMHEDEPC_CKNICAKKMAB_OFFSET UNITYSDK_OFFSET(0x15474B50)
#define ECGCMHEDEPC_CLOENNBKJCF_OFFSET UNITYSDK_OFFSET(0x154730D0)
#define ECGCMHEDEPC_CMDHOCNFHFE_OFFSET UNITYSDK_OFFSET(0x1546E2E0)
#define ECGCMHEDEPC_DBDJCLBLEJO_OFFSET UNITYSDK_OFFSET(0x15478180)
#define ECGCMHEDEPC_DFDCLOADGCA_OFFSET UNITYSDK_OFFSET(0x15484C50)
#define ECGCMHEDEPC_DGFGOMDBFEJ_OFFSET UNITYSDK_OFFSET(0x1546AFA0)
#define ECGCMHEDEPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1546A4D0)
#define ECGCMHEDEPC_DJCBMNIKJBL_OFFSET UNITYSDK_OFFSET(0x154773F0)
#define ECGCMHEDEPC_DJOFGBBNKCN_OFFSET UNITYSDK_OFFSET(0x1546D0A0)
#define ECGCMHEDEPC_DKICFDGMAAI_OFFSET UNITYSDK_OFFSET(0x1547A560)
#define ECGCMHEDEPC_DKPFFKGDIAA_OFFSET UNITYSDK_OFFSET(0x15481D40)
#define ECGCMHEDEPC_DOACLGGJGHA_OFFSET UNITYSDK_OFFSET(0x15478910)
#define ECGCMHEDEPC_DOFGKBDMNPK_OFFSET UNITYSDK_OFFSET(0x1547AF20)
#define ECGCMHEDEPC_DOFOHOOPHCN_OFFSET UNITYSDK_OFFSET(0x1547E1C0)
#define ECGCMHEDEPC_DPEAILEGFPA_OFFSET UNITYSDK_OFFSET(0x1547D590)
#define ECGCMHEDEPC_DPGBCPGBGIO_OFFSET UNITYSDK_OFFSET(0x1546AB90)
#define ECGCMHEDEPC_ECEBCDOMBJE_OFFSET UNITYSDK_OFFSET(0x15477B60)
#define ECGCMHEDEPC_EEBCMBMBDAF_OFFSET UNITYSDK_OFFSET(0x15471DD0)
#define ECGCMHEDEPC_EELEODHEGCN_OFFSET UNITYSDK_OFFSET(0x154818F0)
#define ECGCMHEDEPC_EEOFLIPCDEC_OFFSET UNITYSDK_OFFSET(0x1546DF90)
#define ECGCMHEDEPC_EFAJKMNGEDF_OFFSET UNITYSDK_OFFSET(0x1546F760)
#define ECGCMHEDEPC_EHGFBLLOMPD_OFFSET UNITYSDK_OFFSET(0x1547ABA0)
#define ECGCMHEDEPC_EIGMGBOPENG_OFFSET UNITYSDK_OFFSET(0x1546D610)
#define ECGCMHEDEPC_EJHIIJHCOPL_OFFSET UNITYSDK_OFFSET(0x15479E70)
#define ECGCMHEDEPC_EKNEELGONGP_OFFSET UNITYSDK_OFFSET(0x15477BE0)
#define ECGCMHEDEPC_ELGCGLJDKLE_OFFSET UNITYSDK_OFFSET(0x1546BC50)
#define ECGCMHEDEPC_ENBCMPFJDNE_OFFSET UNITYSDK_OFFSET(0x1546F100)
#define ECGCMHEDEPC_ENNINEDMAPK_OFFSET UNITYSDK_OFFSET(0x1547A4E0)
#define ECGCMHEDEPC_EPPIOJLCDGH_OFFSET UNITYSDK_OFFSET(0x154763B0)
#define ECGCMHEDEPC_FAFLJLIBEIK_OFFSET UNITYSDK_OFFSET(0x15470890)
#define ECGCMHEDEPC_FAOKEBBAEDK_OFFSET UNITYSDK_OFFSET(0x1547C560)
#define ECGCMHEDEPC_FBBIPCPJBHC_OFFSET UNITYSDK_OFFSET(0x1546D9A0)
#define ECGCMHEDEPC_FCHOOAMNMBH_OFFSET UNITYSDK_OFFSET(0x154791B0)
#define ECGCMHEDEPC_FCPDFPCGCGN_OFFSET UNITYSDK_OFFSET(0x1546BA20)
#define ECGCMHEDEPC_FFGBLNKNCIN_OFFSET UNITYSDK_OFFSET(0x154825D0)
#define ECGCMHEDEPC_FFNDFNKJGEO_OFFSET UNITYSDK_OFFSET(0x15474B80)
#define ECGCMHEDEPC_FHOGIPLHCDO_OFFSET UNITYSDK_OFFSET(0x154796B0)
#define ECGCMHEDEPC_FICHIBNHMFH_OFFSET UNITYSDK_OFFSET(0x15472EA0)
#define ECGCMHEDEPC_FKIONDBBFPI_OFFSET UNITYSDK_OFFSET(0x1546B6B0)
#define ECGCMHEDEPC_FKOGJJDOIAP_OFFSET UNITYSDK_OFFSET(0x1546EBE0)
#define ECGCMHEDEPC_FMAOEGHKIFN_OFFSET UNITYSDK_OFFSET(0x1546CDF0)
#define ECGCMHEDEPC_FMNAEDBCDIB_OFFSET UNITYSDK_OFFSET(0x154841E0)
#define ECGCMHEDEPC_FOANELBIAOF_OFFSET UNITYSDK_OFFSET(0x1547F890)
#define ECGCMHEDEPC_GFIEGEMOMDA_OFFSET UNITYSDK_OFFSET(0x1547FF50)
#define ECGCMHEDEPC_GGFCABDFNPJ_OFFSET UNITYSDK_OFFSET(0x154803D0)
#define ECGCMHEDEPC_GHIDHINHNLA_OFFSET UNITYSDK_OFFSET(0x1547DD40)
#define ECGCMHEDEPC_GJMLKOGNBEB_OFFSET UNITYSDK_OFFSET(0x154805F0)
#define ECGCMHEDEPC_GKHCOBAIFOD_OFFSET UNITYSDK_OFFSET(0x154793D0)
#define ECGCMHEDEPC_GKPLCHHPFNO_OFFSET UNITYSDK_OFFSET(0x1546E270)
#define ECGCMHEDEPC_GNGFLIBFHAG_OFFSET UNITYSDK_OFFSET(0x1546E490)
#define ECGCMHEDEPC_GNIKLCJCPCA_OFFSET UNITYSDK_OFFSET(0x15474CD0)
#define ECGCMHEDEPC_GOADOGHIDFC_OFFSET UNITYSDK_OFFSET(0x1547D1E0)
#define ECGCMHEDEPC_GPMJGDENHHI_OFFSET UNITYSDK_OFFSET(0x1546B490)
#define ECGCMHEDEPC_HAFBCGPPELM_OFFSET UNITYSDK_OFFSET(0x15481F40)
#define ECGCMHEDEPC_HBNHECMFDOP_OFFSET UNITYSDK_OFFSET(0x15483F00)
#define ECGCMHEDEPC_HDLOHKKGCIL_OFFSET UNITYSDK_OFFSET(0x15482BB0)
#define ECGCMHEDEPC_HDNGGIABKBO_OFFSET UNITYSDK_OFFSET(0x154828B0)
#define ECGCMHEDEPC_HEELAHICAEB_OFFSET UNITYSDK_OFFSET(0x1547D0A0)
#define ECGCMHEDEPC_HFMKDDJBDLJ_OFFSET UNITYSDK_OFFSET(0x1546F4C0)
#define ECGCMHEDEPC_HIFGEFDAGIP_OFFSET UNITYSDK_OFFSET(0x15478C60)
#define ECGCMHEDEPC_HKFEBMNKFKB_OFFSET UNITYSDK_OFFSET(0x1546CEC0)
#define ECGCMHEDEPC_HKIDCHLIOLN_OFFSET UNITYSDK_OFFSET(0x1547B470)
#define ECGCMHEDEPC_HKKGAFMLCKM_OFFSET UNITYSDK_OFFSET(0x1547A010)
#define ECGCMHEDEPC_HLHNFGCNCNN_OFFSET UNITYSDK_OFFSET(0x1547B130)
#define ECGCMHEDEPC_HMEAGCFBGNL_OFFSET UNITYSDK_OFFSET(0x15483D90)
#define ECGCMHEDEPC_HPKIHLPBFBJ_OFFSET UNITYSDK_OFFSET(0x1546FE40)
#define ECGCMHEDEPC_HPPGFHGDHLF_OFFSET UNITYSDK_OFFSET(0x15472D30)
#define ECGCMHEDEPC_IBLKOFLFPFA_OFFSET UNITYSDK_OFFSET(0x1546D230)
#define ECGCMHEDEPC_IDDPPDLNGMI_OFFSET UNITYSDK_OFFSET(0x1546F930)
#define ECGCMHEDEPC_IEEHEBAFPLP_OFFSET UNITYSDK_OFFSET(0x1547E290)
#define ECGCMHEDEPC_IFEOELIOFDB_OFFSET UNITYSDK_OFFSET(0x15474A30)
#define ECGCMHEDEPC_IJKJEMAHCNM_OFFSET UNITYSDK_OFFSET(0x1547C040)
#define ECGCMHEDEPC_IKGNALGBLEL_OFFSET UNITYSDK_OFFSET(0x1546EB60)
#define ECGCMHEDEPC_IKPFOFMHKBK_OFFSET UNITYSDK_OFFSET(0x154700E0)
#define ECGCMHEDEPC_IMDFMMBBLBE_OFFSET UNITYSDK_OFFSET(0x1547CDC0)
#define ECGCMHEDEPC_IMNBFFNBJON_OFFSET UNITYSDK_OFFSET(0x15480450)
#define ECGCMHEDEPC_IMPKPEDAJIM_OFFSET UNITYSDK_OFFSET(0x1547AED0)
#define ECGCMHEDEPC_IOGFBKKBFHA_OFFSET UNITYSDK_OFFSET(0x1547D440)
#define ECGCMHEDEPC_JAOCIJEACHB_OFFSET UNITYSDK_OFFSET(0x15478210)
#define ECGCMHEDEPC_JBFKBCDDNLL_OFFSET UNITYSDK_OFFSET(0x15484790)
#define ECGCMHEDEPC_JFLBBNNGGPB_OFFSET UNITYSDK_OFFSET(0x15482C90)
#define ECGCMHEDEPC_JHKGAEPEKHC_OFFSET UNITYSDK_OFFSET(0x1547C6D0)
#define ECGCMHEDEPC_JHKNJFACBPJ_OFFSET UNITYSDK_OFFSET(0x1546F360)
#define ECGCMHEDEPC_JJFCBFFADNL_OFFSET UNITYSDK_OFFSET(0x15476410)
#define ECGCMHEDEPC_JJKGHIKMHMN_OFFSET UNITYSDK_OFFSET(0x1546ED70)
#define ECGCMHEDEPC_JLLLHGGOLFB_OFFSET UNITYSDK_OFFSET(0x154802A0)
#define ECGCMHEDEPC_JLOOPLIBLGJ_OFFSET UNITYSDK_OFFSET(0x154731B0)
#define ECGCMHEDEPC_JMEJOJFABNO_OFFSET UNITYSDK_OFFSET(0x1547CFB0)
#define ECGCMHEDEPC_JOOCEFIDEOE_OFFSET UNITYSDK_OFFSET(0x1546B530)
#define ECGCMHEDEPC_JPFIDMJFLBE_OFFSET UNITYSDK_OFFSET(0x1546C020)
#define ECGCMHEDEPC_KBKDAIPGCON_OFFSET UNITYSDK_OFFSET(0x1547A180)
#define ECGCMHEDEPC_KEBCPIEPLOM_OFFSET UNITYSDK_OFFSET(0x1547B1B0)
#define ECGCMHEDEPC_KHGOAHBMBIG_OFFSET UNITYSDK_OFFSET(0x15474A50)
#define ECGCMHEDEPC_KHJEPJJPLHM_OFFSET UNITYSDK_OFFSET(0x1547A360)
#define ECGCMHEDEPC_KJNJPCDNKND_OFFSET UNITYSDK_OFFSET(0x1546BE90)
#define ECGCMHEDEPC_KKFJPOIDCJK_OFFSET UNITYSDK_OFFSET(0x1547A340)
#define ECGCMHEDEPC_KNOMMKAMCLC_OFFSET UNITYSDK_OFFSET(0x154771D0)
#define ECGCMHEDEPC_KOMOKHOPIAI_OFFSET UNITYSDK_OFFSET(0x1546FD10)
#define ECGCMHEDEPC_KPFCCPIKFEN_OFFSET UNITYSDK_OFFSET(0x15470450)
#define ECGCMHEDEPC_LDDOMPGIDMG_OFFSET UNITYSDK_OFFSET(0x15481BF0)
#define ECGCMHEDEPC_LEAJCOICOPL_OFFSET UNITYSDK_OFFSET(0x1546D7C0)
#define ECGCMHEDEPC_LHJJHJDBDDF_OFFSET UNITYSDK_OFFSET(0x1546D590)
#define ECGCMHEDEPC_LIDFEAKHDOC_OFFSET UNITYSDK_OFFSET(0x15484170)
#define ECGCMHEDEPC_LJHPKKEFCIP_OFFSET UNITYSDK_OFFSET(0x15470930)
#define ECGCMHEDEPC_MAOPACPIIGF_OFFSET UNITYSDK_OFFSET(0x1546DF10)
#define ECGCMHEDEPC_MCPKOCCLEHF_1_OFFSET UNITYSDK_OFFSET(0x15477CC0)
#define ECGCMHEDEPC_MCPKOCCLEHF_OFFSET UNITYSDK_OFFSET(0x1546F540)
#define ECGCMHEDEPC_MDBDMNAPENA_OFFSET UNITYSDK_OFFSET(0x1547A5E0)
#define ECGCMHEDEPC_MEEEKJPJHIM_OFFSET UNITYSDK_OFFSET(0x154800A0)
#define ECGCMHEDEPC_MFBIJFEAPCP_OFFSET UNITYSDK_OFFSET(0x15472AA0)
#define ECGCMHEDEPC_MINNPFIIDFB_OFFSET UNITYSDK_OFFSET(0x15476B60)
#define ECGCMHEDEPC_MJIBCHPEGBJ_OFFSET UNITYSDK_OFFSET(0x15477FA0)
#define ECGCMHEDEPC_MKGLHCKPEJI_OFFSET UNITYSDK_OFFSET(0x154802B0)
#define ECGCMHEDEPC_MOLIOCCLEOG_OFFSET UNITYSDK_OFFSET(0x15469B80)
#define ECGCMHEDEPC_NACBEDEHDOP_OFFSET UNITYSDK_OFFSET(0x1547BB10)
#define ECGCMHEDEPC_NAHLIOEANKD_OFFSET UNITYSDK_OFFSET(0x1546B400)
#define ECGCMHEDEPC_NCEABBPEOGO_OFFSET UNITYSDK_OFFSET(0x1546F0A0)
#define ECGCMHEDEPC_NCEDIBHAPLG_OFFSET UNITYSDK_OFFSET(0x1547D160)
#define ECGCMHEDEPC_NEGOAIOKPIP_OFFSET UNITYSDK_OFFSET(0x1546E6D0)
#define ECGCMHEDEPC_NEPCFOBBMAO_OFFSET UNITYSDK_OFFSET(0x15478BE0)
#define ECGCMHEDEPC_NFHNBHMPGIE_OFFSET UNITYSDK_OFFSET(0x15484270)
#define ECGCMHEDEPC_NFOCOAMEHAK_OFFSET UNITYSDK_OFFSET(0x1546AC40)
#define ECGCMHEDEPC_NGNKNHCJLHE_OFFSET UNITYSDK_OFFSET(0x1546E2D0)
#define ECGCMHEDEPC_NJIGPAJOEIF_OFFSET UNITYSDK_OFFSET(0x1547C9D0)
#define ECGCMHEDEPC_NKBJICOBPLM_OFFSET UNITYSDK_OFFSET(0x1547CC30)
#define ECGCMHEDEPC_NKGKBNLGBLI_OFFSET UNITYSDK_OFFSET(0x1546E930)
#define ECGCMHEDEPC_NNKJJCEIIHB_OFFSET UNITYSDK_OFFSET(0x1547D390)
#define ECGCMHEDEPC_NPALIOAPEHJ_OFFSET UNITYSDK_OFFSET(0x154822A0)
#define ECGCMHEDEPC_NPKHANAFHHP_OFFSET UNITYSDK_OFFSET(0x154776F0)
#define ECGCMHEDEPC_OBFCDBEFGPO_OFFSET UNITYSDK_OFFSET(0x15484AE0)
#define ECGCMHEDEPC_OBJEABOCEAC_OFFSET UNITYSDK_OFFSET(0x1547AF70)
#define ECGCMHEDEPC_OGBOCEGOFJB_OFFSET UNITYSDK_OFFSET(0x15474FD0)
#define ECGCMHEDEPC_OGBPODAOKPK_OFFSET UNITYSDK_OFFSET(0x15476730)
#define ECGCMHEDEPC_OICHCLBIHEN_OFFSET UNITYSDK_OFFSET(0x1547DE70)
#define ECGCMHEDEPC_OJILJDLNCPJ_OFFSET UNITYSDK_OFFSET(0x1546D840)
#define ECGCMHEDEPC_OJKJJLHLEMB_OFFSET UNITYSDK_OFFSET(0x1547DA60)
#define ECGCMHEDEPC_OKIEHBFEHIJ_OFFSET UNITYSDK_OFFSET(0x15481E30)
#define ECGCMHEDEPC_OLLNJJHOBIP_OFFSET UNITYSDK_OFFSET(0x15470050)
#define ECGCMHEDEPC_PEBFMKJKMOC_OFFSET UNITYSDK_OFFSET(0x1546D2B0)
#define ECGCMHEDEPC_PEDBIGIMPKE_OFFSET UNITYSDK_OFFSET(0x15478B60)
#define ECGCMHEDEPC_PEFAIKPHIPH_OFFSET UNITYSDK_OFFSET(0x15475150)
#define ECGCMHEDEPC_PGNBFGLCAIH_OFFSET UNITYSDK_OFFSET(0x15479830)
#define ECGCMHEDEPC_PHIHOGDFDIB_OFFSET UNITYSDK_OFFSET(0x1547A7D0)
#define ECGCMHEDEPC_PKMPNPKMENG_OFFSET UNITYSDK_OFFSET(0x1547E310)
#define ECGCMHEDEPC_PLNBDFJBBAB_OFFSET UNITYSDK_OFFSET(0x1547C840)
#define ECGCMHEDEPC_POAAFHJPFHN_OFFSET UNITYSDK_OFFSET(0x1547B0B0)
#define ECGCMHEDEPC_POHLOFOHMAD_OFFSET UNITYSDK_OFFSET(0x1547D700)
#define ECGCMHEDEPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1546AAD0)
#define ECGCMHEDEPC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15468590)
#define ECGCMHEDEPC__CTOR_OFFSET UNITYSDK_OFFSET(0x154684F0)

inline static constexpr unsigned int ECGCMHEDEPC_TypeDefinitionIndex = 55280;

class ECGCMHEDEPC : public ::System::Object
{
public:
	static ::ECGCMHEDEPC** StaticGet_FCEGCFAIIKI()
	{
		return (::ECGCMHEDEPC**)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0x36890);
	}
	static ::System::Int32* StaticGet_JNPELNIPOCE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC380);
	}
	static ::System::Int32* StaticGet_GOPDJBPCIBP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC384);
	}
	static ::System::Boolean* StaticGet_NJOJLMCCPHL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC388);
	}
	static ::System::Boolean* StaticGet_JEDHDIDBKMC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC389);
	}
	static ::System::Boolean* StaticGet_OMOHAHBMGOJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC38A);
	}
	static ::System::Boolean* StaticGet_HFEAHIHIBHP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC38B);
	}
	static ::Unity::Mathematics::float3* StaticGet_AKEHIKNJLDH()
	{
		return (::Unity::Mathematics::float3*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC38C);
	}
	static ::System::Boolean* StaticGet_FBIKIOMHNMO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC398);
	}
	static ::System::Boolean* StaticGet_FOCAOOHAOBK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC399);
	}
	static ::System::Boolean* StaticGet_KPLPMCGBNNI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ECGCMHEDEPC_TypeDefinitionIndex)->GetStaticField(0xC39A);
	}
	// static const ::System::Single DIOPGOGJIIM; // 0x0
	// static const ::System::Single LHOOEJKIDGH; // 0x0
	// static const ::System::Single GKIBBJPLOKC; // 0x0
	// static const ::System::Single ODKBDCONEJP; // 0x0
	// static const ::System::Int32 NPABGBHCHDP = 0x5; // 0x0
	// static const ::System::Int32 JBICCBPHMLH = 0x8; // 0x0
	::MGBMBFBKFED_1<::MoleMole::UIZenkovGuideAlertItemChildWindowController*>* DGPFNINPFCL; // 0x10
	::System::Func_1<::MoleMole::UIInLevelLocalRoleShieldChildWindowController*>* EPCAOLHBPEG; // 0x18
	::System::Func_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* HAPLALINDDE; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* KEIAEKLHLPL; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* KEJMDKPCBFP; // 0x30
	::MoleMole::Battle::Entity* HEDHPNMIEML; // 0x38
	::MGBMBFBKFED_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* NMPNLGHPNMM; // 0x40
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelMPTeammateInfoChildWindowController*>* MNKPNNCKNCE; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* BKCIHKBOBGP; // 0x50
	::MGBMBFBKFED_1<::MoleMole::UIInLevelNPCNameWidgetController*>* HAGGHHHPOFJ; // 0x58
	::System::Collections::Generic::List_1<::System::Object*>* APGMKCDJLBG; // 0x60
	::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* NHLBOADCEHG; // 0x68
	::MoleMole::UIInLevelLocalRoleShieldChildWindowController* AKFNJDJFPNN; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* IGGGGKFHAFP; // 0x78
	::MGHNAPKHBOG PIJNKIACEPG; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelMPTeammateInfoChildWindowController*>* KHODKPJJNCL; // 0x98
	::MGBMBFBKFED_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* OBKPHJAONKK; // 0xA0
	::System::Func_1<::MoleMole::UIZenkovAlertPointChildWindowController*>* DMFJADJMFBG; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* EIENFGPENKH; // 0xB0
	::OGJNHDLJIBM* LIMJMNLDICJ; // 0xB8
	::System::Collections::Generic::HashSet_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* CDMHKFFLDDF; // 0xC0
	::MGBMBFBKFED_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* CMHPJCLMFLI; // 0xC8
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::UIWindowController*, ::System::Single>>* KJBINAACGBH; // 0xD0
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* LHHMOPJCCFF; // 0xD8
	::System::Action_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* JHMGADHKEPJ; // 0xE0
	::System::Func_1<::MoleMole::UIInLevelUpToolBarBossWidgetController*>* BKPDNPDDLNH; // 0xE8
	::System::Collections::Generic::List_1<::MoleMole::UIZenkovGuideAlertItemChildWindowController*>* IFJJCEBBOBJ; // 0xF0
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* ANINNBHHDFP; // 0xF8
	::System::Func_1<::MoleMole::UIInLevelNPCNameWidgetController*>* LAMOOOLANOK; // 0x100
	::System::Action* OLICFFIFPJN; // 0x108
	::System::Object* GIIFMLBBFIJ; // 0x110
	::MGBMBFBKFED_1<::MoleMole::UIZenkovAlertPointChildWindowController*>* DAMFHADEKOJ; // 0x118
	::System::Action_1<::MoleMole::UIZenkovGuideAlertItemChildWindowController*>* EJPOCIENLPO; // 0x120
	::System::Action* GGOLLLJJFCO; // 0x128
	::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* NFJJNGDGCAI; // 0x130
	::System::Collections::Generic::List_1<::MoleMole::UIZenkovAlertPointChildWindowController*>* COJFPGBFPKN; // 0x138
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* LEHOPOPKNIC; // 0x140
	::System::Collections::Generic::Dictionary_2<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*, ::System::Int32>* LMLIGNGAMKK; // 0x148
	::System::Action_1<::MoleMole::UIZenkovAlertPointChildWindowController*>* MBPALALCFNB; // 0x150
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* JGEFDIKILDL; // 0x158
	::System::Action_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* OHODDDCEIFB; // 0x160
	::MoleMole::UIInLevelUpToolBarBossWidgetController* BGJFFHKKHHK; // 0x168
	::System::Func_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* ECDJCPNAAJH; // 0x170
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* DANELEEJGIK; // 0x178
	::System::Func_1<::MoleMole::UIZenkovGuideAlertItemChildWindowController*>* JBMFGINMFNO; // 0x180
	::System::Boolean GIBKNAPEIMC; // 0x188
	::System::Boolean JKFLJIFLIOG; // 0x189
	::System::Boolean _NLLNIPFGJAN_k__BackingField; // 0x18A
	::System::Byte _padding0[0x1];
	::System::Int32 HMOACNMCHBP; // 0x18C
	::Unity::Collections::NativeList_1<::Unity::Mathematics::float3> DCDJGFAAGAH; // 0x190
	::System::Byte _padding1[0x8];
	::Unity::Jobs::JobHandle CIFKLCLGJKG; // 0x1A0
	::Unity::Collections::NativeList_1<::System::Object*> EPDKLIFKMIF; // 0x1B0
	::System::Byte _padding2[0x8];
	::Unity::Jobs::JobHandle EPGCJONEPOC; // 0x1C0
	::System::Int32 MCKAKAACIMF; // 0x1D0
	::System::Byte _padding3[0x4];
	::Unity::Collections::NativeList_1<::System::Object*> PCIGFPIDLLC; // 0x1D8
	::System::Byte _padding4[0x8];
	::Unity::Collections::NativeArray_1<::System::Object*> CCNGHNABKLC; // 0x1E8
	::System::Byte _padding5[0x8];
	::Unity::Jobs::JobHandle NFLBIDHEPMP; // 0x1F8
	::System::Int32 ICCLEELJNGE; // 0x208
	::System::Boolean HFJJGGEEKPA; // 0x20C
	::System::Boolean HPLPFFDCCPM; // 0x20D
	::System::Byte _padding6[0x2];
	::System::Int32 MPMPIMJJEEI; // 0x210
	::System::Boolean KLCAONHHLEP; // 0x214
	::System::Boolean HEDENAOFIKM; // 0x215
	::System::Boolean MCAKGHOMNJD; // 0x216
	::System::Boolean OABJAHGGOIO; // 0x217
	::Unity::Collections::NativeList_1<::Unity::Mathematics::float3> ADMIGNMHMEN; // 0x218

	::System::Void _ctor(::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* MIBAKHIGENL, ::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* DDODDCOBDHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>*, ::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC__CTOR_OFFSET))(this, MIBAKHIGENL, DDODDCOBDHK);
	}

	::System::Void _ctor_1(::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* MIBAKHIGENL, ::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* DDODDCOBDHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*, ::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC__CTOR_1_OFFSET))(this, MIBAKHIGENL, DDODDCOBDHK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGCMHEDEPC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean DPGBCPGBGIO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DPGBCPGBGIO_OFFSET))(this);
	}

	::System::Boolean BLIJFCNBMON(::LMJMDJAMPKE_AAHIEPCFDBO OBNIAHNMHPF, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LMJMDJAMPKE_AAHIEPCFDBO, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BLIJFCNBMON_OFFSET))(this, OBNIAHNMHPF, HNOPAJLDCFB);
	}

	::System::Void NAHLIOEANKD(::MoleMole::UIZenkovGuideAlertItemChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovGuideAlertItemChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NAHLIOEANKD_OFFSET))(this, JOLDOMEIKEF);
	}

	static ::System::Boolean GPMJGDENHHI(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::System::Single PIKFKNHLJBH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GPMJGDENHHI_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PIKFKNHLJBH);
	}

	::System::Void JOOCEFIDEOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JOOCEFIDEOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FKIONDBBFPI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FKIONDBBFPI_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::UIInLevelMonsterHudTagChildWindowController* ELGCGLJDKLE(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::UIInLevelMonsterHudTagChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ELGCGLJDKLE_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void BIJNHJGBNAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BIJNHJGBNAH_OFFSET))(this);
	}

	::System::Void JPFIDMJFLBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JPFIDMJFLBE_OFFSET))(this);
	}

	::System::Void HKFEBMNKFKB(::System::Boolean GKEABJGOLPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HKFEBMNKFKB_OFFSET))(this, GKEABJGOLPD);
	}

	::System::Void DJOFGBBNKCN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DJOFGBBNKCN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IBLKOFLFPFA(::System::UInt32 BKLGNCBNEGM, ::MoleMole::UIInLevelNPCNameWidgetController* PELIMPJFPGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IBLKOFLFPFA_OFFSET))(this, BKLGNCBNEGM, PELIMPJFPGM);
	}

	::System::Boolean PEBFMKJKMOC(::DBBGIOILHKB* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DBBGIOILHKB*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PEBFMKJKMOC_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ACDLMOEHHHB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ACDLMOEHHHB_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::UIZenkovAlertPointChildWindowController* LHJJHJDBDDF()
	{
		return ((::MoleMole::UIZenkovAlertPointChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_LHJJHJDBDDF_OFFSET))(this);
	}

	::System::Void EIGMGBOPENG(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EIGMGBOPENG_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void LEAJCOICOPL(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_LEAJCOICOPL_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void OJILJDLNCPJ(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OJILJDLNCPJ_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void BDJJNIBOOCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BDJJNIBOOCK_OFFSET))(this);
	}

	::System::Void BOJLFIKDPKO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BOJLFIKDPKO_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Boolean MAOPACPIIGF(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MAOPACPIIGF_OFFSET))(BKLGNCBNEGM);
	}

	::System::Void EEOFLIPCDEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EEOFLIPCDEC_OFFSET))(this);
	}

	static ::System::Boolean GKPLCHHPFNO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GKPLCHHPFNO_OFFSET))();
	}

	::System::Void NGNKNHCJLHE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NGNKNHCJLHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* CMDHOCNFHFE(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FCPCLIJNDLA, ::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CMDHOCNFHFE_OFFSET))(this, FCPCLIJNDLA, NJNCGJLHLKC);
	}

	::System::Boolean GNGFLIBFHAG(::PACNCJFIFEH* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PACNCJFIFEH*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GNGFLIBFHAG_OFFSET))(this, FFNKDGGHBPP);
	}

	static ::System::Void CKDHDKBLBFB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CKDHDKBLBFB_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void NEGOAIOKPIP(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NEGOAIOKPIP_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void IKGNALGBLEL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IKGNALGBLEL_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Single JJKGHIKMHMN(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JJKGHIKMHMN_OFFSET))(OFDKNLCFCPL);
	}

	::System::Void NCEABBPEOGO(::MoleMole::UIInLevelNPCNameWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NCEABBPEOGO_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void ENBCMPFJDNE(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ENBCMPFJDNE_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void HFMKDDJBDLJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HFMKDDJBDLJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void MCPKOCCLEHF(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MCPKOCCLEHF_OFFSET))(this, NJNCGJLHLKC);
	}

	static ::System::Single EFAJKMNGEDF(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EFAJKMNGEDF_OFFSET))(OFDKNLCFCPL);
	}

	::System::Void IDDPPDLNGMI(::System::UInt32 BKLGNCBNEGM, ::System::Boolean BLLMDPMHEGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IDDPPDLNGMI_OFFSET))(this, BKLGNCBNEGM, BLLMDPMHEGG);
	}

	::System::Void OLLNJJHOBIP(::MoleMole::UIInLevelMonsterHudLevelChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OLLNJJHOBIP_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void IKPFOFMHKBK(::System::Action_2<::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IKPFOFMHKBK_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void KPFCCPIKFEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KPFCCPIKFEN_OFFSET))(this);
	}

	::System::Void CAPEFNNIFHP(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CAPEFNNIFHP_OFFSET))(this, CPHDDAGKHLB);
	}

	::System::Void EEBCMBMBDAF(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Single BOGPAHGJOJK, ::System::Boolean OIJDKCEFPEN, ::System::Boolean DIMLDDPENNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EEBCMBMBDAF_OFFSET))(this, BKLGNCBNEGM, HODAIDNDKHD, BOGPAHGJOJK, OIJDKCEFPEN, DIMLDDPENNA);
	}

	::System::Void HPPGFHGDHLF(::MoleMole::UIZenkovGuideAlertItemChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovGuideAlertItemChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HPPGFHGDHLF_OFFSET))(this, JOLDOMEIKEF);
	}

	static ::System::Boolean FICHIBNHMFH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FICHIBNHMFH_OFFSET))();
	}

	static ::System::Single CHFIDNFEPLO(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CHFIDNFEPLO_OFFSET))(OFDKNLCFCPL);
	}

	::System::Void CLOENNBKJCF(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CLOENNBKJCF_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void JLOOPLIBLGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLOOPLIBLGJ_OFFSET))(this);
	}

	::System::Void IFEOELIOFDB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IFEOELIOFDB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void CKNICAKKMAB(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CKNICAKKMAB_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void FFNDFNKJGEO(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FFNDFNKJGEO_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void GNIKLCJCPCA(::System::UInt32 NJNCGJLHLKC, ::System::Boolean FANCDNMMHPA, ::System::Boolean NPCCGHNEADK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GNIKLCJCPCA_OFFSET))(this, NJNCGJLHLKC, FANCDNMMHPA, NPCCGHNEADK);
	}

	::System::Void OGBOCEGOFJB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OGBOCEGOFJB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void PEFAIKPHIPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PEFAIKPHIPH_OFFSET))(this);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* NPKHANAFHHP(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NPKHANAFHHP_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void ECEBCDOMBJE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ECEBCDOMBJE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void EKNEELGONGP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EKNEELGONGP_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::UIZenkovAlertPointChildWindowController* MJIBCHPEGBJ(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::UIZenkovAlertPointChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MJIBCHPEGBJ_OFFSET))(this, NJNCGJLHLKC);
	}

	::MoleMole::UIZenkovGuideAlertItemChildWindowController* AJNBMHJADEA()
	{
		return ((::MoleMole::UIZenkovGuideAlertItemChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_AJNBMHJADEA_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterHudLevelChildWindowController* NKGKBNLGBLI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::UIInLevelMonsterHudLevelChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NKGKBNLGBLI_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void DBDJCLBLEJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DBDJCLBLEJO_OFFSET))(this);
	}

	::System::Void JAOCIJEACHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JAOCIJEACHB_OFFSET))(this);
	}

	::System::Void BKNLDFLJJGK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BKNLDFLJJGK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LJHPKKEFCIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_LJHPKKEFCIP_OFFSET))(this);
	}

	::MoleMole::UIZenkovGuideAlertItemChildWindowController* JHKNJFACBPJ(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::UIZenkovGuideAlertItemChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JHKNJFACBPJ_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void OGBPODAOKPK(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OGBPODAOKPK_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL);
	}

	::System::Void PEDBIGIMPKE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PEDBIGIMPKE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NEPCFOBBMAO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NEPCFOBBMAO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HIFGEFDAGIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HIFGEFDAGIP_OFFSET))(this);
	}

	static ::System::Void BBKPADCFBBI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BBKPADCFBBI_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void EPPIOJLCDGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EPPIOJLCDGH_OFFSET))(this);
	}

	::System::Void FHOGIPLHCDO(::System::UInt32 NJNCGJLHLKC, ::System::Boolean LGILABJEMMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FHOGIPLHCDO_OFFSET))(this, NJNCGJLHLKC, LGILABJEMMA);
	}

	::System::Void PGNBFGLCAIH(::MoleMole::UIZenkovGuideAlertItemChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovGuideAlertItemChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PGNBFGLCAIH_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void CDDOHGNIHAA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CDDOHGNIHAA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void AOOICOPNIEP(::MoleMole::UIZenkovAlertPointChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovAlertPointChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_AOOICOPNIEP_OFFSET))(this, JOLDOMEIKEF);
	}

	static ::System::Single ADGLDIDGPAL(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ADGLDIDGPAL_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void BHJKAEMEONJ(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BHJKAEMEONJ_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Boolean EJHIIJHCOPL(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EJHIIJHCOPL_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Void HKKGAFMLCKM(::MoleMole::UIZenkovAlertPointChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovAlertPointChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HKKGAFMLCKM_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void MFBIJFEAPCP(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MFBIJFEAPCP_OFFSET))(this, OFDKNLCFCPL);
	}

	::System::Void KBKDAIPGCON(::System::EventArgs* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KBKDAIPGCON_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void KKFJPOIDCJK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KKFJPOIDCJK_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* ENNINEDMAPK()
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ENNINEDMAPK_OFFSET))(this);
	}

	::System::Void KJNJPCDNKND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KJNJPCDNKND_OFFSET))(this);
	}

	::System::Void DKICFDGMAAI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DKICFDGMAAI_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Boolean PHIHOGDFDIB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PHIHOGDFDIB_OFFSET))();
	}

	::System::Void AMMGMNMJOGK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_AMMGMNMJOGK_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Single EHGFBLLOMPD(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EHGFBLLOMPD_OFFSET))(OFDKNLCFCPL);
	}

	::System::Boolean IMPKPEDAJIM(::System::Int32 ADHNMNEFFKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IMPKPEDAJIM_OFFSET))(this, ADHNMNEFFKB);
	}

	::System::Void DOFGKBDMNPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DOFGKBDMNPK_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* POAAFHJPFHN()
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_POAAFHJPFHN_OFFSET))(this);
	}

	::System::Boolean NFOCOAMEHAK(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NFOCOAMEHAK_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Void HLHNFGCNCNN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HLHNFGCNCNN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean FBBIPCPJBHC(::BFJIMHBAHBI NMBOAHKPCEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFJIMHBAHBI))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FBBIPCPJBHC_OFFSET))(this, NMBOAHKPCEB);
	}

	::System::Void JMEJOJFABNO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JMEJOJFABNO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NCEDIBHAPLG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NCEDIBHAPLG_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean MDBDMNAPENA(::System::Object* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MDBDMNAPENA_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void GOADOGHIDFC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GOADOGHIDFC_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Void NNKJJCEIIHB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NNKJJCEIIHB_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void IOGFBKKBFHA(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IOGFBKKBFHA_OFFSET))(this, PIIPCLCCOIG, CBLGCIFLMKL);
	}

	::System::Void BJDIDJCCDIL(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BJDIDJCCDIL_OFFSET))(this, OFDKNLCFCPL);
	}

	::System::Void MOLIOCCLEOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MOLIOCCLEOG_OFFSET))(this);
	}

	::System::Void DPEAILEGFPA(::MoleMole::UIInLevelMonsterHudLevelChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DPEAILEGFPA_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Boolean KHGOAHBMBIG(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KHGOAHBMBIG_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean HEELAHICAEB(::LMJMDJAMPKE_AAHIEPCFDBO OBNIAHNMHPF, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LMJMDJAMPKE_AAHIEPCFDBO, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HEELAHICAEB_OFFSET))(this, OBNIAHNMHPF, HNOPAJLDCFB);
	}

	::System::Void IJKJEMAHCNM(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IJKJEMAHCNM_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void HPKIHLPBFBJ(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HPKIHLPBFBJ_OFFSET))(this, OFDKNLCFCPL);
	}

	static ::System::Boolean POHLOFOHMAD(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_POHLOFOHMAD_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Single DOACLGGJGHA(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DOACLGGJGHA_OFFSET))(OFDKNLCFCPL);
	}

	::System::Void BPDMFMINFBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BPDMFMINFBF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OJKJJLHLEMB(::NLKHPEDIDGM PIMIGNMPNFF)
	{
		return ((::System::Void(*)(::PVOID, ::NLKHPEDIDGM))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OJKJJLHLEMB_OFFSET))(this, PIMIGNMPNFF);
	}

	::System::Void GHIDHINHNLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GHIDHINHNLA_OFFSET))(this);
	}

	::System::Void HKIDCHLIOLN(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HKIDCHLIOLN_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void GKHCOBAIFOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GKHCOBAIFOD_OFFSET))(this);
	}

	::System::Void BACADELFKJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BACADELFKJP_OFFSET))(this);
	}

	::System::Void OICHCLBIHEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OICHCLBIHEN_OFFSET))(this);
	}

	::System::Boolean AMHCELDOAIE(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_AMHCELDOAIE_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Boolean FKOGJJDOIAP(::PEIPCHALOLP* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PEIPCHALOLP*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FKOGJJDOIAP_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void FAFLJLIBEIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FAFLJLIBEIK_OFFSET))(this);
	}

	::System::Void NACBEDEHDOP(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NACBEDEHDOP_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void DOFOHOOPHCN(::MoleMole::UIInLevelNPCNameWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DOFOHOOPHCN_OFFSET))(this, JOLDOMEIKEF);
	}

	::MoleMole::UIInLevelMonsterHudLevelChildWindowController* IEEHEBAFPLP()
	{
		return ((::MoleMole::UIInLevelMonsterHudLevelChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IEEHEBAFPLP_OFFSET))(this);
	}

	::System::Void PKMPNPKMENG(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PKMPNPKMENG_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL);
	}

	::System::Void GFIEGEMOMDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GFIEGEMOMDA_OFFSET))(this);
	}

	::System::Void MEEEKJPJHIM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MEEEKJPJHIM_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean JLLLHGGOLFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLLLHGGOLFB_OFFSET))(this);
	}

	static ::System::Void MKGLHCKPEJI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MKGLHCKPEJI_OFFSET))(EGEGIMGMJHN);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* GGFCABDFNPJ()
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GGFCABDFNPJ_OFFSET))(this);
	}

	::System::Void IMNBFFNBJON(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IMNBFFNBJON_OFFSET))(this, PIIPCLCCOIG, JOLDOMEIKEF);
	}

	::System::Void GJMLKOGNBEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_GJMLKOGNBEB_OFFSET))(this);
	}

	::System::Void JJFCBFFADNL(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JJFCBFFADNL_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL);
	}

	::System::Boolean AOJALIDMKNF(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_AOJALIDMKNF_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Void LDDOMPGIDMG(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_LDDOMPGIDMG_OFFSET))(this, PIIPCLCCOIG, OFDKNLCFCPL);
	}

	::System::Void FAOKEBBAEDK(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FAOKEBBAEDK_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void BPGIHGNFFLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BPGIHGNFFLJ_OFFSET))(this);
	}

	::System::Void DKPFFKGDIAA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DKPFFKGDIAA_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Void OKIEHBFEHIJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OKIEHBFEHIJ_OFFSET))();
	}

	::MGBMBFBKFED_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* KOMOKHOPIAI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MGBMBFBKFED_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KOMOKHOPIAI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void HAFBCGPPELM(::MoleMole::UIInLevelNPCNameWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HAFBCGPPELM_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void DJCBMNIKJBL(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DJCBMNIKJBL_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL);
	}

	::System::Void FCHOOAMNMBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FCHOOAMNMBH_OFFSET))(this);
	}

	::System::Void BDFMMCCCFPN(::System::UInt32 BKLGNCBNEGM, ::System::Boolean OIJDKCEFPEN, ::System::Boolean DIMLDDPENNA, ::System::Boolean NPCCGHNEADK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_BDFMMCCCFPN_OFFSET))(this, BKLGNCBNEGM, OIJDKCEFPEN, DIMLDDPENNA, NPCCGHNEADK);
	}

	::System::Boolean DGFGOMDBFEJ(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DGFGOMDBFEJ_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Boolean KEBCPIEPLOM(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KEBCPIEPLOM_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Void KHJEPJJPLHM(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KHJEPJJPLHM_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void FMAOEGHKIFN(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FMAOEGHKIFN_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void NPALIOAPEHJ(::System::Int32 HMGEMMFGEAN, ::System::Int32 IOHPPIKDKPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NPALIOAPEHJ_OFFSET))(this, HMGEMMFGEAN, IOHPPIKDKPO);
	}

	::MoleMole::UIInLevelMPTeammateInfoChildWindowController* HDNGGIABKBO(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::UIInLevelMPTeammateInfoChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HDNGGIABKBO_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void NJIGPAJOEIF(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NJIGPAJOEIF_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void HDLOHKKGCIL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HDLOHKKGCIL_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean AMDBMBAKHPO(::System::Object* ECKHGJMDPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_AMDBMBAKHPO_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Void JHKGAEPEKHC(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JHKGAEPEKHC_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void JFLBBNNGGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JFLBBNNGGPB_OFFSET))(this);
	}

	::System::Void HMEAGCFBGNL(::MoleMole::UIInLevelMonsterHudLevelChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HMEAGCFBGNL_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void HBNHECMFDOP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_HBNHECMFDOP_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Single LIDFEAKHDOC(::UnityEngine::Vector3 EJCBEJMGFAJ)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_LIDFEAKHDOC_OFFSET))(EJCBEJMGFAJ);
	}

	::System::Void KNOMMKAMCLC(::System::Action_1<::AAMALCPGOCL*>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::AAMALCPGOCL*>*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KNOMMKAMCLC_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Boolean PLNBDFJBBAB(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_PLNBDFJBBAB_OFFSET))(this, BKLGNCBNEGM);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* FCPDFPCGCGN(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FCPDFPCGCGN_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void CJPDLLHIEJN(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CJPDLLHIEJN_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL);
	}

	::System::Void FOANELBIAOF(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FOANELBIAOF_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL);
	}

	::System::Void FMNAEDBCDIB(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FMNAEDBCDIB_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void NKBJICOBPLM(::System::UInt32 BKLGNCBNEGM, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NKBJICOBPLM_OFFSET))(this, BKLGNCBNEGM, FIPHFGHNNBE);
	}

	::System::Void OBJEABOCEAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OBJEABOCEAC_OFFSET))(this);
	}

	::System::Void MCPKOCCLEHF_1(::NLKHPEDIDGM PIMIGNMPNFF)
	{
		return ((::System::Void(*)(::PVOID, ::NLKHPEDIDGM))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MCPKOCCLEHF_1_OFFSET))(this, PIMIGNMPNFF);
	}

	::System::Void NFHNBHMPGIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_NFHNBHMPGIE_OFFSET))(this);
	}

	::System::Void JBFKBCDDNLL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JBFKBCDDNLL_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OBFCDBEFGPO(::MoleMole::UIZenkovAlertPointChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovAlertPointChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OBFCDBEFGPO_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void EELEODHEGCN(::UnityEngine::Vector3 ADDCBFJBHNC, ::UnityEngine::Vector3 KPMNICHNBCL, ::UnityEngine::Vector2 HFDJBHEOMCC, ::UnityEngine::Vector2 BCEKMCMALAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_EELEODHEGCN_OFFSET))(this, ADDCBFJBHNC, KPMNICHNBCL, HFDJBHEOMCC, BCEKMCMALAG);
	}

	::System::Void IMDFMMBBLBE(::System::UInt32 NJNCGJLHLKC, ::System::Boolean AHEAEIMIJJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_IMDFMMBBLBE_OFFSET))(this, NJNCGJLHLKC, AHEAEIMIJJK);
	}

	::System::Void DFDCLOADGCA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DFDCLOADGCA_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Boolean MINNPFIIDFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MINNPFIIDFB_OFFSET))();
	}

	::System::Void FFGBLNKNCIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FFGBLNKNCIN_OFFSET))(this);
	}
};
