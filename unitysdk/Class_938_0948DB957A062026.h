#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_938_0948DB957A062026_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D01B0)
#define CLASS_938_0948DB957A062026_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149CFDB0)
#define CLASS_938_0948DB957A062026_METHOD_OFFSET UNITYSDK_OFFSET(0x149D0400)

inline static constexpr unsigned int Class_938_0948DB957A062026_TypeDefinitionIndex = 51273;

	class Class_938_0948DB957A062026 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_938_0948DB957A062026_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_938_0948DB957A062026_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_938_0948DB957A062026_METHOD_2_OFFSET))(a1);
		}

	};
