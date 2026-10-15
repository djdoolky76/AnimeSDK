#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_942_925F3B87D7BD2D4C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149DD510)
#define CLASS_942_925F3B87D7BD2D4C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149DD110)
#define CLASS_942_925F3B87D7BD2D4C_METHOD_OFFSET UNITYSDK_OFFSET(0x149DD740)

	class Class_942_925F3B87D7BD2D4C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_942_925F3B87D7BD2D4C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_942_925F3B87D7BD2D4C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_942_925F3B87D7BD2D4C_METHOD_2_OFFSET))(a1);
		}

	};
