#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1060_133905CF32A52F1A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A00960)
#define CLASS_1060_133905CF32A52F1A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A00560)
#define CLASS_1060_133905CF32A52F1A_METHOD_OFFSET UNITYSDK_OFFSET(0x14A00BB0)

inline static constexpr unsigned int Class_1060_133905CF32A52F1A_TypeDefinitionIndex = 51395;

	class Class_1060_133905CF32A52F1A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1060_133905CF32A52F1A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1060_133905CF32A52F1A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1060_133905CF32A52F1A_METHOD_2_OFFSET))(a1);
		}

	};
