#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_326_B51F284A96A4824E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x17970810)
#define CLASS_326_B51F284A96A4824E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x17970410)
#define CLASS_326_B51F284A96A4824E_METHOD_OFFSET UNITYSDK_OFFSET(0x17970A60)

inline static constexpr unsigned int Class_326_B51F284A96A4824E_TypeDefinitionIndex = 51706;

	class Class_326_B51F284A96A4824E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_326_B51F284A96A4824E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_326_B51F284A96A4824E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_326_B51F284A96A4824E_METHOD_2_OFFSET))(a1);
		}

	};
