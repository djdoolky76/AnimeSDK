#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC469C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0___UPDATETEAMPOS_B__0_OFFSET UNITYSDK_OFFSET(0xC46AF40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c__DisplayClass39_0_TypeDefinitionIndex = 75099;

	class IdleLiveBaseTeamInfo___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair* item; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateTeamPos_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS39_0___UPDATETEAMPOS_B__0_OFFSET))(this, a1);
		}

	};
}
