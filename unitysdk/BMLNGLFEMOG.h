#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAFHPDMDDJD.h"

#define BMLNGLFEMOG_HKOGIEJNJOA_OFFSET UNITYSDK_OFFSET(0x1425E880)
#define BMLNGLFEMOG_JDKLBOEEPPH_OFFSET UNITYSDK_OFFSET(0x1425E9C0)
#define BMLNGLFEMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1425E9B0)

inline static constexpr unsigned int BMLNGLFEMOG_TypeDefinitionIndex = 44622;

class BMLNGLFEMOG : public ::PAFHPDMDDJD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNGLFEMOG__CTOR_OFFSET))(this);
	}

	::System::Void HKOGIEJNJOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNGLFEMOG_HKOGIEJNJOA_OFFSET))(this);
	}

	::System::Void JDKLBOEEPPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNGLFEMOG_JDKLBOEEPPH_OFFSET))(this);
	}
};
