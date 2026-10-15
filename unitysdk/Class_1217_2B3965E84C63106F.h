#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1217_2B3965E84C63106F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A4A660)
#define CLASS_1217_2B3965E84C63106F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A4A260)
#define CLASS_1217_2B3965E84C63106F_METHOD_OFFSET UNITYSDK_OFFSET(0x14A4A8B0)

	class Class_1217_2B3965E84C63106F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1217_2B3965E84C63106F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1217_2B3965E84C63106F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1217_2B3965E84C63106F_METHOD_2_OFFSET))(a1);
		}

	};
