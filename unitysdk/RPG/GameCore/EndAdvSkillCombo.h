#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndAdvSkillCombo; }

#define RPG_GAMECORE_ENDADVSKILLCOMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6412A0)
#define RPG_GAMECORE_ENDADVSKILLCOMBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6412B0)
#define RPG_GAMECORE_ENDADVSKILLCOMBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D641270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndAdvSkillCombo_TypeDefinitionIndex = 20197;

	class EndAdvSkillCombo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillInputType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
