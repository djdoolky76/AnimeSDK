#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirBattleRow; }

#define RPG_GAMECORE_PIXAIRBATTLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D919370)
#define RPG_GAMECORE_PIXAIRBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9190F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirBattleRow_TypeDefinitionIndex = 12143;

	class PixAirBattleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnemyIDList; // 0x10
		::RPG::GameCore::FixPoint PlayerHealthPercentage; // 0x18
		::System::UInt32 ContentID; // 0x20
		::System::UInt32 EnemyShow; // 0x24
		::RPG::GameCore::FixPoint EnemyHealthPercentage; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRBATTLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirBattleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirBattleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRBATTLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
