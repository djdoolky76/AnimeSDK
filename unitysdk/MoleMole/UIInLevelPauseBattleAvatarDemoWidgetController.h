#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController.h"

class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x17C423B0)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C42E40)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x17C42E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBattleAvatarDemoWidgetController_TypeDefinitionIndex = 73876;

	class UIInLevelPauseBattleAvatarDemoWidgetController : public ::MoleMole::UIInLevelPauseBattleInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* __base_RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}
	};
}
