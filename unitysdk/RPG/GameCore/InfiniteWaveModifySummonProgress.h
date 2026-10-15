#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InfiniteWaveModifySummonProgress; }

#define RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D759360)
#define RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D759370)
#define RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D759330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveModifySummonProgress_TypeDefinitionIndex = 23262;

	class InfiniteWaveModifySummonProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NewPercent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveModifySummonProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveModifySummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveModifySummonProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveModifySummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
