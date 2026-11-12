#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_960_F764A75798D5F1EA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1588A1D0)
#define CLASS_960_F764A75798D5F1EA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15889DD0)
#define CLASS_960_F764A75798D5F1EA_METHOD_OFFSET UNITYSDK_OFFSET(0x1588A400)

inline static constexpr unsigned int Class_960_F764A75798D5F1EA_TypeDefinitionIndex = 52346;

	class Class_960_F764A75798D5F1EA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_960_F764A75798D5F1EA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_960_F764A75798D5F1EA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_960_F764A75798D5F1EA_METHOD_2_OFFSET))(a1);
		}

	};
