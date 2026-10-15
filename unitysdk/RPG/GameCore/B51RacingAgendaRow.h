#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingAgendaRow; }

#define RPG_GAMECORE_B51RACINGAGENDAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D432E80)
#define RPG_GAMECORE_B51RACINGAGENDAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D432D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingAgendaRow_TypeDefinitionIndex = 10954;

	class B51RacingAgendaRow : public ::System::Object
	{
	public:
		::System::UInt32 Day; // 0x10
		::RPG::GameCore::B51RacingContentType ContentType; // 0x14
		::System::UInt32 CycleID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGAGENDAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingAgendaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingAgendaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGAGENDAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
