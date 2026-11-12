#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_630_7AC559E29D73CE15_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15807440)
#define CLASS_630_7AC559E29D73CE15_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15807040)
#define CLASS_630_7AC559E29D73CE15_METHOD_OFFSET UNITYSDK_OFFSET(0x15807690)

inline static constexpr unsigned int Class_630_7AC559E29D73CE15_TypeDefinitionIndex = 52016;

	class Class_630_7AC559E29D73CE15 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_630_7AC559E29D73CE15_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_630_7AC559E29D73CE15_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_630_7AC559E29D73CE15_METHOD_2_OFFSET))(a1);
		}

	};
