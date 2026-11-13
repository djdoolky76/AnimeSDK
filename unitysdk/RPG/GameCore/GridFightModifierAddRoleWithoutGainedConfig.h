#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRoleWithoutGainedConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEWITHOUTGAINEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B920)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEWITHOUTGAINEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B930)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEWITHOUTGAINEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleWithoutGainedConfig_TypeDefinitionIndex = 19717;

	class GridFightModifierAddRoleWithoutGainedConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEWITHOUTGAINEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleWithoutGainedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleWithoutGainedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEWITHOUTGAINEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleWithoutGainedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleWithoutGainedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEWITHOUTGAINEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
