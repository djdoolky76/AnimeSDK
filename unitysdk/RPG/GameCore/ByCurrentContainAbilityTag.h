#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentContainAbilityTag; }
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E9C80)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E9E60)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E9E30)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E9C90)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E9C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentContainAbilityTag_TypeDefinitionIndex = 23507;

	class ByCurrentContainAbilityTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
