#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentRogueShopHasStage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA900)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EAA80)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EAA50)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EA910)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EA8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueShopHasStage_TypeDefinitionIndex = 21046;

	class ByCurrentRogueShopHasStage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
