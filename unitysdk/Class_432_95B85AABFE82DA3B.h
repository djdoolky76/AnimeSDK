#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_432_95B85AABFE82DA3B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F6120)
#define CLASS_432_95B85AABFE82DA3B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F5D20)
#define CLASS_432_95B85AABFE82DA3B_METHOD_OFFSET UNITYSDK_OFFSET(0x148F6370)

inline static constexpr unsigned int Class_432_95B85AABFE82DA3B_TypeDefinitionIndex = 50761;

	class Class_432_95B85AABFE82DA3B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_432_95B85AABFE82DA3B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_432_95B85AABFE82DA3B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_432_95B85AABFE82DA3B_METHOD_2_OFFSET))(a1);
		}

	};
