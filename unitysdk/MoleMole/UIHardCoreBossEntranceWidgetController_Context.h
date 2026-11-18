#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IGPKLGJGBCI;
class IIBINLMOGLF;

#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187C4DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossEntranceWidgetController_Context_TypeDefinitionIndex = 46448;

	class UIHardCoreBossEntranceWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IGPKLGJGBCI* LevelData; // 0x28
		::IIBINLMOGLF* SeasonData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
