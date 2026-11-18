#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBDIAADGJCI.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/GBKIDFBFPGP_FDIBJECCNKC.h"
#include "unitysdk/GBKIDFBFPGP_OPAMGEEDEKF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BBMEACCONNF;
class COCJHGGDBCA;
class ENGKPGFGGLM;
class FJILNDLOFGN;
class GEIHCPAOKKK;
class KLOGCCEEFIA;
class NADBPCAFDKF;
class NLNIIPDCABP;
class OJDOCJLOJGG;
namespace MoleMole { class InteractionPoint; }
namespace MoleMole { class MonoItemState; }
namespace MoleMole { class MonoNpcLookIKParameter; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GBKIDFBFPGP_ACCFFMBCOIM_OFFSET UNITYSDK_OFFSET(0x11C91FA0)
#define GBKIDFBFPGP_ADKLKBLKEDM_OFFSET UNITYSDK_OFFSET(0x11C976C0)
#define GBKIDFBFPGP_AOKCEMNIKMK_OFFSET UNITYSDK_OFFSET(0x11C8B5D0)
#define GBKIDFBFPGP_AOMAHEFOHHJ_OFFSET UNITYSDK_OFFSET(0x11C8FE00)
#define GBKIDFBFPGP_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x11C930D0)
#define GBKIDFBFPGP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11C95E60)
#define GBKIDFBFPGP_BCCIJMDAACD_OFFSET UNITYSDK_OFFSET(0x11C8E5C0)
#define GBKIDFBFPGP_BHLCDCEOPHP_OFFSET UNITYSDK_OFFSET(0x11C93050)
#define GBKIDFBFPGP_BKGPFKHMLND_OFFSET UNITYSDK_OFFSET(0x11C94630)
#define GBKIDFBFPGP_BNEPNPOFCME_OFFSET UNITYSDK_OFFSET(0x11C99820)
#define GBKIDFBFPGP_CHOBFECAGBA_OFFSET UNITYSDK_OFFSET(0x11C98CA0)
#define GBKIDFBFPGP_CJPLANHJMEJ_OFFSET UNITYSDK_OFFSET(0x11C94100)
#define GBKIDFBFPGP_CLHDLMHLAKH_OFFSET UNITYSDK_OFFSET(0x11C94280)
#define GBKIDFBFPGP_CMDPHEIIONJ_OFFSET UNITYSDK_OFFSET(0x11C8E0D0)
#define GBKIDFBFPGP_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11C99D90)
#define GBKIDFBFPGP_CPEMPLJJLCI_OFFSET UNITYSDK_OFFSET(0x11C89F70)
#define GBKIDFBFPGP_CPOEGGFJBFK_OFFSET UNITYSDK_OFFSET(0x11C8A120)
#define GBKIDFBFPGP_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11C89900)
#define GBKIDFBFPGP_DDOHPOCIAKN_OFFSET UNITYSDK_OFFSET(0x11C917E0)
#define GBKIDFBFPGP_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x11C95F90)
#define GBKIDFBFPGP_DOPJKIHLMCL_OFFSET UNITYSDK_OFFSET(0x11C96F50)
#define GBKIDFBFPGP_EFIFPJLJPDM_OFFSET UNITYSDK_OFFSET(0x11C9A210)
#define GBKIDFBFPGP_EIEAFFPDAPI_OFFSET UNITYSDK_OFFSET(0x11C975F0)
#define GBKIDFBFPGP_EKJFCEPCIEM_OFFSET UNITYSDK_OFFSET(0x11C986E0)
#define GBKIDFBFPGP_EPDMMCCFNCE_OFFSET UNITYSDK_OFFSET(0x11C96D50)
#define GBKIDFBFPGP_FECCAHOMLJK_OFFSET UNITYSDK_OFFSET(0x11C8A7A0)
#define GBKIDFBFPGP_FJMNIGHPLBI_OFFSET UNITYSDK_OFFSET(0x11C91C10)
#define GBKIDFBFPGP_FJPLCDBMJDL_OFFSET UNITYSDK_OFFSET(0x11C979E0)
#define GBKIDFBFPGP_GCBKKNFNAPA_OFFSET UNITYSDK_OFFSET(0x11C944D0)
#define GBKIDFBFPGP_GJNEBAPAIMB_OFFSET UNITYSDK_OFFSET(0x11C99600)
#define GBKIDFBFPGP_HLDONDHGFKA_OFFSET UNITYSDK_OFFSET(0x11C98DE0)
#define GBKIDFBFPGP_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x11C953C0)
#define GBKIDFBFPGP_IJFIMHAFMHC_OFFSET UNITYSDK_OFFSET(0x11C8E670)
#define GBKIDFBFPGP_IKDNHNBKNDA_OFFSET UNITYSDK_OFFSET(0x11C98400)
#define GBKIDFBFPGP_ILPNNBHNNBO_OFFSET UNITYSDK_OFFSET(0x11C90E50)
#define GBKIDFBFPGP_IMNEBEBENFA_OFFSET UNITYSDK_OFFSET(0x11C90C10)
#define GBKIDFBFPGP_JACCBCBGJJF_OFFSET UNITYSDK_OFFSET(0x11C911D0)
#define GBKIDFBFPGP_JEBGGJGPMBC_OFFSET UNITYSDK_OFFSET(0x11C94C00)
#define GBKIDFBFPGP_JFDCJIEOBBG_OFFSET UNITYSDK_OFFSET(0x11C98830)
#define GBKIDFBFPGP_JGINCGILELF_OFFSET UNITYSDK_OFFSET(0x11C91450)
#define GBKIDFBFPGP_KABAKAEIILH_OFFSET UNITYSDK_OFFSET(0x11C97E40)
#define GBKIDFBFPGP_KAEKDAFJHJI_OFFSET UNITYSDK_OFFSET(0x11C93BD0)
#define GBKIDFBFPGP_KGPNDMMBNAK_OFFSET UNITYSDK_OFFSET(0x11C94760)
#define GBKIDFBFPGP_KNBKIIBBFIP_OFFSET UNITYSDK_OFFSET(0x11C92300)
#define GBKIDFBFPGP_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x11C99E20)
#define GBKIDFBFPGP_LDOONNHKKMP_OFFSET UNITYSDK_OFFSET(0x11C94430)
#define GBKIDFBFPGP_LKCFHMCCJMN_OFFSET UNITYSDK_OFFSET(0x11C8E990)
#define GBKIDFBFPGP_LODGHDDIODM_OFFSET UNITYSDK_OFFSET(0x11C8AEF0)
#define GBKIDFBFPGP_LPDFFJGCLCD_OFFSET UNITYSDK_OFFSET(0x11C8AC00)
#define GBKIDFBFPGP_MCPIOFDEIFB_OFFSET UNITYSDK_OFFSET(0x11C99860)
#define GBKIDFBFPGP_MKFHIODDPIG_OFFSET UNITYSDK_OFFSET(0x11C974C0)
#define GBKIDFBFPGP_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x11C97630)
#define GBKIDFBFPGP_MNKDKFKCKKB_OFFSET UNITYSDK_OFFSET(0x11C98CE0)
#define GBKIDFBFPGP_MOIKPOIMHKI_OFFSET UNITYSDK_OFFSET(0x11C97860)
#define GBKIDFBFPGP_MPMJBFKBIPJ_OFFSET UNITYSDK_OFFSET(0x11C94D70)
#define GBKIDFBFPGP_MPPCLOFOKHI_OFFSET UNITYSDK_OFFSET(0x11C8E2B0)
#define GBKIDFBFPGP_NHOBFDKFDCG_OFFSET UNITYSDK_OFFSET(0x11C8D8D0)
#define GBKIDFBFPGP_NIOMGDJDOBI_OFFSET UNITYSDK_OFFSET(0x11C942C0)
#define GBKIDFBFPGP_NJDMBGBMCFH_OFFSET UNITYSDK_OFFSET(0x11C8DB00)
#define GBKIDFBFPGP_NJPKLBLJCAI_OFFSET UNITYSDK_OFFSET(0x11C91660)
#define GBKIDFBFPGP_OFFDKJAIKFJ_OFFSET UNITYSDK_OFFSET(0x11C92630)
#define GBKIDFBFPGP_OJLMFGNLBAA_OFFSET UNITYSDK_OFFSET(0x11C92F00)
#define GBKIDFBFPGP_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x11C89CA0)
#define GBKIDFBFPGP_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x11C8A3F0)
#define GBKIDFBFPGP_OOKMKFKGPCF_OFFSET UNITYSDK_OFFSET(0x11C97B60)
#define GBKIDFBFPGP_PANLKJHDCHG_OFFSET UNITYSDK_OFFSET(0x11C8D2C0)
#define GBKIDFBFPGP_PAOJJMOEHCE_OFFSET UNITYSDK_OFFSET(0x11C8D790)
#define GBKIDFBFPGP_PMGJACMAGGG_OFFSET UNITYSDK_OFFSET(0x11C94580)
#define GBKIDFBFPGP_PNFLBODDJMN_OFFSET UNITYSDK_OFFSET(0x11C8A9E0)
#define GBKIDFBFPGP_UPDATE_OFFSET UNITYSDK_OFFSET(0x11C8AA40)
#define GBKIDFBFPGP__CTOR_OFFSET UNITYSDK_OFFSET(0x11C8ABB0)

inline static constexpr unsigned int GBKIDFBFPGP_TypeDefinitionIndex = 58607;

class GBKIDFBFPGP : public ::OAOOLPCNHKA
{
public:
	static ::System::Single* StaticGet_MPBBPMEMCGB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GBKIDFBFPGP_TypeDefinitionIndex)->GetStaticField(0x120A0);
	}
	// static const ::System::Int32 MKGPNEMACPM = 0x0; // 0x0
	// static const ::System::Int32 GNAKEOCAEGP = 0x1; // 0x0
	// static const ::System::Int32 PBLKAEEDEPA = 0x2; // 0x0
	// static const ::System::Single DBGHOONADJH; // 0x0
	// static const ::System::Single MJIJJNGGGCG; // 0x0
	// static const ::System::Single BPOGKPDBOCF; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void OnTriggerEnter(::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_ONTRIGGERENTER_OFFSET))(KECKGDFIALJ, KKOGCPPLPNJ);
	}

	static ::System::Void OnTriggerExit(::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_ONTRIGGEREXIT_OFFSET))(KECKGDFIALJ, KKOGCPPLPNJ);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_UPDATE_OFFSET))(this);
	}

	static ::System::Void LPDFFJGCLCD(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_LPDFFJGCLCD_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void LODGHDDIODM(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_LODGHDDIODM_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void PAOJJMOEHCE(::System::Int32 MGMDLMBEDJF, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Boolean NMFFANMFEJB)
	{
		return ((::System::Void(*)(::System::Int32, ::NLNIIPDCABP*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_PAOJJMOEHCE_OFFSET))(MGMDLMBEDJF, FNFNDIBMPDE, NMFFANMFEJB);
	}

	static ::System::Void NJDMBGBMCFH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NJDMBGBMCFH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MPPCLOFOKHI(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MPPCLOFOKHI_OFFSET))(CCKIJJAHCIB, OHPJHPEOFLD);
	}

	static ::System::Void IMNEBEBENFA(::KPBPGBNIDOK HGCAEIPFNHM, ::System::Int32 BCCENALHBHL, ::System::Action* EJGDHCIBCJH, ::System::Action* FAKMPMKIGEP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::KPBPGBNIDOK, ::System::Int32, ::System::Action*, ::System::Action*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_IMNEBEBENFA_OFFSET))(HGCAEIPFNHM, BCCENALHBHL, EJGDHCIBCJH, FAKMPMKIGEP, KECKGDFIALJ);
	}

	static ::System::Void ILPNNBHNNBO(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_ILPNNBHNNBO_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void JACCBCBGJJF(::BBMEACCONNF* CCKIJJAHCIB, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean LFIJPDLMCJD)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JACCBCBGJJF_OFFSET))(CCKIJJAHCIB, KECKGDFIALJ, LFIJPDLMCJD);
	}

	static ::System::Boolean DDOHPOCIAKN(::System::Int32 AELLPLBJELA, ::UnityEngine::Transform* IACKHFCLPJI, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Transform*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_DDOHPOCIAKN_OFFSET))(AELLPLBJELA, IACKHFCLPJI, KECKGDFIALJ);
	}

	static ::System::Void FJMNIGHPLBI(::BBMEACCONNF* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::BBMEACCONNF*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_FJMNIGHPLBI_OFFSET))(CCKIJJAHCIB);
	}

	static ::System::Void ACCFFMBCOIM(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_ACCFFMBCOIM_OFFSET))(CCKIJJAHCIB, OHPJHPEOFLD, PMNLNNGEIFM);
	}

	static ::System::Void OFFDKJAIKFJ(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_OFFDKJAIKFJ_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Boolean KAEKDAFJHJI(::UnityEngine::Transform* LMHNJIBCLJF, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_KAEKDAFJHJI_OFFSET))(LMHNJIBCLJF, JNLBPMKIFNK);
	}

	static ::System::Boolean CJPLANHJMEJ(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CJPLANHJMEJ_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void IJFIMHAFMHC(::BBMEACCONNF* CCKIJJAHCIB, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::System::Single))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_IJFIMHAFMHC_OFFSET))(CCKIJJAHCIB, PMNLNNGEIFM);
	}

	static ::System::Void FECCAHOMLJK(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_FECCAHOMLJK_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void GCBKKNFNAPA(::BBMEACCONNF* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::BBMEACCONNF*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_GCBKKNFNAPA_OFFSET))(CCKIJJAHCIB);
	}

	static ::System::Void PMGJACMAGGG(::COCJHGGDBCA* FMKAIDDPLFP)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_PMGJACMAGGG_OFFSET))(FMKAIDDPLFP);
	}

	static ::System::Void LDOONNHKKMP(::BBMEACCONNF* HODAIDNDKHD, ::MoleMole::Battle::Entity* BDHOILPIGKB, ::System::Boolean GABGACBGGMB)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_LDOONNHKKMP_OFFSET))(HODAIDNDKHD, BDHOILPIGKB, GABGACBGGMB);
	}

	static ::System::Void BKGPFKHMLND(::FJILNDLOFGN* DEKJDEPKKLH, ::BBMEACCONNF* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::FJILNDLOFGN*, ::BBMEACCONNF*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_BKGPFKHMLND_OFFSET))(DEKJDEPKKLH, CCKIJJAHCIB);
	}

	static ::System::Void KGPNDMMBNAK(::MoleMole::Battle::Entity* BDHOILPIGKB, ::BBMEACCONNF* HODAIDNDKHD, ::System::String* BIFPDJALJJD, ::System::Collections::Generic::IList_1<::System::String*>* OLPGBFGCIMH, ::System::Action* GMCMGILKGPH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::BBMEACCONNF*, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_KGPNDMMBNAK_OFFSET))(BDHOILPIGKB, HODAIDNDKHD, BIFPDJALJJD, OLPGBFGCIMH, GMCMGILKGPH);
	}

	static ::System::Void MPMJBFKBIPJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MPMJBFKBIPJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void OJLMFGNLBAA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_OJLMFGNLBAA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void CPOEGGFJBFK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ, ::System::Collections::Generic::List_1<::System::Int32>* HJAGADJPPCA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::KPBPGBNIDOK, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CPOEGGFJBFK_OFFSET))(KECKGDFIALJ, KKOGCPPLPNJ, HJAGADJPPCA);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void DOPJKIHLMCL(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* ACGKLGKBCLK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::String*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_DOPJKIHLMCL_OFFSET))(OHPJHPEOFLD, ACGKLGKBCLK);
	}

	static ::System::Void JGINCGILELF(::System::Int32 OOBBIILKIKC, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JGINCGILELF_OFFSET))(OOBBIILKIKC, KECKGDFIALJ);
	}

	static ::MoleMole::MonoNpcLookIKParameter* MKFHIODDPIG(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::MoleMole::MonoNpcLookIKParameter*(*)(::BBMEACCONNF*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MKFHIODDPIG_OFFSET))(CCKIJJAHCIB, OHPJHPEOFLD);
	}

	static ::System::Void EIEAFFPDAPI(::BBMEACCONNF* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::BBMEACCONNF*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_EIEAFFPDAPI_OFFSET))(CCKIJJAHCIB);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void NJPKLBLJCAI(::System::Int32 OOBBIILKIKC, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NJPKLBLJCAI_OFFSET))(OOBBIILKIKC, KECKGDFIALJ);
	}

	static ::System::Void ADKLKBLKEDM(::System::Int32 BCCENALHBHL, ::NADBPCAFDKF* LGDMKLJJPIC, ::GBKIDFBFPGP_FDIBJECCNKC& param_2)
	{
		return ((::System::Void(*)(::System::Int32, ::NADBPCAFDKF*, ::GBKIDFBFPGP_FDIBJECCNKC&))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_ADKLKBLKEDM_OFFSET))(BCCENALHBHL, LGDMKLJJPIC, param_2);
	}

	static ::System::Boolean BHLCDCEOPHP(::KPBPGBNIDOK HGCAEIPFNHM)
	{
		return ((::System::Boolean(*)(::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_BHLCDCEOPHP_OFFSET))(HGCAEIPFNHM);
	}

	static ::System::Void FJPLCDBMJDL(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_FJPLCDBMJDL_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void CPEMPLJJLCI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 DEFAKCIAKLG, ::KLOGCCEEFIA* HMMMOCJAEOA, ::KPBPGBNIDOK KKOGCPPLPNJ, ::System::Collections::Generic::List_1<::System::Int32>* HJAGADJPPCA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::KLOGCCEEFIA*, ::KPBPGBNIDOK, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CPEMPLJJLCI_OFFSET))(KECKGDFIALJ, DEFAKCIAKLG, HMMMOCJAEOA, KKOGCPPLPNJ, HJAGADJPPCA);
	}

	static ::System::Void NIOMGDJDOBI(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NIOMGDJDOBI_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void AOKCEMNIKMK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_AOKCEMNIKMK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void EKJFCEPCIEM(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_EKJFCEPCIEM_OFFSET))(CCKIJJAHCIB, OHPJHPEOFLD);
	}

	static ::System::Void JFDCJIEOBBG(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* MIENICJPAFN)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JFDCJIEOBBG_OFFSET))(OHPJHPEOFLD, MIENICJPAFN);
	}

	static ::System::Void KABAKAEIILH(::BBMEACCONNF* CCKIJJAHCIB, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* LNEOCILEHAO, ::System::String* LBLEFBHCANP, ::MoleMole::MonoItemState* LLCBIHCGEEP)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>*, ::System::String*, ::MoleMole::MonoItemState*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_KABAKAEIILH_OFFSET))(CCKIJJAHCIB, LNEOCILEHAO, LBLEFBHCANP, LLCBIHCGEEP);
	}

	static ::System::Void KNBKIIBBFIP(::BBMEACCONNF* CCKIJJAHCIB, ::UnityEngine::Vector3 MOJKMIAKGDF, ::UnityEngine::Vector3 MEDHEANIBIO, ::System::Boolean GODCAKCPOLH, ::UnityEngine::Vector3 LKKGLAHDEEA)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_KNBKIIBBFIP_OFFSET))(CCKIJJAHCIB, MOJKMIAKGDF, MEDHEANIBIO, GODCAKCPOLH, LKKGLAHDEEA);
	}

	static ::System::Void CHOBFECAGBA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CHOBFECAGBA_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void IKDNHNBKNDA(::BBMEACCONNF* DAFAKFGDNGA, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_IKDNHNBKNDA_OFFSET))(DAFAKFGDNGA, NJOAJLDJCCJ);
	}

	static ::System::Void PANLKJHDCHG(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_PANLKJHDCHG_OFFSET))(CCKIJJAHCIB, OHPJHPEOFLD);
	}

	static ::System::Single CLHDLMHLAKH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CLHDLMHLAKH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void BCCIJMDAACD(::MoleMole::Battle::Entity* BDHOILPIGKB, ::BBMEACCONNF* DAECHEJMNFP, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::BBMEACCONNF*, ::System::Single))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_BCCIJMDAACD_OFFSET))(BDHOILPIGKB, DAECHEJMNFP, PBCAAADNEPK);
	}

	static ::System::Void NHOBFDKFDCG(::NLNIIPDCABP* APIALBIADAL, ::System::String* OBNIAHNMHPF, ::System::String* CHAFPBDNDJP, ::System::String* EGEGIMGMJHN, ::GBKIDFBFPGP_OPAMGEEDEKF& param_4)
	{
		return ((::System::Void(*)(::NLNIIPDCABP*, ::System::String*, ::System::String*, ::System::String*, ::GBKIDFBFPGP_OPAMGEEDEKF&))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NHOBFDKFDCG_OFFSET))(APIALBIADAL, OBNIAHNMHPF, CHAFPBDNDJP, EGEGIMGMJHN, param_4);
	}

	static ::System::Void MNKDKFKCKKB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MNKDKFKCKKB_OFFSET))(KECKGDFIALJ, DECIDLELLCP);
	}

	static ::System::Void EPDMMCCFNCE(::BBMEACCONNF* CCKIJJAHCIB, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_EPDMMCCFNCE_OFFSET))(CCKIJJAHCIB, FBILHHBPEHD);
	}

	static ::System::Void HLDONDHGFKA(::BBMEACCONNF* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::BBMEACCONNF*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_HLDONDHGFKA_OFFSET))(CCKIJJAHCIB);
	}

	static ::System::Boolean OOKMKFKGPCF(::System::Int32 BCCENALHBHL, ::KPBPGBNIDOK OBNIAHNMHPF, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::KPBPGBNIDOK, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_OOKMKFKGPCF_OFFSET))(BCCENALHBHL, OBNIAHNMHPF, KECKGDFIALJ);
	}

	static ::System::Void GJNEBAPAIMB(::KPBPGBNIDOK HGCAEIPFNHM, ::System::Int32 BCCENALHBHL)
	{
		return ((::System::Void(*)(::KPBPGBNIDOK, ::System::Int32))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_GJNEBAPAIMB_OFFSET))(HGCAEIPFNHM, BCCENALHBHL);
	}

	static ::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_BBOMJDBNHIC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void LKCFHMCCJMN(::BBMEACCONNF* CCKIJJAHCIB, ::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_LKCFHMCCJMN_OFFSET))(CCKIJJAHCIB, OHPJHPEOFLD, PMNLNNGEIFM);
	}

	static ::System::Void MCPIOFDEIFB(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MCPIOFDEIFB_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void MOIKPOIMHKI(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_MOIKPOIMHKI_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Int32 PNFLBODDJMN(::System::Int32 FCPCLIJNDLA, ::KBDIAADGJCI JHLEMFHOFIK, ::System::Boolean GENFFGJBECN)
	{
		return ((::System::Int32(*)(::System::Int32, ::KBDIAADGJCI, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_PNFLBODDJMN_OFFSET))(FCPCLIJNDLA, JHLEMFHOFIK, GENFFGJBECN);
	}

	static ::System::Void CMDPHEIIONJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::BBMEACCONNF* CCKIJJAHCIB, ::OJDOCJLOJGG* OOMJGFAPKKD)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::BBMEACCONNF*, ::OJDOCJLOJGG*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CMDPHEIIONJ_OFFSET))(KECKGDFIALJ, CCKIJJAHCIB, OOMJGFAPKKD);
	}

	static ::System::Boolean BNEPNPOFCME(::System::Int32 FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_BNEPNPOFCME_OFFSET))(FCPCLIJNDLA);
	}

	static ::System::Void AOMAHEFOHHJ(::BBMEACCONNF* CCKIJJAHCIB, ::COCJHGGDBCA* PDPGIGGGEFD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::COCJHGGDBCA*, ::System::Single))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_AOMAHEFOHHJ_OFFSET))(CCKIJJAHCIB, PDPGIGGGEFD, PMNLNNGEIFM);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void EFIFPJLJPDM(::BBMEACCONNF* CCKIJJAHCIB, ::System::Int32 DEFAKCIAKLG, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::BBMEACCONNF*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_EFIFPJLJPDM_OFFSET))(CCKIJJAHCIB, DEFAKCIAKLG, FIPHFGHNNBE);
	}

	static ::System::Void JEBGGJGPMBC(::MoleMole::Battle::Entity* BDHOILPIGKB, ::BBMEACCONNF* HODAIDNDKHD, ::MoleMole::InteractionPoint* OPMPKFEHOBM, ::FJILNDLOFGN* DGOMMGANKBO, ::System::Action* GMCMGILKGPH, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::BBMEACCONNF*, ::MoleMole::InteractionPoint*, ::FJILNDLOFGN*, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JEBGGJGPMBC_OFFSET))(BDHOILPIGKB, HODAIDNDKHD, OPMPKFEHOBM, DGOMMGANKBO, GMCMGILKGPH, CJBJONJDOLI);
	}
};
