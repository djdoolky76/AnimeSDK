#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongMPSkillInfo; }
namespace RPG::GameCore { class PingPongSPSkillInfo; }
namespace RPG::GameCore { class PingPongSkillConfig; }

#define RPG_GAMECORE_PINGPONGSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D918D10)
#define RPG_GAMECORE_PINGPONGSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917C20)

namespace RPG::GameCore
{
	class PingPongSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongSPSkillInfo*>* SPSkillList; // 0x10
		::RPG::GameCore::PingPongMPSkillInfo* MPSkill; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
