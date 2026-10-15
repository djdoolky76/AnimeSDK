#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_263_FD60860816FFC4EA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x164F4720)
#define CLASS_263_FD60860816FFC4EA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x164F42F0)
#define CLASS_263_FD60860816FFC4EA_METHOD_OFFSET UNITYSDK_OFFSET(0x164F49B0)

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
