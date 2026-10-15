#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRestartGatheredRegion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ACBE0)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3ACBF0)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3ACBB0)

namespace RPG::GameCore
{
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
