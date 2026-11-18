#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"

namespace Foundation { class ExclusiveResourceManager; }

#define FOUNDATION_EXCLUSIVERESOURCEMANAGER_TICKER_DOTICK_OFFSET UNITYSDK_OFFSET(0x1FCC3A60)
#define FOUNDATION_EXCLUSIVERESOURCEMANAGER_TICKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC3AA0)

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceManager_Ticker_TypeDefinitionIndex = 8935;

	class ExclusiveResourceManager_Ticker
	{
	public:
		::Foundation::ExclusiveResourceManager* Manager; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCEMANAGER_TICKER__CTOR_OFFSET))(this);
		}

		::System::Void DoTick(::System::Double Time, ::System::Single deltaTime, ::Foundation::ETickingGroup tickGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single, ::Foundation::ETickingGroup))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCEMANAGER_TICKER_DOTICK_OFFSET))(this, Time, deltaTime, tickGroup);
		}
	};
}
