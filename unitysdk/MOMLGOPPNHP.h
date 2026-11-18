#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDBGIKANBDA.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/OAFODIJDBFB.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CAPAFILOMGC;
class CDMFPNFKOID;
class EDFFEKOBFLJ;
class EIMHGJELHGN;
class ENGKPGFGGLM;
class FAEFBCEAIMC;
class FAOLDKHFLCM;
class LFNPJHAFKMJ;
class MPFIAJIIAEH;
class PPAAHJMDPAO;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define MOMLGOPPNHP_AGGFONFNCBO_OFFSET UNITYSDK_OFFSET(0x151F7D20)
#define MOMLGOPPNHP_AIEENMEDJMD_OFFSET UNITYSDK_OFFSET(0x151FC4C0)
#define MOMLGOPPNHP_AOBFNJLAHAN_OFFSET UNITYSDK_OFFSET(0x11E471D0)
#define MOMLGOPPNHP_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x11E473E0)
#define MOMLGOPPNHP_BAFHMHNGPHM_OFFSET UNITYSDK_OFFSET(0x151FB0A0)
#define MOMLGOPPNHP_BBAKIKOOKCH_OFFSET UNITYSDK_OFFSET(0x11E46220)
#define MOMLGOPPNHP_BGEGJOBNEOG_OFFSET UNITYSDK_OFFSET(0x151FE6D0)
#define MOMLGOPPNHP_BGPJDOHCIBL_OFFSET UNITYSDK_OFFSET(0x11E45C90)
#define MOMLGOPPNHP_BLAFFJMBCDI_OFFSET UNITYSDK_OFFSET(0x11E45DC0)
#define MOMLGOPPNHP_BLNNDKDBOND_OFFSET UNITYSDK_OFFSET(0x11E48170)
#define MOMLGOPPNHP_BNMEBDHEMNG_OFFSET UNITYSDK_OFFSET(0x151FE2E0)
#define MOMLGOPPNHP_CMCHDDFGAFE_OFFSET UNITYSDK_OFFSET(0x151FAAA0)
#define MOMLGOPPNHP_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11E48210)
#define MOMLGOPPNHP_CNEBKIAOOOK_OFFSET UNITYSDK_OFFSET(0x151FA6A0)
#define MOMLGOPPNHP_CPKEJKBAFEH_OFFSET UNITYSDK_OFFSET(0x151FEB30)
#define MOMLGOPPNHP_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x151F7500)
#define MOMLGOPPNHP_DBKIDLJBOGP_OFFSET UNITYSDK_OFFSET(0x11E470E0)
#define MOMLGOPPNHP_DCOMOCLBFFI_OFFSET UNITYSDK_OFFSET(0x11E40D50)
#define MOMLGOPPNHP_DCPMFDPIAHO_OFFSET UNITYSDK_OFFSET(0x11E47CE0)
#define MOMLGOPPNHP_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x151FE760)
#define MOMLGOPPNHP_DMBJHOCACML_OFFSET UNITYSDK_OFFSET(0x151F74B0)
#define MOMLGOPPNHP_EFFDPIADCJH_OFFSET UNITYSDK_OFFSET(0x11E440F0)
#define MOMLGOPPNHP_EHCEPGLMNBB_OFFSET UNITYSDK_OFFSET(0x11E40D00)
#define MOMLGOPPNHP_EIPHIGMFMEM_OFFSET UNITYSDK_OFFSET(0x151FD740)
#define MOMLGOPPNHP_EJCGGCODPKJ_OFFSET UNITYSDK_OFFSET(0x11E47C80)
#define MOMLGOPPNHP_EPIPNEPMJGO_OFFSET UNITYSDK_OFFSET(0x11E43FA0)
#define MOMLGOPPNHP_FBIICEKNJCA_OFFSET UNITYSDK_OFFSET(0x151FB6F0)
#define MOMLGOPPNHP_FHEFMNEKKFF_OFFSET UNITYSDK_OFFSET(0x151FE920)
#define MOMLGOPPNHP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x151F8320)
#define MOMLGOPPNHP_FNFCMEFGGCC_OFFSET UNITYSDK_OFFSET(0x11E45BD0)
#define MOMLGOPPNHP_GFGHDFDNHDF_OFFSET UNITYSDK_OFFSET(0x151FEEA0)
#define MOMLGOPPNHP_GIBKOOCKEIK_OFFSET UNITYSDK_OFFSET(0x151FB490)
#define MOMLGOPPNHP_GKJJBEBNPAB_OFFSET UNITYSDK_OFFSET(0x151FCA50)
#define MOMLGOPPNHP_GLPJCGOPBHD_OFFSET UNITYSDK_OFFSET(0x11E482A0)
#define MOMLGOPPNHP_HALNEONMKIF_OFFSET UNITYSDK_OFFSET(0x151FCE60)
#define MOMLGOPPNHP_HGACALPDCJI_OFFSET UNITYSDK_OFFSET(0x151F8F50)
#define MOMLGOPPNHP_HIDMDFONEJN_OFFSET UNITYSDK_OFFSET(0x11E45C30)
#define MOMLGOPPNHP_HIFOHAHDJPM_OFFSET UNITYSDK_OFFSET(0x11E45A40)
#define MOMLGOPPNHP_HLLCOOKANEH_OFFSET UNITYSDK_OFFSET(0x151FDF20)
#define MOMLGOPPNHP_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x151FEBC0)
#define MOMLGOPPNHP_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x151FD810)
#define MOMLGOPPNHP_IDNFDDPOMHB_OFFSET UNITYSDK_OFFSET(0x11E47830)
#define MOMLGOPPNHP_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x151FC120)
#define MOMLGOPPNHP_IGJKKAJEIGJ_OFFSET UNITYSDK_OFFSET(0x151FB920)
#define MOMLGOPPNHP_IJAODJNEPLK_OFFSET UNITYSDK_OFFSET(0x151F98B0)
#define MOMLGOPPNHP_IKIGKAEJICE_OFFSET UNITYSDK_OFFSET(0x151FDB20)
#define MOMLGOPPNHP_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x151FB400)
#define MOMLGOPPNHP_JBONJDBGEGA_OFFSET UNITYSDK_OFFSET(0x151FAC10)
#define MOMLGOPPNHP_JEFJKBLDPKC_OFFSET UNITYSDK_OFFSET(0x11E48460)
#define MOMLGOPPNHP_JFDCACOBGBG_OFFSET UNITYSDK_OFFSET(0x151FBAB0)
#define MOMLGOPPNHP_JMDEHKDGECI_OFFSET UNITYSDK_OFFSET(0x151FBB50)
#define MOMLGOPPNHP_JMNFGDINAFE_OFFSET UNITYSDK_OFFSET(0x151FE960)
#define MOMLGOPPNHP_JNGLOMKHKBN_OFFSET UNITYSDK_OFFSET(0x151FD7D0)
#define MOMLGOPPNHP_KCGJHOHAHGH_OFFSET UNITYSDK_OFFSET(0x11E46730)
#define MOMLGOPPNHP_KHFHEFBNKPN_OFFSET UNITYSDK_OFFSET(0x11E40B70)
#define MOMLGOPPNHP_KJBBOKMJCEE_OFFSET UNITYSDK_OFFSET(0x151F8970)
#define MOMLGOPPNHP_KJDJBLJCCFK_OFFSET UNITYSDK_OFFSET(0x11E43C00)
#define MOMLGOPPNHP_KMEOKMICIGF_OFFSET UNITYSDK_OFFSET(0x11E432D0)
#define MOMLGOPPNHP_KMOPGGIHNFC_OFFSET UNITYSDK_OFFSET(0x151FC630)
#define MOMLGOPPNHP_KMPAHELKCKL_OFFSET UNITYSDK_OFFSET(0x151F9540)
#define MOMLGOPPNHP_KNCBOAFILKM_OFFSET UNITYSDK_OFFSET(0x11E47D20)
#define MOMLGOPPNHP_KNODPEOPPFG_OFFSET UNITYSDK_OFFSET(0x11E47390)
#define MOMLGOPPNHP_KOJKAKKFCAM_OFFSET UNITYSDK_OFFSET(0x151FA4E0)
#define MOMLGOPPNHP_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x11E479A0)
#define MOMLGOPPNHP_KPLHMEKKMMH_OFFSET UNITYSDK_OFFSET(0x151F9DE0)
#define MOMLGOPPNHP_LAOKKJGIHGN_OFFSET UNITYSDK_OFFSET(0x11E46430)
#define MOMLGOPPNHP_LKMBEKHLLMB_OFFSET UNITYSDK_OFFSET(0x151FDD50)
#define MOMLGOPPNHP_LLLFMMKGCCK_OFFSET UNITYSDK_OFFSET(0x11E40E00)
#define MOMLGOPPNHP_LOMNGFNBIHF_OFFSET UNITYSDK_OFFSET(0x11E41260)
#define MOMLGOPPNHP_MAEJFEHLHEO_OFFSET UNITYSDK_OFFSET(0x11E45F70)
#define MOMLGOPPNHP_MDJLBAAFHGN_OFFSET UNITYSDK_OFFSET(0x11E47A80)
#define MOMLGOPPNHP_MFCFLBOIAKK_OFFSET UNITYSDK_OFFSET(0x151F8D80)
#define MOMLGOPPNHP_MGLDGOKFMOK_OFFSET UNITYSDK_OFFSET(0x11E46170)
#define MOMLGOPPNHP_MKJKPJLBGLG_OFFSET UNITYSDK_OFFSET(0x151FC1B0)
#define MOMLGOPPNHP_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x11E480E0)
#define MOMLGOPPNHP_MNOCOAPNNNJ_OFFSET UNITYSDK_OFFSET(0x151FADE0)
#define MOMLGOPPNHP_NDFLMKEIGDC_OFFSET UNITYSDK_OFFSET(0x151F92F0)
#define MOMLGOPPNHP_NFADEGJBFGP_OFFSET UNITYSDK_OFFSET(0x151F8DE0)
#define MOMLGOPPNHP_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x151F9820)
#define MOMLGOPPNHP_NKJOOCMNDIN_OFFSET UNITYSDK_OFFSET(0x11E46F40)
#define MOMLGOPPNHP_NNENLMKHAIA_OFFSET UNITYSDK_OFFSET(0x11E474E0)
#define MOMLGOPPNHP_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x151F8760)
#define MOMLGOPPNHP_ODOKNNDOADB_OFFSET UNITYSDK_OFFSET(0x151FDA80)
#define MOMLGOPPNHP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x151F7240)
#define MOMLGOPPNHP_OPCACNBLIFK_OFFSET UNITYSDK_OFFSET(0x11E46980)
#define MOMLGOPPNHP_PEJJMFJPKIL_OFFSET UNITYSDK_OFFSET(0x151FDB80)
#define MOMLGOPPNHP_PEOHAACBPCE_OFFSET UNITYSDK_OFFSET(0x11E413E0)
#define MOMLGOPPNHP_PLIEAHCCJAH_OFFSET UNITYSDK_OFFSET(0x151FC7F0)
#define MOMLGOPPNHP_POMBNMAMNPL_OFFSET UNITYSDK_OFFSET(0x151F71F0)
#define MOMLGOPPNHP_START_OFFSET UNITYSDK_OFFSET(0x151F6FB0)
#define MOMLGOPPNHP_UPDATE_OFFSET UNITYSDK_OFFSET(0x151F7900)
#define MOMLGOPPNHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x151F8710)
#define MOMLGOPPNHP__CTOR_OFFSET UNITYSDK_OFFSET(0x151F84C0)

inline static constexpr unsigned int MOMLGOPPNHP_TypeDefinitionIndex = 50856;

class MOMLGOPPNHP : public ::OAOOLPCNHKA
{
public:
	static ::MOMLGOPPNHP** StaticGet_PMKINFHDLFD()
	{
		return (::MOMLGOPPNHP**)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0x36850);
	}
	static ::System::Single* StaticGet_GDDPGKOLPMA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC350);
	}
	static ::System::Boolean* StaticGet_LICNCNBIIAD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC354);
	}
	static ::BDBGIKANBDA* StaticGet_MLGONMIDMGG()
	{
		return (::BDBGIKANBDA*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC355);
	}
	static ::System::Single* StaticGet_PACGOHMNMHB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC358);
	}
	static ::OAFODIJDBFB* StaticGet_INNBGHACFBC()
	{
		return (::OAFODIJDBFB*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC35C);
	}
	static ::System::Single* StaticGet_FKHBJBDPIFP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC360);
	}
	static ::System::Boolean* StaticGet_OMOLPIAFNCM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC364);
	}
	static ::System::Boolean* StaticGet_PANNGGEEFMC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC365);
	}
	static ::System::Boolean* StaticGet_NDFFLOJAELB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC366);
	}
	static ::System::Single* StaticGet_IOLNHGCLNDB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0xC368);
	}
	static ::FAEFBCEAIMC** StaticGet_GGEFCNOPDIG()
	{
		return (::FAEFBCEAIMC**)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::MPFIAJIIAEH** StaticGet_PGAKMOPJPGI()
	{
		return (::MPFIAJIIAEH**)Il2CppClass::FromTypeDefinitionIndex(MOMLGOPPNHP_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 EPPBJOKKLPN = 0x2; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* JEGKIEMPJNK; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JEBGMEMGOBL; // 0x28
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x30
	::MPFIAJIIAEH* NBNBFHAOPBF; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* IMECEPNOMNA; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* EHJOBMJFEGK; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* OMLMEPPMFHM; // 0x50
	::System::Collections::Generic::List_1<::FAEFBCEAIMC*>* LIKMLCFMEDE; // 0x58
	::Unity::Jobs::JobHandle MACLLGJEDAK; // 0x60
	::System::Boolean HDNKBMFNMPM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NPIJFJJOBCA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void KJBBOKMJCEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KJBBOKMJCEE_OFFSET))(this);
	}

	static ::System::Boolean MFCFLBOIAKK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MFCFLBOIAKK_OFFSET))();
	}

	static ::System::Void NFADEGJBFGP(::CDMFPNFKOID* LPLMLFIMPEL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::CDMFPNFKOID*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NFADEGJBFGP_OFFSET))(LPLMLFIMPEL, KECKGDFIALJ);
	}

	::System::Void NDFLMKEIGDC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NDFLMKEIGDC_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void KMPAHELKCKL(::FAEFBCEAIMC* GBNDHKNLFJC, ::MPFIAJIIAEH* FHPEMMJFKBL)
	{
		return ((::System::Void(*)(::FAEFBCEAIMC*, ::MPFIAJIIAEH*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KMPAHELKCKL_OFFSET))(GBNDHKNLFJC, FHPEMMJFKBL);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::System::Void IJAODJNEPLK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* KPIAFDELPJL, ::System::Collections::Generic::List_1<::System::Object*>* HGKANJHHLMF)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IJAODJNEPLK_OFFSET))(KECKGDFIALJ, KPIAFDELPJL, HGKANJHHLMF);
	}

	static ::System::Void KPLHMEKKMMH(::MoleMole::EntityHandle HPADNAEINPK, ::System::Int32 JMONBEHKFMI, ::System::Action* EJKHBFHKEDI)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KPLHMEKKMMH_OFFSET))(HPADNAEINPK, JMONBEHKFMI, EJKHBFHKEDI);
	}

	static ::MoleMole::AttackType CMCHDDFGAFE(::System::String* BHEIEAJEEPL, ::MoleMole::AttackType ONHKNNMFIBG)
	{
		return ((::MoleMole::AttackType(*)(::System::String*, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_CMCHDDFGAFE_OFFSET))(BHEIEAJEEPL, ONHKNNMFIBG);
	}

	static ::System::Void JBONJDBGEGA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_JBONJDBGEGA_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void MNOCOAPNNNJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MNOCOAPNNNJ_OFFSET))(KECKGDFIALJ, KPIAFDELPJL);
	}

	::System::Void BAFHMHNGPHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BAFHMHNGPHM_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_INEGOEGIOKM_OFFSET))(this);
	}

	::System::Void GIBKOOCKEIK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_GIBKOOCKEIK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AGGFONFNCBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_AGGFONFNCBO_OFFSET))(this);
	}

	::System::Void FBIICEKNJCA(::System::Boolean FMPODIEBEGF, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_FBIICEKNJCA_OFFSET))(this, FMPODIEBEGF, KECKGDFIALJ);
	}

	::System::Void JFDCACOBGBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_JFDCACOBGBG_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void IGJKKAJEIGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IGJKKAJEIGJ_OFFSET))(this);
	}

	::System::Void JMDEHKDGECI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_JMDEHKDGECI_OFFSET))(this);
	}

	static ::System::Int32 KOJKAKKFCAM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KOJKAKKFCAM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MKJKPJLBGLG(::EIMHGJELHGN* GFPINKJPPBC, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MKJKPJLBGLG_OFFSET))(GFPINKJPPBC, FIPHFGHNNBE);
	}

	static ::System::Boolean AIEENMEDJMD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_AIEENMEDJMD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void KMOPGGIHNFC(::MoleMole::EntityHandle HPADNAEINPK, ::System::Boolean JOFEHPHLCJF, ::System::Action_2<::System::UInt32, ::System::Boolean>* MLJIJKCCGKK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KMOPGGIHNFC_OFFSET))(HPADNAEINPK, JOFEHPHLCJF, MLJIJKCCGKK);
	}

	static ::System::Boolean PLIEAHCCJAH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean GEJMELMKPBK)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_PLIEAHCCJAH_OFFSET))(KECKGDFIALJ, GEJMELMKPBK);
	}

	static ::System::Void GKJJBEBNPAB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_GKJJBEBNPAB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HALNEONMKIF(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_HALNEONMKIF_OFFSET))(GFPINKJPPBC);
	}

	static ::System::Void JNGLOMKHKBN(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_JNGLOMKHKBN_OFFSET))(GFPINKJPPBC);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void ODOKNNDOADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_ODOKNNDOADB_OFFSET))(this);
	}

	static ::System::Boolean IKIGKAEJICE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IKIGKAEJICE_OFFSET))();
	}

	static ::System::Void PEJJMFJPKIL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_PEJJMFJPKIL_OFFSET))();
	}

	static ::System::Void LKMBEKHLLMB(::OAFODIJDBFB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::OAFODIJDBFB))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_LKMBEKHLLMB_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void POMBNMAMNPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_POMBNMAMNPL_OFFSET))(this);
	}

	static ::System::Void HLLCOOKANEH(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_HLLCOOKANEH_OFFSET))(GFPINKJPPBC);
	}

	::System::Void BNMEBDHEMNG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BNMEBDHEMNG_OFFSET))(this, KECKGDFIALJ);
	}

	static ::MPFIAJIIAEH* BGEGJOBNEOG()
	{
		return ((::MPFIAJIIAEH*(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BGEGJOBNEOG_OFFSET))();
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void FHEFMNEKKFF(::System::String* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_FHEFMNEKKFF_OFFSET))(NGHLLDAJJJE);
	}

	static ::System::Void CNEBKIAOOOK(::MoleMole::EntityHandle HPADNAEINPK, ::System::String* OIODEOMGMHM, ::System::Action_2<::System::UInt32, ::System::Boolean>* AALDMFFADIO)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_CNEBKIAOOOK_OFFSET))(HPADNAEINPK, OIODEOMGMHM, AALDMFFADIO);
	}

	static ::System::Void JMNFGDINAFE(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_JMNFGDINAFE_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void HGACALPDCJI(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_HGACALPDCJI_OFFSET))(GFPINKJPPBC);
	}

	::System::Void DMBJHOCACML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_DMBJHOCACML_OFFSET))(this);
	}

	static ::FAEFBCEAIMC* CPKEJKBAFEH()
	{
		return ((::FAEFBCEAIMC*(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_CPKEJKBAFEH_OFFSET))();
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Single EIPHIGMFMEM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_EIPHIGMFMEM_OFFSET))();
	}

	static ::System::Void GFGHDFDNHDF(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_GFGHDFDNHDF_OFFSET))(ABHBKFJKINO);
	}

	static ::System::Void KHFHEFBNKPN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean FBILHHBPEHD, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KHFHEFBNKPN_OFFSET))(KECKGDFIALJ, FBILHHBPEHD, AELLPLBJELA);
	}

	static ::System::Void EHCEPGLMNBB(::EIMHGJELHGN* FJBJHJEFHFM, ::System::Boolean DEBGKPLOPCG, ::System::Int32 FKMHMOELCIO)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_EHCEPGLMNBB_OFFSET))(FJBJHJEFHFM, DEBGKPLOPCG, FKMHMOELCIO);
	}

	static ::MoleMole::AttackType DCOMOCLBFFI(::EIMHGJELHGN* HBNBIBADGNH, ::CAPAFILOMGC* NDFPJJOLLLH, ::System::Boolean LKDIGCGFGLB)
	{
		return ((::MoleMole::AttackType(*)(::EIMHGJELHGN*, ::CAPAFILOMGC*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_DCOMOCLBFFI_OFFSET))(HBNBIBADGNH, NDFPJJOLLLH, LKDIGCGFGLB);
	}

	static ::System::Void LOMNGFNBIHF(::FAOLDKHFLCM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::FAOLDKHFLCM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_LOMNGFNBIHF_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void PEOHAACBPCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_PEOHAACBPCE_OFFSET))(this);
	}

	::System::Void KJDJBLJCCFK(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::PVOID, ::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KJDJBLJCCFK_OFFSET))(this, GFPINKJPPBC);
	}

	static ::System::Void EPIPNEPMJGO(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_EPIPNEPMJGO_OFFSET))(GFPINKJPPBC);
	}

	::System::Void EFFDPIADCJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_EFFDPIADCJH_OFFSET))(this);
	}

	::System::Void HIFOHAHDJPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_HIFOHAHDJPM_OFFSET))(this);
	}

	static ::System::Void FNFCMEFGGCC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_FNFCMEFGGCC_OFFSET))(EGEGIMGMJHN);
	}

	static ::OAFODIJDBFB HIDMDFONEJN()
	{
		return ((::OAFODIJDBFB(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_HIDMDFONEJN_OFFSET))();
	}

	static ::System::Boolean BGPJDOHCIBL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BGPJDOHCIBL_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void BLAFFJMBCDI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BLAFFJMBCDI_OFFSET))(EGEGIMGMJHN);
	}

	::System::Boolean MAEJFEHLHEO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MAEJFEHLHEO_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::String* MGLDGOKFMOK(::System::Int32 PBCMNKKGKBL, ::System::Boolean& GIPECNMEEPB)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MGLDGOKFMOK_OFFSET))(PBCMNKKGKBL, GIPECNMEEPB);
	}

	::System::Void KMEOKMICIGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KMEOKMICIGF_OFFSET))(this);
	}

	::System::Void BBAKIKOOKCH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BBAKIKOOKCH_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void LAOKKJGIHGN(::MoleMole::EntityHandle HPADNAEINPK, ::System::Boolean KPCAJMIJJKL, ::System::Action_2<::System::UInt32, ::System::Boolean>* MMFFAFJBEGN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_LAOKKJGIHGN_OFFSET))(HPADNAEINPK, KPCAJMIJJKL, MMFFAFJBEGN);
	}

	static ::System::Void NKJOOCMNDIN(::EDFFEKOBFLJ* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::EDFFEKOBFLJ*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NKJOOCMNDIN_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Single DBKIDLJBOGP(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_DBKIDLJBOGP_OFFSET))(CJBJONJDOLI);
	}

	static ::System::Void AOBFNJLAHAN(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_AOBFNJLAHAN_OFFSET))(GFPINKJPPBC);
	}

	static ::System::Void KNODPEOPPFG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KNODPEOPPFG_OFFSET))(KECKGDFIALJ, HLFFCMIFFIB);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void NNENLMKHAIA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NNENLMKHAIA_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void KCGJHOHAHGH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KCGJHOHAHGH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void OPCACNBLIFK(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_OPCACNBLIFK_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Void IDNFDDPOMHB(::PPAAHJMDPAO*& OBIPHBKODPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PMAMMGFJAJL, ::System::Boolean& MEMFOPOGIBN, ::System::Single& GIGALCMPJMO)
	{
		return ((::System::Void(*)(::PPAAHJMDPAO*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IDNFDDPOMHB_OFFSET))(OBIPHBKODPP, PMAMMGFJAJL, MEMFOPOGIBN, GIGALCMPJMO);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean MDJLBAAFHGN(::MoleMole::EntityHandle HPADNAEINPK, ::System::Action_2<::System::UInt32, ::System::Boolean>* AJFFIBBGBCG)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MDJLBAAFHGN_OFFSET))(HPADNAEINPK, AJFFIBBGBCG);
	}

	static ::System::Boolean EJCGGCODPKJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOMLGOPPNHP_EJCGGCODPKJ_OFFSET))();
	}

	static ::System::Void DCPMFDPIAHO(::UnityEngine::Component* DJDHFOBBJNC)
	{
		return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_DCPMFDPIAHO_OFFSET))(DJDHFOBBJNC);
	}

	static ::System::Void KNCBOAFILKM(::MoleMole::EntityHandle CBNJBECJDHO, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* ALIJOJGCPKN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KNCBOAFILKM_OFFSET))(CBNJBECJDHO, ALIJOJGCPKN);
	}

	static ::System::Void LLLFMMKGCCK(::EIMHGJELHGN* JLLAMEIACCM, ::CAPAFILOMGC* NDFPJJOLLLH)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*, ::CAPAFILOMGC*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_LLLFMMKGCCK_OFFSET))(JLLAMEIACCM, NDFPJJOLLLH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void BLNNDKDBOND(::LFNPJHAFKMJ* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::LFNPJHAFKMJ*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_BLNNDKDBOND_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void GLPJCGOPBHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_GLPJCGOPBHD_OFFSET))(this);
	}

	static ::System::Void JEFJKBLDPKC(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_JEFJKBLDPKC_OFFSET))(GFPINKJPPBC);
	}
};
