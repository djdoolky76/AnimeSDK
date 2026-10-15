#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartySwitchEnvironment; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC08540)
#define RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC08550)
#define RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC08510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySwitchEnvironment_TypeDefinitionIndex = 22358;

	class TrainPartySwitchEnvironment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartySwitchEnvironment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartySwitchEnvironment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartySwitchEnvironment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartySwitchEnvironment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHENVIRONMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
