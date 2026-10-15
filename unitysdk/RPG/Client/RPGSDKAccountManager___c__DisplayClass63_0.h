#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS63_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDE31B00)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS63_0__SHOWEXITUI_B__0_OFFSET UNITYSDK_OFFSET(0xDE3F610)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___c__DisplayClass63_0_TypeDefinitionIndex = 61091;

	class RPGSDKAccountManager___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS63_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowExitUI_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS63_0__SHOWEXITUI_B__0_OFFSET))(this, a1);
		}

	};
}
