#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1262_40974D8D60777E42_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A5C3E0)
#define CLASS_1262_40974D8D60777E42_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A5BFE0)
#define CLASS_1262_40974D8D60777E42_METHOD_OFFSET UNITYSDK_OFFSET(0x14A5C610)

	class Class_1262_40974D8D60777E42 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1262_40974D8D60777E42_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1262_40974D8D60777E42_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1262_40974D8D60777E42_METHOD_2_OFFSET))(a1);
		}

	};
