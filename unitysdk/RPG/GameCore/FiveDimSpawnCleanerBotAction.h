#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSpawnCleanerBotAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DD080)
#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DD090)
#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DD050)

namespace RPG::GameCore
{
	class FiveDimSpawnCleanerBotAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalCleanerBotPreset; // 0x10
		::System::String* EnhancedCleanerBotPreset; // 0x18
		::System::String* AttachPointName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
