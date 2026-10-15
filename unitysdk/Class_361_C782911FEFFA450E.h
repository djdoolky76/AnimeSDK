#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_361_C782911FEFFA450E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E5100)
#define CLASS_361_C782911FEFFA450E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E4D00)
#define CLASS_361_C782911FEFFA450E_METHOD_OFFSET UNITYSDK_OFFSET(0x148E5350)

	class Class_361_C782911FEFFA450E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_361_C782911FEFFA450E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_361_C782911FEFFA450E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_361_C782911FEFFA450E_METHOD_2_OFFSET))(a1);
		}

	};
