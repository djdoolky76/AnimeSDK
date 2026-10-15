#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActReviveAvatarConfig; }

#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A16C0)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A16D0)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReviveAvatarConfig_TypeDefinitionIndex = 19630;

	class RogueActReviveAvatarConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReviveAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReviveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReviveAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReviveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
