#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierCopyRoleAfterBuyRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYROLEAFTERBUYROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060C520)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYROLEAFTERBUYROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060C530)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYROLEAFTERBUYROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060C4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCopyRoleAfterBuyRoleConfig_TypeDefinitionIndex = 19584;

	class GridFightModifierCopyRoleAfterBuyRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYROLEAFTERBUYROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCopyRoleAfterBuyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCopyRoleAfterBuyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYROLEAFTERBUYROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCopyRoleAfterBuyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCopyRoleAfterBuyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYROLEAFTERBUYROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
