#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_468_8E34501BA2BA65C5_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1490F9C0)
#define CLASS_468_8E34501BA2BA65C5_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1490F5C0)
#define CLASS_468_8E34501BA2BA65C5_METHOD_OFFSET UNITYSDK_OFFSET(0x1490FC10)

	class Class_468_8E34501BA2BA65C5 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_468_8E34501BA2BA65C5_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_468_8E34501BA2BA65C5_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_468_8E34501BA2BA65C5_METHOD_2_OFFSET))(a1);
		}

	};
