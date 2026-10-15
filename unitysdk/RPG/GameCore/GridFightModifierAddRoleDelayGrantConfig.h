#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRoleDelayGrantConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7056C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7056D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleDelayGrantConfig_TypeDefinitionIndex = 19468;

	class GridFightModifierAddRoleDelayGrantConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleDelayGrantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEDELAYGRANTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
