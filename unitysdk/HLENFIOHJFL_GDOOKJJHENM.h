#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_GDOOKJJHENM_PEPHHNHGKPP_OFFSET UNITYSDK_OFFSET(0x19E2F330)
#define HLENFIOHJFL_GDOOKJJHENM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2F320)

inline static constexpr unsigned int HLENFIOHJFL_GDOOKJJHENM_TypeDefinitionIndex = 54199;

class HLENFIOHJFL_GDOOKJJHENM : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10
	::System::UInt32 FMJPOIFLFOJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_GDOOKJJHENM__CTOR_OFFSET))(this);
	}

	::System::Void PEPHHNHGKPP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_GDOOKJJHENM_PEPHHNHGKPP_OFFSET))(this, BHDNBGLCNOM);
	}
};
