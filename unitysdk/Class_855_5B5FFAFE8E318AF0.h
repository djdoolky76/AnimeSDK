#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_855_5B5FFAFE8E318AF0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149BACD0)
#define CLASS_855_5B5FFAFE8E318AF0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149BA8D0)
#define CLASS_855_5B5FFAFE8E318AF0_METHOD_OFFSET UNITYSDK_OFFSET(0x149BAF20)

	class Class_855_5B5FFAFE8E318AF0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_855_5B5FFAFE8E318AF0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_855_5B5FFAFE8E318AF0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_855_5B5FFAFE8E318AF0_METHOD_2_OFFSET))(a1);
		}

	};
