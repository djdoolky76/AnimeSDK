#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_303_20584B57A67F7EA8_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148CE0E0)
#define CLASS_303_20584B57A67F7EA8_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148CDCE0)
#define CLASS_303_20584B57A67F7EA8_METHOD_OFFSET UNITYSDK_OFFSET(0x148CE330)

	class Class_303_20584B57A67F7EA8 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_303_20584B57A67F7EA8_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_303_20584B57A67F7EA8_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_303_20584B57A67F7EA8_METHOD_2_OFFSET))(a1);
		}

	};
