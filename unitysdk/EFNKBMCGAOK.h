#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define EFNKBMCGAOK_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x10F29DD0)
#define EFNKBMCGAOK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10F29B70)
#define EFNKBMCGAOK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x10F29D40)
#define EFNKBMCGAOK_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x10F2A160)
#define EFNKBMCGAOK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F29CF0)

inline static constexpr unsigned int EFNKBMCGAOK_TypeDefinitionIndex = 42714;

class EFNKBMCGAOK : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNKBMCGAOK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EFNKBMCGAOK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EFNKBMCGAOK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EFNKBMCGAOK_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EFNKBMCGAOK_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}
};
