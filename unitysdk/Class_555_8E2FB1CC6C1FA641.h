#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_555_8E2FB1CC6C1FA641_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157E8960)
#define CLASS_555_8E2FB1CC6C1FA641_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157E8560)
#define CLASS_555_8E2FB1CC6C1FA641_METHOD_OFFSET UNITYSDK_OFFSET(0x157E8B90)

inline static constexpr unsigned int Class_555_8E2FB1CC6C1FA641_TypeDefinitionIndex = 51940;

	class Class_555_8E2FB1CC6C1FA641 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_555_8E2FB1CC6C1FA641_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_555_8E2FB1CC6C1FA641_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_555_8E2FB1CC6C1FA641_METHOD_2_OFFSET))(a1);
		}

	};
