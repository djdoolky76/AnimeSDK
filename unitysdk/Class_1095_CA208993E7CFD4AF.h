#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1095_CA208993E7CFD4AF_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A1A120)
#define CLASS_1095_CA208993E7CFD4AF_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A19D20)
#define CLASS_1095_CA208993E7CFD4AF_METHOD_OFFSET UNITYSDK_OFFSET(0x14A1A370)

inline static constexpr unsigned int Class_1095_CA208993E7CFD4AF_TypeDefinitionIndex = 51430;

	class Class_1095_CA208993E7CFD4AF : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1095_CA208993E7CFD4AF_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1095_CA208993E7CFD4AF_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1095_CA208993E7CFD4AF_METHOD_2_OFFSET))(a1);
		}

	};
