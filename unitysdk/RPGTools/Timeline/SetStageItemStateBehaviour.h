#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/RPGTools/Timeline/StageItemInfo.h"

#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xF4549A0)
#define RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF454D70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetStageItemStateBehaviour_TypeDefinitionIndex = 49447;

	class SetStageItemStateBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::StageItemInfo>* ItemList; // 0x20
		::System::Boolean EnableState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTAGEITEMSTATEBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
