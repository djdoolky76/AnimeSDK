#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillDamageTypePreshowConfig; }

#define RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF2A0)
#define RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEF110)

namespace RPG::GameCore
{
	class SkillDamageTypePreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint StanceBreakActionSpeedChangeRatio; // 0x10
		::RPG::GameCore::FixPoint StanceBreakActionDelayChangeRatio; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillDamageTypePreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillDamageTypePreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
