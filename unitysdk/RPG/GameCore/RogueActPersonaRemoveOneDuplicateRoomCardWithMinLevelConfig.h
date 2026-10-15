#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D972660)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D972670)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D972620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig_TypeDefinitionIndex = 19775;

	class RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
