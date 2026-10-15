#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_86_CDE2B60946D49E0F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15ABA330)
#define CLASS_86_CDE2B60946D49E0F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15AB9F00)
#define CLASS_86_CDE2B60946D49E0F_METHOD_OFFSET UNITYSDK_OFFSET(0x15ABA5C0)

inline static constexpr unsigned int Class_86_CDE2B60946D49E0F_TypeDefinitionIndex = 50387;

	class Class_86_CDE2B60946D49E0F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_86_CDE2B60946D49E0F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_86_CDE2B60946D49E0F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_86_CDE2B60946D49E0F_METHOD_2_OFFSET))(a1);
		}

	};
