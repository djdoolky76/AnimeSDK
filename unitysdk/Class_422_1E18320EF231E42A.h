#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_422_1E18320EF231E42A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148FD4E0)
#define CLASS_422_1E18320EF231E42A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148FD0E0)
#define CLASS_422_1E18320EF231E42A_METHOD_OFFSET UNITYSDK_OFFSET(0x148FD730)

	class Class_422_1E18320EF231E42A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_422_1E18320EF231E42A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_422_1E18320EF231E42A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_422_1E18320EF231E42A_METHOD_2_OFFSET))(a1);
		}

	};
