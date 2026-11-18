#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCEGEPBLFEF;
class OPIBJJIMIFC;
namespace MoleMole { class UIFriendChatSpecialWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E343F0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__PROCESSFORUMPOSTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18E34400)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 87418;

	class UIFriendChatSpecialWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::KCEGEPBLFEF* forumPost; // 0x10
		::MoleMole::UIFriendChatSpecialWidgetController* __4__this; // 0x18
		::System::Action_1<::System::Object*>* onSuccess; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessForumPostData_b__0(::OPIBJJIMIFC* postData)
		{
			return ((::System::Void(*)(::PVOID, ::OPIBJJIMIFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__PROCESSFORUMPOSTDATA_B__0_OFFSET))(this, postData);
		}
	};
}
