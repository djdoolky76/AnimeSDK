#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define BBDHGBOEKDJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x185497B0)
#define BBDHGBOEKDJ_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18549940)
#define BBDHGBOEKDJ_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x18549B90)
#define BBDHGBOEKDJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x18549B00)
#define BBDHGBOEKDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18549AB0)

inline static constexpr unsigned int BBDHGBOEKDJ_TypeDefinitionIndex = 70784;

class BBDHGBOEKDJ : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* JDDGPFHBFJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ_INEGOEGIOKM_OFFSET))(this);
	}
};
