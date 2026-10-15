#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_991_A7058D89CD6EFC11_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149F0C90)
#define CLASS_991_A7058D89CD6EFC11_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149F0890)
#define CLASS_991_A7058D89CD6EFC11_METHOD_OFFSET UNITYSDK_OFFSET(0x149F0EC0)

	class Class_991_A7058D89CD6EFC11 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_991_A7058D89CD6EFC11_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_991_A7058D89CD6EFC11_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_991_A7058D89CD6EFC11_METHOD_2_OFFSET))(a1);
		}

	};
