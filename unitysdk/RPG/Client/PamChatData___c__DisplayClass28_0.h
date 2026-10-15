#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"
class EHFPIBGDAKP;

#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA6E940)
#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0xDA6F440)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData___c__DisplayClass28_0_TypeDefinitionIndex = 63279;

	class PamChatData___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::PamChatQuickFunctionType type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPamChatQuickFunction_b__0(::EHFPIBGDAKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHFPIBGDAKP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET))(this, a1);
		}

	};
}
