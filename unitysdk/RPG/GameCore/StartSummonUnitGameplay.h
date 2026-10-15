#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartSummonUnitGameplay; }
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }
namespace System { class String; }

#define RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1E620)
#define RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1E630)
#define RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1E5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartSummonUnitGameplay_TypeDefinitionIndex = 21163;

	class StartSummonUnitGameplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigName; // 0x18
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* FloatOverrides; // 0x20
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>* StringOverrides; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartSummonUnitGameplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartSummonUnitGameplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUMMONUNITGAMEPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
