#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGIDAMPAOGK;
class OILAOLGAIGJ;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESTAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16917C60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureStageWidgetController_Context_TypeDefinitionIndex = 51569;

	class UISummerTideTreasureStageWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OILAOLGAIGJ* StageConfig; // 0x28
		::HGIDAMPAOGK* GeneralLevel; // 0x30
		::System::Action_1<::System::Int32>* OnStageClicked; // 0x38
		::System::Boolean IsLatestUnlockedStage; // 0x40
		::System::Boolean IsSelected; // 0x41
		::System::Byte _padding0[0x2];
		::System::Int32 StageIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESTAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
