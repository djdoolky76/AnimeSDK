#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERXIANZHOUUPGRADEBASICEQUIPPRIVILEGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BC980)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERXIANZHOUUPGRADEBASICEQUIPPRIVILEGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BC990)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERXIANZHOUUPGRADEBASICEQUIPPRIVILEGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BC940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig_TypeDefinitionIndex = 19803;

	class GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERXIANZHOUUPGRADEBASICEQUIPPRIVILEGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERXIANZHOUUPGRADEBASICEQUIPPRIVILEGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierXianzhouUpgradeBasicEquipPrivilegeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERXIANZHOUUPGRADEBASICEQUIPPRIVILEGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
