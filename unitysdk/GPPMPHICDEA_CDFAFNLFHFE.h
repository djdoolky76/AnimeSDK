#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define GPPMPHICDEA_CDFAFNLFHFE_CPOHGNAILOG_OFFSET UNITYSDK_OFFSET(0x149F64F0)
#define GPPMPHICDEA_CDFAFNLFHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x149F64E0)

inline static constexpr unsigned int GPPMPHICDEA_CDFAFNLFHFE_TypeDefinitionIndex = 42688;

class GPPMPHICDEA_CDFAFNLFHFE : public ::System::Object
{
public:
	::System::Int32 GPJOOIDBDLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CDFAFNLFHFE__CTOR_OFFSET))(this);
	}

	::System::Void CPOHGNAILOG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CDFAFNLFHFE_CPOHGNAILOG_OFFSET))(this, BHDNBGLCNOM);
	}
};
