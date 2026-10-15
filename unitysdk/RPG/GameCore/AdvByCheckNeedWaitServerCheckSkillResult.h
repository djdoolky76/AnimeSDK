#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCheckNeedWaitServerCheckSkillResult; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38F690)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D38F810)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D38F7E0)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38F6A0)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38F660)

namespace RPG::GameCore
{
	class AdvByCheckNeedWaitServerCheckSkillResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
