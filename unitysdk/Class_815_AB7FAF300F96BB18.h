#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_815_AB7FAF300F96BB18_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149AAE30)
#define CLASS_815_AB7FAF300F96BB18_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149AAA30)
#define CLASS_815_AB7FAF300F96BB18_METHOD_OFFSET UNITYSDK_OFFSET(0x149AB080)

inline static constexpr unsigned int Class_815_AB7FAF300F96BB18_TypeDefinitionIndex = 51150;

	class Class_815_AB7FAF300F96BB18 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_815_AB7FAF300F96BB18_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_815_AB7FAF300F96BB18_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_815_AB7FAF300F96BB18_METHOD_2_OFFSET))(a1);
		}

	};
