#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidPerformanceConfigRow; }

#define RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93C6B0)
#define RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidPerformanceConfigRow_TypeDefinitionIndex = 14601;

	class RaidPerformanceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RaidID; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::System::UInt32 HardLevel; // 0x18
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidPerformanceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidPerformanceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
