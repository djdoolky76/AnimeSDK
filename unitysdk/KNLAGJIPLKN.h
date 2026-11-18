#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define KNLAGJIPLKN_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1772B9C0)
#define KNLAGJIPLKN_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1772BA00)
#define KNLAGJIPLKN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1772B240)
#define KNLAGJIPLKN_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x1772B7E0)
#define KNLAGJIPLKN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1772BA90)
#define KNLAGJIPLKN_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x1772BB20)
#define KNLAGJIPLKN_UPDATE_OFFSET UNITYSDK_OFFSET(0x1772B5D0)
#define KNLAGJIPLKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1772B790)

inline static constexpr unsigned int KNLAGJIPLKN_TypeDefinitionIndex = 40261;

class KNLAGJIPLKN : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLAGJIPLKN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_UPDATE_OFFSET))(this);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KNLAGJIPLKN_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}
};
