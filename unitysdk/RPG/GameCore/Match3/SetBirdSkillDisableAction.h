#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SetBirdSkillDisableAction; }

#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D822CB0)
#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D822CC0)
#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D822C60)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetBirdSkillDisableAction_TypeDefinitionIndex = 24909;

	class SetBirdSkillDisableAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Disable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetBirdSkillDisableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetBirdSkillDisableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
