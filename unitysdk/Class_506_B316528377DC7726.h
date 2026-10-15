#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_506_B316528377DC7726_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14923D20)
#define CLASS_506_B316528377DC7726_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14923920)
#define CLASS_506_B316528377DC7726_METHOD_OFFSET UNITYSDK_OFFSET(0x14923F70)

inline static constexpr unsigned int Class_506_B316528377DC7726_TypeDefinitionIndex = 50840;

	class Class_506_B316528377DC7726 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_506_B316528377DC7726_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_506_B316528377DC7726_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_506_B316528377DC7726_METHOD_2_OFFSET))(a1);
		}

	};
