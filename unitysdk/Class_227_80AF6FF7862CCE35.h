#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_227_80AF6FF7862CCE35_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1591DC70)
#define CLASS_227_80AF6FF7862CCE35_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1591D840)
#define CLASS_227_80AF6FF7862CCE35_METHOD_OFFSET UNITYSDK_OFFSET(0x1591DF00)

	class Class_227_80AF6FF7862CCE35 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_227_80AF6FF7862CCE35_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_227_80AF6FF7862CCE35_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_227_80AF6FF7862CCE35_METHOD_2_OFFSET))(a1);
		}

	};
