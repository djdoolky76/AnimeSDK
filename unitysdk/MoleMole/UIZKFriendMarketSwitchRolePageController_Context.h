#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10569D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchRolePageController_Context_TypeDefinitionIndex = 67216;

	class UIZKFriendMarketSwitchRolePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::Object*>* FormPageContextBuilder; // 0x28
		::System::Func_2<::System::Int32, ::System::Object*>* SkinPageContextBuilder; // 0x30
		::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>* ShowLockIcon; // 0x38
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* AvatarList; // 0x40
		::System::Action_1<::BPHGNMNLLHF*>* OnConfirmAvatar; // 0x48
		::System::Int32 InitAvatarId; // 0x50
		::System::Int32 InitConfirmSelectedAvatarId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
