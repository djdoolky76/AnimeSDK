#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJDMJCABCMM;
class IOPHHFOHCHJ;

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D4970)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__DEALJOINABLEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1A3D4980)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 87416;

	class UIFriendChatSpecialWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::IOPHHFOHCHJ* inviteRequst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DealJoinableRequest_b__0(::BJDMJCABCMM* invite)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJDMJCABCMM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__DEALJOINABLEREQUEST_B__0_OFFSET))(this, invite);
		}
	};
}
