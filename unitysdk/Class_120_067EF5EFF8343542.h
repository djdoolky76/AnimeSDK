#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_120_067EF5EFF8343542_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1643FFB0)
#define CLASS_120_067EF5EFF8343542_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1643FB80)
#define CLASS_120_067EF5EFF8343542_METHOD_OFFSET UNITYSDK_OFFSET(0x16440240)

inline static constexpr unsigned int Class_120_067EF5EFF8343542_TypeDefinitionIndex = 51472;

	class Class_120_067EF5EFF8343542 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_120_067EF5EFF8343542_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_120_067EF5EFF8343542_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_120_067EF5EFF8343542_METHOD_2_OFFSET))(a1);
		}

	};
