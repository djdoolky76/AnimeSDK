#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_406_D4191AA93A1FDAEC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F6F20)
#define CLASS_406_D4191AA93A1FDAEC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F6B20)
#define CLASS_406_D4191AA93A1FDAEC_METHOD_OFFSET UNITYSDK_OFFSET(0x148F7170)

	class Class_406_D4191AA93A1FDAEC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_406_D4191AA93A1FDAEC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_406_D4191AA93A1FDAEC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_406_D4191AA93A1FDAEC_METHOD_2_OFFSET))(a1);
		}

	};
