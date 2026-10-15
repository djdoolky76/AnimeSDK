#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainOpInSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINOPINSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E75E0)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E77A0)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E7770)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E75F0)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E75B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainOpInSkill_TypeDefinitionIndex = 22572;

	class ByContainOpInSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
