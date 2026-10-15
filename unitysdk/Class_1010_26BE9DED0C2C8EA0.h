#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1010_26BE9DED0C2C8EA0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149ECB00)
#define CLASS_1010_26BE9DED0C2C8EA0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149EC700)
#define CLASS_1010_26BE9DED0C2C8EA0_METHOD_OFFSET UNITYSDK_OFFSET(0x149ECD50)

inline static constexpr unsigned int Class_1010_26BE9DED0C2C8EA0_TypeDefinitionIndex = 51345;

	class Class_1010_26BE9DED0C2C8EA0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1010_26BE9DED0C2C8EA0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1010_26BE9DED0C2C8EA0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1010_26BE9DED0C2C8EA0_METHOD_2_OFFSET))(a1);
		}

	};
