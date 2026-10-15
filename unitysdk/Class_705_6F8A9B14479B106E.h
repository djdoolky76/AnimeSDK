#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_705_6F8A9B14479B106E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1497F580)
#define CLASS_705_6F8A9B14479B106E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1497F180)
#define CLASS_705_6F8A9B14479B106E_METHOD_OFFSET UNITYSDK_OFFSET(0x1497F7D0)

	class Class_705_6F8A9B14479B106E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_705_6F8A9B14479B106E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_705_6F8A9B14479B106E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_705_6F8A9B14479B106E_METHOD_2_OFFSET))(a1);
		}

	};
