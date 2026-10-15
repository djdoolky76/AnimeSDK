#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSkillFinish; }

#define RPG_GAMECORE_RTSKILLFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA36C30)
#define RPG_GAMECORE_RTSKILLFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA36C40)
#define RPG_GAMECORE_RTSKILLFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA36B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillFinish_TypeDefinitionIndex = 24215;

	class RtSkillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
