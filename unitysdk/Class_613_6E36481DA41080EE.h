#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_613_6E36481DA41080EE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157FF300)
#define CLASS_613_6E36481DA41080EE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157FEF00)
#define CLASS_613_6E36481DA41080EE_METHOD_OFFSET UNITYSDK_OFFSET(0x157FF550)

inline static constexpr unsigned int Class_613_6E36481DA41080EE_TypeDefinitionIndex = 51998;

	class Class_613_6E36481DA41080EE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_613_6E36481DA41080EE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_613_6E36481DA41080EE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_613_6E36481DA41080EE_METHOD_2_OFFSET))(a1);
		}

	};
