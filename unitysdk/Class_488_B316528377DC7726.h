#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_488_B316528377DC7726_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157BD3D0)
#define CLASS_488_B316528377DC7726_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157BCFD0)
#define CLASS_488_B316528377DC7726_METHOD_OFFSET UNITYSDK_OFFSET(0x157BD620)

inline static constexpr unsigned int Class_488_B316528377DC7726_TypeDefinitionIndex = 51868;

	class Class_488_B316528377DC7726 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_488_B316528377DC7726_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_488_B316528377DC7726_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_488_B316528377DC7726_METHOD_2_OFFSET))(a1);
		}

	};
