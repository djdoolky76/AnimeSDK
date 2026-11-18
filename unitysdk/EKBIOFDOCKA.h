#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIGJBOIMNNH.h"

class GEIHCPAOKKK;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define EKBIOFDOCKA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10642990)
#define EKBIOFDOCKA_GCOJAHCAGGO_OFFSET UNITYSDK_OFFSET(0x10642BE0)
#define EKBIOFDOCKA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x10642FB0)
#define EKBIOFDOCKA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x10642F20)
#define EKBIOFDOCKA__CTOR_OFFSET UNITYSDK_OFFSET(0x10642B90)

inline static constexpr unsigned int EKBIOFDOCKA_TypeDefinitionIndex = 41890;

class EKBIOFDOCKA : public ::NIGJBOIMNNH
{
public:
	::Nap::NapECS::EcsFilter* JDDGPFHBFJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBIOFDOCKA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EKBIOFDOCKA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void GCOJAHCAGGO(::GEIHCPAOKKK* BLMMDNLMHBL)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + EKBIOFDOCKA_GCOJAHCAGGO_OFFSET))(this, BLMMDNLMHBL);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EKBIOFDOCKA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKBIOFDOCKA_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}
};
