#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsSwordTrainingSkillCanLearn; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D523ED0)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D524080)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D524050)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D523EE0)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D523EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSwordTrainingSkillCanLearn_TypeDefinitionIndex = 24368;

	class ByIsSwordTrainingSkillCanLearn : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SkillID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
