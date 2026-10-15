#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsBattleEventEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DAF10)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DB120)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DB0F0)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DAF20)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DAEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBattleEventEntity_TypeDefinitionIndex = 23031;

	class ByIsBattleEventEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::BattleEventEntitySubType ExpectSubType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
