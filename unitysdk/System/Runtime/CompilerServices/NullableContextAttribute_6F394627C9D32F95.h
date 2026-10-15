#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_6F394627C9D32F95_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBDD20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_6F394627C9D32F95_TypeDefinitionIndex = 5067;

	class NullableContextAttribute_6F394627C9D32F95 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_6F394627C9D32F95_CTOR_OFFSET))(this, a1);
		}

	};
}
