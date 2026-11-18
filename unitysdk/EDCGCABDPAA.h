#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class OMNOOPKMIBP;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define EDCGCABDPAA_AOHFIOJLAOJ_OFFSET UNITYSDK_OFFSET(0x161321F0)
#define EDCGCABDPAA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x16132340)
#define EDCGCABDPAA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16131900)
#define EDCGCABDPAA_GGECIHCEDDD_OFFSET UNITYSDK_OFFSET(0x16131CA0)
#define EDCGCABDPAA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16131D30)
#define EDCGCABDPAA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x161323D0)
#define EDCGCABDPAA_UPDATE_OFFSET UNITYSDK_OFFSET(0x16131AE0)
#define EDCGCABDPAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16131C50)

inline static constexpr unsigned int EDCGCABDPAA_TypeDefinitionIndex = 60535;

class EDCGCABDPAA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCGCABDPAA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EDCGCABDPAA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCGCABDPAA_UPDATE_OFFSET))(this);
	}

	static ::System::Void GGECIHCEDDD(::OMNOOPKMIBP* JHJMFPBNLOL)
	{
		return ((::System::Void(*)(::OMNOOPKMIBP*))((::PBYTE)hIl2Cpp + EDCGCABDPAA_GGECIHCEDDD_OFFSET))(JHJMFPBNLOL);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDCGCABDPAA_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void AOHFIOJLAOJ(::OMNOOPKMIBP* JHJMFPBNLOL)
	{
		return ((::System::Void(*)(::OMNOOPKMIBP*))((::PBYTE)hIl2Cpp + EDCGCABDPAA_AOHFIOJLAOJ_OFFSET))(JHJMFPBNLOL);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCGCABDPAA_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EDCGCABDPAA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
