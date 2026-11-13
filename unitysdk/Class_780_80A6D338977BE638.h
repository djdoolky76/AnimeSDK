#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_780_80A6D338977BE638_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB5E2F0)
#define CLASS_780_80A6D338977BE638_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB5DEF0)
#define CLASS_780_80A6D338977BE638_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB5E520)

inline static constexpr unsigned int Class_780_80A6D338977BE638_TypeDefinitionIndex = 52166;

	class Class_780_80A6D338977BE638 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_780_80A6D338977BE638_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_780_80A6D338977BE638_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_780_80A6D338977BE638_METHOD_2_OFFSET))(a1);
		}

	};
