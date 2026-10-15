#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1140_1420D63463F6FA58_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A204E0)
#define CLASS_1140_1420D63463F6FA58_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A200E0)
#define CLASS_1140_1420D63463F6FA58_METHOD_OFFSET UNITYSDK_OFFSET(0x14A20730)

inline static constexpr unsigned int Class_1140_1420D63463F6FA58_TypeDefinitionIndex = 51475;

	class Class_1140_1420D63463F6FA58 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1140_1420D63463F6FA58_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1140_1420D63463F6FA58_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1140_1420D63463F6FA58_METHOD_2_OFFSET))(a1);
		}

	};
