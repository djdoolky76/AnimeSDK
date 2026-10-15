#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_785_F0DA5CDA73A49ABD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14993630)
#define CLASS_785_F0DA5CDA73A49ABD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14993230)
#define CLASS_785_F0DA5CDA73A49ABD_METHOD_OFFSET UNITYSDK_OFFSET(0x14993860)

inline static constexpr unsigned int Class_785_F0DA5CDA73A49ABD_TypeDefinitionIndex = 51120;

	class Class_785_F0DA5CDA73A49ABD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_785_F0DA5CDA73A49ABD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_785_F0DA5CDA73A49ABD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_785_F0DA5CDA73A49ABD_METHOD_2_OFFSET))(a1);
		}

	};
