#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB68200)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1DB68120)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ACTIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1DB680E0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1DB68100)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1DB680C0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_SET_ACTIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1DB680F0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1DB68110)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1DB680D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleActionDispatch_TypeDefinitionIndex = 65311;

	class ExpeditionBattleActionDispatch : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseExpeditionBattleAction* _Action_k__BackingField; // 0x10
		::System::UInt32 _ActionToken_k__BackingField; // 0x18
		::System::UInt32 _RouteID_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionToken()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ACTIONTOKEN_OFFSET))(this);
		}

		::System::Void set_ActionToken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_SET_ACTIONTOKEN_OFFSET))(this, a1);
		}

		::RPG::GameCore::BaseExpeditionBattleAction* get_Action()
		{
			return ((::RPG::GameCore::BaseExpeditionBattleAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::GameCore::BaseExpeditionBattleAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_SET_ACTION_OFFSET))(this, a1);
		}

		::System::String* get_ActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIONDISPATCH_GET_ACTIONNAME_OFFSET))(this);
		}

	};
}
