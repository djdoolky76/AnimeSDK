#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_122_551F534E6BF191B3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1664F3B0)
#define CLASS_122_551F534E6BF191B3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1664EF80)
#define CLASS_122_551F534E6BF191B3_METHOD_OFFSET UNITYSDK_OFFSET(0x1664F640)

	class Class_122_551F534E6BF191B3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_122_551F534E6BF191B3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_122_551F534E6BF191B3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_122_551F534E6BF191B3_METHOD_2_OFFSET))(a1);
		}

	};
