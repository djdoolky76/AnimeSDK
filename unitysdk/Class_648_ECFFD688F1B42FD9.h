#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_648_ECFFD688F1B42FD9_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14968B20)
#define CLASS_648_ECFFD688F1B42FD9_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14968720)
#define CLASS_648_ECFFD688F1B42FD9_METHOD_OFFSET UNITYSDK_OFFSET(0x14968D70)

	class Class_648_ECFFD688F1B42FD9 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_648_ECFFD688F1B42FD9_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_648_ECFFD688F1B42FD9_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_648_ECFFD688F1B42FD9_METHOD_2_OFFSET))(a1);
		}

	};
