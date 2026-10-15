#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1110_ADAA07A5300D2FB8_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A20060)
#define CLASS_1110_ADAA07A5300D2FB8_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A1FC60)
#define CLASS_1110_ADAA07A5300D2FB8_METHOD_OFFSET UNITYSDK_OFFSET(0x14A202B0)

inline static constexpr unsigned int Class_1110_ADAA07A5300D2FB8_TypeDefinitionIndex = 51445;

	class Class_1110_ADAA07A5300D2FB8 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1110_ADAA07A5300D2FB8_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1110_ADAA07A5300D2FB8_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1110_ADAA07A5300D2FB8_METHOD_2_OFFSET))(a1);
		}

	};
