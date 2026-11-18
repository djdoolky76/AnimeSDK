#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define MHOOMENNAAP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x75E900)

inline static constexpr unsigned int MHOOMENNAAP_TypeDefinitionIndex = 75855;

struct alignas(8) MHOOMENNAAP
{
	::EGAANNPEJCH HCKDKJHAOMF; // 0x10
	::System::Byte _padding0[0x4];
	::System::Action* OBPODPIBGGF; // 0x18

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOOMENNAAP_PHOADBJGFBE_OFFSET))(this);
	}
};
