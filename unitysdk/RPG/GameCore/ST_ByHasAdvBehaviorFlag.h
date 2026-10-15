#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByHasAdvBehaviorFlag; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA77430)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA77600)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA775D0)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA77440)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA77400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAdvBehaviorFlag_TypeDefinitionIndex = 20083;

	class ST_ByHasAdvBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* Flags; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
