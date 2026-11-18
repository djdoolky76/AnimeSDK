#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PILDAHLHJFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CCD00)
#define PILDAHLHJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int PILDAHLHJFE_TypeDefinitionIndex = 46890;

struct alignas(8) PILDAHLHJFE
{
	::System::String* IDMKDFMOKNC; // 0x10
	::System::String* ENMEIJPEPDB; // 0x18

	::System::Void _ctor(::System::String* NMNBFFOJOJA, ::System::String* AMJIHFDPIFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PILDAHLHJFE__CTOR_OFFSET))(this, NMNBFFOJOJA, AMJIHFDPIFH);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILDAHLHJFE_DISPOSE_OFFSET))(this);
	}
};
