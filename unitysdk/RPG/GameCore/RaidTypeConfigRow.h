#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidFailedResult.h"
#include "unitysdk/RPG/GameCore/RaidFailedType.h"
#include "unitysdk/RPG/GameCore/RaidFinishType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidTypeConfigRow; }

#define RPG_GAMECORE_RAIDTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96B4F0)
#define RPG_GAMECORE_RAIDTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D96B2D0)

namespace RPG::GameCore
{
	class RaidTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RaidFinishType FinishType; // 0x10
		::RPG::GameCore::RaidFailedResult FailedResult; // 0x14
		::RPG::GameCore::RaidConfigType RaidType; // 0x18
		::RPG::GameCore::RaidFailedType FailedType; // 0x1C
		::System::UInt32 FinishCountDown; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
