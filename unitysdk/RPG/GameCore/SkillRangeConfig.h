#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillRangeConfig; }

#define RPG_GAMECORE_SKILLRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC2690)
#define RPG_GAMECORE_SKILLRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillRangeConfig_TypeDefinitionIndex = 17507;

	class SkillRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single Angle; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
