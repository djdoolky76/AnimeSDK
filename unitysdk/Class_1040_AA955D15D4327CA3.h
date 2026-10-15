#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1040_AA955D15D4327CA3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149F8A20)
#define CLASS_1040_AA955D15D4327CA3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149F8620)
#define CLASS_1040_AA955D15D4327CA3_METHOD_OFFSET UNITYSDK_OFFSET(0x149F8C70)

inline static constexpr unsigned int Class_1040_AA955D15D4327CA3_TypeDefinitionIndex = 51375;

	class Class_1040_AA955D15D4327CA3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1040_AA955D15D4327CA3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1040_AA955D15D4327CA3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1040_AA955D15D4327CA3_METHOD_2_OFFSET))(a1);
		}

	};
