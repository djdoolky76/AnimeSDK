#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMKDLLNKPCL.h"
#include "unitysdk/HLOEIMJEGIH.h"

class KGBFLHNJHHN;

#define OGHMCBBJNBB_GBNDAKMJEFO_OFFSET UNITYSDK_OFFSET(0x1B33B960)
#define OGHMCBBJNBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B33B950)

inline static constexpr unsigned int OGHMCBBJNBB_TypeDefinitionIndex = 16858;

class OGHMCBBJNBB : public ::DMKDLLNKPCL
{
public:
	::System::Void _ctor(::HLOEIMJEGIH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLOEIMJEGIH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGHMCBBJNBB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean GBNDAKMJEFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHMCBBJNBB_GBNDAKMJEFO_OFFSET))(this);
	}
};
