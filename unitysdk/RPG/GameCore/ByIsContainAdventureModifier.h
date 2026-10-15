#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsContainAdventureModifier; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50C0E0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50C2E0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50C2B0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50C0F0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsContainAdventureModifier_TypeDefinitionIndex = 20787;

	class ByIsContainAdventureModifier : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
