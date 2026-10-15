#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_319_EFC561AB02F2F32F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148D4640)
#define CLASS_319_EFC561AB02F2F32F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148D4240)
#define CLASS_319_EFC561AB02F2F32F_METHOD_OFFSET UNITYSDK_OFFSET(0x148D4890)

	class Class_319_EFC561AB02F2F32F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_319_EFC561AB02F2F32F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_319_EFC561AB02F2F32F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_319_EFC561AB02F2F32F_METHOD_2_OFFSET))(a1);
		}

	};
