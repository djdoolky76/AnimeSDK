#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7812A0)
#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7810C0)

namespace RPG::GameCore
{
	class IdleLiveTeamSlotTypeRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::GameCore::ILBattleCharacterLocation Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveTeamSlotTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
