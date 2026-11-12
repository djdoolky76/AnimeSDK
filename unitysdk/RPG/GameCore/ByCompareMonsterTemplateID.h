#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMonsterTemplateID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2980)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6D2C40)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6D2BC0)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6D29E0)
#define RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6D2900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterTemplateID_TypeDefinitionIndex = 23428;

	class ByCompareMonsterTemplateID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterTemplateID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERTEMPLATEID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
