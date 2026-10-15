#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSkillAllowBeHit; }

#define RPG_GAMECORE_RTSKILLALLOWBEHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA35E90)
#define RPG_GAMECORE_RTSKILLALLOWBEHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA35EA0)
#define RPG_GAMECORE_RTSKILLALLOWBEHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA35DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillAllowBeHit_TypeDefinitionIndex = 24216;

	class RtSkillAllowBeHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLALLOWBEHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillAllowBeHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillAllowBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLALLOWBEHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillAllowBeHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillAllowBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLALLOWBEHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
