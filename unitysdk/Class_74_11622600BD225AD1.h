#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_74_11622600BD225AD1_METHOD_1_OFFSET UNITYSDK_OFFSET(0xBA3D1A0)
#define CLASS_74_11622600BD225AD1_METHOD_2_OFFSET UNITYSDK_OFFSET(0xBA3CD70)
#define CLASS_74_11622600BD225AD1_METHOD_OFFSET UNITYSDK_OFFSET(0xBA3D430)

	class Class_74_11622600BD225AD1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_74_11622600BD225AD1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_74_11622600BD225AD1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_74_11622600BD225AD1_METHOD_2_OFFSET))(a1);
		}

	};
