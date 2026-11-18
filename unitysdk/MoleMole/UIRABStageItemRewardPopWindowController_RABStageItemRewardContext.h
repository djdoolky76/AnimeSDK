#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define MOLEMOLE_UIRABSTAGEITEMREWARDPOPWINDOWCONTROLLER_RABSTAGEITEMREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18704270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageItemRewardPopWindowController_RABStageItemRewardContext_TypeDefinitionIndex = 77270;

	class UIRABStageItemRewardPopWindowController_RABStageItemRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>* ItemRewardMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEITEMREWARDPOPWINDOWCONTROLLER_RABSTAGEITEMREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
