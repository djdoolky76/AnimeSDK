#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS61_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD5893D0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS61_0___MOVEPIECEPATH_B__0_OFFSET UNITYSDK_OFFSET(0xD58D6E0)

namespace RPG::Client
{
	class MatchThreeBoard___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS61_0_CTOR_OFFSET))(this);
		}

		::System::Void __MovePiecePath_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS61_0___MOVEPIECEPATH_B__0_OFFSET))(this);
		}

	};
}
