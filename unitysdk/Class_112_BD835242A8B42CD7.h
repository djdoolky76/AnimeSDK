#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_112_BD835242A8B42CD7_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB6E2A30)
#define CLASS_112_BD835242A8B42CD7_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB6E2600)
#define CLASS_112_BD835242A8B42CD7_METHOD_OFFSET UNITYSDK_OFFSET(0xB6E2CC0)

	class Class_112_BD835242A8B42CD7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_112_BD835242A8B42CD7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_112_BD835242A8B42CD7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_112_BD835242A8B42CD7_METHOD_2_OFFSET))(a1);
		}

	};
