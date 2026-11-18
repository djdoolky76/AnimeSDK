#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIKKMBHKDAO.h"

#define ENAEABGCDCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F46080)
#define ENAEABGCDCF_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x10F460C0)
#define ENAEABGCDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x10F46320)

inline static constexpr unsigned int ENAEABGCDCF_TypeDefinitionIndex = 81458;

class ENAEABGCDCF : public ::CIKKMBHKDAO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEABGCDCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEABGCDCF_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEABGCDCF_PCEPOEIOFBN_OFFSET))(this);
	}
};
