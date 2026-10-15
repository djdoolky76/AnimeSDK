#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_788_31AFE84ADD2CC5DB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14994910)
#define CLASS_788_31AFE84ADD2CC5DB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14994510)
#define CLASS_788_31AFE84ADD2CC5DB_METHOD_OFFSET UNITYSDK_OFFSET(0x14994B40)

inline static constexpr unsigned int Class_788_31AFE84ADD2CC5DB_TypeDefinitionIndex = 51123;

	class Class_788_31AFE84ADD2CC5DB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_788_31AFE84ADD2CC5DB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_788_31AFE84ADD2CC5DB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_788_31AFE84ADD2CC5DB_METHOD_2_OFFSET))(a1);
		}

	};
