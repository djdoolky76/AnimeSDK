#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1003_9675D79624721CE6_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149E9E80)
#define CLASS_1003_9675D79624721CE6_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149E9A80)
#define CLASS_1003_9675D79624721CE6_METHOD_OFFSET UNITYSDK_OFFSET(0x149EA0D0)

inline static constexpr unsigned int Class_1003_9675D79624721CE6_TypeDefinitionIndex = 51338;

	class Class_1003_9675D79624721CE6 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1003_9675D79624721CE6_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1003_9675D79624721CE6_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1003_9675D79624721CE6_METHOD_2_OFFSET))(a1);
		}

	};
