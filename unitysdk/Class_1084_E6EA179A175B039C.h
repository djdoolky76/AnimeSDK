#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1084_E6EA179A175B039C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A0A180)
#define CLASS_1084_E6EA179A175B039C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A09D80)
#define CLASS_1084_E6EA179A175B039C_METHOD_OFFSET UNITYSDK_OFFSET(0x14A0A3B0)

inline static constexpr unsigned int Class_1084_E6EA179A175B039C_TypeDefinitionIndex = 51419;

	class Class_1084_E6EA179A175B039C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1084_E6EA179A175B039C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1084_E6EA179A175B039C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1084_E6EA179A175B039C_METHOD_2_OFFSET))(a1);
		}

	};
