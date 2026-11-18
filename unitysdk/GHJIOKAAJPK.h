#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFMLNPDMJNI.h"
#include "unitysdk/GHJIOKAAJPK_FNIDGMJNACO.h"
#include "unitysdk/GHJIOKAAJPK_JPGNNJBJKEG.h"
#include "unitysdk/HBFPPMGFAGC.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_GMEBFGMDANA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KDMGNLLDLIJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class CJKNGOJBJMI;
class EDOKGCBMFKB;
class ENGKPGFGGLM;
class GBGHJBBLLJO;
class IFMLECMGKPN;
class LCONPHCBECE;
class LGPGADPEEAG;
class MIKNHNMBLPO;
class OHCPNBDKOCF;
class POKMJFEOOIM;
namespace MoleMole { class CommonSceneTrigger; }
namespace MoleMole { class MonoTowerHolderObject; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlatBuffers::Config { class BangbooDefenseDataTemplate; }
namespace MoleMole::Project::Config { class BangbooDefenseDataTemplateExt; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define GHJIOKAAJPK_ABBKJEFKJMM_OFFSET UNITYSDK_OFFSET(0x15CEB1A0)
#define GHJIOKAAJPK_ADGDFMEELAI_OFFSET UNITYSDK_OFFSET(0x15CF5340)
#define GHJIOKAAJPK_ADNFIAPFELJ_OFFSET UNITYSDK_OFFSET(0x15CF85F0)
#define GHJIOKAAJPK_AECGDEEPBMO_OFFSET UNITYSDK_OFFSET(0x15CFAE70)
#define GHJIOKAAJPK_AEIFFAIFKAO_OFFSET UNITYSDK_OFFSET(0x15CEB520)
#define GHJIOKAAJPK_AFAIGNLHKAJ_OFFSET UNITYSDK_OFFSET(0x15CEC990)
#define GHJIOKAAJPK_AFCHHCIAKAF_OFFSET UNITYSDK_OFFSET(0x15CF9780)
#define GHJIOKAAJPK_AIGDHDHDPEA_OFFSET UNITYSDK_OFFSET(0x15CF8660)
#define GHJIOKAAJPK_AJBBLNCNEFJ_OFFSET UNITYSDK_OFFSET(0x15CF1ED0)
#define GHJIOKAAJPK_AMEDPCKCNPK_OFFSET UNITYSDK_OFFSET(0x15CF7A10)
#define GHJIOKAAJPK_ANFKIOODLCO_OFFSET UNITYSDK_OFFSET(0x15CF7230)
#define GHJIOKAAJPK_APKACJBDBMC_OFFSET UNITYSDK_OFFSET(0x15CF1A50)
#define GHJIOKAAJPK_BDDEGFFEAJN_OFFSET UNITYSDK_OFFSET(0x15CFA680)
#define GHJIOKAAJPK_BEKBPOMDKIK_OFFSET UNITYSDK_OFFSET(0x15CF2290)
#define GHJIOKAAJPK_BGFBOAKAKEM_OFFSET UNITYSDK_OFFSET(0x15CEC860)
#define GHJIOKAAJPK_BICEOEJPOCH_OFFSET UNITYSDK_OFFSET(0x15CF7D10)
#define GHJIOKAAJPK_BJOLHOHPKAC_OFFSET UNITYSDK_OFFSET(0x15CF4540)
#define GHJIOKAAJPK_BLIJJJNONMG_OFFSET UNITYSDK_OFFSET(0x15CF7100)
#define GHJIOKAAJPK_BNCGCMHOIEG_OFFSET UNITYSDK_OFFSET(0x15CED7E0)
#define GHJIOKAAJPK_BNJDKDADIMB_OFFSET UNITYSDK_OFFSET(0x15CF46C0)
#define GHJIOKAAJPK_BOCDCGGIEGB_OFFSET UNITYSDK_OFFSET(0x15CE8FC0)
#define GHJIOKAAJPK_CBEFDLCOEEP_OFFSET UNITYSDK_OFFSET(0x15CF7340)
#define GHJIOKAAJPK_CBFHPHNMEHK_OFFSET UNITYSDK_OFFSET(0x15CF72A0)
#define GHJIOKAAJPK_CDJDDAHHBAB_OFFSET UNITYSDK_OFFSET(0x15CF7730)
#define GHJIOKAAJPK_CKKNMEGIKDB_OFFSET UNITYSDK_OFFSET(0x15CF68F0)
#define GHJIOKAAJPK_CNJJLCJOADK_OFFSET UNITYSDK_OFFSET(0x15CFAC60)
#define GHJIOKAAJPK_DGLOKKOHADO_OFFSET UNITYSDK_OFFSET(0x15CF2440)
#define GHJIOKAAJPK_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x15CEED20)
#define GHJIOKAAJPK_DINJOLMGDPF_OFFSET UNITYSDK_OFFSET(0x15CECC00)
#define GHJIOKAAJPK_DKLLJCLOHOA_OFFSET UNITYSDK_OFFSET(0x15CFA110)
#define GHJIOKAAJPK_DNKJNJGIDFI_OFFSET UNITYSDK_OFFSET(0x15CEF940)
#define GHJIOKAAJPK_DOPBHHHLPNE_OFFSET UNITYSDK_OFFSET(0x15CF2EA0)
#define GHJIOKAAJPK_DPDHMCIEABG_OFFSET UNITYSDK_OFFSET(0x15CF8F00)
#define GHJIOKAAJPK_EBFJLBKFMLD_OFFSET UNITYSDK_OFFSET(0x15CF2040)
#define GHJIOKAAJPK_EDDPCJLFIEJ_OFFSET UNITYSDK_OFFSET(0x15CE91F0)
#define GHJIOKAAJPK_EIONHFDDAAD_OFFSET UNITYSDK_OFFSET(0x15CFA1E0)
#define GHJIOKAAJPK_EJPNEBOFCOB_OFFSET UNITYSDK_OFFSET(0x15CF67B0)
#define GHJIOKAAJPK_ELDJLLNHLFC_OFFSET UNITYSDK_OFFSET(0x15CF80C0)
#define GHJIOKAAJPK_ELHKMMGMOIJ_OFFSET UNITYSDK_OFFSET(0x15CEE610)
#define GHJIOKAAJPK_ELPAFCJNLFK_OFFSET UNITYSDK_OFFSET(0x15CF0900)
#define GHJIOKAAJPK_ENMIOLCJINE_OFFSET UNITYSDK_OFFSET(0x15CF6520)
#define GHJIOKAAJPK_EPEIEPODGIA_1_OFFSET UNITYSDK_OFFSET(0x15CF8C70)
#define GHJIOKAAJPK_EPEIEPODGIA_OFFSET UNITYSDK_OFFSET(0x15CF7A70)
#define GHJIOKAAJPK_FIGNOLIMGDP_OFFSET UNITYSDK_OFFSET(0x15CF4C90)
#define GHJIOKAAJPK_FLGMOFKKOPF_OFFSET UNITYSDK_OFFSET(0x15CEE440)
#define GHJIOKAAJPK_FOAMMNHFNLL_OFFSET UNITYSDK_OFFSET(0x15CEEF20)
#define GHJIOKAAJPK_FPPIIJIKFME_OFFSET UNITYSDK_OFFSET(0x15CF06E0)
#define GHJIOKAAJPK_GGGHDNKGOCP_OFFSET UNITYSDK_OFFSET(0x15CF8400)
#define GHJIOKAAJPK_GHOJCDLDIMF_OFFSET UNITYSDK_OFFSET(0x15CEEC90)
#define GHJIOKAAJPK_GIHDJAHBAGG_OFFSET UNITYSDK_OFFSET(0x15CF8E40)
#define GHJIOKAAJPK_GKOFDGCLAFH_OFFSET UNITYSDK_OFFSET(0x15CFA170)
#define GHJIOKAAJPK_GPDMMNPHDKA_OFFSET UNITYSDK_OFFSET(0x15CF0270)
#define GHJIOKAAJPK_HCAOOCCHEMF_OFFSET UNITYSDK_OFFSET(0x15CECFB0)
#define GHJIOKAAJPK_HCPMDONDINB_OFFSET UNITYSDK_OFFSET(0x15CF3760)
#define GHJIOKAAJPK_HGBFLAHNLII_OFFSET UNITYSDK_OFFSET(0x15CF1130)
#define GHJIOKAAJPK_HGPBOLGEJCJ_OFFSET UNITYSDK_OFFSET(0x15CF2880)
#define GHJIOKAAJPK_HJPHMMNADIM_OFFSET UNITYSDK_OFFSET(0x15CF99C0)
#define GHJIOKAAJPK_HLFLFDGNNCG_OFFSET UNITYSDK_OFFSET(0x15CF2D00)
#define GHJIOKAAJPK_HLMHIINHFBP_OFFSET UNITYSDK_OFFSET(0x15CF0280)
#define GHJIOKAAJPK_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15CED8E0)
#define GHJIOKAAJPK_HNLCBMOCOHB_OFFSET UNITYSDK_OFFSET(0x15CF4FE0)
#define GHJIOKAAJPK_HNNHEIFANGE_OFFSET UNITYSDK_OFFSET(0x15CF3280)
#define GHJIOKAAJPK_IGMBCFMPDMN_OFFSET UNITYSDK_OFFSET(0x15CEFBF0)
#define GHJIOKAAJPK_IJKGNBIKHMK_OFFSET UNITYSDK_OFFSET(0x15CF6010)
#define GHJIOKAAJPK_IKFELBIDNCH_OFFSET UNITYSDK_OFFSET(0x15CF80B0)
#define GHJIOKAAJPK_IMHGAEJOKMD_OFFSET UNITYSDK_OFFSET(0x15CF0E30)
#define GHJIOKAAJPK_INAGEMJILLK_OFFSET UNITYSDK_OFFSET(0x15CF5E50)
#define GHJIOKAAJPK_JDIKCHGGEDC_OFFSET UNITYSDK_OFFSET(0x15CF3DD0)
#define GHJIOKAAJPK_JDKPGNJNIDG_OFFSET UNITYSDK_OFFSET(0x15CFA380)
#define GHJIOKAAJPK_JGIKKKGPBPB_OFFSET UNITYSDK_OFFSET(0x15CEBCA0)
#define GHJIOKAAJPK_JIDJKFFIEGJ_OFFSET UNITYSDK_OFFSET(0x15CFB820)
#define GHJIOKAAJPK_JIOCCNABIBG_OFFSET UNITYSDK_OFFSET(0x15CF4270)
#define GHJIOKAAJPK_JIOOGOHCJEN_OFFSET UNITYSDK_OFFSET(0x15CED0C0)
#define GHJIOKAAJPK_JJDAMMBHMKN_OFFSET UNITYSDK_OFFSET(0x15CF9050)
#define GHJIOKAAJPK_JMIJKJPIOIJ_OFFSET UNITYSDK_OFFSET(0x15CEA800)
#define GHJIOKAAJPK_JOLJALOGIIN_OFFSET UNITYSDK_OFFSET(0x15CF8B00)
#define GHJIOKAAJPK_KBGHEMIFHIO_1_OFFSET UNITYSDK_OFFSET(0x15CF83A0)
#define GHJIOKAAJPK_KBGHEMIFHIO_OFFSET UNITYSDK_OFFSET(0x15CF6F90)
#define GHJIOKAAJPK_KEADKDCCKMF_OFFSET UNITYSDK_OFFSET(0x15CF2740)
#define GHJIOKAAJPK_KFHPBGCDENN_OFFSET UNITYSDK_OFFSET(0x15CF92E0)
#define GHJIOKAAJPK_KHBEBOILNOH_OFFSET UNITYSDK_OFFSET(0x15CF6C40)
#define GHJIOKAAJPK_KJBJLCOAKIP_OFFSET UNITYSDK_OFFSET(0x15CF3430)
#define GHJIOKAAJPK_KJJPBPNCOFN_OFFSET UNITYSDK_OFFSET(0x15CFA180)
#define GHJIOKAAJPK_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x15CEED70)
#define GHJIOKAAJPK_LCHHMMKLOOB_OFFSET UNITYSDK_OFFSET(0x15CF91F0)
#define GHJIOKAAJPK_LEDNEBBBFFM_OFFSET UNITYSDK_OFFSET(0x15CF8230)
#define GHJIOKAAJPK_LFNAMFKAPBN_OFFSET UNITYSDK_OFFSET(0x15CF7660)
#define GHJIOKAAJPK_LFPOBICHFGO_OFFSET UNITYSDK_OFFSET(0x15CFA080)
#define GHJIOKAAJPK_LJFCEJPODFJ_OFFSET UNITYSDK_OFFSET(0x15CF4DF0)
#define GHJIOKAAJPK_LJJBOOPDHHJ_OFFSET UNITYSDK_OFFSET(0x15CF70E0)
#define GHJIOKAAJPK_LMIHGGNENMG_OFFSET UNITYSDK_OFFSET(0x15CF3800)
#define GHJIOKAAJPK_MFKFEMJFJAI_OFFSET UNITYSDK_OFFSET(0x15CF8710)
#define GHJIOKAAJPK_MHPLMJHCOKJ_OFFSET UNITYSDK_OFFSET(0x15CECD80)
#define GHJIOKAAJPK_MMIILDMDMNA_OFFSET UNITYSDK_OFFSET(0x15CFA990)
#define GHJIOKAAJPK_MMMKMCCMMFD_OFFSET UNITYSDK_OFFSET(0x15CFB1E0)
#define GHJIOKAAJPK_NBOHAOHFNCM_OFFSET UNITYSDK_OFFSET(0x15CF20E0)
#define GHJIOKAAJPK_NFEBEIBINKB_OFFSET UNITYSDK_OFFSET(0x15CF4770)
#define GHJIOKAAJPK_NGCFAPCEPAP_OFFSET UNITYSDK_OFFSET(0x15CF2B70)
#define GHJIOKAAJPK_NLNHPDFMMCN_OFFSET UNITYSDK_OFFSET(0x15CF9DC0)
#define GHJIOKAAJPK_OCIHJFHFCFM_OFFSET UNITYSDK_OFFSET(0x15CF2050)
#define GHJIOKAAJPK_OEKNNGJINFG_OFFSET UNITYSDK_OFFSET(0x15CFB6C0)
#define GHJIOKAAJPK_OGICJDOGGDF_OFFSET UNITYSDK_OFFSET(0x15CF3660)
#define GHJIOKAAJPK_OHBJPIAJMCB_OFFSET UNITYSDK_OFFSET(0x15CFB9D0)
#define GHJIOKAAJPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CE7DB0)
#define GHJIOKAAJPK_OJNPAMOIOPL_1_OFFSET UNITYSDK_OFFSET(0x15CF1970)
#define GHJIOKAAJPK_OJNPAMOIOPL_OFFSET UNITYSDK_OFFSET(0x15CF1820)
#define GHJIOKAAJPK_OKDADBHHOHG_OFFSET UNITYSDK_OFFSET(0x15CEA3A0)
#define GHJIOKAAJPK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15CECA20)
#define GHJIOKAAJPK_OLLLICGKKKI_OFFSET UNITYSDK_OFFSET(0x15CF5C90)
#define GHJIOKAAJPK_OMOIONEIADM_OFFSET UNITYSDK_OFFSET(0x15CFA460)
#define GHJIOKAAJPK_ONIOLCDJMNO_OFFSET UNITYSDK_OFFSET(0x15CF54C0)
#define GHJIOKAAJPK_PBHPCGDHLBC_OFFSET UNITYSDK_OFFSET(0x15CF2BF0)
#define GHJIOKAAJPK_PCLMINHKONC_OFFSET UNITYSDK_OFFSET(0x15CF5190)
#define GHJIOKAAJPK_PDNFPHHJACM_OFFSET UNITYSDK_OFFSET(0x15CEC440)
#define GHJIOKAAJPK_PFGEOJPPJNF_OFFSET UNITYSDK_OFFSET(0x15CEADC0)
#define GHJIOKAAJPK_PGNLKMGNOOO_OFFSET UNITYSDK_OFFSET(0x15CF7090)
#define GHJIOKAAJPK_PHGAMGCIKGJ_OFFSET UNITYSDK_OFFSET(0x15CFA670)
#define GHJIOKAAJPK_PIMPOLIBBCO_OFFSET UNITYSDK_OFFSET(0x15CF9FD0)
#define GHJIOKAAJPK_PIOBFIGJNDA_OFFSET UNITYSDK_OFFSET(0x15CFA160)
#define GHJIOKAAJPK_PIOLFLEHIFH_OFFSET UNITYSDK_OFFSET(0x15CEDFE0)
#define GHJIOKAAJPK_PLAIEPIDKLP_OFFSET UNITYSDK_OFFSET(0x15CFB9E0)
#define GHJIOKAAJPK_PMADHEJBHKD_OFFSET UNITYSDK_OFFSET(0x15CEB6D0)
#define GHJIOKAAJPK_POPMOKAKOEO_OFFSET UNITYSDK_OFFSET(0x15CED2D0)
#define GHJIOKAAJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEFE30)

inline static constexpr unsigned int GHJIOKAAJPK_TypeDefinitionIndex = 55159;

class GHJIOKAAJPK : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_ECIIBJODBLN()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(GHJIOKAAJPK_TypeDefinitionIndex)->GetStaticField(0x4F510);
	}
	// static const ::System::String* JMCCCLGFPIO; // 0x0
	// static const ::System::String* JEIHMJIPPEJ; // 0x0
	// static const ::System::String* GDKJEMHBNOM; // 0x0
	// static const ::System::String* DAPKJNCFNDO; // 0x0
	// static const ::System::String* FKODCCNJNNL; // 0x0
	// static const ::System::String* PKPBDNKOPHN; // 0x0
	// static const ::System::String* OALCLBHCOGE; // 0x0
	// static const ::System::Single IGNECIOCBEL; // 0x0
	// static const ::System::Int32 BIJJHNIBOBP = 0x3E7; // 0x0
	// static const ::System::Int32 IODPHPJEJDH = 0x3E7; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CJKNGOJBJMI*>* DFMADAHCAIL; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* BCGLNIJNILL; // 0x18
	::IFMLECMGKPN* FOHOENDPLML; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Double>* JCJEMGONGEB; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* LALFIHHCPIC; // 0x30
	::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate* PDLLCPBOBPJ; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CLPCFLLPCIP; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Double>* MLGICDIIGNP; // 0x48
	::System::Collections::Generic::List_1<::GBGHJBBLLJO*>* NIGPFPOIBDE; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* OFIMDHDPFMJ; // 0x58
	::LGPGADPEEAG* JKEOMPAPBKA; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* IHHEOMDKPBN; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MIKNHNMBLPO*>* GPLFDJPBLMO; // 0x70
	::System::Action* GILKNDHOIPE; // 0x78
	::System::Collections::Generic::List_1<::System::UInt32>* KPHMEHNFCJJ; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Double>* DPPPLEPDFMB; // 0x88
	::System::Collections::Generic::List_1<::System::UInt32>* EGKPPEMHPLN; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EAIIHKJGOGJ; // 0x98
	::POKMJFEOOIM* AJIDJNLIIGL; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Double>* LFHBIFMIFJL; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NGILOGCGGEK; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DHEAFAFBCNJ; // 0xB8
	::System::Collections::Generic::List_1<::MoleMole::CommonSceneTrigger*>* MEHGIHHMBJK; // 0xC0
	::System::Action_1<::System::UInt32>* PJHGFHIKKAC; // 0xC8
	::System::Object* MIKOKPMEDFB; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OHCPNBDKOCF*>* EPEIGEOCBOG; // 0xD8
	::System::Int32 LJIJIDFLJAG; // 0xE0
	::System::Int32 FEBKKLBIDKP; // 0xE4
	::GHJIOKAAJPK_JPGNNJBJKEG ACOHOLBKHDD; // 0xE8
	::System::Int32 EBMIFKKOMAL; // 0xEC
	::System::Double JKHLNDINLCC; // 0xF0
	::System::Int32 ILHIOGIEOCJ; // 0xF8
	::System::Int32 NPAKMAGBOCH; // 0xFC
	::System::Int32 ADONCMKBIKM; // 0x100
	::System::Int32 OAFOBOFGIDL; // 0x104
	::System::Single CFCJLHLGJPD; // 0x108
	::System::Int32 PFCKAEOCNEH; // 0x10C
	::HBFPPMGFAGC LNEHALIEGON; // 0x110
	::System::Int32 CJPMJMIHLJL; // 0x114
	::System::Int32 EFEEPODILNN; // 0x118
	::System::Int32 CIDKCIGPENM; // 0x11C
	::System::Single FLJFDAGIAEE; // 0x120
	::System::Single GLCDKNCMOJI; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::System::Int32 FIBDPKNCDHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OJENCMOGDKL_OFFSET))(this, FIBDPKNCDHJ);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Int32 GPDMMNPHDKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_GPDMMNPHDKA_OFFSET))(this);
	}

	::System::Void OKDADBHHOHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OKDADBHHOHG_OFFSET))(this);
	}

	::System::Void HLMHIINHFBP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HLMHIINHFBP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JIOOGOHCJEN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JIOOGOHCJEN_OFFSET))(this, PMNLNNGEIFM);
	}

	::OHCPNBDKOCF* OJNPAMOIOPL(::MoleMole::Battle::Entity* KEOOEPCGCIJ)
	{
		return ((::OHCPNBDKOCF*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OJNPAMOIOPL_OFFSET))(this, KEOOEPCGCIJ);
	}

	::MoleMole::Battle::Entity* APKACJBDBMC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_APKACJBDBMC_OFFSET))(this);
	}

	::System::Void JGIKKKGPBPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JGIKKKGPBPB_OFFSET))(this);
	}

	::System::Void IGMBCFMPDMN(::System::UInt32 BKLGNCBNEGM, ::System::Double BGDDNHMJALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_IGMBCFMPDMN_OFFSET))(this, BKLGNCBNEGM, BGDDNHMJALJ);
	}

	::System::Void DINJOLMGDPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DINJOLMGDPF_OFFSET))(this);
	}

	::System::Int32 EBFJLBKFMLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_EBFJLBKFMLD_OFFSET))(this);
	}

	::System::Void OCIHJFHFCFM(::System::Int32 HAEKPDILNLJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OCIHJFHFCFM_OFFSET))(this, HAEKPDILNLJ);
	}

	::System::Void DGLOKKOHADO(::System::UInt32 BKLGNCBNEGM, ::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DGLOKKOHADO_OFFSET))(this, BKLGNCBNEGM, LJMPPBEMEPP);
	}

	::System::Void KEADKDCCKMF(::MoleMole::Battle::Entity* KEOOEPCGCIJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KEADKDCCKMF_OFFSET))(this, KEOOEPCGCIJ);
	}

	::System::Boolean NGCFAPCEPAP(::MoleMole::Battle::Entity* KLOOKFMCDMG, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_NGCFAPCEPAP_OFFSET))(this, KLOOKFMCDMG, NEAOFNHMFOA);
	}

	::System::Void HLFLFDGNNCG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HLFLFDGNNCG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::OHCPNBDKOCF* DOPBHHHLPNE(::System::Int32 IHDCGPLNEBJ)
	{
		return ((::OHCPNBDKOCF*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DOPBHHHLPNE_OFFSET))(IHDCGPLNEBJ);
	}

	::System::Boolean KJBJLCOAKIP(::MoleMole::Battle::Entity* KEOOEPCGCIJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KJBJLCOAKIP_OFFSET))(this, KEOOEPCGCIJ);
	}

	::System::Void HGPBOLGEJCJ(::System::UInt32 KFODJOEKOAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HGPBOLGEJCJ_OFFSET))(this, KFODJOEKOAG);
	}

	::MoleMole::Battle::Entity* LMIHGGNENMG(::System::Int32 IHDCGPLNEBJ, ::MoleMole::Battle::Entity* KLOOKFMCDMG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LMIHGGNENMG_OFFSET))(this, IHDCGPLNEBJ, KLOOKFMCDMG);
	}

	::System::Void JMIJKJPIOIJ(::System::Boolean FPFKJNCINEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JMIJKJPIOIJ_OFFSET))(this, FPFKJNCINEM);
	}

	::System::Void NFEBEIBINKB(::System::UInt32 BKLGNCBNEGM, ::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_NFEBEIBINKB_OFFSET))(this, BKLGNCBNEGM, LJMPPBEMEPP);
	}

	::MoleMole::Project::Config::BangbooDefenseDataTemplateExt* FIGNOLIMGDP()
	{
		return ((::MoleMole::Project::Config::BangbooDefenseDataTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_FIGNOLIMGDP_OFFSET))(this);
	}

	::System::Void BNJDKDADIMB(::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BNJDKDADIMB_OFFSET))(this, HKHHHJHCGKL);
	}

	::System::Void BOCDCGGIEGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BOCDCGGIEGB_OFFSET))(this);
	}

	::System::Boolean ADGDFMEELAI(::MoleMole::Battle::Entity* KEOOEPCGCIJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ADGDFMEELAI_OFFSET))(this, KEOOEPCGCIJ);
	}

	::System::Void ONIOLCDJMNO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ONIOLCDJMNO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void IJKGNBIKHMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_IJKGNBIKHMK_OFFSET))(this);
	}

	::System::Void PFGEOJPPJNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PFGEOJPPJNF_OFFSET))(this);
	}

	::System::Void EJPNEBOFCOB(::System::Int32 OICIDHAGAKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_EJPNEBOFCOB_OFFSET))(this, OICIDHAGAKN);
	}

	::System::Void BGFBOAKAKEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BGFBOAKAKEM_OFFSET))(this);
	}

	::System::Void PIOLFLEHIFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PIOLFLEHIFH_OFFSET))(this);
	}

	::System::Double CKKNMEGIKDB(::System::UInt32 FLEDHKJGAEP)
	{
		return ((::System::Double(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_CKKNMEGIKDB_OFFSET))(this, FLEDHKJGAEP);
	}

	::System::Void DNKJNJGIDFI(::System::UInt32 BKLGNCBNEGM, ::System::Double BGDDNHMJALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DNKJNJGIDFI_OFFSET))(this, BKLGNCBNEGM, BGDDNHMJALJ);
	}

	::System::Void KHBEBOILNOH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 KBKAGADINHJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KHBEBOILNOH_OFFSET))(this, KECKGDFIALJ, KBKAGADINHJ);
	}

	::System::Single KBGHEMIFHIO(::System::Int32 HKHHHJHCGKL, ::MoleMole::Battle::Entity* KLOOKFMCDMG)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KBGHEMIFHIO_OFFSET))(this, HKHHHJHCGKL, KLOOKFMCDMG);
	}

	::System::Void ABBKJEFKJMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ABBKJEFKJMM_OFFSET))(this);
	}

	::System::Void PGNLKMGNOOO(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PGNLKMGNOOO_OFFSET))(this, GJBHEJGENMI);
	}

	::Il2CppArray<::MoleMole::Battle::Entity*>* LJJBOOPDHHJ()
	{
		return ((::Il2CppArray<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LJJBOOPDHHJ_OFFSET))(this);
	}

	::System::Void BLIJJJNONMG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BLIJJJNONMG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CBFHPHNMEHK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_CBFHPHNMEHK_OFFSET))(this, PMNLNNGEIFM);
	}

	::MoleMole::Battle::Entity* CBEFDLCOEEP(::MoleMole::Battle::Entity* KLOOKFMCDMG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_CBEFDLCOEEP_OFFSET))(this, KLOOKFMCDMG);
	}

	::System::Void LFNAMFKAPBN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LFNAMFKAPBN_OFFSET))(this, KECKGDFIALJ);
	}

	::MoleMole::Battle::Entity* HGBFLAHNLII(::System::Int32 GIAOKGFENJD, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 EGNFACGIOGM, ::MoleMole::Config::CampType CGLJBLMHDED, ::System::String* NIOKCDMJHNC)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::CampType, ::System::String*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HGBFLAHNLII_OFFSET))(this, GIAOKGFENJD, OHOGDOMNHNK, EGNFACGIOGM, CGLJBLMHDED, NIOKCDMJHNC);
	}

	::System::Void CDJDDAHHBAB(::MoleMole::Battle::Entity* FINEANOLAPH, ::UnityEngine::Collider* CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_CDJDDAHHBAB_OFFSET))(this, FINEANOLAPH, CHIFPJGLFPK);
	}

	static ::System::Int32 EPEIEPODGIA(::System::Int32 KIADGHJNLAC, ::System::String* IIDKBMFGAOL, ::System::Single KHMMANBNPII)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_EPEIEPODGIA_OFFSET))(KIADGHJNLAC, IIDKBMFGAOL, KHMMANBNPII);
	}

	::System::Void AMEDPCKCNPK(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AMEDPCKCNPK_OFFSET))(this, FINEANOLAPH);
	}

	::System::Int32 IKFELBIDNCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_IKFELBIDNCH_OFFSET))(this);
	}

	::System::Int32 ELDJLLNHLFC(::MoleMole::Battle::Entity* KEOOEPCGCIJ)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ELDJLLNHLFC_OFFSET))(this, KEOOEPCGCIJ);
	}

	::System::Void PMADHEJBHKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PMADHEJBHKD_OFFSET))(this);
	}

	::System::Void BEKBPOMDKIK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BEKBPOMDKIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LEDNEBBBFFM(::MoleMole::Battle::Entity* KLOOKFMCDMG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LEDNEBBBFFM_OFFSET))(this, KLOOKFMCDMG);
	}

	::System::Single KBGHEMIFHIO_1(::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KBGHEMIFHIO_1_OFFSET))(this, HKHHHJHCGKL);
	}

	::System::Void HNLCBMOCOHB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HNLCBMOCOHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GGGHDNKGOCP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_GGGHDNKGOCP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PDNFPHHJACM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PDNFPHHJACM_OFFSET))(this);
	}

	::System::Void AIGDHDHDPEA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean FMDOHNJOOLG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AIGDHDHDPEA_OFFSET))(this, KECKGDFIALJ, FMDOHNJOOLG);
	}

	::System::Void MFKFEMJFJAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_MFKFEMJFJAI_OFFSET))(this);
	}

	::System::Single JOLJALOGIIN(::MoleMole::Battle::Entity* KEOOEPCGCIJ, ::MoleMole::Battle::Entity* KLOOKFMCDMG)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JOLJALOGIIN_OFFSET))(this, KEOOEPCGCIJ, KLOOKFMCDMG);
	}

	static ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA EPEIEPODGIA_1(::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA, ::System::String* IIDKBMFGAOL, ::System::Single EGEGIMGMJHN)
	{
		return ((::MoleMole::MonoTowerHolderObject_GMEBFGMDANA(*)(::MoleMole::MonoTowerHolderObject_GMEBFGMDANA, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_EPEIEPODGIA_1_OFFSET))(NEAOFNHMFOA, IIDKBMFGAOL, EGEGIMGMJHN);
	}

	::System::Boolean GIHDJAHBAGG(::System::Int32 IHDCGPLNEBJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_GIHDJAHBAGG_OFFSET))(this, IHDCGPLNEBJ);
	}

	::System::Boolean OGICJDOGGDF(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OGICJDOGGDF_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void ENMIOLCJINE(::System::Boolean MBJDMKCGOCK, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ENMIOLCJINE_OFFSET))(this, MBJDMKCGOCK, NEAOFNHMFOA);
	}

	::MoleMole::Battle::Entity* DPDHMCIEABG(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DPDHMCIEABG_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void HCAOOCCHEMF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HCAOOCCHEMF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JJDAMMBHMKN(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JJDAMMBHMKN_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void KFHPBGCDENN(::OHCPNBDKOCF* JHAPDHBKPBB, ::LCONPHCBECE* LGCJCGIHNAP)
	{
		return ((::System::Void(*)(::PVOID, ::OHCPNBDKOCF*, ::LCONPHCBECE*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KFHPBGCDENN_OFFSET))(this, JHAPDHBKPBB, LGCJCGIHNAP);
	}

	::System::Boolean FPPIIJIKFME(::System::String* CJBJONJDOLI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_FPPIIJIKFME_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void AFCHHCIAKAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AFCHHCIAKAF_OFFSET))(this);
	}

	::System::Void NLNHPDFMMCN(::LCONPHCBECE* LGCJCGIHNAP)
	{
		return ((::System::Void(*)(::PVOID, ::LCONPHCBECE*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_NLNHPDFMMCN_OFFSET))(this, LGCJCGIHNAP);
	}

	::System::Void NBOHAOHFNCM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_NBOHAOHFNCM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PIMPOLIBBCO(::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PIMPOLIBBCO_OFFSET))(this, HKHHHJHCGKL);
	}

	::System::Single LFPOBICHFGO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LFPOBICHFGO_OFFSET))(this);
	}

	::System::Void DKLLJCLOHOA(::System::Action_1<::System::UInt32>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_DKLLJCLOHOA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Int32 PIOBFIGJNDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PIOBFIGJNDA_OFFSET))(this);
	}

	::System::Void BNCGCMHOIEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BNCGCMHOIEG_OFFSET))(this);
	}

	::System::Void LJFCEJPODFJ(::System::Int32 HKHHHJHCGKL, ::System::Int32 HBCIPEBHKKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LJFCEJPODFJ_OFFSET))(this, HKHHHJHCGKL, HBCIPEBHKKP);
	}

	::System::Int32 GKOFDGCLAFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_GKOFDGCLAFH_OFFSET))(this);
	}

	::UnityEngine::Vector3 IMHGAEJOKMD(::System::String* CJBJONJDOLI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_IMHGAEJOKMD_OFFSET))(this, CJBJONJDOLI);
	}

	::UnityEngine::Vector3 ELPAFCJNLFK(::System::String* AICLCHNJHJH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ELPAFCJNLFK_OFFSET))(this, AICLCHNJHJH);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* KJJPBPNCOFN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_KJJPBPNCOFN_OFFSET))(this);
	}

	::FFMLNPDMJNI EIONHFDDAAD(::MoleMole::Battle::Entity* KEOOEPCGCIJ)
	{
		return ((::FFMLNPDMJNI(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_EIONHFDDAAD_OFFSET))(this, KEOOEPCGCIJ);
	}

	::System::Void FOAMMNHFNLL(::System::UInt32 BKLGNCBNEGM, ::System::Boolean FKKFMCIJGJC, ::System::Boolean EPGPDDPDKDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_FOAMMNHFNLL_OFFSET))(this, BKLGNCBNEGM, FKKFMCIJGJC, EPGPDDPDKDN);
	}

	::System::Boolean PHGAMGCIKGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PHGAMGCIKGJ_OFFSET))(this);
	}

	::System::Void BDDEGFFEAJN(::System::UInt32 FLEDHKJGAEP, ::KDMGNLLDLIJ FILDLLIMAAC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KDMGNLLDLIJ))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BDDEGFFEAJN_OFFSET))(this, FLEDHKJGAEP, FILDLLIMAAC);
	}

	::System::Void MMIILDMDMNA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_MMIILDMDMNA_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void INAGEMJILLK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_INAGEMJILLK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HCPMDONDINB(::GHJIOKAAJPK_FNIDGMJNACO CBBCJFPGBOK, ::System::UInt32 BKLGNCBNEGM, ::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::GHJIOKAAJPK_FNIDGMJNACO, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HCPMDONDINB_OFFSET))(this, CBBCJFPGBOK, BKLGNCBNEGM, LJMPPBEMEPP);
	}

	::MoleMole::MonoTowerHolderObject* PBHPCGDHLBC(::MoleMole::Battle::Entity* FJFBMMMMNDE)
	{
		return ((::MoleMole::MonoTowerHolderObject*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PBHPCGDHLBC_OFFSET))(this, FJFBMMMMNDE);
	}

	::System::Void AECGDEEPBMO(::EDOKGCBMFKB* LHFGDMKIDAP)
	{
		return ((::System::Void(*)(::PVOID, ::EDOKGCBMFKB*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AECGDEEPBMO_OFFSET))(this, LHFGDMKIDAP);
	}

	::System::Void PCLMINHKONC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PCLMINHKONC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FLGMOFKKOPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_FLGMOFKKOPF_OFFSET))(this);
	}

	::UnityEngine::Vector3 ADNFIAPFELJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ADNFIAPFELJ_OFFSET))(this);
	}

	::System::Void HJPHMMNADIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HJPHMMNADIM_OFFSET))(this);
	}

	::System::Void LCHHMMKLOOB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_LCHHMMKLOOB_OFFSET))(this, KECKGDFIALJ, JKBLDFBGBPK);
	}

	::System::Void AEIFFAIFKAO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AEIFFAIFKAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ELHKMMGMOIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ELHKMMGMOIJ_OFFSET))(this);
	}

	::System::Void BICEOEJPOCH(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BICEOEJPOCH_OFFSET))(this, FINEANOLAPH);
	}

	::System::Void BJOLHOHPKAC(::MoleMole::Battle::Entity* KLOOKFMCDMG, ::System::Boolean KKNPFPNPAOK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_BJOLHOHPKAC_OFFSET))(this, KLOOKFMCDMG, KKNPFPNPAOK);
	}

	::System::Void OLLLICGKKKI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OLLLICGKKKI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void EDDPCJLFIEJ(::System::Collections::Generic::List_1<::System::Int32>* NJEEJPKBOPF, ::System::Int32 AEBBDCHCODE, ::System::UInt32 KLJNHMGMDNP, ::System::Collections::Generic::List_1<::System::Int32>* DNFEPFHKJCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_EDDPCJLFIEJ_OFFSET))(this, NJEEJPKBOPF, AEBBDCHCODE, KLJNHMGMDNP, DNFEPFHKJCJ);
	}

	::MIKNHNMBLPO* JDKPGNJNIDG(::System::Int32 IHDCGPLNEBJ)
	{
		return ((::MIKNHNMBLPO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JDKPGNJNIDG_OFFSET))(this, IHDCGPLNEBJ);
	}

	::System::Boolean JIDJKFFIEGJ(::System::UInt32 GIAOKGFENJD, ::UnityEngine::Vector3& IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JIDJKFFIEGJ_OFFSET))(this, GIAOKGFENJD, IACKHFCLPJI);
	}

	::UnityEngine::Vector3 JIOCCNABIBG(::System::Int32 IHDCGPLNEBJ)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JIOCCNABIBG_OFFSET))(this, IHDCGPLNEBJ);
	}

	::MoleMole::CommonSceneTrigger* AJBBLNCNEFJ(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::MoleMole::CommonSceneTrigger*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AJBBLNCNEFJ_OFFSET))(this, IAPKABMDJNF, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::System::Void MHPLMJHCOKJ(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_MHPLMJHCOKJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Int32 OHBJPIAJMCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OHBJPIAJMCB_OFFSET))(this);
	}

	::System::Void AFAIGNLHKAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_AFAIGNLHKAJ_OFFSET))(this);
	}

	::System::Void POPMOKAKOEO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_POPMOKAKOEO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MMMKMCCMMFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_MMMKMCCMMFD_OFFSET))(this);
	}

	static ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA HNNHEIFANGE(::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC)
	{
		return ((::MoleMole::MonoTowerHolderObject_GMEBFGMDANA(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_HNNHEIFANGE_OFFSET))(DJLOKMMLFJC);
	}

	::System::Void OMOIONEIADM(::System::UInt32 EIELGMNAHGJ, ::System::UInt32 KFODJOEKOAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OMOIONEIADM_OFFSET))(this, EIELGMNAHGJ, KFODJOEKOAG);
	}

	::System::Void CNJJLCJOADK(::System::UInt32 BKLGNCBNEGM, ::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_CNJJLCJOADK_OFFSET))(this, BKLGNCBNEGM, LJMPPBEMEPP);
	}

	::OHCPNBDKOCF* OJNPAMOIOPL_1(::System::Int32 IHDCGPLNEBJ)
	{
		return ((::OHCPNBDKOCF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OJNPAMOIOPL_1_OFFSET))(this, IHDCGPLNEBJ);
	}

	::System::Void OEKNNGJINFG(::MIKNHNMBLPO* JAJENNKOKFK, ::LCONPHCBECE* LGCJCGIHNAP)
	{
		return ((::System::Void(*)(::PVOID, ::MIKNHNMBLPO*, ::LCONPHCBECE*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_OEKNNGJINFG_OFFSET))(this, JAJENNKOKFK, LGCJCGIHNAP);
	}

	::System::Void GHOJCDLDIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_GHOJCDLDIMF_OFFSET))(this);
	}

	::System::Single ANFKIOODLCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_ANFKIOODLCO_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* PLAIEPIDKLP(::System::Int32 KFODJOEKOAG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PLAIEPIDKLP_OFFSET))(this, KFODJOEKOAG);
	}

	::UnityEngine::Vector3 JDIKCHGGEDC(::UnityEngine::Vector3 JMLDADLOOFN)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_JDIKCHGGEDC_OFFSET))(this, JMLDADLOOFN);
	}
};
