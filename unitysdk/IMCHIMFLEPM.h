#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsWorld; }

#define IMCHIMFLEPM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF87DDF0)
#define IMCHIMFLEPM_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0xF87DF20)
#define IMCHIMFLEPM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xF87DE90)
#define IMCHIMFLEPM__CTOR_OFFSET UNITYSDK_OFFSET(0xF87DE40)

inline static constexpr unsigned int IMCHIMFLEPM_TypeDefinitionIndex = 42498;

class IMCHIMFLEPM : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCHIMFLEPM__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IMCHIMFLEPM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IMCHIMFLEPM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IMCHIMFLEPM_HMLGKBFFNHI_OFFSET))(NJNCGJLHLKC);
	}
};
