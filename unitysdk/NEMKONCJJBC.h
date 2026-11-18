#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AEMCAOEICDG;
class BMBAFGIABBD;
class EHKKPCGAJHO;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NEMKONCJJBC_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xE7359C0)
#define NEMKONCJJBC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE734E50)
#define NEMKONCJJBC_GMMHPDIOKCK_OFFSET UNITYSDK_OFFSET(0xE735220)
#define NEMKONCJJBC_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0xE735600)
#define NEMKONCJJBC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xE735930)
#define NEMKONCJJBC_UPDATE_OFFSET UNITYSDK_OFFSET(0xE735060)
#define NEMKONCJJBC__CTOR_OFFSET UNITYSDK_OFFSET(0xE7351D0)

inline static constexpr unsigned int NEMKONCJJBC_TypeDefinitionIndex = 74344;

class NEMKONCJJBC : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMKONCJJBC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NEMKONCJJBC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMKONCJJBC_UPDATE_OFFSET))(this);
	}

	static ::System::Void GMMHPDIOKCK(::BMBAFGIABBD* LJGFBEAJJOI, ::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::BMBAFGIABBD*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + NEMKONCJJBC_GMMHPDIOKCK_OFFSET))(LJGFBEAJJOI, POBADKEDFOE, OHPJHPEOFLD);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEMKONCJJBC_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NEMKONCJJBC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMKONCJJBC_CMFOMGGDPPA_OFFSET))(this);
	}
};
