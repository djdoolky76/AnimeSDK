#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GHMGGIHEHJE;
namespace RPG::Client { class RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define LBPHJMOLMBH_AFFPFFMPBLG_1_OFFSET UNITYSDK_OFFSET(0xB60EBD0)
#define LBPHJMOLMBH_AFFPFFMPBLG_OFFSET UNITYSDK_OFFSET(0xB60E770)
#define LBPHJMOLMBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB60E6C0)
#define LBPHJMOLMBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB60E6D0)
#define LBPHJMOLMBH_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB60EC80)
#define LBPHJMOLMBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB60E710)
#define LBPHJMOLMBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB60E830)
#define LBPHJMOLMBH_TICK_OFFSET UNITYSDK_OFFSET(0xB60E880)

	class LBPHJMOLMBH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* OFKGLJOAMLD; // 0x20
		::System::Single PBMPHMBHIJN; // 0x28
		::System::Int32 OKKIOIBIFIP; // 0x2C
		::System::Boolean HNALEMBOBFE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_GETCONFIG_OFFSET))(this);
		}

		::System::Int32 AFFPFFMPBLG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_AFFPFFMPBLG_OFFSET))(this);
		}

		static ::System::Int32 AFFPFFMPBLG_1(::GHMGGIHEHJE* a1)
		{
			return ((::System::Int32(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + LBPHJMOLMBH_AFFPFFMPBLG_1_OFFSET))(a1);
		}

	};
