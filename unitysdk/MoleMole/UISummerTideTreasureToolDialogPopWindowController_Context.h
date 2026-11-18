#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGIDAMPAOGK;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16917CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureToolDialogPopWindowController_Context_TypeDefinitionIndex = 53245;

	class UISummerTideTreasureToolDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HGIDAMPAOGK* GeneralLevel; // 0x28
		::System::Action_1<::System::Int32>* OnToolConfirmed; // 0x30
		::System::Int32 StageId; // 0x38
		::System::Int32 CurrentToolId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
