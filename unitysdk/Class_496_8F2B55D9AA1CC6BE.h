#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_496_8F2B55D9AA1CC6BE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14920A40)
#define CLASS_496_8F2B55D9AA1CC6BE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14920640)
#define CLASS_496_8F2B55D9AA1CC6BE_METHOD_OFFSET UNITYSDK_OFFSET(0x14920C90)

inline static constexpr unsigned int Class_496_8F2B55D9AA1CC6BE_TypeDefinitionIndex = 50830;

	class Class_496_8F2B55D9AA1CC6BE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_496_8F2B55D9AA1CC6BE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_496_8F2B55D9AA1CC6BE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_496_8F2B55D9AA1CC6BE_METHOD_2_OFFSET))(a1);
		}

	};
