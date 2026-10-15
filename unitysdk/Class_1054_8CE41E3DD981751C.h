#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1054_8CE41E3DD981751C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149FE340)
#define CLASS_1054_8CE41E3DD981751C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149FDF40)
#define CLASS_1054_8CE41E3DD981751C_METHOD_OFFSET UNITYSDK_OFFSET(0x149FE590)

inline static constexpr unsigned int Class_1054_8CE41E3DD981751C_TypeDefinitionIndex = 51389;

	class Class_1054_8CE41E3DD981751C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1054_8CE41E3DD981751C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1054_8CE41E3DD981751C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1054_8CE41E3DD981751C_METHOD_2_OFFSET))(a1);
		}

	};
