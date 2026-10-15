#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureSkillTargetConfig; }

#define RPG_GAMECORE_ADVENTURESKILLTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39FF50)
#define RPG_GAMECORE_ADVENTURESKILLTARGETCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D39FDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillTargetConfig_TypeDefinitionIndex = 17506;

	class AdventureSkillTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillTargetType TargetType; // 0x10
		::System::Single CastRange; // 0x14
		::System::Single AreaRadius; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSkillTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSkillTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTARGETCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
