#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_786_2022F56F78702636_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1499F650)
#define CLASS_786_2022F56F78702636_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1499F250)
#define CLASS_786_2022F56F78702636_METHOD_OFFSET UNITYSDK_OFFSET(0x1499F8A0)

	class Class_786_2022F56F78702636 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_786_2022F56F78702636_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_786_2022F56F78702636_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_786_2022F56F78702636_METHOD_2_OFFSET))(a1);
		}

	};
