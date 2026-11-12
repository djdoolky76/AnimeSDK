#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_163_DC3F4FF08CAF646E_METHOD_1_OFFSET UNITYSDK_OFFSET(0xBA5AD50)
#define CLASS_163_DC3F4FF08CAF646E_METHOD_2_OFFSET UNITYSDK_OFFSET(0xBA5A920)
#define CLASS_163_DC3F4FF08CAF646E_METHOD_OFFSET UNITYSDK_OFFSET(0xBA5AFE0)

inline static constexpr unsigned int Class_163_DC3F4FF08CAF646E_TypeDefinitionIndex = 51515;

	class Class_163_DC3F4FF08CAF646E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_163_DC3F4FF08CAF646E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_163_DC3F4FF08CAF646E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_163_DC3F4FF08CAF646E_METHOD_2_OFFSET))(a1);
		}

	};
