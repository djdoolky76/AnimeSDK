#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_987_C0A2E2244F915FC1_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149EF330)
#define CLASS_987_C0A2E2244F915FC1_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149EEF30)
#define CLASS_987_C0A2E2244F915FC1_METHOD_OFFSET UNITYSDK_OFFSET(0x149EF580)

inline static constexpr unsigned int Class_987_C0A2E2244F915FC1_TypeDefinitionIndex = 51322;

	class Class_987_C0A2E2244F915FC1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_987_C0A2E2244F915FC1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_987_C0A2E2244F915FC1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_987_C0A2E2244F915FC1_METHOD_2_OFFSET))(a1);
		}

	};
