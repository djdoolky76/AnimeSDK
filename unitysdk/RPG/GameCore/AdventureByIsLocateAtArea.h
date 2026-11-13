#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByIsLocateAtArea; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F0FA0)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E8F1200)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E8F11A0)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8F0FE0)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8F0F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsLocateAtArea_TypeDefinitionIndex = 21118;

	class AdventureByIsLocateAtArea : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* AreaName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
