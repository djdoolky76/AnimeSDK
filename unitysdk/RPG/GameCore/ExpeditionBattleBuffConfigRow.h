#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleBuffConfigRow; }

#define RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E750)
#define RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68E4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleBuffConfigRow_TypeDefinitionIndex = 11448;

	class ExpeditionBattleBuffConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BuffDataDesc; // 0x18
		::System::Boolean BuffDataIsPercentage; // 0x28
		::System::Byte _padding1[0x3];
		::System::UInt32 MazeBuffID; // 0x2C
		::System::UInt64 BuffRank; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleBuffConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
