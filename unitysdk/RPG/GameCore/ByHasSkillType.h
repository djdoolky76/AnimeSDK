#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasSkillType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSKILLTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CD800)
#define RPG_GAMECORE_BYHASSKILLTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CDA70)
#define RPG_GAMECORE_BYHASSKILLTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CDA10)
#define RPG_GAMECORE_BYHASSKILLTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CD840)
#define RPG_GAMECORE_BYHASSKILLTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CD7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSkillType_TypeDefinitionIndex = 23029;

	class ByHasSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SkillType SkillType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
