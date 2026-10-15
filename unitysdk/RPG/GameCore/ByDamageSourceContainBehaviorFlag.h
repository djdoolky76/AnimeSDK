#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDamageSourceContainBehaviorFlag; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EE1C0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EE390)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EE360)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EE1D0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EE190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDamageSourceContainBehaviorFlag_TypeDefinitionIndex = 23310;

	class ByDamageSourceContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
