#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_565_A37FC1C8547B1F8B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14946D80)
#define CLASS_565_A37FC1C8547B1F8B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14946980)
#define CLASS_565_A37FC1C8547B1F8B_METHOD_OFFSET UNITYSDK_OFFSET(0x14946FD0)

	class Class_565_A37FC1C8547B1F8B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_565_A37FC1C8547B1F8B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_565_A37FC1C8547B1F8B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_565_A37FC1C8547B1F8B_METHOD_2_OFFSET))(a1);
		}

	};
