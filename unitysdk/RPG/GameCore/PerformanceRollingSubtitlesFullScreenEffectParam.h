#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceRollingSubtitlesFullScreenEffectParam; }

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D5440)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D5280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesFullScreenEffectParam_TypeDefinitionIndex = 24409;

	class PerformanceRollingSubtitlesFullScreenEffectParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ResidenceTime; // 0x10
		::System::Single IntervalTime; // 0x14
		::System::Single FadeInDuration; // 0x18
		::System::Single FadeOutDuration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
