#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1251_D48BB164BAB524CB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A4C400)
#define CLASS_1251_D48BB164BAB524CB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A4C000)
#define CLASS_1251_D48BB164BAB524CB_METHOD_OFFSET UNITYSDK_OFFSET(0x14A4C650)

inline static constexpr unsigned int Class_1251_D48BB164BAB524CB_TypeDefinitionIndex = 51586;

	class Class_1251_D48BB164BAB524CB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1251_D48BB164BAB524CB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1251_D48BB164BAB524CB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1251_D48BB164BAB524CB_METHOD_2_OFFSET))(a1);
		}

	};
