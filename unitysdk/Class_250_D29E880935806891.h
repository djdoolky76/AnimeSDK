#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_250_D29E880935806891_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15E0ED80)
#define CLASS_250_D29E880935806891_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15E0E950)
#define CLASS_250_D29E880935806891_METHOD_OFFSET UNITYSDK_OFFSET(0x15E0EFF0)

	class Class_250_D29E880935806891 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_250_D29E880935806891_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_250_D29E880935806891_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_250_D29E880935806891_METHOD_2_OFFSET))(a1);
		}

	};
