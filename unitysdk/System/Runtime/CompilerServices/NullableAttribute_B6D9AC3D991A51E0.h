#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_B6D9AC3D991A51E0_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD99FD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_B6D9AC3D991A51E0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD99F90)

namespace System::Runtime::CompilerServices
{
	class NullableAttribute_B6D9AC3D991A51E0 : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Byte>* NullableFlags; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_B6D9AC3D991A51E0_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_B6D9AC3D991A51E0_CTOR_1_OFFSET))(this, a1);
		}

	};
}
