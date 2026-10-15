#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1240_B1824992E08151C7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A53840)
#define CLASS_1240_B1824992E08151C7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A53440)
#define CLASS_1240_B1824992E08151C7_METHOD_OFFSET UNITYSDK_OFFSET(0x14A53A90)

inline static constexpr unsigned int Class_1240_B1824992E08151C7_TypeDefinitionIndex = 51575;

	class Class_1240_B1824992E08151C7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1240_B1824992E08151C7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1240_B1824992E08151C7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1240_B1824992E08151C7_METHOD_2_OFFSET))(a1);
		}

	};
