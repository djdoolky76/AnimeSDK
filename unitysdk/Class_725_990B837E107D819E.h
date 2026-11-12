#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_725_990B837E107D819E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1582CF60)
#define CLASS_725_990B837E107D819E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1582CB60)
#define CLASS_725_990B837E107D819E_METHOD_OFFSET UNITYSDK_OFFSET(0x1582D1B0)

inline static constexpr unsigned int Class_725_990B837E107D819E_TypeDefinitionIndex = 52111;

	class Class_725_990B837E107D819E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_725_990B837E107D819E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_725_990B837E107D819E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_725_990B837E107D819E_METHOD_2_OFFSET))(a1);
		}

	};
