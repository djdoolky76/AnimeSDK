#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckTimeRewindEntityPauseBySkillCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D468FD0)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D469180)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D469150)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D468FE0)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D468FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTimeRewindEntityPauseBySkillCount_TypeDefinitionIndex = 20669;

	class ByCheckTimeRewindEntityPauseBySkillCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 Count; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
