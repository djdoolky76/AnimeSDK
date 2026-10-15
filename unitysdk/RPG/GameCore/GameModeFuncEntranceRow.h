#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameModeFuncEntranceRow; }

#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7173B0)
#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D717270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeFuncEntranceRow_TypeDefinitionIndex = 13312;

	class GameModeFuncEntranceRow : public ::System::Object
	{
	public:
		::System::UInt32 GameModeType; // 0x10
		::System::UInt32 BranchLineFuncEntranceListID; // 0x14
		::System::UInt32 MainLineFuncEntranceListID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameModeFuncEntranceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameModeFuncEntranceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
