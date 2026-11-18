#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/MFHEIOBAEDI.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NHEPPDKDPPD.h"

class AMLegIK;
class ENGKPGFGGLM;
class OLMNKHKIJKL;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class HKLENLLABEJ_2;

#define OMINJHFFAJI_ABLBMPBJFFB_OFFSET UNITYSDK_OFFSET(0x16C262A0)
#define OMINJHFFAJI_BKECKHJEEEI_OFFSET UNITYSDK_OFFSET(0x16C21620)
#define OMINJHFFAJI_BMKNHEEHACM_OFFSET UNITYSDK_OFFSET(0x16C21040)
#define OMINJHFFAJI_CBAHKNNNMHH_OFFSET UNITYSDK_OFFSET(0x16C220A0)
#define OMINJHFFAJI_CFGOPOINFNA_OFFSET UNITYSDK_OFFSET(0x16C20D20)
#define OMINJHFFAJI_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x16C23020)
#define OMINJHFFAJI_CNMIKDGDFIE_OFFSET UNITYSDK_OFFSET(0x16C20820)
#define OMINJHFFAJI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16C1FB60)
#define OMINJHFFAJI_DCKLMCKKDLM_OFFSET UNITYSDK_OFFSET(0x16C22D60)
#define OMINJHFFAJI_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x16C24C80)
#define OMINJHFFAJI_DNMGOOKDCBD_OFFSET UNITYSDK_OFFSET(0x16C202E0)
#define OMINJHFFAJI_DOODGADIKOA_OFFSET UNITYSDK_OFFSET(0x16C20380)
#define OMINJHFFAJI_EGOBPMIGFCD_OFFSET UNITYSDK_OFFSET(0x16C24420)
#define OMINJHFFAJI_EHOPCOMHEFI_1_OFFSET UNITYSDK_OFFSET(0x16C224E0)
#define OMINJHFFAJI_EHOPCOMHEFI_OFFSET UNITYSDK_OFFSET(0x16C22360)
#define OMINJHFFAJI_EJCNEODJMPL_OFFSET UNITYSDK_OFFSET(0x16C24080)
#define OMINJHFFAJI_EMABMDNAEHB_1_OFFSET UNITYSDK_OFFSET(0x16C24B10)
#define OMINJHFFAJI_EMABMDNAEHB_OFFSET UNITYSDK_OFFSET(0x16C21F00)
#define OMINJHFFAJI_ENECIPJJIPA_OFFSET UNITYSDK_OFFSET(0x16C24770)
#define OMINJHFFAJI_FDFHBGHAALO_OFFSET UNITYSDK_OFFSET(0x16C24D80)
#define OMINJHFFAJI_HGADAIKMOCA_OFFSET UNITYSDK_OFFSET(0x16C21BA0)
#define OMINJHFFAJI_HKGBOLJBFLE_OFFSET UNITYSDK_OFFSET(0x16C21500)
#define OMINJHFFAJI_IKFJBAOPAGF_OFFSET UNITYSDK_OFFSET(0x16C208C0)
#define OMINJHFFAJI_JCMNDFDBHBP_OFFSET UNITYSDK_OFFSET(0x16C26E10)
#define OMINJHFFAJI_JGBALBCPCPP_OFFSET UNITYSDK_OFFSET(0x16C231E0)
#define OMINJHFFAJI_JNBKMGIDLEP_OFFSET UNITYSDK_OFFSET(0x16C26BF0)
#define OMINJHFFAJI_KCCOPEPBDHA_OFFSET UNITYSDK_OFFSET(0x16C22910)
#define OMINJHFFAJI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16C20140)
#define OMINJHFFAJI_LKBEOPBHCDI_OFFSET UNITYSDK_OFFSET(0x16C21130)
#define OMINJHFFAJI_MKPDAKBMFHK_OFFSET UNITYSDK_OFFSET(0x16C230B0)
#define OMINJHFFAJI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16C26B60)
#define OMINJHFFAJI_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x16C210A0)
#define OMINJHFFAJI_MOMHHMOHHDC_OFFSET UNITYSDK_OFFSET(0x16C25A00)
#define OMINJHFFAJI_NCOIKNNFMLF_OFFSET UNITYSDK_OFFSET(0x16C218E0)
#define OMINJHFFAJI_OIAJOMCKKEK_OFFSET UNITYSDK_OFFSET(0x16C249E0)
#define OMINJHFFAJI_PAKNHALEAAC_OFFSET UNITYSDK_OFFSET(0x16C23540)
#define OMINJHFFAJI_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C1FFD0)
#define OMINJHFFAJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C202D0)
#define OMINJHFFAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C20280)

inline static constexpr unsigned int OMINJHFFAJI_TypeDefinitionIndex = 56956;

class OMINJHFFAJI : public ::OAOOLPCNHKA
{
public:
	static ::System::Boolean* StaticGet_DCJIMJENODD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OMINJHFFAJI_TypeDefinitionIndex)->GetStaticField(0x13CC0);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::Nap::NapECS::EcsFilter* MEGJPJDKNJL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMINJHFFAJI__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* DNMGOOKDCBD(::OLMNKHKIJKL* JPKIIGOAAMB, ::System::Boolean FBILHHBPEHD, ::System::Single DIEHHNCKDPI)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::OLMNKHKIJKL*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + OMINJHFFAJI_DNMGOOKDCBD_OFFSET))(JPKIIGOAAMB, FBILHHBPEHD, DIEHHNCKDPI);
	}

	static ::System::Void DOODGADIKOA(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 KHGFAKJKDGG, ::System::Single JCBDICLOIEG)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + OMINJHFFAJI_DOODGADIKOA_OFFSET))(FBILHHBPEHD, KECKGDFIALJ, KHGFAKJKDGG, JCBDICLOIEG);
	}

	static ::System::Void CFGOPOINFNA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_CFGOPOINFNA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean BMKNHEEHACM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OMINJHFFAJI_BMKNHEEHACM_OFFSET))();
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void LKBEOPBHCDI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OMINJHFFAJI_LKBEOPBHCDI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void IKFJBAOPAGF(::OLMNKHKIJKL* JEAOFLGNJOO, ::System::Boolean FBILHHBPEHD, ::System::Single DIEHHNCKDPI)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + OMINJHFFAJI_IKFJBAOPAGF_OFFSET))(JEAOFLGNJOO, FBILHHBPEHD, DIEHHNCKDPI);
	}

	static ::System::Boolean HGADAIKMOCA(::MoleMole::EntityHandle& HPADNAEINPK, ::System::Single& PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::Single&))((::PBYTE)hIl2Cpp + OMINJHFFAJI_HGADAIKMOCA_OFFSET))(HPADNAEINPK, PMNLNNGEIFM);
	}

	static ::System::Void EMABMDNAEHB(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_EMABMDNAEHB_OFFSET))(FBILHHBPEHD, KECKGDFIALJ);
	}

	static ::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>* EHOPCOMHEFI(::OLMNKHKIJKL*& POPPNCOFLED)
	{
		return ((::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*(*)(::OLMNKHKIJKL*&))((::PBYTE)hIl2Cpp + OMINJHFFAJI_EHOPCOMHEFI_OFFSET))(POPPNCOFLED);
	}

	static ::AMLegIK* KCCOPEPBDHA(::System::String* HAENDCPNPNM, ::Il2CppArray<::AMLegIK*>* EDFADLBGKNM, ::System::Boolean& CFCNPEOPBMN)
	{
		return ((::AMLegIK*(*)(::System::String*, ::Il2CppArray<::AMLegIK*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + OMINJHFFAJI_KCCOPEPBDHA_OFFSET))(HAENDCPNPNM, EDFADLBGKNM, CFCNPEOPBMN);
	}

	static ::System::Void DCKLMCKKDLM(::OLMNKHKIJKL* JEAOFLGNJOO, ::System::Boolean ECCIENFOBJK)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*, ::System::Boolean))((::PBYTE)hIl2Cpp + OMINJHFFAJI_DCKLMCKKDLM_OFFSET))(JEAOFLGNJOO, ECCIENFOBJK);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MKPDAKBMFHK(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + OMINJHFFAJI_MKPDAKBMFHK_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Int32 JGBALBCPCPP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* HAENDCPNPNM)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_JGBALBCPCPP_OFFSET))(KECKGDFIALJ, HAENDCPNPNM);
	}

	static ::Il2CppArray<::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*>* EJCNEODJMPL(::OLMNKHKIJKL* POPPNCOFLED)
	{
		return ((::Il2CppArray<::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*>*(*)(::OLMNKHKIJKL*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_EJCNEODJMPL_OFFSET))(POPPNCOFLED);
	}

	static ::System::Void BKECKHJEEEI(::OLMNKHKIJKL* JEAOFLGNJOO, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*, ::System::Boolean))((::PBYTE)hIl2Cpp + OMINJHFFAJI_BKECKHJEEEI_OFFSET))(JEAOFLGNJOO, FBILHHBPEHD);
	}

	static ::System::Boolean CNMIKDGDFIE(::OLMNKHKIJKL* JEAOFLGNJOO)
	{
		return ((::System::Boolean(*)(::OLMNKHKIJKL*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_CNMIKDGDFIE_OFFSET))(JEAOFLGNJOO);
	}

	static ::System::Single ENECIPJJIPA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_ENECIPJJIPA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void OIAJOMCKKEK(::OLMNKHKIJKL* POPPNCOFLED)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_OIAJOMCKKEK_OFFSET))(POPPNCOFLED);
	}

	static ::System::Void EMABMDNAEHB_1(::System::Boolean FBILHHBPEHD, ::AMLegIK* GPDCNCGONKG)
	{
		return ((::System::Void(*)(::System::Boolean, ::AMLegIK*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_EMABMDNAEHB_1_OFFSET))(FBILHHBPEHD, GPDCNCGONKG);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean EGOBPMIGFCD(::Il2CppArray<::AMLegIK*>* EDFADLBGKNM, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::AMLegIK*>*, ::System::Int32))((::PBYTE)hIl2Cpp + OMINJHFFAJI_EGOBPMIGFCD_OFFSET))(EDFADLBGKNM, ABHBKFJKINO);
	}

	static ::System::Void NCOIKNNFMLF(::OLMNKHKIJKL* JEAOFLGNJOO, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*, ::System::Single))((::PBYTE)hIl2Cpp + OMINJHFFAJI_NCOIKNNFMLF_OFFSET))(JEAOFLGNJOO, IECOJPMPJMP);
	}

	static ::System::Void CBAHKNNNMHH(::OLMNKHKIJKL* JEAOFLGNJOO)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_CBAHKNNNMHH_OFFSET))(JEAOFLGNJOO);
	}

	static ::AMLegIK* FDFHBGHAALO(::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* AEPONOJONAA, ::Il2CppArray<::AMLegIK*>* EDFADLBGKNM, ::System::Boolean& CFCNPEOPBMN, ::System::Boolean& HBCAIMOEMHL)
	{
		return ((::AMLegIK*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*, ::Il2CppArray<::AMLegIK*>*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + OMINJHFFAJI_FDFHBGHAALO_OFFSET))(AEPONOJONAA, EDFADLBGKNM, CFCNPEOPBMN, HBCAIMOEMHL);
	}

	static ::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>* EHOPCOMHEFI_1(::MoleMole::EntityHandle HPADNAEINPK, ::System::Func_1<::UnityEngine::Transform*>* HBAIENEBGMH)
	{
		return ((::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*(*)(::MoleMole::EntityHandle, ::System::Func_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_EHOPCOMHEFI_1_OFFSET))(HPADNAEINPK, HBAIENEBGMH);
	}

	::System::Void MOMHHMOHHDC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMINJHFFAJI_MOMHHMOHHDC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JNBKMGIDLEP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 KFAJBJFKHJL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + OMINJHFFAJI_JNBKMGIDLEP_OFFSET))(KECKGDFIALJ, KFAJBJFKHJL);
	}

	static ::System::Void HKGBOLJBFLE(::OLMNKHKIJKL* JEAOFLGNJOO)
	{
		return ((::System::Void(*)(::OLMNKHKIJKL*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_HKGBOLJBFLE_OFFSET))(JEAOFLGNJOO);
	}

	::System::Void ABLBMPBJFFB(::OLMNKHKIJKL* JEAOFLGNJOO, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::OLMNKHKIJKL*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_ABLBMPBJFFB_OFFSET))(this, JEAOFLGNJOO, IAPKABMDJNF);
	}

	static ::System::Void PAKNHALEAAC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* GAFPLGPKBCM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_PAKNHALEAAC_OFFSET))(KECKGDFIALJ, GAFPLGPKBCM);
	}

	static ::System::Boolean JCMNDFDBHBP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMINJHFFAJI_JCMNDFDBHBP_OFFSET))(KECKGDFIALJ);
	}
};
