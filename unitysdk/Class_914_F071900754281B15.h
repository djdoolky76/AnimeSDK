#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_914_F071900754281B15_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15877DD0)
#define CLASS_914_F071900754281B15_METHOD_2_OFFSET UNITYSDK_OFFSET(0x158779D0)
#define CLASS_914_F071900754281B15_METHOD_OFFSET UNITYSDK_OFFSET(0x15878020)

inline static constexpr unsigned int Class_914_F071900754281B15_TypeDefinitionIndex = 52300;

	class Class_914_F071900754281B15 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_914_F071900754281B15_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_914_F071900754281B15_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_914_F071900754281B15_METHOD_2_OFFSET))(a1);
		}

	};
