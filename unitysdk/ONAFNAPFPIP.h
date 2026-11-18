#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAFHPDMDDJD.h"

#define ONAFNAPFPIP_HKOGIEJNJOA_OFFSET UNITYSDK_OFFSET(0x16C285A0)
#define ONAFNAPFPIP_JDKLBOEEPPH_OFFSET UNITYSDK_OFFSET(0x16C28720)
#define ONAFNAPFPIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C28710)

inline static constexpr unsigned int ONAFNAPFPIP_TypeDefinitionIndex = 54385;

class ONAFNAPFPIP : public ::PAFHPDMDDJD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAFNAPFPIP__CTOR_OFFSET))(this);
	}

	::System::Void HKOGIEJNJOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAFNAPFPIP_HKOGIEJNJOA_OFFSET))(this);
	}

	::System::Void JDKLBOEEPPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAFNAPFPIP_JDKLBOEEPPH_OFFSET))(this);
	}
};
