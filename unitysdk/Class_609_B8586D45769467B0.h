#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_609_B8586D45769467B0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1494DA20)
#define CLASS_609_B8586D45769467B0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1494D620)
#define CLASS_609_B8586D45769467B0_METHOD_OFFSET UNITYSDK_OFFSET(0x1494DC70)

inline static constexpr unsigned int Class_609_B8586D45769467B0_TypeDefinitionIndex = 50944;

	class Class_609_B8586D45769467B0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_609_B8586D45769467B0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_609_B8586D45769467B0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_609_B8586D45769467B0_METHOD_2_OFFSET))(a1);
		}

	};
