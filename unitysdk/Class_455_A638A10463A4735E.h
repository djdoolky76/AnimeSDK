#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_455_A638A10463A4735E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157B0170)
#define CLASS_455_A638A10463A4735E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157AFD70)
#define CLASS_455_A638A10463A4735E_METHOD_OFFSET UNITYSDK_OFFSET(0x157B03C0)

inline static constexpr unsigned int Class_455_A638A10463A4735E_TypeDefinitionIndex = 51835;

	class Class_455_A638A10463A4735E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_455_A638A10463A4735E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_455_A638A10463A4735E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_455_A638A10463A4735E_METHOD_2_OFFSET))(a1);
		}

	};
