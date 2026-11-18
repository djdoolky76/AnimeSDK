#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHABIJINEHA.h"
#include "unitysdk/HIAAHKAGMEM.h"

class KGBFLHNJHHN;

#define OJOCMOIHAJJ_EMAECICOIGL_OFFSET UNITYSDK_OFFSET(0x1EDB47B0)
#define OJOCMOIHAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDB47A0)

inline static constexpr unsigned int OJOCMOIHAJJ_TypeDefinitionIndex = 9965;

class OJOCMOIHAJJ : public ::OHABIJINEHA
{
public:
	::System::Void _ctor(::HIAAHKAGMEM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HIAAHKAGMEM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OJOCMOIHAJJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EMAECICOIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOCMOIHAJJ_EMAECICOIGL_OFFSET))(this);
	}
};
