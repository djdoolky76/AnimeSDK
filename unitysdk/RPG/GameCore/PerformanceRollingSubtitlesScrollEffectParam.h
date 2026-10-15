#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceRollingSubtitlesScrollEffectParam; }

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9030E0)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D902FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesScrollEffectParam_TypeDefinitionIndex = 24410;

	class PerformanceRollingSubtitlesScrollEffectParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IntervalTime; // 0x10
		::System::Single ScrollSpeed; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
