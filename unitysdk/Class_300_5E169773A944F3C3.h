#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_300_5E169773A944F3C3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148C1400)
#define CLASS_300_5E169773A944F3C3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148C1000)
#define CLASS_300_5E169773A944F3C3_METHOD_OFFSET UNITYSDK_OFFSET(0x148C1650)

inline static constexpr unsigned int Class_300_5E169773A944F3C3_TypeDefinitionIndex = 50629;

	class Class_300_5E169773A944F3C3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_300_5E169773A944F3C3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_300_5E169773A944F3C3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_300_5E169773A944F3C3_METHOD_2_OFFSET))(a1);
		}

	};
