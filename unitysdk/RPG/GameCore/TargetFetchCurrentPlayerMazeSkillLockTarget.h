#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCurrentPlayerMazeSkillLockTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE10EA0)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE10F30)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE10F10)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE10EB0)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE10E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentPlayerMazeSkillLockTarget_TypeDefinitionIndex = 24343;

	class TargetFetchCurrentPlayerMazeSkillLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
