#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierCopyDressedRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705DE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705DF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCopyDressedRoleConfig_TypeDefinitionIndex = 19490;

	class GridFightModifierCopyDressedRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
