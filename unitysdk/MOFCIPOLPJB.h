#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOFCIPOLPJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x63CBA0)
#define MOFCIPOLPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int MOFCIPOLPJB_TypeDefinitionIndex = 61593;

struct alignas(8) MOFCIPOLPJB
{
	::System::String* IDMKDFMOKNC; // 0x10
	::System::String* ENMEIJPEPDB; // 0x18

	::System::Void _ctor(::System::String* NMNBFFOJOJA, ::System::String* AMJIHFDPIFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOFCIPOLPJB__CTOR_OFFSET))(this, NMNBFFOJOJA, AMJIHFDPIFH);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCIPOLPJB_DISPOSE_OFFSET))(this);
	}
};
