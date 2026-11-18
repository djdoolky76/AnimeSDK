#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController.h"

class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F8B7A0)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x12F8B950)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F8BF20)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F8BF30)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x12F8BF40)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerBattleInfoWidgetController_TypeDefinitionIndex = 50287;

	class UITriggerBattleInfoWidgetController : public ::MoleMole::UIInLevelPauseBattleInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* __base_RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}
	};
}
