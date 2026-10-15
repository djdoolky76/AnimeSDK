#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReviveGlobalHpConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735600)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735610)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7355C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReviveGlobalHpConfig_TypeDefinitionIndex = 19389;

	class GridFightModifierReviveGlobalHpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReviveGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREVIVEGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
