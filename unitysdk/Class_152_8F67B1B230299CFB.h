#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_152_8F67B1B230299CFB_METHOD_1_OFFSET UNITYSDK_OFFSET(0xC38CDA0)
#define CLASS_152_8F67B1B230299CFB_METHOD_2_OFFSET UNITYSDK_OFFSET(0xC38C970)
#define CLASS_152_8F67B1B230299CFB_METHOD_OFFSET UNITYSDK_OFFSET(0xC38D030)

	class Class_152_8F67B1B230299CFB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_152_8F67B1B230299CFB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_152_8F67B1B230299CFB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_152_8F67B1B230299CFB_METHOD_2_OFFSET))(a1);
		}

	};
