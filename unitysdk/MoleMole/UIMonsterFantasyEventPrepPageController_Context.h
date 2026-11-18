#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147DDB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyEventPrepPageController_Context_TypeDefinitionIndex = 87088;

	class UIMonsterFantasyEventPrepPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ReturnToLevelId; // 0x28
		::System::Boolean ReturnToChapterChapter; // 0x2C
		::System::Boolean ReturnToStoryChapter; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
