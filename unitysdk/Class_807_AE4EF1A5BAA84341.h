#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_807_AE4EF1A5BAA84341_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A7B30)
#define CLASS_807_AE4EF1A5BAA84341_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A7730)
#define CLASS_807_AE4EF1A5BAA84341_METHOD_OFFSET UNITYSDK_OFFSET(0x149A7D80)

	class Class_807_AE4EF1A5BAA84341 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_807_AE4EF1A5BAA84341_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_807_AE4EF1A5BAA84341_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_807_AE4EF1A5BAA84341_METHOD_2_OFFSET))(a1);
		}

	};
