#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_737_2A07BF2930C3F543_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1498BF90)
#define CLASS_737_2A07BF2930C3F543_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1498BB90)
#define CLASS_737_2A07BF2930C3F543_METHOD_OFFSET UNITYSDK_OFFSET(0x1498C1E0)

	class Class_737_2A07BF2930C3F543 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_737_2A07BF2930C3F543_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_737_2A07BF2930C3F543_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_737_2A07BF2930C3F543_METHOD_2_OFFSET))(a1);
		}

	};
