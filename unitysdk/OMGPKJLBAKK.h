#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNKNMBKLOKK.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/OMGPKJLBAKK_CPOOFPMNHOB.h"

class GEIHCPAOKKK;
class JFBNBOHNJBF;
class KBHDKAAAGNF;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMGPKJLBAKK_AINENAFMJEH_OFFSET UNITYSDK_OFFSET(0x14F8FBC0)
#define OMGPKJLBAKK_AKCJBLOOHIM_OFFSET UNITYSDK_OFFSET(0x14F8E970)
#define OMGPKJLBAKK_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x14F8F300)
#define OMGPKJLBAKK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14F8E320)
#define OMGPKJLBAKK_BHLHMMBDKBG_OFFSET UNITYSDK_OFFSET(0x14F8E530)
#define OMGPKJLBAKK_BLDGNMCOPGE_OFFSET UNITYSDK_OFFSET(0x14F8F200)
#define OMGPKJLBAKK_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x14F8F900)
#define OMGPKJLBAKK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14F8DBF0)
#define OMGPKJLBAKK_FCLCEEGDBFM_OFFSET UNITYSDK_OFFSET(0x14F8F650)
#define OMGPKJLBAKK_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x14F8F370)
#define OMGPKJLBAKK_KAOLPDKFEBL_OFFSET UNITYSDK_OFFSET(0x14F8EC00)
#define OMGPKJLBAKK_KBDDIGBLHCI_OFFSET UNITYSDK_OFFSET(0x14F8E2A0)
#define OMGPKJLBAKK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14F8E100)
#define OMGPKJLBAKK_LCHJLALOIPK_OFFSET UNITYSDK_OFFSET(0x14F8F520)
#define OMGPKJLBAKK_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x14F8F270)
#define OMGPKJLBAKK_LKDJPFJFPJA_OFFSET UNITYSDK_OFFSET(0x14F8EDC0)
#define OMGPKJLBAKK_MCLLGOHAFOJ_OFFSET UNITYSDK_OFFSET(0x14F8F990)
#define OMGPKJLBAKK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14F8F5C0)
#define OMGPKJLBAKK_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x14F90530)
#define OMGPKJLBAKK_NEJAGJNHEAA_OFFSET UNITYSDK_OFFSET(0x14F90260)
#define OMGPKJLBAKK_NFLLMLKEFAP_OFFSET UNITYSDK_OFFSET(0x14F8ECF0)
#define OMGPKJLBAKK_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F8DF90)
#define OMGPKJLBAKK_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14F8DE20)
#define OMGPKJLBAKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F8E290)
#define OMGPKJLBAKK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8E240)

inline static constexpr unsigned int OMGPKJLBAKK_TypeDefinitionIndex = 80889;

class OMGPKJLBAKK : public ::OAOOLPCNHKA
{
public:
	static ::OMGPKJLBAKK_CPOOFPMNHOB* StaticGet_BPPNFMGABNM()
	{
		return (::OMGPKJLBAKK_CPOOFPMNHOB*)Il2CppClass::FromTypeDefinitionIndex(OMGPKJLBAKK_TypeDefinitionIndex)->GetStaticField(0x110F0);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMGPKJLBAKK__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void KBDDIGBLHCI(::KBHDKAAAGNF* ODAFPMADJNH)
	{
		return ((::System::Void(*)(::KBHDKAAAGNF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_KBDDIGBLHCI_OFFSET))(ODAFPMADJNH);
	}

	static ::System::String* KAOLPDKFEBL(::KBHDKAAAGNF* DNJIGCKBANN)
	{
		return ((::System::String*(*)(::KBHDKAAAGNF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_KAOLPDKFEBL_OFFSET))(DNJIGCKBANN);
	}

	static ::System::Void NFLLMLKEFAP(::KBHDKAAAGNF* ODAFPMADJNH, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::KBHDKAAAGNF*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_NFLLMLKEFAP_OFFSET))(ODAFPMADJNH, OHPJHPEOFLD);
	}

	static ::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_BBOMJDBNHIC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void BLDGNMCOPGE(::KBHDKAAAGNF* ODAFPMADJNH, ::System::Boolean NEGEPNEIJGP, ::MoleMole::Config::ConfigEntityRunState* EPOGECNDNGK)
	{
		return ((::System::Void(*)(::KBHDKAAAGNF*, ::System::Boolean, ::MoleMole::Config::ConfigEntityRunState*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_BLDGNMCOPGE_OFFSET))(ODAFPMADJNH, NEGEPNEIJGP, EPOGECNDNGK);
	}

	static ::System::Void BHLHMMBDKBG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_BHLHMMBDKBG_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void AKCJBLOOHIM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_AKCJBLOOHIM_OFFSET))(KECKGDFIALJ);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_LDCJONOBGEB_OFFSET))(this);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void LKDJPFJFPJA(::KBHDKAAAGNF* ODAFPMADJNH, ::GEIHCPAOKKK* OHPJHPEOFLD, ::MNKNMBKLOKK& GBBKMOIGDFP, ::System::Single& LIDBMDJGIBF)
	{
		return ((::System::Void(*)(::KBHDKAAAGNF*, ::GEIHCPAOKKK*, ::MNKNMBKLOKK&, ::System::Single&))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_LKDJPFJFPJA_OFFSET))(ODAFPMADJNH, OHPJHPEOFLD, GBBKMOIGDFP, LIDBMDJGIBF);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void LCHJLALOIPK(::KBHDKAAAGNF* ODAFPMADJNH)
	{
		return ((::System::Void(*)(::KBHDKAAAGNF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_LCHJLALOIPK_OFFSET))(ODAFPMADJNH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Single FCLCEEGDBFM(::System::Collections::Generic::List_1<::System::Int32>* GKLJGLHAKBD, ::System::Single CFOILEBJONG, ::KBHDKAAAGNF* ODAFPMADJNH)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::KBHDKAAAGNF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_FCLCEEGDBFM_OFFSET))(GKLJGLHAKBD, CFOILEBJONG, ODAFPMADJNH);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void MCLLGOHAFOJ(::KBHDKAAAGNF* ODAFPMADJNH)
	{
		return ((::System::Void(*)(::KBHDKAAAGNF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_MCLLGOHAFOJ_OFFSET))(ODAFPMADJNH);
	}

	static ::System::Void AINENAFMJEH(::GEIHCPAOKKK* OHPJHPEOFLD, ::KBHDKAAAGNF* ODAFPMADJNH, ::JFBNBOHNJBF* IHAMOGFIMAD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::KBHDKAAAGNF*, ::JFBNBOHNJBF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_AINENAFMJEH_OFFSET))(OHPJHPEOFLD, ODAFPMADJNH, IHAMOGFIMAD);
	}

	static ::System::Void NEJAGJNHEAA(::System::Single PMNLNNGEIFM, ::KBHDKAAAGNF* ODAFPMADJNH)
	{
		return ((::System::Void(*)(::System::Single, ::KBHDKAAAGNF*))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_NEJAGJNHEAA_OFFSET))(PMNLNNGEIFM, ODAFPMADJNH);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGPKJLBAKK_MNEJHDIKCGJ_OFFSET))(this);
	}
};
