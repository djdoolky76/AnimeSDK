#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_353_3E330A37DF323368_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E1E00)
#define CLASS_353_3E330A37DF323368_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E1A00)
#define CLASS_353_3E330A37DF323368_METHOD_OFFSET UNITYSDK_OFFSET(0x148E2050)

	class Class_353_3E330A37DF323368 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_353_3E330A37DF323368_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_353_3E330A37DF323368_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_353_3E330A37DF323368_METHOD_2_OFFSET))(a1);
		}

	};
