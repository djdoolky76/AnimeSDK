#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_735_A02EF97F0108DDDE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1498B2F0)
#define CLASS_735_A02EF97F0108DDDE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1498AEF0)
#define CLASS_735_A02EF97F0108DDDE_METHOD_OFFSET UNITYSDK_OFFSET(0x1498B520)

inline static constexpr unsigned int Class_735_A02EF97F0108DDDE_TypeDefinitionIndex = 51070;

	class Class_735_A02EF97F0108DDDE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_735_A02EF97F0108DDDE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_735_A02EF97F0108DDDE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_735_A02EF97F0108DDDE_METHOD_2_OFFSET))(a1);
		}

	};
