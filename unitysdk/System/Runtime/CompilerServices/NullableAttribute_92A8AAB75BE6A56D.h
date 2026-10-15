#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_92A8AAB75BE6A56D_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB61300)

namespace System::Runtime::CompilerServices
{
	class NullableAttribute_92A8AAB75BE6A56D : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Byte>* NullableFlags; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_92A8AAB75BE6A56D_CTOR_OFFSET))(this, a1);
		}

	};
}
