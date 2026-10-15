#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/MethodCodeType.h"
#include "unitysdk/System/Runtime/CompilerServices/MethodImplOptions.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2C7760)
#define SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C7750)

namespace System::Runtime::CompilerServices
{
	class MethodImplAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::CompilerServices::MethodCodeType MethodCodeType; // 0x10
		::System::Runtime::CompilerServices::MethodImplOptions _val; // 0x14
		::System::Void _ctor(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLATTRIBUTE_CTOR_1_OFFSET))(this);
		}

	};
}
