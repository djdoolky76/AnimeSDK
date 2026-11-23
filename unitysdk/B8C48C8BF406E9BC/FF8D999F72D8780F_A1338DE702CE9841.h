#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FEB15D0F6A26C506_F1E905A9A25EDD66.h"

namespace System { class Object; }

#define B8C48C8BF406E9BC_FF8D999F72D8780F_A1338DE702CE9841_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define B8C48C8BF406E9BC_FF8D999F72D8780F_A1338DE702CE9841__CTOR_OFFSET UNITYSDK_OFFSET(0x33414C0)

namespace B8C48C8BF406E9BC
{
	inline static constexpr unsigned int FF8D999F72D8780F_A1338DE702CE9841_TypeDefinitionIndex = 20504;

	class FF8D999F72D8780F_A1338DE702CE9841 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* param_0, ::System::IntPtr param_1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B8C48C8BF406E9BC_FF8D999F72D8780F_A1338DE702CE9841__CTOR_OFFSET))(this, param_0, param_1);
		}

		::System::Int32 Invoke(::System::IntPtr E5EB06E4FD2C32F7, ::FEB15D0F6A26C506_F1E905A9A25EDD66& A6B5840567522F01)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::FEB15D0F6A26C506_F1E905A9A25EDD66&))((::PBYTE)hIl2Cpp + B8C48C8BF406E9BC_FF8D999F72D8780F_A1338DE702CE9841_INVOKE_OFFSET))(this, E5EB06E4FD2C32F7, A6B5840567522F01);
		}
	};
}
