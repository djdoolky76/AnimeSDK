#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_5B2944D05171D0B3_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE46370)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableAttribute_5B2944D05171D0B3_TypeDefinitionIndex = 4963;

	class NullableAttribute_5B2944D05171D0B3 : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Byte>* NullableFlags; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_5B2944D05171D0B3_CTOR_OFFSET))(this, a1);
		}

	};
}
