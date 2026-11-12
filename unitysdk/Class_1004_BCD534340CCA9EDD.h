#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1004_BCD534340CCA9EDD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589B990)
#define CLASS_1004_BCD534340CCA9EDD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589B590)
#define CLASS_1004_BCD534340CCA9EDD_METHOD_OFFSET UNITYSDK_OFFSET(0x1589BBE0)

inline static constexpr unsigned int Class_1004_BCD534340CCA9EDD_TypeDefinitionIndex = 52390;

	class Class_1004_BCD534340CCA9EDD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1004_BCD534340CCA9EDD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1004_BCD534340CCA9EDD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1004_BCD534340CCA9EDD_METHOD_2_OFFSET))(a1);
		}

	};
