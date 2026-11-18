#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APIPPBONGEF.h"
#include "unitysdk/System/Object.h"

#define LPONLBKKDLP_NMDKMCHJEJO_OFFSET UNITYSDK_OFFSET(0x11F2ADD0)
#define LPONLBKKDLP_PEHEBDJPOPF_OFFSET UNITYSDK_OFFSET(0x11F2AD80)

inline static constexpr unsigned int LPONLBKKDLP_TypeDefinitionIndex = 90435;

class LPONLBKKDLP : public ::System::Object
{
public:
	static ::System::Boolean PEHEBDJPOPF(::APIPPBONGEF FCPCLIJNDLA, ::APIPPBONGEF EDNELJDHGBM)
	{
		return ((::System::Boolean(*)(::APIPPBONGEF, ::APIPPBONGEF))((::PBYTE)hIl2Cpp + LPONLBKKDLP_PEHEBDJPOPF_OFFSET))(FCPCLIJNDLA, EDNELJDHGBM);
	}

	static ::System::Boolean NMDKMCHJEJO(::APIPPBONGEF FCPCLIJNDLA, ::APIPPBONGEF EDNELJDHGBM)
	{
		return ((::System::Boolean(*)(::APIPPBONGEF, ::APIPPBONGEF))((::PBYTE)hIl2Cpp + LPONLBKKDLP_NMDKMCHJEJO_OFFSET))(FCPCLIJNDLA, EDNELJDHGBM);
	}
};
