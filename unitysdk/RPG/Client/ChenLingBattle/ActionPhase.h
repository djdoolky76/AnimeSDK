#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"
class GEPCOHMCAAJ;
class GOCODBMFHPH;
namespace RPG::Client::ChenLingBattle { class ActionInfo; }
namespace RPG::Client::ChenLingBattle { class ActionPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PendingAction; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xCA36EF0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCA38060)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCA381B0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_HANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0xCA37290)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xCA36F10)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xCA37190)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0xCA37540)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CREATEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xCA37050)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__HANDLEPENDINGACTIONFINISH_B__4_0_OFFSET UNITYSDK_OFFSET(0xCA38300)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xCA37860)

namespace RPG::Client::ChenLingBattle
{
	class ActionPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::PendingAction* _PendingAction; // 0x18
		::RPG::Client::ChenLingBattle::ActionPreviewSnapshot* _PreviewSnapshot; // 0x20
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::PendingAction* _CreatePendingAction(::RPG::Client::ChenLingBattle::ActionInfo* a1)
		{
			return ((::RPG::Client::ChenLingBattle::PendingAction*(*)(::PVOID, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CREATEPENDINGACTION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void HandlePendingActionFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_HANDLEPENDINGACTIONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::GEPCOHMCAAJ* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void _HandlePendingActionFinish_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__HANDLEPENDINGACTIONFINISH_B__4_0_OFFSET))(this);
		}

	};
}
