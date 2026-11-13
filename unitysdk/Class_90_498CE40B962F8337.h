#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_90_498CE40B962F8337_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1ADC57C0)
#define CLASS_90_498CE40B962F8337_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1ADC5390)
#define CLASS_90_498CE40B962F8337_METHOD_OFFSET UNITYSDK_OFFSET(0x1ADC5A50)

inline static constexpr unsigned int Class_90_498CE40B962F8337_TypeDefinitionIndex = 51442;

	class Class_90_498CE40B962F8337 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_90_498CE40B962F8337_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_90_498CE40B962F8337_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_90_498CE40B962F8337_METHOD_2_OFFSET))(a1);
		}

	};
