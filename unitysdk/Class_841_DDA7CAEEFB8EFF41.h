#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_841_DDA7CAEEFB8EFF41_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1585AE10)
#define CLASS_841_DDA7CAEEFB8EFF41_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1585AA10)
#define CLASS_841_DDA7CAEEFB8EFF41_METHOD_OFFSET UNITYSDK_OFFSET(0x1585B060)

inline static constexpr unsigned int Class_841_DDA7CAEEFB8EFF41_TypeDefinitionIndex = 52227;

	class Class_841_DDA7CAEEFB8EFF41 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_841_DDA7CAEEFB8EFF41_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_841_DDA7CAEEFB8EFF41_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_841_DDA7CAEEFB8EFF41_METHOD_2_OFFSET))(a1);
		}

	};
