#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define KNOIOOEOCPA_GBPMMKGLBNM_OFFSET UNITYSDK_OFFSET(0x18648F00)
#define KNOIOOEOCPA_NONCHEJEPDJ_OFFSET UNITYSDK_OFFSET(0x18649070)
#define KNOIOOEOCPA__CTOR_OFFSET UNITYSDK_OFFSET(0x18649060)

inline static constexpr unsigned int KNOIOOEOCPA_TypeDefinitionIndex = 81747;

class KNOIOOEOCPA : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOIOOEOCPA__CTOR_OFFSET))(this);
	}

	::System::Int32 GBPMMKGLBNM(::System::Int32 PJCLICDAHHB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOIOOEOCPA_GBPMMKGLBNM_OFFSET))(this, PJCLICDAHHB);
	}

	::System::Int32 NONCHEJEPDJ(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOIOOEOCPA_NONCHEJEPDJ_OFFSET))(this, MIALFKCCCPI);
	}
};
