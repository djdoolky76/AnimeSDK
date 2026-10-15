#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitSPBattleAreaRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7489D0)
#define RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D748850)

namespace RPG::GameCore
{
	class GridFightTraitSPBattleAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleAreaNumList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 TraitLayer; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitSPBattleAreaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
