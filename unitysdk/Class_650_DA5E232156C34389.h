#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_650_DA5E232156C34389_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1580F340)
#define CLASS_650_DA5E232156C34389_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1580EF40)
#define CLASS_650_DA5E232156C34389_METHOD_OFFSET UNITYSDK_OFFSET(0x1580F590)

inline static constexpr unsigned int Class_650_DA5E232156C34389_TypeDefinitionIndex = 52036;

	class Class_650_DA5E232156C34389 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_650_DA5E232156C34389_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_650_DA5E232156C34389_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_650_DA5E232156C34389_METHOD_2_OFFSET))(a1);
		}

	};
