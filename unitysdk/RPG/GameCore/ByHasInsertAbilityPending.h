#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasInsertAbilityPending; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CAE60)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CAFE0)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CAFB0)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CAE70)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CAE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertAbilityPending_TypeDefinitionIndex = 23533;

	class ByHasInsertAbilityPending : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
