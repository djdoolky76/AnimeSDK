#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationPerformanceID; }

#define RPG_GAMECORE_MAPROTATIONPERFORMANCEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8302F0)
#define RPG_GAMECORE_MAPROTATIONPERFORMANCEID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8301C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationPerformanceID_TypeDefinitionIndex = 17038;

	class MapRotationPerformanceID : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCEID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationPerformanceID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationPerformanceID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCEID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
