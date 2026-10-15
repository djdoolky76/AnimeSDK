#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_18948A9989A5CC18_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED873A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_18948A9989A5CC18_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED87360)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableAttribute_18948A9989A5CC18_TypeDefinitionIndex = 6573;

	class NullableAttribute_18948A9989A5CC18 : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Byte>* NullableFlags; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_18948A9989A5CC18_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_18948A9989A5CC18_CTOR_1_OFFSET))(this, a1);
		}

	};
}
