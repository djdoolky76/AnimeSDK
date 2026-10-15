#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityPixAirWaitSecond; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AC760)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AC770)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AC730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirWaitSecond_TypeDefinitionIndex = 21401;

	class LittleGameAbilityPixAirWaitSecond : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint WaitTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
