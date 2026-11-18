#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMKEAEDIADM.h"
#include "unitysdk/System/Object.h"

class MHFEGIFFLKO;
class OPDIKFCLLDE_KJGFIGNPFNI;
namespace MoleMole { class UIFriendChatTeamWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E34540)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0x18E34550)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET UNITYSDK_OFFSET(0x18E34650)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__3_OFFSET UNITYSDK_OFFSET(0x18E349D0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET UNITYSDK_OFFSET(0x18E34900)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatTeamWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 50645;

	class UIFriendChatTeamWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MHFEGIFFLKO*>* __9__2; // 0x10
		::OPDIKFCLLDE_KJGFIGNPFNI* viewWidget; // 0x18
		::MoleMole::UIFriendChatTeamWidgetController* __4__this; // 0x20
		::System::Action* __9__3; // 0x28
		::LMKEAEDIADM identifier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__2(::MHFEGIFFLKO* shareData)
		{
			return ((::System::Void(*)(::PVOID, ::MHFEGIFFLKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET))(this, shareData);
		}

		::System::Void _SetupTeamUIWithContent_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__3_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_g__SetTeamBtnAsInvalid_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET))(this);
		}
	};
}
