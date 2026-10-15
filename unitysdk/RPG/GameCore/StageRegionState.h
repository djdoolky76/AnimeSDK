#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageRegionState; }

#define RPG_GAMECORE_STAGEREGIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB14040)
#define RPG_GAMECORE_STAGEREGIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionState_TypeDefinitionIndex = 19191;

	class StageRegionState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HoyoTagContainer* Tag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
