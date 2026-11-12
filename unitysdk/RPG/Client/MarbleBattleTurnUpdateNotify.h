#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleAffiliationType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC5600)
#define RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY_GET_ISENEMYTURN_OFFSET UNITYSDK_OFFSET(0xDFC5550)
#define RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY_SET_ISENEMYTURN_OFFSET UNITYSDK_OFFSET(0xDFC55A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleTurnUpdateNotify_TypeDefinitionIndex = 67756;

	class MarbleBattleTurnUpdateNotify : public ::System::Object
	{
	public:
		::System::Action* Callback; // 0x10
		::System::Int32 Round; // 0x18
		::System::UInt32 TurnPlayerId; // 0x1C
		::RPG::Client::MarbleBattleAffiliationType AffiliationType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnemyTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY_GET_ISENEMYTURN_OFFSET))(this);
		}

		::System::Void set_IsEnemyTurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY_SET_ISENEMYTURN_OFFSET))(this, a1);
		}

	};
}
