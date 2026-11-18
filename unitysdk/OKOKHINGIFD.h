#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define OKOKHINGIFD_BOHNMHFKICK_OFFSET UNITYSDK_OFFSET(0x15FE89A0)
#define OKOKHINGIFD_FDIONDEPHML_OFFSET UNITYSDK_OFFSET(0x15FE8A10)
#define OKOKHINGIFD_GIFLGAFJAOE_OFFSET UNITYSDK_OFFSET(0x15FE8AC0)
#define OKOKHINGIFD_LFOLMCBIFDI_OFFSET UNITYSDK_OFFSET(0x15FE8940)
#define OKOKHINGIFD__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE8A00)

inline static constexpr unsigned int OKOKHINGIFD_TypeDefinitionIndex = 77152;

class OKOKHINGIFD : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOKHINGIFD__CTOR_OFFSET))(this);
	}

	::System::Int32 LFOLMCBIFDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOKHINGIFD_LFOLMCBIFDI_OFFSET))(this);
	}

	::System::Int32 BOHNMHFKICK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOKHINGIFD_BOHNMHFKICK_OFFSET))(this);
	}

	::System::Int32 FDIONDEPHML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOKHINGIFD_FDIONDEPHML_OFFSET))(this);
	}

	::System::Int32 GIFLGAFJAOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOKHINGIFD_GIFLGAFJAOE_OFFSET))(this);
	}
};
