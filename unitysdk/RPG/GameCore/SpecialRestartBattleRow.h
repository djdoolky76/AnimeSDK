#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialRestartBattleRow; }

#define RPG_GAMECORE_SPECIALRESTARTBATTLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB00F00)
#define RPG_GAMECORE_SPECIALRESTARTBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB00D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialRestartBattleRow_TypeDefinitionIndex = 15172;

	class SpecialRestartBattleRow : public ::System::Object
	{
	public:
		::System::UInt32 BattleAreaConfigID; // 0x10
		::System::UInt32 EventID; // 0x14
		::System::UInt32 TowardEventID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALRESTARTBATTLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialRestartBattleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialRestartBattleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALRESTARTBATTLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
