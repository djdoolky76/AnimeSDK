#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_480_D837B19775058C11_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149197A0)
#define CLASS_480_D837B19775058C11_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149193A0)
#define CLASS_480_D837B19775058C11_METHOD_OFFSET UNITYSDK_OFFSET(0x149199F0)

inline static constexpr unsigned int Class_480_D837B19775058C11_TypeDefinitionIndex = 50814;

	class Class_480_D837B19775058C11 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_480_D837B19775058C11_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_480_D837B19775058C11_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_480_D837B19775058C11_METHOD_2_OFFSET))(a1);
		}

	};
