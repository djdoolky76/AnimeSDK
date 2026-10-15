#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRestartGatheredRegion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37F110)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37F120)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37F0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRestartGatheredRegion_TypeDefinitionIndex = 21000;

	class AdvRestartGatheredRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRestartGatheredRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRestartGatheredRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRestartGatheredRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRestartGatheredRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
