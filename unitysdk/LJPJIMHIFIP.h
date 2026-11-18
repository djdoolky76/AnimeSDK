#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADIHNNIOPHD.h"
#include "unitysdk/HCDCPDGBIMB.h"
#include "unitysdk/KOKBJFJMFPA.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/OJPBCLJDOKA.h"

class AHBKEBCNJIO;
class AIOGGGIHCAE;
class AKHOKICACBA;
class BDBPOGPNCBP;
class CGKMBHKOFKF;
class ENGKPGFGGLM;
class GLLAMAMOIMK_CHPJHELNIIM;
class HHIAMOBNGBJ;
class KJFCNACELEB;
class NAPAFGBIBBL;
class NOAHNKGLKKG;
class PJNHLNABMDA;
namespace MoleMole { class HadalCountDownSubsystem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole { class UILevelResultPageContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define LJPJIMHIFIP_ABPLOKKMLOD_OFFSET UNITYSDK_OFFSET(0x15198F80)
#define LJPJIMHIFIP_AHEGKACBEOH_OFFSET UNITYSDK_OFFSET(0x1519B0C0)
#define LJPJIMHIFIP_AMNBNIDAKGC_OFFSET UNITYSDK_OFFSET(0x151987B0)
#define LJPJIMHIFIP_AMPBMGKJHPK_OFFSET UNITYSDK_OFFSET(0x1519A990)
#define LJPJIMHIFIP_AOLBEMCJPPC_OFFSET UNITYSDK_OFFSET(0x1519AD70)
#define LJPJIMHIFIP_APFMJMCGAOG_OFFSET UNITYSDK_OFFSET(0x1519AB80)
#define LJPJIMHIFIP_BHAFDNMGALF_OFFSET UNITYSDK_OFFSET(0x15197CA0)
#define LJPJIMHIFIP_BIPAGPBHGBP_OFFSET UNITYSDK_OFFSET(0x1519B320)
#define LJPJIMHIFIP_BKHOKLKECGB_OFFSET UNITYSDK_OFFSET(0x15198AE0)
#define LJPJIMHIFIP_BKJEJGEKCAB_OFFSET UNITYSDK_OFFSET(0x15197FA0)
#define LJPJIMHIFIP_BKKAGNIKBJN_OFFSET UNITYSDK_OFFSET(0x1519B4C0)
#define LJPJIMHIFIP_BLBPBBNGPEB_OFFSET UNITYSDK_OFFSET(0x1519ACE0)
#define LJPJIMHIFIP_BPCDHFJENHE_OFFSET UNITYSDK_OFFSET(0x1519AAE0)
#define LJPJIMHIFIP_BPDIHMLIOBP_OFFSET UNITYSDK_OFFSET(0x15197670)
#define LJPJIMHIFIP_BPJAKJAKGPN_OFFSET UNITYSDK_OFFSET(0x151987C0)
#define LJPJIMHIFIP_CBPBMHOHFHO_OFFSET UNITYSDK_OFFSET(0x1519ACD0)
#define LJPJIMHIFIP_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x151975B0)
#define LJPJIMHIFIP_CFPABAPILJM_OFFSET UNITYSDK_OFFSET(0x151993D0)
#define LJPJIMHIFIP_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x15198350)
#define LJPJIMHIFIP_DBJNMHIGMFC_OFFSET UNITYSDK_OFFSET(0x1519ADE0)
#define LJPJIMHIFIP_DCOAICAHICA_OFFSET UNITYSDK_OFFSET(0x1519ADC0)
#define LJPJIMHIFIP_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x151988A0)
#define LJPJIMHIFIP_DINAHCBNGKD_OFFSET UNITYSDK_OFFSET(0x151982F0)
#define LJPJIMHIFIP_DLGIBJJBAJK_OFFSET UNITYSDK_OFFSET(0x1519B0F0)
#define LJPJIMHIFIP_DMDHOFEIPMC_OFFSET UNITYSDK_OFFSET(0x1519B260)
#define LJPJIMHIFIP_EACILFMNPCO_OFFSET UNITYSDK_OFFSET(0x1519AF50)
#define LJPJIMHIFIP_EDGPDECHBJB_OFFSET UNITYSDK_OFFSET(0x1519AB70)
#define LJPJIMHIFIP_ELJJNDHIPLF_OFFSET UNITYSDK_OFFSET(0x15197E40)
#define LJPJIMHIFIP_EPNCLKFGOMD_OFFSET UNITYSDK_OFFSET(0x1519ACC0)
#define LJPJIMHIFIP_FAHIHJFIBAN_OFFSET UNITYSDK_OFFSET(0x15199E60)
#define LJPJIMHIFIP_FALCFLOCDAN_OFFSET UNITYSDK_OFFSET(0x15198050)
#define LJPJIMHIFIP_FGLHPDPENPF_OFFSET UNITYSDK_OFFSET(0x1519B150)
#define LJPJIMHIFIP_FIHIEDOPIMK_OFFSET UNITYSDK_OFFSET(0x1519B3F0)
#define LJPJIMHIFIP_FJAHHIMLNBC_OFFSET UNITYSDK_OFFSET(0x15197890)
#define LJPJIMHIFIP_FJJFFFDDMIC_OFFSET UNITYSDK_OFFSET(0x151976C0)
#define LJPJIMHIFIP_FKDNKLBDEGO_OFFSET UNITYSDK_OFFSET(0x1519B0E0)
#define LJPJIMHIFIP_FLNKHKMHJNM_OFFSET UNITYSDK_OFFSET(0x151984C0)
#define LJPJIMHIFIP_FMAFGPILGLC_OFFSET UNITYSDK_OFFSET(0x1519A7E0)
#define LJPJIMHIFIP_FOAHDEBAMJD_OFFSET UNITYSDK_OFFSET(0x1519A3A0)
#define LJPJIMHIFIP_FONLHHLJICJ_OFFSET UNITYSDK_OFFSET(0x15197F40)
#define LJPJIMHIFIP_GAGFCKAJLEO_OFFSET UNITYSDK_OFFSET(0x1519B100)
#define LJPJIMHIFIP_GELKJPLFJOD_OFFSET UNITYSDK_OFFSET(0x15198570)
#define LJPJIMHIFIP_GGONDOPDNKA_OFFSET UNITYSDK_OFFSET(0x1519AF60)
#define LJPJIMHIFIP_GLCKHBIDCED_OFFSET UNITYSDK_OFFSET(0x15198EF0)
#define LJPJIMHIFIP_GPPDCGGIKJO_OFFSET UNITYSDK_OFFSET(0x15199590)
#define LJPJIMHIFIP_HCBNKJONOBC_OFFSET UNITYSDK_OFFSET(0x1519ACA0)
#define LJPJIMHIFIP_HDBFMMBFEDF_OFFSET UNITYSDK_OFFSET(0x15199440)
#define LJPJIMHIFIP_HDOFAEHPLGA_OFFSET UNITYSDK_OFFSET(0x1519B120)
#define LJPJIMHIFIP_HFHFMPOPPNB_OFFSET UNITYSDK_OFFSET(0x15198300)
#define LJPJIMHIFIP_HGGBBBOKKKI_OFFSET UNITYSDK_OFFSET(0x1519B310)
#define LJPJIMHIFIP_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x1519B630)
#define LJPJIMHIFIP_HLECAABIHCI_OFFSET UNITYSDK_OFFSET(0x15197280)
#define LJPJIMHIFIP_HLEGPCONGKL_OFFSET UNITYSDK_OFFSET(0x1519AE90)
#define LJPJIMHIFIP_HMLFEIHMFAF_OFFSET UNITYSDK_OFFSET(0x151977E0)
#define LJPJIMHIFIP_HMMLMKAPGOD_OFFSET UNITYSDK_OFFSET(0x15197EA0)
#define LJPJIMHIFIP_HMPHLPNKKLB_OFFSET UNITYSDK_OFFSET(0x15198790)
#define LJPJIMHIFIP_IAFLEOOHMMF_OFFSET UNITYSDK_OFFSET(0x15197710)
#define LJPJIMHIFIP_IBCAKAAFHKB_OFFSET UNITYSDK_OFFSET(0x15199F00)
#define LJPJIMHIFIP_ICBIPMBNHEP_OFFSET UNITYSDK_OFFSET(0x1519A6C0)
#define LJPJIMHIFIP_IFECPCAEMLL_OFFSET UNITYSDK_OFFSET(0x1519B620)
#define LJPJIMHIFIP_IHBFFPEHJKK_OFFSET UNITYSDK_OFFSET(0x151994E0)
#define LJPJIMHIFIP_JAIIPGDENPF_OFFSET UNITYSDK_OFFSET(0x1519AA10)
#define LJPJIMHIFIP_JDBJDIJHCFL_OFFSET UNITYSDK_OFFSET(0x1519B140)
#define LJPJIMHIFIP_JEANLCAGGND_OFFSET UNITYSDK_OFFSET(0x1519ADD0)
#define LJPJIMHIFIP_JEKEOLICFCP_OFFSET UNITYSDK_OFFSET(0x151987A0)
#define LJPJIMHIFIP_JFNJCOKGGJJ_OFFSET UNITYSDK_OFFSET(0x15199870)
#define LJPJIMHIFIP_JGAGOCOHMIL_OFFSET UNITYSDK_OFFSET(0x15199C60)
#define LJPJIMHIFIP_JHEGGGCIGIP_OFFSET UNITYSDK_OFFSET(0x1519B6D0)
#define LJPJIMHIFIP_JIMAHEDDPNK_OFFSET UNITYSDK_OFFSET(0x15198FF0)
#define LJPJIMHIFIP_JMAJMJGNIFM_OFFSET UNITYSDK_OFFSET(0x1519A980)
#define LJPJIMHIFIP_KDDJCOJPEHK_OFFSET UNITYSDK_OFFSET(0x1519B350)
#define LJPJIMHIFIP_KKNFCGBKOEE_OFFSET UNITYSDK_OFFSET(0x15197760)
#define LJPJIMHIFIP_KLFBICCIHOH_OFFSET UNITYSDK_OFFSET(0x15199080)
#define LJPJIMHIFIP_KMBFIPMBMCB_OFFSET UNITYSDK_OFFSET(0x1519ADB0)
#define LJPJIMHIFIP_LCIHAAIAGDB_OFFSET UNITYSDK_OFFSET(0x15197830)
#define LJPJIMHIFIP_LDGJMOGEOGB_OFFSET UNITYSDK_OFFSET(0x1519ACF0)
#define LJPJIMHIFIP_LDOLEJDKDHG_OFFSET UNITYSDK_OFFSET(0x1519B360)
#define LJPJIMHIFIP_LEKGHOCJKFL_OFFSET UNITYSDK_OFFSET(0x1519AB90)
#define LJPJIMHIFIP_LENIFCBEBHO_OFFSET UNITYSDK_OFFSET(0x1519B340)
#define LJPJIMHIFIP_LHAKBMLMAJC_OFFSET UNITYSDK_OFFSET(0x1519B0D0)
#define LJPJIMHIFIP_LPPIKDKEDLO_OFFSET UNITYSDK_OFFSET(0x1519A420)
#define LJPJIMHIFIP_MEDEJPFNIDD_OFFSET UNITYSDK_OFFSET(0x1519A6B0)
#define LJPJIMHIFIP_MHJNEPLPELH_OFFSET UNITYSDK_OFFSET(0x15199F20)
#define LJPJIMHIFIP_MIEEHAIDLOP_OFFSET UNITYSDK_OFFSET(0x15198890)
#define LJPJIMHIFIP_MMBLIDAGOMI_OFFSET UNITYSDK_OFFSET(0x1519A460)
#define LJPJIMHIFIP_MMCIBCHKMBC_OFFSET UNITYSDK_OFFSET(0x1519AAC0)
#define LJPJIMHIFIP_NBCNIJLIMMP_OFFSET UNITYSDK_OFFSET(0x1519B4B0)
#define LJPJIMHIFIP_NEBCGHPHIDK_OFFSET UNITYSDK_OFFSET(0x1519ACB0)
#define LJPJIMHIFIP_NHODGEHAFBA_OFFSET UNITYSDK_OFFSET(0x15198CB0)
#define LJPJIMHIFIP_NLCFCPLNPCN_OFFSET UNITYSDK_OFFSET(0x1519B3E0)
#define LJPJIMHIFIP_NMKCONENOFA_OFFSET UNITYSDK_OFFSET(0x15199DC0)
#define LJPJIMHIFIP_NNIDOODJLAO_OFFSET UNITYSDK_OFFSET(0x1519B130)
#define LJPJIMHIFIP_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x15198730)
#define LJPJIMHIFIP_NPJPAOEKAIF_OFFSET UNITYSDK_OFFSET(0x1519B110)
#define LJPJIMHIFIP_NPPELFPPIKG_OFFSET UNITYSDK_OFFSET(0x1519AFA0)
#define LJPJIMHIFIP_OAECLDKHNKP_OFFSET UNITYSDK_OFFSET(0x15198880)
#define LJPJIMHIFIP_OBCHFIMIBJD_OFFSET UNITYSDK_OFFSET(0x15199860)
#define LJPJIMHIFIP_ODCKAMEPCFN_OFFSET UNITYSDK_OFFSET(0x1519AD90)
#define LJPJIMHIFIP_OGHIDGCBHFI_OFFSET UNITYSDK_OFFSET(0x1519B330)
#define LJPJIMHIFIP_OPLCPNJPDHK_OFFSET UNITYSDK_OFFSET(0x15198EB0)
#define LJPJIMHIFIP_PDCPBNDGNED_OFFSET UNITYSDK_OFFSET(0x15199F10)
#define LJPJIMHIFIP_PLOAHCKMLNK_OFFSET UNITYSDK_OFFSET(0x15197FF0)
#define LJPJIMHIFIP_PNGHDJCDCOJ_OFFSET UNITYSDK_OFFSET(0x1519AC40)
#define LJPJIMHIFIP__CTOR_OFFSET UNITYSDK_OFFSET(0x151996E0)

inline static constexpr unsigned int LJPJIMHIFIP_TypeDefinitionIndex = 55691;

class LJPJIMHIFIP : public ::OJPBCLJDOKA
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KNFCAKGHJKL; // 0x140
	::NAPAFGBIBBL* _IKAFHGAIJCI_k__BackingField; // 0x148
	::System::Collections::Generic::List_1<::System::Int32>* PFHGJJKKNCM; // 0x150
	::System::Action* HPOKGFNILJE; // 0x158
	::KJFCNACELEB* _OJCFHIHFENG_k__BackingField; // 0x160
	::HHIAMOBNGBJ* _KGDOKDJHHFA_k__BackingField; // 0x168
	::NOAHNKGLKKG* _MNFNDNNMPDJ_k__BackingField; // 0x170
	::BDBPOGPNCBP* _GBGIGCJILNF_k__BackingField; // 0x178
	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* HDBLNDLCJMB; // 0x180
	::System::Action_2<::System::String*, ::System::Int32>* BPHCPNMBBBB; // 0x188
	::System::Collections::Generic::HashSet_1<::System::Int32>* FPJNBHPCBEM; // 0x190
	::System::Collections::Generic::List_1<::System::Int32>* IKHODPGBPFE; // 0x198
	::System::Int32 _KINDOGDDGCJ_k__BackingField; // 0x1A0
	::System::Int32 _HINCFLFLFIL_k__BackingField; // 0x1A4
	::System::Single _HOBOCHIMNAO_k__BackingField; // 0x1A8
	::System::Int32 _JNJFGLLABEP_k__BackingField; // 0x1AC
	::System::Int32 _ELLFLNGKKMC_k__BackingField; // 0x1B0
	::System::Int32 _CJCBCDPFJBG_k__BackingField; // 0x1B4
	::System::Int32 _JGFGMHKIGND_k__BackingField; // 0x1B8
	::System::Boolean _NKKKFJPEDOH_k__BackingField; // 0x1BC
	::System::Boolean _FENCFELOHON_k__BackingField; // 0x1BD
	::System::Byte _padding0[0x2];
	::ADIHNNIOPHD _KCNGHFJMCMH_k__BackingField; // 0x1C0
	::System::Int32 _NDCGEOBFKGC_k__BackingField; // 0x1C8
	::System::Int32 _ACICJAKHOLJ_k__BackingField; // 0x1CC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP__CTOR_OFFSET))(this);
	}

	::MoleMole::UIInLevelPauseDialogContext* HLECAABIHCI()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HLECAABIHCI_OFFSET))(this);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::NOAHNKGLKKG* BPDIHMLIOBP()
	{
		return ((::NOAHNKGLKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BPDIHMLIOBP_OFFSET))(this);
	}

	::BDBPOGPNCBP* FJJFFFDDMIC()
	{
		return ((::BDBPOGPNCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FJJFFFDDMIC_OFFSET))(this);
	}

	::System::Int32 IAFLEOOHMMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_IAFLEOOHMMF_OFFSET))(this);
	}

	::System::Single KKNFCGBKOEE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_KKNFCGBKOEE_OFFSET))(this);
	}

	::System::Int32 HMLFEIHMFAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HMLFEIHMFAF_OFFSET))(this);
	}

	::System::Int32 LCIHAAIAGDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LCIHAAIAGDB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FJAHHIMLNBC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FJAHHIMLNBC_OFFSET))(this);
	}

	::System::Boolean ELJJNDHIPLF(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_ELJJNDHIPLF_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Void HMMLMKAPGOD(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HMMLMKAPGOD_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Void FONLHHLJICJ(::System::Collections::Generic::HashSet_1<::System::Int32>* ANAPFFHKNIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FONLHHLJICJ_OFFSET))(this, ANAPFFHKNIO);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* BKJEJGEKCAB()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BKJEJGEKCAB_OFFSET))(this);
	}

	::System::Void PLOAHCKMLNK(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_PLOAHCKMLNK_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Int32 FALCFLOCDAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FALCFLOCDAN_OFFSET))(this);
	}

	::HHIAMOBNGBJ* DINAHCBNGKD()
	{
		return ((::HHIAMOBNGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_DINAHCBNGKD_OFFSET))(this);
	}

	::System::Int32 HFHFMPOPPNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HFHFMPOPPNB_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NPHBLJDPFHH_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType HMPHLPNKKLB()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HMPHLPNKKLB_OFFSET))(this);
	}

	::System::Int32 JEKEOLICFCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JEKEOLICFCP_OFFSET))(this);
	}

	::ADIHNNIOPHD AMNBNIDAKGC()
	{
		return ((::ADIHNNIOPHD(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_AMNBNIDAKGC_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* BPJAKJAKGPN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BPJAKJAKGPN_OFFSET))(this);
	}

	::System::Boolean OAECLDKHNKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OAECLDKHNKP_OFFSET))(this);
	}

	::System::Boolean MIEEHAIDLOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_MIEEHAIDLOP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Void OPLCPNJPDHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OPLCPNJPDHK_OFFSET))(this);
	}

	::System::Void GLCKHBIDCED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_GLCKHBIDCED_OFFSET))(this);
	}

	::System::Boolean ABPLOKKMLOD(::MoleMole::Level::RatingType& EGODKLPFBFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_ABPLOKKMLOD_OFFSET))(this, EGODKLPFBFF);
	}

	::System::Boolean JIMAHEDDPNK(::System::Int32& GLKNCIDNNOG, ::System::Int32& KOOPNFPBCPN, ::System::Int32& ECCDGOMCODD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JIMAHEDDPNK_OFFSET))(this, GLKNCIDNNOG, KOOPNFPBCPN, ECCDGOMCODD);
	}

	::System::Int32 KLFBICCIHOH(::System::Int32 ABHBKFJKINO, ::System::UInt32 CKCDLFIAPIB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_KLFBICCIHOH_OFFSET))(this, ABHBKFJKINO, CKCDLFIAPIB);
	}

	::System::Void CFPABAPILJM(::MoleMole::UILevelResultPageContext* EIKHBNNICEO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_CFPABAPILJM_OFFSET))(this, EIKHBNNICEO);
	}

	::System::Void HDBFMMBFEDF(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HDBFMMBFEDF_OFFSET))(this, MIMNNMMMJJF);
	}

	::System::Void IHBFFPEHJKK(::AIOGGGIHCAE*& KNGNADJNFOP)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_IHBFFPEHJKK_OFFSET))(this, KNGNADJNFOP);
	}

	::System::Boolean GPPDCGGIKJO(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_GPPDCGGIKJO_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Boolean OBCHFIMIBJD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OBCHFIMIBJD_OFFSET))(this);
	}

	::System::Boolean JFNJCOKGGJJ(::GLLAMAMOIMK_CHPJHELNIIM* BDHICHKDBII)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLLAMAMOIMK_CHPJHELNIIM*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JFNJCOKGGJJ_OFFSET))(this, BDHICHKDBII);
	}

	::System::Boolean NMKCONENOFA(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NMKCONENOFA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JGAGOCOHMIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JGAGOCOHMIL_OFFSET))(this);
	}

	::System::Void FAHIHJFIBAN(::PJNHLNABMDA* CGICDEAAEKJ, ::System::Boolean DJNKACAKCEI)
	{
		return ((::System::Void(*)(::PVOID, ::PJNHLNABMDA*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FAHIHJFIBAN_OFFSET))(this, CGICDEAAEKJ, DJNKACAKCEI);
	}

	::System::Void NHODGEHAFBA(::System::String* JBNFBGMMKJI, ::System::Int32 PKHPPCCOKOM, ::System::Int32 GLKNCIDNNOG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NHODGEHAFBA_OFFSET))(this, JBNFBGMMKJI, PKHPPCCOKOM, GLKNCIDNNOG);
	}

	::System::Int32 IBCAKAAFHKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_IBCAKAAFHKB_OFFSET))(this);
	}

	::NAPAFGBIBBL* PDCPBNDGNED()
	{
		return ((::NAPAFGBIBBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_PDCPBNDGNED_OFFSET))(this);
	}

	::System::Void MHJNEPLPELH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_MHJNEPLPELH_OFFSET))(this);
	}

	::System::Void GELKJPLFJOD(::AHBKEBCNJIO* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::AHBKEBCNJIO*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_GELKJPLFJOD_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void FOAHDEBAMJD(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FOAHDEBAMJD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LPPIKDKEDLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LPPIKDKEDLO_OFFSET))(this);
	}

	::System::Void MEDEJPFNIDD(::NOAHNKGLKKG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_MEDEJPFNIDD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICBIPMBNHEP(::MoleMole::HadalCountDownSubsystem* EIHFNEHPNEH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HadalCountDownSubsystem*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_ICBIPMBNHEP_OFFSET))(this, EIHFNEHPNEH);
	}

	static ::System::Void FMAFGPILGLC(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FMAFGPILGLC_OFFSET))(NNJOMEFILCC);
	}

	::BDBPOGPNCBP* JMAJMJGNIFM()
	{
		return ((::BDBPOGPNCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JMAJMJGNIFM_OFFSET))(this);
	}

	::System::Void AMPBMGKJHPK(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_AMPBMGKJHPK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JAIIPGDENPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JAIIPGDENPF_OFFSET))(this);
	}

	::System::Boolean BPCDHFJENHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BPCDHFJENHE_OFFSET))(this);
	}

	::System::Void EDGPDECHBJB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_EDGPDECHBJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void APFMJMCGAOG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_APFMJMCGAOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LEKGHOCJKFL(::System::Single HFFCOJCKIBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LEKGHOCJKFL_OFFSET))(this, HFFCOJCKIBD);
	}

	::System::Void PNGHDJCDCOJ(::KJFCNACELEB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::KJFCNACELEB*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_PNGHDJCDCOJ_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void HCBNKJONOBC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HCBNKJONOBC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NEBCGHPHIDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NEBCGHPHIDK_OFFSET))(this);
	}

	::NOAHNKGLKKG* EPNCLKFGOMD()
	{
		return ((::NOAHNKGLKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_EPNCLKFGOMD_OFFSET))(this);
	}

	::System::Void CBPBMHOHFHO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_CBPBMHOHFHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BLBPBBNGPEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BLBPBBNGPEB_OFFSET))(this);
	}

	::System::Void LDGJMOGEOGB(::System::Action_2<::System::String*, ::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LDGJMOGEOGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AOLBEMCJPPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_AOLBEMCJPPC_OFFSET))(this);
	}

	::System::Double MMCIBCHKMBC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_MMCIBCHKMBC_OFFSET))(this);
	}

	::ADIHNNIOPHD KMBFIPMBMCB()
	{
		return ((::ADIHNNIOPHD(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_KMBFIPMBMCB_OFFSET))(this);
	}

	::System::Int32 DCOAICAHICA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_DCOAICAHICA_OFFSET))(this);
	}

	::System::Void JEANLCAGGND(::KJFCNACELEB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KJFCNACELEB*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JEANLCAGGND_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMBLIDAGOMI(::System::String* PFLKHEPPIPJ, ::System::Boolean DJNKACAKCEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_MMBLIDAGOMI_OFFSET))(this, PFLKHEPPIPJ, DJNKACAKCEI);
	}

	::System::Boolean DBJNMHIGMFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_DBJNMHIGMFC_OFFSET))(this);
	}

	::System::Int32 BKHOKLKECGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BKHOKLKECGB_OFFSET))(this);
	}

	::System::Void EACILFMNPCO(::NAPAFGBIBBL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NAPAFGBIBBL*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_EACILFMNPCO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GGONDOPDNKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_GGONDOPDNKA_OFFSET))(this);
	}

	::System::Void NPPELFPPIKG(::MoleMole::HadalCountDownSubsystem* EIHFNEHPNEH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HadalCountDownSubsystem*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NPPELFPPIKG_OFFSET))(this, EIHFNEHPNEH);
	}

	::System::Int32 AHEGKACBEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_AHEGKACBEOH_OFFSET))(this);
	}

	::KJFCNACELEB* LHAKBMLMAJC()
	{
		return ((::KJFCNACELEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LHAKBMLMAJC_OFFSET))(this);
	}

	::System::Void FKDNKLBDEGO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FKDNKLBDEGO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DLGIBJJBAJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_DLGIBJJBAJK_OFFSET))(this);
	}

	::System::Void GAGFCKAJLEO(::AIOGGGIHCAE*& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_GAGFCKAJLEO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 NPJPAOEKAIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NPJPAOEKAIF_OFFSET))(this);
	}

	::System::Boolean BHAFDNMGALF(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BHAFDNMGALF_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Single HDOFAEHPLGA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HDOFAEHPLGA_OFFSET))(this);
	}

	::System::Void NNIDOODJLAO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NNIDOODJLAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JDBJDIJHCFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JDBJDIJHCFL_OFFSET))(this);
	}

	::System::Double HLEGPCONGKL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HLEGPCONGKL_OFFSET))(this);
	}

	::System::Void FGLHPDPENPF(::MoleMole::UILevelResultPageContext* EIKHBNNICEO, ::PJNHLNABMDA* CGICDEAAEKJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::PJNHLNABMDA*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FGLHPDPENPF_OFFSET))(this, EIKHBNNICEO, CGICDEAAEKJ);
	}

	::System::Boolean DMDHOFEIPMC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_DMDHOFEIPMC_OFFSET))(this);
	}

	::System::Boolean HGGBBBOKKKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HGGBBBOKKKI_OFFSET))(this);
	}

	::System::Void BIPAGPBHGBP(::AKHOKICACBA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BIPAGPBHGBP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OGHIDGCBHFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OGHIDGCBHFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LENIFCBEBHO(::ADIHNNIOPHD EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ADIHNNIOPHD))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LENIFCBEBHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KDDJCOJPEHK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_KDDJCOJPEHK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDOLEJDKDHG(::System::Action_2<::System::String*, ::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_LDOLEJDKDHG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FLNKHKMHJNM(::CGKMBHKOFKF* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::CGKMBHKOFKF*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FLNKHKMHJNM_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void NLCFCPLNPCN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NLCFCPLNPCN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIInLevelPauseDialogContext* FIHIEDOPIMK()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_FIHIEDOPIMK_OFFSET))(this);
	}

	::System::Void NBCNIJLIMMP(::BDBPOGPNCBP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BDBPOGPNCBP*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_NBCNIJLIMMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::KOKBJFJMFPA BKKAGNIKBJN()
	{
		return ((::KOKBJFJMFPA(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_BKKAGNIKBJN_OFFSET))(this);
	}

	::System::Void IFECPCAEMLL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_IFECPCAEMLL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JHEGGGCIGIP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_JHEGGGCIGIP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ODCKAMEPCFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_ODCKAMEPCFN_OFFSET))(this);
	}
};
