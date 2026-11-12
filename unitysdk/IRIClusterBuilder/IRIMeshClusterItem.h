#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB861A80)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItem_TypeDefinitionIndex = 48777;

	class IRIMeshClusterItem : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEM_CTOR_OFFSET))(this);
		}

	};
}
