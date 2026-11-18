#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BELENCMKDFO__CTOR_OFFSET UNITYSDK_OFFSET(0x5E6750)

inline static constexpr unsigned int BELENCMKDFO_TypeDefinitionIndex = 49425;

struct alignas(8) BELENCMKDFO
{
	::System::String* PDPGBBBNNCJ; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x18
	::System::Boolean MJIMNNFEKNB; // 0x1C

	::System::Void _ctor(::System::String* LEAJKMEGBLE, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BELENCMKDFO__CTOR_OFFSET))(this, LEAJKMEGBLE, DKOFFFNEFJC);
	}
};
