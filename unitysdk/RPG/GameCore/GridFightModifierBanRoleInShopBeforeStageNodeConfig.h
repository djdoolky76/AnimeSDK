#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBanRoleInShopBeforeStageNodeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705B90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705BA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBanRoleInShopBeforeStageNodeConfig_TypeDefinitionIndex = 19446;

	class GridFightModifierBanRoleInShopBeforeStageNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
