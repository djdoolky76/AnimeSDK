#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_HEU_INPUTOBJECTUICACHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B943F80)

namespace HoudiniEngineUnity
{
	class HEU_InputNodeUICache_HEU_InputObjectUICache : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_HEU_INPUTOBJECTUICACHE_CTOR_OFFSET))(this);
		}

	};
}
