#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOKKOEMOPFI.h"
#include "unitysdk/System/Object.h"

#define GCJHKDEGCIB_NMDKMCHJEJO_OFFSET UNITYSDK_OFFSET(0x11C9E3B0)
#define GCJHKDEGCIB_PEHEBDJPOPF_OFFSET UNITYSDK_OFFSET(0x11C9E400)

inline static constexpr unsigned int GCJHKDEGCIB_TypeDefinitionIndex = 56170;

class GCJHKDEGCIB : public ::System::Object
{
public:
	static ::System::Boolean NMDKMCHJEJO(::EOKKOEMOPFI FCPCLIJNDLA, ::EOKKOEMOPFI EDNELJDHGBM)
	{
		return ((::System::Boolean(*)(::EOKKOEMOPFI, ::EOKKOEMOPFI))((::PBYTE)hIl2Cpp + GCJHKDEGCIB_NMDKMCHJEJO_OFFSET))(FCPCLIJNDLA, EDNELJDHGBM);
	}

	static ::System::Boolean PEHEBDJPOPF(::EOKKOEMOPFI FCPCLIJNDLA, ::EOKKOEMOPFI EDNELJDHGBM)
	{
		return ((::System::Boolean(*)(::EOKKOEMOPFI, ::EOKKOEMOPFI))((::PBYTE)hIl2Cpp + GCJHKDEGCIB_PEHEBDJPOPF_OFFSET))(FCPCLIJNDLA, EDNELJDHGBM);
	}
};
