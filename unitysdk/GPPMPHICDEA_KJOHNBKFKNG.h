#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define GPPMPHICDEA_KJOHNBKFKNG_OPALJEOAEFE_OFFSET UNITYSDK_OFFSET(0x15F43960)
#define GPPMPHICDEA_KJOHNBKFKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F43950)

inline static constexpr unsigned int GPPMPHICDEA_KJOHNBKFKNG_TypeDefinitionIndex = 42686;

class GPPMPHICDEA_KJOHNBKFKNG : public ::System::Object
{
public:
	::System::Int32 CJPLACFCFBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KJOHNBKFKNG__CTOR_OFFSET))(this);
	}

	::System::Boolean OPALJEOAEFE(::PNIHGNDLMIN* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KJOHNBKFKNG_OPALJEOAEFE_OFFSET))(this, LJBPECKCCEA);
	}
};
