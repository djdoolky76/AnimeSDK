#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PNIHGNDLMIN;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVFRIENDMARKETSWITCHROLEGARMENTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA70B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovFriendMarketSwitchRoleGarmentPageController_Context_TypeDefinitionIndex = 62805;

	class UIZenkovFriendMarketSwitchRoleGarmentPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::PNIHGNDLMIN*>* OnConfirmSkin; // 0x28
		::System::Func_2<::PNIHGNDLMIN*, ::System::Boolean>* ShowLockIcon; // 0x30
		::System::Collections::Generic::List_1<::PNIHGNDLMIN*>* SkinList; // 0x38
		::System::Int32 InitConfirmSkinId; // 0x40
		::System::Int32 InitSkinId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVFRIENDMARKETSWITCHROLEGARMENTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
