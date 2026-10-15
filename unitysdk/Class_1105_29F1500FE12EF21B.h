#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1105_29F1500FE12EF21B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A1E080)
#define CLASS_1105_29F1500FE12EF21B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A1DC80)
#define CLASS_1105_29F1500FE12EF21B_METHOD_OFFSET UNITYSDK_OFFSET(0x14A1E2D0)

inline static constexpr unsigned int Class_1105_29F1500FE12EF21B_TypeDefinitionIndex = 51440;

	class Class_1105_29F1500FE12EF21B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1105_29F1500FE12EF21B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1105_29F1500FE12EF21B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1105_29F1500FE12EF21B_METHOD_2_OFFSET))(a1);
		}

	};
