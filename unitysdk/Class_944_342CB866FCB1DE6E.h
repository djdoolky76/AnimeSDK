#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_944_342CB866FCB1DE6E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE26800)
#define CLASS_944_342CB866FCB1DE6E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE26400)
#define CLASS_944_342CB866FCB1DE6E_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE26A50)

inline static constexpr unsigned int Class_944_342CB866FCB1DE6E_TypeDefinitionIndex = 52330;

	class Class_944_342CB866FCB1DE6E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_944_342CB866FCB1DE6E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_944_342CB866FCB1DE6E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_944_342CB866FCB1DE6E_METHOD_2_OFFSET))(a1);
		}

	};
