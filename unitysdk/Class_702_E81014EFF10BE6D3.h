#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_702_E81014EFF10BE6D3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1497E260)
#define CLASS_702_E81014EFF10BE6D3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1497DE60)
#define CLASS_702_E81014EFF10BE6D3_METHOD_OFFSET UNITYSDK_OFFSET(0x1497E4B0)

	class Class_702_E81014EFF10BE6D3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_702_E81014EFF10BE6D3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_702_E81014EFF10BE6D3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_702_E81014EFF10BE6D3_METHOD_2_OFFSET))(a1);
		}

	};
