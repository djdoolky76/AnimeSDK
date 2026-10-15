#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"
class GOCODBMFHPH;
class HFNMKEDPFJH;
class LIEOCCGJBMO;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xCA388A0)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xCA388B0)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xCA39B80)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_SETTLE_OFFSET UNITYSDK_OFFSET(0xCA39790)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__HANDLEFINISHBATTLESCRSP_OFFSET UNITYSDK_OFFSET(0xCA39980)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__ONTRANSITIONPAGEENTER_OFFSET UNITYSDK_OFFSET(0xCA394F0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int BattlePhase_TypeDefinitionIndex = 76289;

	class BattlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::Promises::Promise* _TransitionPromise; // 0x18
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnTransitionPageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__ONTRANSITIONPAGEENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Settle(::LIEOCCGJBMO* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::LIEOCCGJBMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_SETTLE_OFFSET))(this, a1);
		}

		::System::Void _HandleFinishBattleScRsp(::HFNMKEDPFJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFNMKEDPFJH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__HANDLEFINISHBATTLESCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONLEAVE_OFFSET))(this);
		}

	};
}
