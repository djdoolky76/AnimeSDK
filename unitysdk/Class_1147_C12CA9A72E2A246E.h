#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1147_C12CA9A72E2A246E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A2EB00)
#define CLASS_1147_C12CA9A72E2A246E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A2E700)
#define CLASS_1147_C12CA9A72E2A246E_METHOD_OFFSET UNITYSDK_OFFSET(0x14A2ED30)

	class Class_1147_C12CA9A72E2A246E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1147_C12CA9A72E2A246E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1147_C12CA9A72E2A246E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1147_C12CA9A72E2A246E_METHOD_2_OFFSET))(a1);
		}

	};
