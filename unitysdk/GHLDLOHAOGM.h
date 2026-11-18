#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class KPNIFGIKELE_BEBANOFCFII;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define GHLDLOHAOGM_CJMHKAOPBGC_OFFSET UNITYSDK_OFFSET(0x11DAC940)
#define GHLDLOHAOGM_CNHBDOMKKDE_1_OFFSET UNITYSDK_OFFSET(0x11DACE30)
#define GHLDLOHAOGM_CNHBDOMKKDE_2_OFFSET UNITYSDK_OFFSET(0x11DAD090)
#define GHLDLOHAOGM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11DACC10)
#define GHLDLOHAOGM_JJEKDNACNFP_OFFSET UNITYSDK_OFFSET(0x11DACB60)
#define GHLDLOHAOGM_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x11DACAC0)
#define GHLDLOHAOGM_PDINJLNLANK_OFFSET UNITYSDK_OFFSET(0x11DAC840)
#define GHLDLOHAOGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11DAC6D0)
#define GHLDLOHAOGM__CTOR_OFFSET UNITYSDK_OFFSET(0x11DAC680)

inline static constexpr unsigned int GHLDLOHAOGM_TypeDefinitionIndex = 59074;

class GHLDLOHAOGM : public ::System::Object
{
public:
	::MoleMole::Config::ConfigEntityAttackPattern* CCKOEOCJIOI; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* ICOILFBGBDK; // 0x18
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x20
	::UnityEngine::Collider* PHANEPGMOLB; // 0x28
	::UnityEngine::Vector3 IIFGPAHCHDC; // 0x30
	::UnityEngine::Vector3 LKKJMPKFCIA; // 0x3C
	::System::Boolean IDHEIBDCHKO; // 0x48
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 AHCJGKIPAAB; // 0x4C
	::System::Int32 ALJIBGBBAPK; // 0x58
	::UnityEngine::Vector3 EPAAGNAFHII; // 0x5C
	::System::UInt32 KPBCENDNNDC; // 0x68
	::System::Int32 AJCALEJNNDK; // 0x6C
	::UnityEngine::Vector3 FOLHIAMAPAC; // 0x70
	::UnityEngine::Vector3 GLPBNHEECLO; // 0x7C
	::UnityEngine::Vector3 LBKMCOKBJEA; // 0x88
	::UnityEngine::Vector3 ANNNDENOJJG; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLDLOHAOGM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_PHOADBJGFBE_OFFSET))(this);
	}

	static ::KPNIFGIKELE_BEBANOFCFII* PDINJLNLANK(::GHLDLOHAOGM* IGAAKDOIPNN, ::KPNIFGIKELE_BEBANOFCFII* KCOCAHHCPNL)
	{
		return ((::KPNIFGIKELE_BEBANOFCFII*(*)(::GHLDLOHAOGM*, ::KPNIFGIKELE_BEBANOFCFII*))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_PDINJLNLANK_OFFSET))(IGAAKDOIPNN, KCOCAHHCPNL);
	}

	static ::System::Void CJMHKAOPBGC(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*& ABLBFLBOEOG)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*&))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_CJMHKAOPBGC_OFFSET))(ABLBFLBOEOG);
	}

	static ::System::Void MBKDOMFJFIG(::GHLDLOHAOGM* CFFMFCFODJP)
	{
		return ((::System::Void(*)(::GHLDLOHAOGM*))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_MBKDOMFJFIG_OFFSET))(CFFMFCFODJP);
	}

	static ::System::Void JJEKDNACNFP(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_JJEKDNACNFP_OFFSET))(ABLBFLBOEOG);
	}

	::System::Void CNHBDOMKKDE(::UnityEngine::Collider* CENNGGANJOB, ::UnityEngine::Vector3 ANNNDENOJJG, ::UnityEngine::Vector3 GOMDANBDJIE, ::UnityEngine::Vector3 LBKMCOKBJEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_CNHBDOMKKDE_OFFSET))(this, CENNGGANJOB, ANNNDENOJJG, GOMDANBDJIE, LBKMCOKBJEA);
	}

	::System::Void CNHBDOMKKDE_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 ANNNDENOJJG, ::UnityEngine::Vector3 LKKJMPKFCIA, ::System::Int32 AJCALEJNNDK, ::UnityEngine::Vector3 EPAAGNAFHII, ::UnityEngine::Vector3 OBEHEDGGIGE, ::UnityEngine::Vector3 CGLGGNDOGDL, ::UnityEngine::Vector3 KEEOIIIMOLF, ::UnityEngine::Vector3 LBKMCOKBJEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_CNHBDOMKKDE_1_OFFSET))(this, KECKGDFIALJ, ANNNDENOJJG, LKKJMPKFCIA, AJCALEJNNDK, EPAAGNAFHII, OBEHEDGGIGE, CGLGGNDOGDL, KEEOIIIMOLF, LBKMCOKBJEA);
	}

	::System::Void CNHBDOMKKDE_2(::UnityEngine::RaycastHit HMJEPOILGOF, ::UnityEngine::Vector3 GOMDANBDJIE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHLDLOHAOGM_CNHBDOMKKDE_2_OFFSET))(this, HMJEPOILGOF, GOMDANBDJIE);
	}
};
