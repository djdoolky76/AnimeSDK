#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeAimConfigRow; }

#define RPG_GAMECORE_BATTLECOLLEGEAIMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D453E90)
#define RPG_GAMECORE_BATTLECOLLEGEAIMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D453C40)

namespace RPG::GameCore
{
	class BattleCollegeAimConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AimDesc; // 0x10
		::RPG::Client::TextID AimTitle; // 0x20
		::System::UInt32 AimProgress; // 0x30
		::System::UInt32 AimID; // 0x34
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
