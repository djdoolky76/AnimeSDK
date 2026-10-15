#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_474_FD08D1F005683F72_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14911FC0)
#define CLASS_474_FD08D1F005683F72_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14911BC0)
#define CLASS_474_FD08D1F005683F72_METHOD_OFFSET UNITYSDK_OFFSET(0x14912210)

	class Class_474_FD08D1F005683F72 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_474_FD08D1F005683F72_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_474_FD08D1F005683F72_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_474_FD08D1F005683F72_METHOD_2_OFFSET))(a1);
		}

	};
