#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F918A60)
#define FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x1F918A70)
#define FOUNDATION_EXCLUSIVERESOURCESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F918A90)

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceService_TypeDefinitionIndex = 8941;

	class ExclusiveResourceService : public ::System::Object
	{
	public:
		::System::Action* _clearWork; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCESERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnReadyToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET))(this);
		}
	};
}
