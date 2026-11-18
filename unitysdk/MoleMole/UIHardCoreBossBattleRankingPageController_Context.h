#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IIBINLMOGLF;

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C71D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingPageController_Context_TypeDefinitionIndex = 43515;

	class UIHardCoreBossBattleRankingPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IIBINLMOGLF* SeasonData; // 0x28
		::System::UInt32 DefaultModeId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
