#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class LDIBODLHCNK;

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovQuestSubSystem_PendingSetEvacuationData_TypeDefinitionIndex = 52925;

	struct alignas(8) ZenkovQuestSubSystem_PendingSetEvacuationData
	{
		::LDIBODLHCNK* Data; // 0x10
		::System::Boolean IsUpdate; // 0x18
	};
}
