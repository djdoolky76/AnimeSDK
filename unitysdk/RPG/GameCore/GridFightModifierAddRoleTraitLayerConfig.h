#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRoleTraitLayerConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLETRAITLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93FE50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLETRAITLAYERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93FE60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLETRAITLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93FE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleTraitLayerConfig_TypeDefinitionIndex = 19767;

	class GridFightModifierAddRoleTraitLayerConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLETRAITLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleTraitLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLETRAITLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleTraitLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLETRAITLAYERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
