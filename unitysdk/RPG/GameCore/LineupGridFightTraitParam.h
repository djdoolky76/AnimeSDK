#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LineupGridFightTraitParam; }

#define RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5860)
#define RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D56E0)

namespace RPG::GameCore
{
	class LineupGridFightTraitParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TraitID; // 0x10
		::System::UInt32 CrossBattleCounter; // 0x14
		::Il2CppArray<::System::UInt32>* TraitEnhanceList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LineupGridFightTraitParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LineupGridFightTraitParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
