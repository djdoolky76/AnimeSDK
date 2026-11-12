#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1197_E0DE26737CD66470_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1593FE20)
#define CLASS_1197_E0DE26737CD66470_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1593FA20)
#define CLASS_1197_E0DE26737CD66470_METHOD_OFFSET UNITYSDK_OFFSET(0x15940070)

inline static constexpr unsigned int Class_1197_E0DE26737CD66470_TypeDefinitionIndex = 52583;

	class Class_1197_E0DE26737CD66470 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1197_E0DE26737CD66470_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1197_E0DE26737CD66470_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1197_E0DE26737CD66470_METHOD_2_OFFSET))(a1);
		}

	};
