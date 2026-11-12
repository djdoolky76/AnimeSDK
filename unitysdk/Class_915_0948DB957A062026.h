#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_915_0948DB957A062026_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15878430)
#define CLASS_915_0948DB957A062026_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15878030)
#define CLASS_915_0948DB957A062026_METHOD_OFFSET UNITYSDK_OFFSET(0x15878680)

inline static constexpr unsigned int Class_915_0948DB957A062026_TypeDefinitionIndex = 52301;

	class Class_915_0948DB957A062026 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_915_0948DB957A062026_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_915_0948DB957A062026_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_915_0948DB957A062026_METHOD_2_OFFSET))(a1);
		}

	};
