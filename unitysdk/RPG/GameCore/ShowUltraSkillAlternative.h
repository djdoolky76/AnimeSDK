#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowUltraSkillAlternative; }

#define RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7E60)
#define RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE7E70)
#define RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowUltraSkillAlternative_TypeDefinitionIndex = 22926;

	class ShowUltraSkillAlternative : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowUltraSkillAlternative* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowUltraSkillAlternative*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowUltraSkillAlternative* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowUltraSkillAlternative*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWULTRASKILLALTERNATIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
