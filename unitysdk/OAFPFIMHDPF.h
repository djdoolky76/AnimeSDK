#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AHBKEBCNJIO;
class CDMFPNFKOID;
class ENGKPGFGGLM;
class FJOIOEPGKPP;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAFPFIMHDPF_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0xF16DAF0)
#define OAFPFIMHDPF_BBCIEANPOPG_OFFSET UNITYSDK_OFFSET(0xF16C1A0)
#define OAFPFIMHDPF_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xF16DDC0)
#define OAFPFIMHDPF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF16B880)
#define OAFPFIMHDPF_DCPEAOAAFKN_OFFSET UNITYSDK_OFFSET(0xF16CD40)
#define OAFPFIMHDPF_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0xF16C4E0)
#define OAFPFIMHDPF_FPLGGEINEJF_OFFSET UNITYSDK_OFFSET(0xF16CF90)
#define OAFPFIMHDPF_GELKJPLFJOD_OFFSET UNITYSDK_OFFSET(0xF16C5B0)
#define OAFPFIMHDPF_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0xF16BEC0)
#define OAFPFIMHDPF_LKDNPIGDMJB_OFFSET UNITYSDK_OFFSET(0xF16D110)
#define OAFPFIMHDPF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xF16CCB0)
#define OAFPFIMHDPF_NFADEGJBFGP_OFFSET UNITYSDK_OFFSET(0xF16C020)
#define OAFPFIMHDPF_NLIHHJEGKKF_OFFSET UNITYSDK_OFFSET(0xF16C240)
#define OAFPFIMHDPF_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0xF16DAA0)
#define OAFPFIMHDPF_UPDATE_OFFSET UNITYSDK_OFFSET(0xF16BC70)
#define OAFPFIMHDPF__CCTOR_OFFSET UNITYSDK_OFFSET(0xF16BE30)
#define OAFPFIMHDPF__CTOR_OFFSET UNITYSDK_OFFSET(0xF16BDE0)

inline static constexpr unsigned int OAFPFIMHDPF_TypeDefinitionIndex = 75074;

class OAFPFIMHDPF : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_MBABGNMPJBM()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OAFPFIMHDPF_TypeDefinitionIndex)->GetStaticField(0x47760);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAFPFIMHDPF__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_UPDATE_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::String* NLIHHJEGKKF(::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_NLIHHJEGKKF_OFFSET))(DJHFOGHIFEJ);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DCPEAOAAFKN(::System::String* MCOHLHMKLIP, ::System::Int32 BFBAFMCHEAA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_DCPEAOAAFKN_OFFSET))(this, MCOHLHMKLIP, BFBAFMCHEAA, KECKGDFIALJ);
	}

	static ::System::Void NFADEGJBFGP(::CDMFPNFKOID* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::CDMFPNFKOID*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_NFADEGJBFGP_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Boolean FPLGGEINEJF(::System::String* MCOHLHMKLIP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_FPLGGEINEJF_OFFSET))(this, MCOHLHMKLIP, KECKGDFIALJ);
	}

	::System::Void LKDNPIGDMJB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::FJOIOEPGKPP* PIOFOEMLNBC, ::System::String* KPHNNGCGFGI, ::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::Boolean GOPJOOEINJM, ::System::Boolean NBDFPCBOMCF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::FJOIOEPGKPP*, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_LKDNPIGDMJB_OFFSET))(this, KECKGDFIALJ, PIOFOEMLNBC, KPHNNGCGFGI, DJHFOGHIFEJ, GOPJOOEINJM, NBDFPCBOMCF);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void BBCIEANPOPG(::System::Boolean GLCKMFAPIPC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_BBCIEANPOPG_OFFSET))(GLCKMFAPIPC);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void GELKJPLFJOD(::AHBKEBCNJIO* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::AHBKEBCNJIO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_GELKJPLFJOD_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}
};
