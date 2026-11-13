#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBonfireAddCopyRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBONFIREADDCOPYROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060C0F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBONFIREADDCOPYROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060C100)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBONFIREADDCOPYROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBonfireAddCopyRoleConfig_TypeDefinitionIndex = 19783;

	class GridFightModifierBonfireAddCopyRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBONFIREADDCOPYROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBonfireAddCopyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBonfireAddCopyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBONFIREADDCOPYROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBonfireAddCopyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBonfireAddCopyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBONFIREADDCOPYROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
