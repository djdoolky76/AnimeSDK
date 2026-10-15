#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierChangeRoleByPosConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7336E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7336F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7336A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierChangeRoleByPosConfig_TypeDefinitionIndex = 19452;

	class GridFightModifierChangeRoleByPosConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
