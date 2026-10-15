#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_101_8174E77BBE1DC777_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15930980)
#define CLASS_101_8174E77BBE1DC777_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15930550)
#define CLASS_101_8174E77BBE1DC777_METHOD_OFFSET UNITYSDK_OFFSET(0x15930C10)

inline static constexpr unsigned int Class_101_8174E77BBE1DC777_TypeDefinitionIndex = 50402;

	class Class_101_8174E77BBE1DC777 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_101_8174E77BBE1DC777_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_101_8174E77BBE1DC777_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_101_8174E77BBE1DC777_METHOD_2_OFFSET))(a1);
		}

	};
