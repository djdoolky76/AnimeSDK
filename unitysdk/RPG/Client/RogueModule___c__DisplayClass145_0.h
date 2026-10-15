#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDDKCNHJAB;
namespace RPG::Client { class RogueAreaData; }

#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDF52490)
#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0___ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xDF549F0)

namespace RPG::Client
{
	class RogueModule___c__DisplayClass145_0 : public ::System::Object
	{
	public:
		::KPDDKCNHJAB* rsp; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueAreaUnlockScNotify_b__0(::RPG::Client::RogueAreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0___ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_B__0_OFFSET))(this, a1);
		}

	};
}
