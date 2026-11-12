#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1332_D18097B7C02E5DAD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1597D300)
#define CLASS_1332_D18097B7C02E5DAD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1597CF00)
#define CLASS_1332_D18097B7C02E5DAD_METHOD_OFFSET UNITYSDK_OFFSET(0x1597D530)

inline static constexpr unsigned int Class_1332_D18097B7C02E5DAD_TypeDefinitionIndex = 52721;

	class Class_1332_D18097B7C02E5DAD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1332_D18097B7C02E5DAD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1332_D18097B7C02E5DAD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1332_D18097B7C02E5DAD_METHOD_2_OFFSET))(a1);
		}

	};
