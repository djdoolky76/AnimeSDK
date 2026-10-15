#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartySwitchPerformance; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC35F40)
#define RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC35F50)
#define RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC35F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySwitchPerformance_TypeDefinitionIndex = 22359;

	class TrainPartySwitchPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StartConfigPath; // 0x18
		::System::String* PerformanceConfigPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartySwitchPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartySwitchPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartySwitchPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartySwitchPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
