#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IGPKLGJGBCI;

#define MOLEMOLE_UIHARDCOREBOSSBATTLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1785B600)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleWidgetController_Context_TypeDefinitionIndex = 69718;

	class UIHardCoreBossBattleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IGPKLGJGBCI* LevelData; // 0x28
		::System::Int32 ModeTabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
