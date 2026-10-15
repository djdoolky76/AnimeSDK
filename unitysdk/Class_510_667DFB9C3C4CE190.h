#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_510_667DFB9C3C4CE190_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14931080)
#define CLASS_510_667DFB9C3C4CE190_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14930C80)
#define CLASS_510_667DFB9C3C4CE190_METHOD_OFFSET UNITYSDK_OFFSET(0x149312D0)

	class Class_510_667DFB9C3C4CE190 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_510_667DFB9C3C4CE190_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_510_667DFB9C3C4CE190_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_510_667DFB9C3C4CE190_METHOD_2_OFFSET))(a1);
		}

	};
