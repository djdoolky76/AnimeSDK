#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PMCFJNIGGHJ.h"

class DHPGIJDKCHN;
class ICPELADLAKE;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT_GET_ISBANPAUSE_OFFSET UNITYSDK_OFFSET(0x18E902E0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E90330)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogContext_TypeDefinitionIndex = 78397;

	class UIInLevelPauseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* OnSetToggle; // 0x28
		::ICPELADLAKE* BtnUnstuckCtx; // 0x30
		::ICPELADLAKE* Btn1Ctx; // 0x38
		::ICPELADLAKE* Btn2Ctx; // 0x40
		::System::Func_1<::System::Boolean>* GetIsToggle; // 0x48
		::System::Collections::Generic::List_1<::DHPGIJDKCHN*>* TabBtnCtx; // 0x50
		::ICPELADLAKE* BtnUnstuckLongCtx; // 0x58
		::ICPELADLAKE* CompleteBtnCtx; // 0x60
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>* SettingDictModifier; // 0x68
		::System::Action_1<::PMCFJNIGGHJ>* PostUIDestroy; // 0x70
		::MoleMole::ESystemSettingType SystemSettingType; // 0x78
		::System::Boolean showBangkovCountdown; // 0x7C
		::System::Boolean HideTopTabsAndBottomButtons; // 0x7D
		::System::Boolean ShowToggle; // 0x7E
		::System::Boolean RealPause; // 0x7F
		::System::Boolean SuspendScreenEffect; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBanPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT_GET_ISBANPAUSE_OFFSET))(this);
		}
	};
}
