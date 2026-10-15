#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeAimConfigRow; }

#define RPG_GAMECORE_BATTLECOLLEGEAIMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D426420)
#define RPG_GAMECORE_BATTLECOLLEGEAIMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4261D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeAimConfigRow_TypeDefinitionIndex = 12842;

	class BattleCollegeAimConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AimID; // 0x10
		::System::UInt32 AimProgress; // 0x14
		::RPG::Client::TextID AimDesc; // 0x18
		::RPG::Client::TextID AimTitle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeAimConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeAimConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
