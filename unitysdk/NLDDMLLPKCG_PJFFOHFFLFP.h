#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NLDDMLLPKCG_PJFFOHFFLFP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x590270)

inline static constexpr unsigned int NLDDMLLPKCG_PJFFOHFFLFP_TypeDefinitionIndex = 81382;

struct alignas(4) NLDDMLLPKCG_PJFFOHFFLFP
{
	::System::Void Execute(::System::Int32 AKGCFJBCLFP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PJFFOHFFLFP_EXECUTE_OFFSET))(this, AKGCFJBCLFP);
	}
};
