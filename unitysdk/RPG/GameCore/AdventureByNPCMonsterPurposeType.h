#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCMonsterPurposeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByNPCMonsterPurposeType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C0B30)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3C0D40)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3C0D10)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C0B40)
#define RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C0B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByNPCMonsterPurposeType_TypeDefinitionIndex = 20223;

	class AdventureByNPCMonsterPurposeType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::NPCMonsterPurposeType PurposeType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMONSTERPURPOSETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
