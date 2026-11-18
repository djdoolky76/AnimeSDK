#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_580C86385BA49D56__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0CE30)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_580C86385BA49D56_TypeDefinitionIndex = 28865;

	class IsUnmanagedAttribute_580C86385BA49D56 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_580C86385BA49D56__CTOR_OFFSET))(this);
		}
	};
}
