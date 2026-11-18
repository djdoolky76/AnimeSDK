#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKMBDABLMCO.h"
#include "unitysdk/DODKHHAODOE.h"

class KGBFLHNJHHN;

#define KFHBLDAFNOF_AHAADLCOEHJ_OFFSET UNITYSDK_OFFSET(0x1DB8B0A0)
#define KFHBLDAFNOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8B090)

inline static constexpr unsigned int KFHBLDAFNOF_TypeDefinitionIndex = 93379;

class KFHBLDAFNOF : public ::NKMBDABLMCO
{
public:
	::System::Void _ctor(::DODKHHAODOE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DODKHHAODOE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KFHBLDAFNOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean AHAADLCOEHJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHBLDAFNOF_AHAADLCOEHJ_OFFSET))(this);
	}
};
