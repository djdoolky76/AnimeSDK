#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_507_AD9A52E213CAC384_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14924380)
#define CLASS_507_AD9A52E213CAC384_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14923F80)
#define CLASS_507_AD9A52E213CAC384_METHOD_OFFSET UNITYSDK_OFFSET(0x149245D0)

inline static constexpr unsigned int Class_507_AD9A52E213CAC384_TypeDefinitionIndex = 50841;

	class Class_507_AD9A52E213CAC384 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_507_AD9A52E213CAC384_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_507_AD9A52E213CAC384_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_507_AD9A52E213CAC384_METHOD_2_OFFSET))(a1);
		}

	};
