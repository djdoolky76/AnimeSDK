#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_527_D7EC9947711B37BE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14937C80)
#define CLASS_527_D7EC9947711B37BE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14937880)
#define CLASS_527_D7EC9947711B37BE_METHOD_OFFSET UNITYSDK_OFFSET(0x14937ED0)

	class Class_527_D7EC9947711B37BE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_527_D7EC9947711B37BE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_527_D7EC9947711B37BE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_527_D7EC9947711B37BE_METHOD_2_OFFSET))(a1);
		}

	};
