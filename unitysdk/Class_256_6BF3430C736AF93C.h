#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_256_6BF3430C736AF93C_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB81A7B0)
#define CLASS_256_6BF3430C736AF93C_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB81A380)
#define CLASS_256_6BF3430C736AF93C_METHOD_OFFSET UNITYSDK_OFFSET(0xB81AA40)

	class Class_256_6BF3430C736AF93C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_256_6BF3430C736AF93C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_256_6BF3430C736AF93C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_256_6BF3430C736AF93C_METHOD_2_OFFSET))(a1);
		}

	};
