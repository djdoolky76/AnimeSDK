#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitGameRefConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71A090)
#define RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D719EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitGameRefConfigRow_TypeDefinitionIndex = 13697;

	class GridFightTraitGameRefConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BonusScore; // 0x10
		::System::UInt32 BasicScore; // 0x14
		::System::UInt32 TraitID; // 0x18
		::System::UInt32 PenaltyScore; // 0x1C
		::System::UInt32 Season; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitGameRefConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitGameRefConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
