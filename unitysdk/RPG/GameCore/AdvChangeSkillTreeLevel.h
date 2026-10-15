#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvChangeSkillTreeLevel; }

#define RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3991D0)
#define RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3991E0)
#define RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3991A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvChangeSkillTreeLevel_TypeDefinitionIndex = 21822;

	class AdvChangeSkillTreeLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvChangeSkillTreeLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvChangeSkillTreeLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvChangeSkillTreeLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvChangeSkillTreeLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
