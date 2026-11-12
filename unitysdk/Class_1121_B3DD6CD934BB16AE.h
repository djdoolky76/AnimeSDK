#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1121_B3DD6CD934BB16AE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15921BC0)
#define CLASS_1121_B3DD6CD934BB16AE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x159217C0)
#define CLASS_1121_B3DD6CD934BB16AE_METHOD_OFFSET UNITYSDK_OFFSET(0x15921DF0)

inline static constexpr unsigned int Class_1121_B3DD6CD934BB16AE_TypeDefinitionIndex = 52507;

	class Class_1121_B3DD6CD934BB16AE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1121_B3DD6CD934BB16AE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1121_B3DD6CD934BB16AE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1121_B3DD6CD934BB16AE_METHOD_2_OFFSET))(a1);
		}

	};
