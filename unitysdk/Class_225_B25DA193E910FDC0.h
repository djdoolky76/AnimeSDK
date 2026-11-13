#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_225_B25DA193E910FDC0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x18C7CBE0)
#define CLASS_225_B25DA193E910FDC0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x18C7C7B0)
#define CLASS_225_B25DA193E910FDC0_METHOD_OFFSET UNITYSDK_OFFSET(0x18C7CE70)

inline static constexpr unsigned int Class_225_B25DA193E910FDC0_TypeDefinitionIndex = 51581;

	class Class_225_B25DA193E910FDC0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_225_B25DA193E910FDC0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_225_B25DA193E910FDC0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_225_B25DA193E910FDC0_METHOD_2_OFFSET))(a1);
		}

	};
