#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_08423D1B6B0CEF4D_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE68F10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_08423D1B6B0CEF4D_TypeDefinitionIndex = 3851;

	class NullableContextAttribute_08423D1B6B0CEF4D : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_08423D1B6B0CEF4D_CTOR_OFFSET))(this, a1);
		}

	};
}
