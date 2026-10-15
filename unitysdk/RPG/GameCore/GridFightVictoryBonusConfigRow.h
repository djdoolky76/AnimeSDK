#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightVictoryBonusConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71BD00)
#define RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D71BB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightVictoryBonusConfigRow_TypeDefinitionIndex = 13413;

	class GridFightVictoryBonusConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GoldBonus; // 0x10
		::System::UInt32 VictoryCount; // 0x14
		::System::UInt32 ExtraGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightVictoryBonusConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightVictoryBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
