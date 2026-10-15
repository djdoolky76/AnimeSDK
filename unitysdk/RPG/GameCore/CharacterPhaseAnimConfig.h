#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterReactionAnimConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5484A0)
#define RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5484B0)
#define RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53D390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseAnimConfig_TypeDefinitionIndex = 18201;

	class CharacterPhaseAnimConfig : public ::RPG::GameCore::CharacterReactionAnimConfig
	{
	public:
		::System::String* StandBy; // 0x60
		::System::String* Revive; // 0x68
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>* ModifierBehaviorVisuals; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPhaseAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPhaseAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPhaseAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPhaseAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
