#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimeRewindOverrideMaxRewindTime; }

#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB88B60)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB88B70)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB88B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindOverrideMaxRewindTime_TypeDefinitionIndex = 20668;

	class TimeRewindOverrideMaxRewindTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* MaxRewindTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEMAXREWINDTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
