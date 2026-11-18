#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MMDHONFKEII_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x174AB3A0)
#define MMDHONFKEII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A90E0)
#define MMDHONFKEII__CTOR_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MMDHONFKEII_TypeDefinitionIndex = 73267;

struct alignas(4) MMDHONFKEII
{
	::System::Void _ctor(::System::String* GFKCABHFFEE, ::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMDHONFKEII__CTOR_OFFSET))(this, GFKCABHFFEE, DECIDLELLCP);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDHONFKEII_DISPOSE_OFFSET))(this);
	}

	/*
	static ::MMDHONFKEII COKNIICCODC(::System::String* GFKCABHFFEE, ::System::Boolean DECIDLELLCP)
	{
		return ((::MMDHONFKEII(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMDHONFKEII_COKNIICCODC_OFFSET))(GFKCABHFFEE, DECIDLELLCP);
	}
	*/
};
