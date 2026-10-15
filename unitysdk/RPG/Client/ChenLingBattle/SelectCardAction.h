#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PendingAction.h"
class GOKHEKCHLEL;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class SelectCardActionInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Nullable; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xCA5AE90)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA5B360)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_ONENTER_OFFSET UNITYSDK_OFFSET(0xCA5AEA0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_SELECTCARD_OFFSET UNITYSDK_OFFSET(0xCA5B450)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__ONCHENLINGPENDINGACTIONSELECTCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xCA5B6B0)

namespace RPG::Client::ChenLingBattle
{
	class SelectCardAction : public ::RPG::Client::ChenLingBattle::PendingAction
	{
	public:
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::RPG::Client::ChenLingBattle::SelectCardActionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::RPG::Client::ChenLingBattle::SelectCardActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Nullable* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_ONENTER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* SelectCard(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_SELECTCARD_OFFSET))(this, a1);
		}

		::System::Void _OnChenLingPendingActionSelectCardScRsp(::GOKHEKCHLEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOKHEKCHLEL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__ONCHENLINGPENDINGACTIONSELECTCARDSCRSP_OFFSET))(this, a1);
		}

	};
}
