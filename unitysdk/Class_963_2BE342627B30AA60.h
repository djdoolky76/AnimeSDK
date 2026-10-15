#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_963_2BE342627B30AA60_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149DA0B0)
#define CLASS_963_2BE342627B30AA60_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D9CB0)
#define CLASS_963_2BE342627B30AA60_METHOD_OFFSET UNITYSDK_OFFSET(0x149DA300)

inline static constexpr unsigned int Class_963_2BE342627B30AA60_TypeDefinitionIndex = 51298;

	class Class_963_2BE342627B30AA60 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_963_2BE342627B30AA60_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_963_2BE342627B30AA60_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_963_2BE342627B30AA60_METHOD_2_OFFSET))(a1);
		}

	};
