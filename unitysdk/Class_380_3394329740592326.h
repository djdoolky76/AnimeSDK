#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_380_3394329740592326_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157924B0)
#define CLASS_380_3394329740592326_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157920B0)
#define CLASS_380_3394329740592326_METHOD_OFFSET UNITYSDK_OFFSET(0x15792700)

inline static constexpr unsigned int Class_380_3394329740592326_TypeDefinitionIndex = 51760;

	class Class_380_3394329740592326 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_380_3394329740592326_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_380_3394329740592326_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_380_3394329740592326_METHOD_2_OFFSET))(a1);
		}

	};
