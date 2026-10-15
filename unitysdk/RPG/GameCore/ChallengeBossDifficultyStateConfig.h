#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeBossDifficultyStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55B940)
#define RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossDifficultyStateConfig_TypeDefinitionIndex = 16405;

	class ChallengeBossDifficultyStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateGroupName; // 0x10
		::System::String* NoneStateName; // 0x18
		::System::String* EnterMapEventName; // 0x20
		::System::String* ExitMapEventName; // 0x28
		::System::String* DifficultyStateNameFormat; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeBossDifficultyStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeBossDifficultyStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSDIFFICULTYSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
