#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJBKOKBOFJD.h"
#include "unitysdk/EILGHEJKGPA.h"

class KGBFLHNJHHN;

#define APDCOGDCIDK_BCCPJMLJECH_OFFSET UNITYSDK_OFFSET(0x187741C0)
#define APDCOGDCIDK__CTOR_OFFSET UNITYSDK_OFFSET(0x187741B0)

inline static constexpr unsigned int APDCOGDCIDK_TypeDefinitionIndex = 15668;

class APDCOGDCIDK : public ::LJBKOKBOFJD
{
public:
	::System::Void _ctor(::EILGHEJKGPA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EILGHEJKGPA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APDCOGDCIDK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean BCCPJMLJECH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APDCOGDCIDK_BCCPJMLJECH_OFFSET))(this);
	}
};
