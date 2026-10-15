#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class CharacterPhaseUIConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class MonsterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548ED0)
#define RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseOverrideConfig_TypeDefinitionIndex = 16504;

	class CharacterPhaseOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HitBoxConfig* PhaseHitBox; // 0x10
		::RPG::GameCore::ResilienceEnum Resilience; // 0x18
		::System::Single VisualRadius; // 0x1C
		::RPG::GameCore::CharacterPhaseUIConfig* PhaseUIConfig; // 0x20
		::RPG::GameCore::LocationConfig* PhaseLocation; // 0x28
		::System::String* OverrideColliderCameraByName; // 0x30
		::System::String* OverrideColliderCameraByNameOnLeave; // 0x38
		::RPG::GameCore::MonsterConfig* MonsterConfig; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPhaseOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPhaseOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
