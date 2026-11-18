#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IGPKLGJGBCI;
class IIBINLMOGLF;

#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19777730)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleHistoryCardRowWidgetController_Context_TypeDefinitionIndex = 61156;

	class UIHardCoreBossBattleHistoryCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IGPKLGJGBCI* LevelData; // 0x28
		::IIBINLMOGLF* SeasonData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
