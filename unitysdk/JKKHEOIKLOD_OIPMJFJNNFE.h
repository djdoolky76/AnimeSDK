#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JKKHEOIKLOD_OIPMJFJNNFE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x75DF80)

inline static constexpr unsigned int JKKHEOIKLOD_OIPMJFJNNFE_TypeDefinitionIndex = 72695;

struct alignas(4) JKKHEOIKLOD_OIPMJFJNNFE
{
	::System::Int32 IIFMJFJOOCK; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKKHEOIKLOD_OIPMJFJNNFE_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
