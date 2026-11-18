#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define FAKPENHABDD_BONOPGHJPPB_OFFSET UNITYSDK_OFFSET(0x10F523E0)
#define FAKPENHABDD_DEOPPNPHCPI_OFFSET UNITYSDK_OFFSET(0x10F52330)
#define FAKPENHABDD_KLAGHPHHNJL_OFFSET UNITYSDK_OFFSET(0x10F52470)
#define FAKPENHABDD_ONPECLHOGDB_OFFSET UNITYSDK_OFFSET(0x10F52390)
#define FAKPENHABDD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F523D0)

inline static constexpr unsigned int FAKPENHABDD_TypeDefinitionIndex = 63201;

class FAKPENHABDD : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKPENHABDD__CTOR_OFFSET))(this);
	}

	::System::Int32 DEOPPNPHCPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKPENHABDD_DEOPPNPHCPI_OFFSET))(this);
	}

	::System::Boolean ONPECLHOGDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKPENHABDD_ONPECLHOGDB_OFFSET))(this);
	}

	::System::Boolean BONOPGHJPPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKPENHABDD_BONOPGHJPPB_OFFSET))(this);
	}

	::System::Int32 KLAGHPHHNJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKPENHABDD_KLAGHPHHNJL_OFFSET))(this);
	}
};
