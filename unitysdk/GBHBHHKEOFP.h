#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define GBHBHHKEOFP_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x125C2870)
#define GBHBHHKEOFP_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x125C2510)
#define GBHBHHKEOFP_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x125C27E0)
#define GBHBHHKEOFP_UPDATE_OFFSET UNITYSDK_OFFSET(0x125C2620)
#define GBHBHHKEOFP__CTOR_OFFSET UNITYSDK_OFFSET(0x125C2790)

inline static constexpr unsigned int GBHBHHKEOFP_TypeDefinitionIndex = 77025;

class GBHBHHKEOFP : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* JDDGPFHBFJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBHHKEOFP__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GBHBHHKEOFP_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBHHKEOFP_UPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GBHBHHKEOFP_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBHHKEOFP_CMFOMGGDPPA_OFFSET))(this);
	}
};
