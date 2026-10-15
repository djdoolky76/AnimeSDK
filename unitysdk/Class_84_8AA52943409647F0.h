#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_84_8AA52943409647F0_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB214F90)
#define CLASS_84_8AA52943409647F0_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB214B60)
#define CLASS_84_8AA52943409647F0_METHOD_OFFSET UNITYSDK_OFFSET(0xB215220)

inline static constexpr unsigned int Class_84_8AA52943409647F0_TypeDefinitionIndex = 50385;

	class Class_84_8AA52943409647F0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_84_8AA52943409647F0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_84_8AA52943409647F0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_84_8AA52943409647F0_METHOD_2_OFFSET))(a1);
		}

	};
