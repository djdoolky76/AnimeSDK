#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_72D5152414103A4C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB8860)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_72D5152414103A4C_TypeDefinitionIndex = 7147;

	class IsReadOnlyAttribute_72D5152414103A4C : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_72D5152414103A4C_CTOR_OFFSET))(this);
		}

	};
}
