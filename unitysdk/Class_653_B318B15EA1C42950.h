#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_653_B318B15EA1C42950_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15810640)
#define CLASS_653_B318B15EA1C42950_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15810240)
#define CLASS_653_B318B15EA1C42950_METHOD_OFFSET UNITYSDK_OFFSET(0x15810870)

inline static constexpr unsigned int Class_653_B318B15EA1C42950_TypeDefinitionIndex = 52039;

	class Class_653_B318B15EA1C42950 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_653_B318B15EA1C42950_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_653_B318B15EA1C42950_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_653_B318B15EA1C42950_METHOD_2_OFFSET))(a1);
		}

	};
