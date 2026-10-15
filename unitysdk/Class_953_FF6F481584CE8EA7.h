#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_953_FF6F481584CE8EA7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149E1AF0)
#define CLASS_953_FF6F481584CE8EA7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149E16F0)
#define CLASS_953_FF6F481584CE8EA7_METHOD_OFFSET UNITYSDK_OFFSET(0x149E1D40)

	class Class_953_FF6F481584CE8EA7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_953_FF6F481584CE8EA7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_953_FF6F481584CE8EA7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_953_FF6F481584CE8EA7_METHOD_2_OFFSET))(a1);
		}

	};
