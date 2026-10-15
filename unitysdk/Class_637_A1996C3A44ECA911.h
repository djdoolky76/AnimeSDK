#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_637_A1996C3A44ECA911_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14964580)
#define CLASS_637_A1996C3A44ECA911_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14964180)
#define CLASS_637_A1996C3A44ECA911_METHOD_OFFSET UNITYSDK_OFFSET(0x149647B0)

inline static constexpr unsigned int Class_637_A1996C3A44ECA911_TypeDefinitionIndex = 50972;

	class Class_637_A1996C3A44ECA911 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_637_A1996C3A44ECA911_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_637_A1996C3A44ECA911_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_637_A1996C3A44ECA911_METHOD_2_OFFSET))(a1);
		}

	};
