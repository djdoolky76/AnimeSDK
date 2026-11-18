#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class BCFIDMGHLEO;
class CFGHENPHCGL;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define KMEAMHOHLEF_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1863CDC0)
#define KMEAMHOHLEF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1863CB40)
#define KMEAMHOHLEF_HGLADCNHKKF_OFFSET UNITYSDK_OFFSET(0x1863D1A0)
#define KMEAMHOHLEF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1863CD30)
#define KMEAMHOHLEF_PMKEAOGIENO_OFFSET UNITYSDK_OFFSET(0x1863D0E0)
#define KMEAMHOHLEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1863CCE0)

inline static constexpr unsigned int KMEAMHOHLEF_TypeDefinitionIndex = 42075;

class KMEAMHOHLEF : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* JDDGPFHBFJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEAMHOHLEF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KMEAMHOHLEF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KMEAMHOHLEF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KMEAMHOHLEF_APAGIJMHEAK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PMKEAOGIENO(::CFGHENPHCGL* GBELIHABEDH, ::BCFIDMGHLEO* EFHACKCKCGC)
	{
		return ((::System::Void(*)(::CFGHENPHCGL*, ::BCFIDMGHLEO*))((::PBYTE)hIl2Cpp + KMEAMHOHLEF_PMKEAOGIENO_OFFSET))(GBELIHABEDH, EFHACKCKCGC);
	}

	static ::System::Void HGLADCNHKKF(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KMEAMHOHLEF_HGLADCNHKKF_OFFSET))(BKLGNCBNEGM);
	}
};
