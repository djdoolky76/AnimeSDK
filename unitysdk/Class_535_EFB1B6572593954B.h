#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_535_EFB1B6572593954B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157E0A20)
#define CLASS_535_EFB1B6572593954B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157E0620)
#define CLASS_535_EFB1B6572593954B_METHOD_OFFSET UNITYSDK_OFFSET(0x157E0C50)

inline static constexpr unsigned int Class_535_EFB1B6572593954B_TypeDefinitionIndex = 51920;

	class Class_535_EFB1B6572593954B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_535_EFB1B6572593954B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_535_EFB1B6572593954B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_535_EFB1B6572593954B_METHOD_2_OFFSET))(a1);
		}

	};
