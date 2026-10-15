#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildRewardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildRewardRow; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D685E20)
#define RPG_GAMECORE_EVOLVEBUILDREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D685C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardRow_TypeDefinitionIndex = 11428;

	class EvolveBuildRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 IncomeTarget; // 0x10
		::System::UInt32 RewardID; // 0x14
		::RPG::GameCore::EvolveBuildRewardType Type; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
