#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class GameObject; }

#define LJELNPAIGDN_BIJGPDDIMNH_OFFSET UNITYSDK_OFFSET(0x158EBEB0)
#define LJELNPAIGDN_BKDAILMLNEF_OFFSET UNITYSDK_OFFSET(0x158ECE70)
#define LJELNPAIGDN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x158EB120)
#define LJELNPAIGDN_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x158EB830)
#define LJELNPAIGDN_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x158EB7E0)
#define LJELNPAIGDN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x158ECDE0)
#define LJELNPAIGDN_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x158ECF60)
#define LJELNPAIGDN_OJDJKFEJJFI_OFFSET UNITYSDK_OFFSET(0x158EB2E0)
#define LJELNPAIGDN_PAEPBONDDHP_OFFSET UNITYSDK_OFFSET(0x158EC530)
#define LJELNPAIGDN__CTOR_OFFSET UNITYSDK_OFFSET(0x158EB290)

inline static constexpr unsigned int LJELNPAIGDN_TypeDefinitionIndex = 87234;

class LJELNPAIGDN : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJELNPAIGDN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OJDJKFEJJFI(::UnityEngine::GameObject* CFKMIBOOCBD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_OJDJKFEJJFI_OFFSET))(this, CFKMIBOOCBD, KECKGDFIALJ);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJELNPAIGDN_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void BIJGPDDIMNH(::UnityEngine::GameObject* DPJFAMPHCED, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_BIJGPDDIMNH_OFFSET))(this, DPJFAMPHCED, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BKDAILMLNEF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_BKDAILMLNEF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_NPIJFJJOBCA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void PAEPBONDDHP(::UnityEngine::Vector3 DOPGNJAJNOK, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LJELNPAIGDN_PAEPBONDDHP_OFFSET))(this, DOPGNJAJNOK, KECKGDFIALJ);
	}
};
