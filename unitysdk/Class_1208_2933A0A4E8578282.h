#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1208_2933A0A4E8578282_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A46D40)
#define CLASS_1208_2933A0A4E8578282_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A46940)
#define CLASS_1208_2933A0A4E8578282_METHOD_OFFSET UNITYSDK_OFFSET(0x14A46F90)

	class Class_1208_2933A0A4E8578282 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1208_2933A0A4E8578282_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1208_2933A0A4E8578282_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1208_2933A0A4E8578282_METHOD_2_OFFSET))(a1);
		}

	};
