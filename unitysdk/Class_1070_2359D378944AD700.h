#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1070_2359D378944AD700_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE58890)
#define CLASS_1070_2359D378944AD700_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE58490)
#define CLASS_1070_2359D378944AD700_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE58AE0)

inline static constexpr unsigned int Class_1070_2359D378944AD700_TypeDefinitionIndex = 52456;

	class Class_1070_2359D378944AD700 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1070_2359D378944AD700_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1070_2359D378944AD700_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1070_2359D378944AD700_METHOD_2_OFFSET))(a1);
		}

	};
