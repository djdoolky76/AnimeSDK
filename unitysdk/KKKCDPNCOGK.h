#pragma once
#include "unitysdk/unitysdk.h"

#define KKKCDPNCOGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160F0)
#define KKKCDPNCOGK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x160E0)

inline static constexpr unsigned int KKKCDPNCOGK_TypeDefinitionIndex = 71087;

	struct alignas(4) KKKCDPNCOGK
	{
		::System::UInt32 CEGNBNFCJPP; // 0x10
		::System::UInt32 IPMJKOMCIHB; // 0x14
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKKCDPNCOGK_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCDPNCOGK_DISPOSE_OFFSET))(this);
		}

	};
