#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class EBPMLFEJPHP;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NBNCIGJNPMF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16B5AF80)
#define NBNCIGJNPMF_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16B5B1F0)
#define NBNCIGJNPMF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16B5B160)
#define NBNCIGJNPMF_PILPFNALBIP_OFFSET UNITYSDK_OFFSET(0x16B5B4D0)
#define NBNCIGJNPMF__CTOR_OFFSET UNITYSDK_OFFSET(0x16B5B110)

inline static constexpr unsigned int NBNCIGJNPMF_TypeDefinitionIndex = 51815;

class NBNCIGJNPMF : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNCIGJNPMF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NBNCIGJNPMF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NBNCIGJNPMF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBNCIGJNPMF_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void PILPFNALBIP(::EBPMLFEJPHP* PNJDOJPMPJC)
	{
		return ((::System::Void(*)(::PVOID, ::EBPMLFEJPHP*))((::PBYTE)hIl2Cpp + NBNCIGJNPMF_PILPFNALBIP_OFFSET))(this, PNJDOJPMPJC);
	}
};
