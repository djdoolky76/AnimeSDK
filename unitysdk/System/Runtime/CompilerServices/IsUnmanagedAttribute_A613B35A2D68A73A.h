#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_A613B35A2D68A73A_CTOR_OFFSET UNITYSDK_OFFSET(0x2079C150)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_A613B35A2D68A73A_TypeDefinitionIndex = 36096;

	class IsUnmanagedAttribute_A613B35A2D68A73A : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_A613B35A2D68A73A_CTOR_OFFSET))(this);
		}

	};
}
