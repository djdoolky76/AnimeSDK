#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_522_514D04BCE6CC89AC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157DB760)
#define CLASS_522_514D04BCE6CC89AC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157DB360)
#define CLASS_522_514D04BCE6CC89AC_METHOD_OFFSET UNITYSDK_OFFSET(0x157DB9B0)

inline static constexpr unsigned int Class_522_514D04BCE6CC89AC_TypeDefinitionIndex = 51907;

	class Class_522_514D04BCE6CC89AC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_522_514D04BCE6CC89AC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_522_514D04BCE6CC89AC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_522_514D04BCE6CC89AC_METHOD_2_OFFSET))(a1);
		}

	};
