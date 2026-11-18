#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define JGLIJGDKCAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x6F9C10)

inline static constexpr unsigned int JGLIJGDKCAK_TypeDefinitionIndex = 75709;

struct alignas(4) JGLIJGDKCAK
{
	::System::Int32 AINFLEFDINO; // 0x10
	::UnityEngine::Bounds IKGHBCFKOOE; // 0x14

	/*
	::System::Boolean Equals(::JGLIJGDKCAK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGLIJGDKCAK))((::PBYTE)hIl2Cpp + JGLIJGDKCAK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
