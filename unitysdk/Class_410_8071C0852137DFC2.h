#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_410_8071C0852137DFC2_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F88A0)
#define CLASS_410_8071C0852137DFC2_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F84A0)
#define CLASS_410_8071C0852137DFC2_METHOD_OFFSET UNITYSDK_OFFSET(0x148F8AD0)

	class Class_410_8071C0852137DFC2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_410_8071C0852137DFC2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_410_8071C0852137DFC2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_410_8071C0852137DFC2_METHOD_2_OFFSET))(a1);
		}

	};
