#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1228_D48BB164BAB524CB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1594C240)
#define CLASS_1228_D48BB164BAB524CB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1594BE40)
#define CLASS_1228_D48BB164BAB524CB_METHOD_OFFSET UNITYSDK_OFFSET(0x1594C490)

inline static constexpr unsigned int Class_1228_D48BB164BAB524CB_TypeDefinitionIndex = 52614;

	class Class_1228_D48BB164BAB524CB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1228_D48BB164BAB524CB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1228_D48BB164BAB524CB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1228_D48BB164BAB524CB_METHOD_2_OFFSET))(a1);
		}

	};
