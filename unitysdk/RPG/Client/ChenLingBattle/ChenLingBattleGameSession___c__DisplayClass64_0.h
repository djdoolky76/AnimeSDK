#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIPBFBNKO;
namespace RPG::Client::ChenLingBattle { class Effect; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCA4C450)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0__SYNCEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCA50920)

namespace RPG::Client::ChenLingBattle
{
	class ChenLingBattleGameSession___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::HGCIPBFBNKO* effectProto; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncEffect_b__0(::RPG::Client::ChenLingBattle::Effect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Effect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0__SYNCEFFECT_B__0_OFFSET))(this, a1);
		}

	};
}
