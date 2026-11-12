#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_441_3386660923FC4011_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157AA250)
#define CLASS_441_3386660923FC4011_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157A9E50)
#define CLASS_441_3386660923FC4011_METHOD_OFFSET UNITYSDK_OFFSET(0x157AA4A0)

inline static constexpr unsigned int Class_441_3386660923FC4011_TypeDefinitionIndex = 51821;

	class Class_441_3386660923FC4011 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_441_3386660923FC4011_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_441_3386660923FC4011_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_441_3386660923FC4011_METHOD_2_OFFSET))(a1);
		}

	};
