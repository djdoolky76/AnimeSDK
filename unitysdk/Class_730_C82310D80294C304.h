#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_730_C82310D80294C304_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1497D950)
#define CLASS_730_C82310D80294C304_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1497D550)
#define CLASS_730_C82310D80294C304_METHOD_OFFSET UNITYSDK_OFFSET(0x1497DB80)

inline static constexpr unsigned int Class_730_C82310D80294C304_TypeDefinitionIndex = 51065;

	class Class_730_C82310D80294C304 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_730_C82310D80294C304_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_730_C82310D80294C304_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_730_C82310D80294C304_METHOD_2_OFFSET))(a1);
		}

	};
