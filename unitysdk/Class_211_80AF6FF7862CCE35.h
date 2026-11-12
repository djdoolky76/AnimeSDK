#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_211_80AF6FF7862CCE35_METHOD_1_OFFSET UNITYSDK_OFFSET(0xC3E8C30)
#define CLASS_211_80AF6FF7862CCE35_METHOD_2_OFFSET UNITYSDK_OFFSET(0xC3E8800)
#define CLASS_211_80AF6FF7862CCE35_METHOD_OFFSET UNITYSDK_OFFSET(0xC3E8EC0)

inline static constexpr unsigned int Class_211_80AF6FF7862CCE35_TypeDefinitionIndex = 51563;

	class Class_211_80AF6FF7862CCE35 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_211_80AF6FF7862CCE35_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_211_80AF6FF7862CCE35_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_211_80AF6FF7862CCE35_METHOD_2_OFFSET))(a1);
		}

	};
