#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IGPKLGJGBCI;
namespace MoleMole { class UIHardCoreBossBattletPrepPageController; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLEDETAILPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199D85F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleDetailPageController_Context_TypeDefinitionIndex = 60192;

	class UIHardCoreBossBattleDetailPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IGPKLGJGBCI* LevelData; // 0x28
		::MoleMole::UIHardCoreBossBattletPrepPageController* BeforeUI; // 0x30
		::System::Int32 SelectedTabIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEDETAILPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
