#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class APEFOBNNCOA;
class DIGCFNHHBEA;
class OEAKPHDBPJM;
class PGELKINJIIN;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define OAPHBBNFNPO_AHPPFFGMNBB_OFFSET UNITYSDK_OFFSET(0xE0E32A0)
#define OAPHBBNFNPO_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xE0E3210)
#define OAPHBBNFNPO_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE0E2880)
#define OAPHBBNFNPO_DOAMCGCAADP_OFFSET UNITYSDK_OFFSET(0xE0E2B80)
#define OAPHBBNFNPO_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE0E2A30)
#define OAPHBBNFNPO_HAKLFNCPAFB_OFFSET UNITYSDK_OFFSET(0xE0E3B60)
#define OAPHBBNFNPO_HGIFGFGENBI_OFFSET UNITYSDK_OFFSET(0xE0E2E80)
#define OAPHBBNFNPO_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xE0E4D20)
#define OAPHBBNFNPO_LOPEJPKBFBL_OFFSET UNITYSDK_OFFSET(0xE0E4470)
#define OAPHBBNFNPO_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xE0E30F0)
#define OAPHBBNFNPO_NJCCGKBKICE_OFFSET UNITYSDK_OFFSET(0xE0E3180)
#define OAPHBBNFNPO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0E2AE0)
#define OAPHBBNFNPO_PIIPBJBKPGC_OFFSET UNITYSDK_OFFSET(0xE0E2DD0)
#define OAPHBBNFNPO_UPDATE_OFFSET UNITYSDK_OFFSET(0xE0E2A80)
#define OAPHBBNFNPO__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E2B30)

inline static constexpr unsigned int OAPHBBNFNPO_TypeDefinitionIndex = 52930;

class OAPHBBNFNPO : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* NPJMLMIGIEC; // 0x20
	::Nap::NapECS::EcsFilter* LEJGBEHMIMG; // 0x28
	::Nap::NapECS::EcsFilter* EGHMGFMJEPO; // 0x30
	::Nap::NapECS::EcsFilter* GBEAIHECDJD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_ONDESTROY_OFFSET))(this);
	}

	static ::PGELKINJIIN* DOAMCGCAADP(::MoleMole::Battle::Entity* BDHOILPIGKB, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single NKINLLEHHOO)
	{
		return ((::PGELKINJIIN*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_DOAMCGCAADP_OFFSET))(BDHOILPIGKB, IACKHFCLPJI, NKINLLEHHOO);
	}

	static ::System::Void PIIPBJBKPGC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_PIIPBJBKPGC_OFFSET))(KECKGDFIALJ);
	}

	static ::OEAKPHDBPJM* HGIFGFGENBI(::MoleMole::Battle::Entity* BDHOILPIGKB, ::FluffyUnderware::Curvy::CurvySpline* FAJHPKBELMF, ::System::Single IJKOLMELBBC, ::System::Single IMLLDOHDCNC, ::System::Single DCPAIJPEIDO, ::System::Single NKINLLEHHOO)
	{
		return ((::OEAKPHDBPJM*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_HGIFGFGENBI_OFFSET))(BDHOILPIGKB, FAJHPKBELMF, IJKOLMELBBC, IMLLDOHDCNC, DCPAIJPEIDO, NKINLLEHHOO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NJCCGKBKICE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_NJCCGKBKICE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::APEFOBNNCOA* AHPPFFGMNBB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::FluffyUnderware::Curvy::CurvySpline* FAJHPKBELMF, ::System::Single IJKOLMELBBC, ::System::Single IMLLDOHDCNC, ::System::Single DCPAIJPEIDO, ::System::Single NKINLLEHHOO)
	{
		return ((::APEFOBNNCOA*(*)(::MoleMole::Battle::Entity*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_AHPPFFGMNBB_OFFSET))(KECKGDFIALJ, FAJHPKBELMF, IJKOLMELBBC, IMLLDOHDCNC, DCPAIJPEIDO, NKINLLEHHOO);
	}

	static ::DIGCFNHHBEA* HAKLFNCPAFB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single NKINLLEHHOO, ::System::Single NNFCELHDNGO)
	{
		return ((::DIGCFNHHBEA*(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_HAKLFNCPAFB_OFFSET))(KECKGDFIALJ, IACKHFCLPJI, NKINLLEHHOO, NNFCELHDNGO);
	}

	static ::DIGCFNHHBEA* LOPEJPKBFBL(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single NKINLLEHHOO, ::System::Single NNFCELHDNGO)
	{
		return ((::DIGCFNHHBEA*(*)(::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_LOPEJPKBFBL_OFFSET))(KECKGDFIALJ, NKINLLEHHOO, NNFCELHDNGO);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPHBBNFNPO_IFHNMAGGFAE_OFFSET))(this);
	}
};
