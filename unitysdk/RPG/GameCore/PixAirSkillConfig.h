#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }
namespace RPG::GameCore { class PixAirSkillConfig; }

#define RPG_GAMECORE_PIXAIRSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EFFF0)
#define RPG_GAMECORE_PIXAIRSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EFEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirSkillConfig_TypeDefinitionIndex = 16250;

	class PixAirSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityConfig* Ability; // 0x10
		::RPG::GameCore::PixAirCastCondition* CastCondition; // 0x18
		::System::Boolean InnerCoolDown; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
