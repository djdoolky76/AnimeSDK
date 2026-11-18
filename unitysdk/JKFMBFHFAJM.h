#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class ENGKPGFGGLM;
class LCFMHELLMAL;
class LKEOMDKHKJE;
class LOBFHOCEDJP;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKFMBFHFAJM_AAPLCLFOAPL_OFFSET UNITYSDK_OFFSET(0x1385C350)
#define JKFMBFHFAJM_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x1385CDE0)
#define JKFMBFHFAJM_ANLOBIGCMDN_OFFSET UNITYSDK_OFFSET(0x1385BAB0)
#define JKFMBFHFAJM_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1385CAD0)
#define JKFMBFHFAJM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1385BC50)
#define JKFMBFHFAJM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13858EC0)
#define JKFMBFHFAJM_DDNBEGNGPMK_OFFSET UNITYSDK_OFFSET(0x1385AC70)
#define JKFMBFHFAJM_ECNHPJBAHAF_OFFSET UNITYSDK_OFFSET(0x1385C6B0)
#define JKFMBFHFAJM_EDDNLCMLLOL_OFFSET UNITYSDK_OFFSET(0x1385C8B0)
#define JKFMBFHFAJM_FCBJINJHMNI_OFFSET UNITYSDK_OFFSET(0x13859DC0)
#define JKFMBFHFAJM_GILMNAFMKDC_OFFSET UNITYSDK_OFFSET(0x1385A630)
#define JKFMBFHFAJM_HBNLFNHMBHB_OFFSET UNITYSDK_OFFSET(0x1385C770)
#define JKFMBFHFAJM_HBNOJFBFOPP_OFFSET UNITYSDK_OFFSET(0x1385C780)
#define JKFMBFHFAJM_HILFLNPGPDK_OFFSET UNITYSDK_OFFSET(0x1385B830)
#define JKFMBFHFAJM_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1385A0E0)
#define JKFMBFHFAJM_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1385C7D0)
#define JKFMBFHFAJM_IHHANCDKPBN_OFFSET UNITYSDK_OFFSET(0x1385CE70)
#define JKFMBFHFAJM_JCELLNLBDLL_OFFSET UNITYSDK_OFFSET(0x1385BCE0)
#define JKFMBFHFAJM_JIADFNCKAHE_OFFSET UNITYSDK_OFFSET(0x1385B630)
#define JKFMBFHFAJM_JLAOOEMGFJB_OFFSET UNITYSDK_OFFSET(0x1385CFD0)
#define JKFMBFHFAJM_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x1385C6A0)
#define JKFMBFHFAJM_KKPEOHACHFK_OFFSET UNITYSDK_OFFSET(0x1385BEB0)
#define JKFMBFHFAJM_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x13859C60)
#define JKFMBFHFAJM_KPMAAFCKGLN_OFFSET UNITYSDK_OFFSET(0x1385B0F0)
#define JKFMBFHFAJM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x138593F0)
#define JKFMBFHFAJM_LDICBBPPHAE_OFFSET UNITYSDK_OFFSET(0x1385BD30)
#define JKFMBFHFAJM_LDNIDEPBBON_OFFSET UNITYSDK_OFFSET(0x1385AB80)
#define JKFMBFHFAJM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1385CF40)
#define JKFMBFHFAJM_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x1385BE20)
#define JKFMBFHFAJM_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1385CD50)
#define JKFMBFHFAJM_NLMDGNLNLKD_OFFSET UNITYSDK_OFFSET(0x1385C660)
#define JKFMBFHFAJM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1385C860)
#define JKFMBFHFAJM_ODLABKKNLPM_OFFSET UNITYSDK_OFFSET(0x1385C3E0)
#define JKFMBFHFAJM_OFCGLMJIPGB_OFFSET UNITYSDK_OFFSET(0x13859480)
#define JKFMBFHFAJM_OHIENHKHOIF_OFFSET UNITYSDK_OFFSET(0x13859FA0)
#define JKFMBFHFAJM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13858A10)
#define JKFMBFHFAJM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13859860)
#define JKFMBFHFAJM_POSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13859430)
#define JKFMBFHFAJM_START_OFFSET UNITYSDK_OFFSET(0x138588A0)
#define JKFMBFHFAJM_UPDATE_OFFSET UNITYSDK_OFFSET(0x13859280)
#define JKFMBFHFAJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13859C50)
#define JKFMBFHFAJM__CTOR_OFFSET UNITYSDK_OFFSET(0x13859C00)

inline static constexpr unsigned int JKFMBFHFAJM_TypeDefinitionIndex = 80248;

class JKFMBFHFAJM : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_JIFFECMNPIE()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(JKFMBFHFAJM_TypeDefinitionIndex)->GetStaticField(0x3E340);
	}
	static ::JKFMBFHFAJM** StaticGet__PHJGLHAAHOG_k__BackingField()
	{
		return (::JKFMBFHFAJM**)Il2CppClass::FromTypeDefinitionIndex(JKFMBFHFAJM_TypeDefinitionIndex)->GetStaticField(0x3E348);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FGCKGEBJALC()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(JKFMBFHFAJM_TypeDefinitionIndex)->GetStaticField(0x3E350);
	}
	static ::System::Collections::Generic::List_1<::LOBFHOCEDJP*>** StaticGet_LNLIBOPIKKO()
	{
		return (::System::Collections::Generic::List_1<::LOBFHOCEDJP*>**)Il2CppClass::FromTypeDefinitionIndex(JKFMBFHFAJM_TypeDefinitionIndex)->GetStaticField(0x3E358);
	}
	static ::System::Boolean* StaticGet_OIDIMNCAOGF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JKFMBFHFAJM_TypeDefinitionIndex)->GetStaticField(0xE3E0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_POKOFNFIOMN()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(JKFMBFHFAJM_TypeDefinitionIndex)->GetStaticField(0xE3E8);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* AHBODHKOCEF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFMBFHFAJM__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_LATEUPDATE_OFFSET))(this);
	}

	::System::Void PostParticleSystemUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_POSTPARTICLESYSTEMUPDATE_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP);
	}

	static ::System::Void FCBJINJHMNI(::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::EHKKPCGAJHO*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_FCBJINJHMNI_OFFSET))(POBADKEDFOE, OHPJHPEOFLD);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Boolean DDNBEGNGPMK(::EHKKPCGAJHO* POBADKEDFOE, ::LCFMHELLMAL* BOCDPJFBHAA, ::System::Boolean CMNIEMIIALA, ::System::Int32 AGKLIDPDJFM, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* KFOOJBFKOGD)
	{
		return ((::System::Boolean(*)(::EHKKPCGAJHO*, ::LCFMHELLMAL*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_DDNBEGNGPMK_OFFSET))(POBADKEDFOE, BOCDPJFBHAA, CMNIEMIIALA, AGKLIDPDJFM, KFOOJBFKOGD);
	}

	static ::System::Boolean KPMAAFCKGLN(::NLNIIPDCABP* FNFNDIBMPDE, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 KMOHKCADPNA, ::LCFMHELLMAL* BOCDPJFBHAA)
	{
		return ((::System::Boolean(*)(::NLNIIPDCABP*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::LCFMHELLMAL*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_KPMAAFCKGLN_OFFSET))(FNFNDIBMPDE, LGAABHLIHKE, KMOHKCADPNA, BOCDPJFBHAA);
	}

	static ::System::Boolean JIADFNCKAHE(::EHKKPCGAJHO* POBADKEDFOE, ::LCFMHELLMAL* BOCDPJFBHAA)
	{
		return ((::System::Boolean(*)(::EHKKPCGAJHO*, ::LCFMHELLMAL*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_JIADFNCKAHE_OFFSET))(POBADKEDFOE, BOCDPJFBHAA);
	}

	::System::Void HILFLNPGPDK(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_HILFLNPGPDK_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void ANLOBIGCMDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_ANLOBIGCMDN_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void JCELLNLBDLL(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_JCELLNLBDLL_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void OHIENHKHOIF(::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD, ::System::Boolean NDCJPBMPKOO)
	{
		return ((::System::Void(*)(::EHKKPCGAJHO*, ::AEMCAOEICDG*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_OHIENHKHOIF_OFFSET))(POBADKEDFOE, OHPJHPEOFLD, NDCJPBMPKOO);
	}

	::System::Void KKPEOHACHFK(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_KKPEOHACHFK_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void AAPLCLFOAPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_AAPLCLFOAPL_OFFSET))(this);
	}

	static ::System::Boolean GILMNAFMKDC(::EHKKPCGAJHO* POBADKEDFOE, ::LCFMHELLMAL* BOCDPJFBHAA, ::System::Boolean CMNIEMIIALA, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* KFOOJBFKOGD)
	{
		return ((::System::Boolean(*)(::EHKKPCGAJHO*, ::LCFMHELLMAL*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_GILMNAFMKDC_OFFSET))(POBADKEDFOE, BOCDPJFBHAA, CMNIEMIIALA, KFOOJBFKOGD);
	}

	::System::Void ODLABKKNLPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_ODLABKKNLPM_OFFSET))(this);
	}

	::System::Void NLMDGNLNLKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_NLMDGNLNLKD_OFFSET))(this);
	}

	static ::JKFMBFHFAJM* KCKBIOBGKBH()
	{
		return ((::JKFMBFHFAJM*(*)())((::PBYTE)hIl2Cpp + JKFMBFHFAJM_KCKBIOBGKBH_OFFSET))();
	}

	static ::System::Void ECNHPJBAHAF(::MoleMole::Battle::Entity* MJPPILKEMBG, ::System::Boolean NDCJPBMPKOO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_ECNHPJBAHAF_OFFSET))(MJPPILKEMBG, NDCJPBMPKOO);
	}

	static ::System::Void HBNLFNHMBHB(::JKFMBFHFAJM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::JKFMBFHFAJM*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_HBNLFNHMBHB_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void HBNOJFBFOPP(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_HBNOJFBFOPP_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void LDICBBPPHAE(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_LDICBBPPHAE_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void LDNIDEPBBON(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_LDNIDEPBBON_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void NPOLNFDBOOD(::LCFMHELLMAL* BOCDPJFBHAA)
	{
		return ((::System::Void(*)(::LCFMHELLMAL*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_NPOLNFDBOOD_OFFSET))(BOCDPJFBHAA);
	}

	::System::Void EDDNLCMLLOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_EDDNLCMLLOL_OFFSET))(this);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void OFCGLMJIPGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_OFCGLMJIPGB_OFFSET))(this);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_AHDLBAAJCCC_OFFSET))(this);
	}

	static ::System::Boolean IHHANCDKPBN(::EHKKPCGAJHO* POBADKEDFOE, ::LCFMHELLMAL* BOCDPJFBHAA)
	{
		return ((::System::Boolean(*)(::EHKKPCGAJHO*, ::LCFMHELLMAL*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_IHHANCDKPBN_OFFSET))(POBADKEDFOE, BOCDPJFBHAA);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JLAOOEMGFJB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::LKEOMDKHKJE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::LKEOMDKHKJE*))((::PBYTE)hIl2Cpp + JKFMBFHFAJM_JLAOOEMGFJB_OFFSET))(KECKGDFIALJ, FFNKDGGHBPP);
	}
};
