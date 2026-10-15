#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_1F57465F3F9C1AF6_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE540)

namespace System::Runtime::CompilerServices
{
	class NullableAttribute_1F57465F3F9C1AF6 : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Byte>* NullableFlags; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_1F57465F3F9C1AF6_CTOR_OFFSET))(this, a1);
		}

	};
}
