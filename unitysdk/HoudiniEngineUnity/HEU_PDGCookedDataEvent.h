#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_PDGCOOKEDDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x37FE0B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGCookedDataEvent_TypeDefinitionIndex = 17809;

	class HEU_PDGCookedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGCOOKEDDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
