#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_263_FD60860816FFC4EA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x164E66C0)
#define CLASS_263_FD60860816FFC4EA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x164E6290)
#define CLASS_263_FD60860816FFC4EA_METHOD_OFFSET UNITYSDK_OFFSET(0x164E6950)

inline static constexpr unsigned int Class_263_FD60860816FFC4EA_TypeDefinitionIndex = 50577;

	class Class_263_FD60860816FFC4EA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_263_FD60860816FFC4EA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_263_FD60860816FFC4EA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_263_FD60860816FFC4EA_METHOD_2_OFFSET))(a1);
		}

	};
