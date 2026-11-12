#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierCopyDressedRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E940A50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E940A60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E940A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCopyDressedRoleConfig_TypeDefinitionIndex = 19745;

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
