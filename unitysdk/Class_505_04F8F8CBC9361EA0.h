#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_505_04F8F8CBC9361EA0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B54E2D0)
#define CLASS_505_04F8F8CBC9361EA0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B54DED0)
#define CLASS_505_04F8F8CBC9361EA0_METHOD_OFFSET UNITYSDK_OFFSET(0x1B54E520)

inline static constexpr unsigned int Class_505_04F8F8CBC9361EA0_TypeDefinitionIndex = 51890;

	class Class_505_04F8F8CBC9361EA0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_505_04F8F8CBC9361EA0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_505_04F8F8CBC9361EA0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_505_04F8F8CBC9361EA0_METHOD_2_OFFSET))(a1);
		}

	};
