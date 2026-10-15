#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_49_9383852E14606DF4_METHOD_1_OFFSET UNITYSDK_OFFSET(0xF23D880)
#define CLASS_49_9383852E14606DF4_METHOD_2_OFFSET UNITYSDK_OFFSET(0xF23D450)
#define CLASS_49_9383852E14606DF4_METHOD_OFFSET UNITYSDK_OFFSET(0xF23DB10)

	class Class_49_9383852E14606DF4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_49_9383852E14606DF4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_49_9383852E14606DF4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_49_9383852E14606DF4_METHOD_2_OFFSET))(a1);
		}

	};
