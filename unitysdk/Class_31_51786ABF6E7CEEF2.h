#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_31_51786ABF6E7CEEF2_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148C0980)
#define CLASS_31_51786ABF6E7CEEF2_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148C0580)
#define CLASS_31_51786ABF6E7CEEF2_METHOD_OFFSET UNITYSDK_OFFSET(0x148C0BB0)

	class Class_31_51786ABF6E7CEEF2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_31_51786ABF6E7CEEF2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_31_51786ABF6E7CEEF2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_31_51786ABF6E7CEEF2_METHOD_2_OFFSET))(a1);
		}

	};
