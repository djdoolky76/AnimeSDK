#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFishContestMainPageController_ECloseReason.h"
#include "unitysdk/System/Object.h"

class CELNNCEAKGB;
namespace MoleMole { class UIFishContestMainPageController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CLOSEUI_B__0_OFFSET UNITYSDK_OFFSET(0x19694960)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CLOSEUI_B__1_OFFSET UNITYSDK_OFFSET(0x19695020)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CLOSEUI_B__2_OFFSET UNITYSDK_OFFSET(0x19694E60)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19694950)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController___c__DisplayClass64_0_TypeDefinitionIndex = 49984;

	class UIFishContestMainPageController___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::CELNNCEAKGB* configLevel; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action_1<::System::Boolean>* __9__2; // 0x20
		::MoleMole::UIFishContestMainPageController* __4__this; // 0x28
		::System::Int32 levelId; // 0x30
		::MoleMole::UIFishContestMainPageController_ECloseReason reason; // 0x34
		::System::Boolean success; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CLOSEUI_B__0_OFFSET))(this);
		}

		::System::Void _CloseUI_b__2(::System::Boolean restart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CLOSEUI_B__2_OFFSET))(this, restart);
		}

		::System::Void _CloseUI_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_0__CLOSEUI_B__1_OFFSET))(this);
		}
	};
}
