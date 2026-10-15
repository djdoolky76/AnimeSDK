#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_426_A3B393CD1C9DF899_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148FEE60)
#define CLASS_426_A3B393CD1C9DF899_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148FEA60)
#define CLASS_426_A3B393CD1C9DF899_METHOD_OFFSET UNITYSDK_OFFSET(0x148FF0B0)

	class Class_426_A3B393CD1C9DF899 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_426_A3B393CD1C9DF899_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_426_A3B393CD1C9DF899_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_426_A3B393CD1C9DF899_METHOD_2_OFFSET))(a1);
		}

	};
