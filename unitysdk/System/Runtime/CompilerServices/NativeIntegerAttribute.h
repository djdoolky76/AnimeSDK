#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE80FD0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NativeIntegerAttribute_TypeDefinitionIndex = 3872;

	class NativeIntegerAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Boolean>* TransformFlags; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
