#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"
class GOCODBMFHPH;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xCA5A7A0)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xCA5A7B0)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xCA5AB30)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET UNITYSDK_OFFSET(0xCA5AD60)

namespace RPG::Client::ChenLingBattle
{
	class RoundSettlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* _RoundSettlePage; // 0x18
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void SwitchToPrepareEdit(::System::Object* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET))(this, a1, a2);
		}

	};
}
