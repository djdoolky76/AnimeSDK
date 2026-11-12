#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_291_C9FB80C750005949_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1576EF30)
#define CLASS_291_C9FB80C750005949_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1576EB30)
#define CLASS_291_C9FB80C750005949_METHOD_OFFSET UNITYSDK_OFFSET(0x1576F180)

inline static constexpr unsigned int Class_291_C9FB80C750005949_TypeDefinitionIndex = 51663;

	class Class_291_C9FB80C750005949 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_291_C9FB80C750005949_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_291_C9FB80C750005949_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_291_C9FB80C750005949_METHOD_2_OFFSET))(a1);
		}

	};
