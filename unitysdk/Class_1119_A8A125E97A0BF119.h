#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1119_A8A125E97A0BF119_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15920F00)
#define CLASS_1119_A8A125E97A0BF119_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15920B00)
#define CLASS_1119_A8A125E97A0BF119_METHOD_OFFSET UNITYSDK_OFFSET(0x15921150)

inline static constexpr unsigned int Class_1119_A8A125E97A0BF119_TypeDefinitionIndex = 52505;

	class Class_1119_A8A125E97A0BF119 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1119_A8A125E97A0BF119_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1119_A8A125E97A0BF119_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1119_A8A125E97A0BF119_METHOD_2_OFFSET))(a1);
		}

	};
