#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_856_D4556195AE173DE0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE03920)
#define CLASS_856_D4556195AE173DE0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE03520)
#define CLASS_856_D4556195AE173DE0_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE03B70)

inline static constexpr unsigned int Class_856_D4556195AE173DE0_TypeDefinitionIndex = 52242;

	class Class_856_D4556195AE173DE0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_856_D4556195AE173DE0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_856_D4556195AE173DE0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_856_D4556195AE173DE0_METHOD_2_OFFSET))(a1);
		}

	};
