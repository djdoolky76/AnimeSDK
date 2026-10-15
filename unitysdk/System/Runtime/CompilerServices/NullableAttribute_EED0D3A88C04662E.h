#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_EED0D3A88C04662E_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE3B5B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableAttribute_EED0D3A88C04662E_TypeDefinitionIndex = 3850;

	class NullableAttribute_EED0D3A88C04662E : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Byte>* NullableFlags; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_EED0D3A88C04662E_CTOR_OFFSET))(this, a1);
		}

	};
}
