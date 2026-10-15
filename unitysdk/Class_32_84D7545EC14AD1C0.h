#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_32_84D7545EC14AD1C0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148B55E0)
#define CLASS_32_84D7545EC14AD1C0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148B51E0)
#define CLASS_32_84D7545EC14AD1C0_METHOD_OFFSET UNITYSDK_OFFSET(0x148B5810)

inline static constexpr unsigned int Class_32_84D7545EC14AD1C0_TypeDefinitionIndex = 50324;

	class Class_32_84D7545EC14AD1C0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_32_84D7545EC14AD1C0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_32_84D7545EC14AD1C0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_32_84D7545EC14AD1C0_METHOD_2_OFFSET))(a1);
		}

	};
