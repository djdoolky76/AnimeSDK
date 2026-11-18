#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_SORTACTIVEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x961EE0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControllerTickManager_SortActiveJob_TypeDefinitionIndex = 37635;

	struct alignas(4) CurvyControllerTickManager_SortActiveJob
	{
		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_SORTACTIVEJOB_EXECUTE_OFFSET))(this);
		}
	};
}
