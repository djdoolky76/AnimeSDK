#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1253_125C71CCF94F2F4A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A58AA0)
#define CLASS_1253_125C71CCF94F2F4A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A586A0)
#define CLASS_1253_125C71CCF94F2F4A_METHOD_OFFSET UNITYSDK_OFFSET(0x14A58CF0)

inline static constexpr unsigned int Class_1253_125C71CCF94F2F4A_TypeDefinitionIndex = 51588;

	class Class_1253_125C71CCF94F2F4A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1253_125C71CCF94F2F4A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1253_125C71CCF94F2F4A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1253_125C71CCF94F2F4A_METHOD_2_OFFSET))(a1);
		}

	};
