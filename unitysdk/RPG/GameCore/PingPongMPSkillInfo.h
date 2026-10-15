#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongMPSkillInfo; }

#define RPG_GAMECORE_PINGPONGMPSKILLINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EA990)
#define RPG_GAMECORE_PINGPONGMPSKILLINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EA860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongMPSkillInfo_TypeDefinitionIndex = 16983;

	class PingPongMPSkillInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MPCostSpeed; // 0x10
		::System::Single TimeSlowRatio; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGMPSKILLINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongMPSkillInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongMPSkillInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGMPSKILLINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
