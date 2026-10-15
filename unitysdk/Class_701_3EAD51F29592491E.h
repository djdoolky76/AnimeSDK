#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_701_3EAD51F29592491E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14972220)
#define CLASS_701_3EAD51F29592491E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14971E20)
#define CLASS_701_3EAD51F29592491E_METHOD_OFFSET UNITYSDK_OFFSET(0x14972470)

inline static constexpr unsigned int Class_701_3EAD51F29592491E_TypeDefinitionIndex = 51036;

	class Class_701_3EAD51F29592491E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_701_3EAD51F29592491E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_701_3EAD51F29592491E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_701_3EAD51F29592491E_METHOD_2_OFFSET))(a1);
		}

	};
