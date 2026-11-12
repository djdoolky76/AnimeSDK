#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByCompareMP; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7B70)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E5C7D80)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E5C7D50)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5C7B80)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5C7B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareMP_TypeDefinitionIndex = 24739;

	class AdventureByCompareMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Single CompareValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
