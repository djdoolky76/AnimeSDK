#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_3C4DFEC434849BA1_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED87350)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_3C4DFEC434849BA1_TypeDefinitionIndex = 6572;

	class IsReadOnlyAttribute_3C4DFEC434849BA1 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_3C4DFEC434849BA1_CTOR_OFFSET))(this);
		}

	};
}
