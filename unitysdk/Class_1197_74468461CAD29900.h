#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1197_74468461CAD29900_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A36E00)
#define CLASS_1197_74468461CAD29900_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A36A00)
#define CLASS_1197_74468461CAD29900_METHOD_OFFSET UNITYSDK_OFFSET(0x14A37050)

inline static constexpr unsigned int Class_1197_74468461CAD29900_TypeDefinitionIndex = 51532;

	class Class_1197_74468461CAD29900 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1197_74468461CAD29900_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1197_74468461CAD29900_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1197_74468461CAD29900_METHOD_2_OFFSET))(a1);
		}

	};
