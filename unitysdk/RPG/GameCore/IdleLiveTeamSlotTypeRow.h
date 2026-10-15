#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D753810)
#define RPG_GAMECORE_IDLELIVETEAMSLOTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D753630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotTypeRow_TypeDefinitionIndex = 11724;

	class IdleLiveTeamSlotTypeRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::ILBattleCharacterLocation Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x20
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
