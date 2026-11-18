#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPLEFHOINGE.h"
#include "unitysdk/KPMBONEBMHB.h"

class KGBFLHNJHHN;

#define NOCBPIJPGAO_FOKMCHHHNJG_OFFSET UNITYSDK_OFFSET(0xED3F2B0)
#define NOCBPIJPGAO__CTOR_OFFSET UNITYSDK_OFFSET(0xED3F290)

inline static constexpr unsigned int NOCBPIJPGAO_TypeDefinitionIndex = 38300;

class NOCBPIJPGAO : public ::CPLEFHOINGE
{
public:
	::System::Int32 MNKLAMCHAEH; // 0x40

	::System::Void _ctor(::KPMBONEBMHB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KPMBONEBMHB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOCBPIJPGAO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FOKMCHHHNJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCBPIJPGAO_FOKMCHHHNJG_OFFSET))(this);
	}
};
