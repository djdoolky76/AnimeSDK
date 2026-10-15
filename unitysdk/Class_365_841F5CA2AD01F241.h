#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_365_841F5CA2AD01F241_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E6A60)
#define CLASS_365_841F5CA2AD01F241_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E6660)
#define CLASS_365_841F5CA2AD01F241_METHOD_OFFSET UNITYSDK_OFFSET(0x148E6CB0)

inline static constexpr unsigned int Class_365_841F5CA2AD01F241_TypeDefinitionIndex = 50694;

	class Class_365_841F5CA2AD01F241 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_365_841F5CA2AD01F241_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_365_841F5CA2AD01F241_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_365_841F5CA2AD01F241_METHOD_2_OFFSET))(a1);
		}

	};
