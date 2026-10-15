#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1355_D18097B7C02E5DAD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14AEFAC0)
#define CLASS_1355_D18097B7C02E5DAD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14AEF6C0)
#define CLASS_1355_D18097B7C02E5DAD_METHOD_OFFSET UNITYSDK_OFFSET(0x14AEFCF0)

	class Class_1355_D18097B7C02E5DAD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1355_D18097B7C02E5DAD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1355_D18097B7C02E5DAD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1355_D18097B7C02E5DAD_METHOD_2_OFFSET))(a1);
		}

	};
