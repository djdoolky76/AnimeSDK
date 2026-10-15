#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddReincarnatorEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7055A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7055B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddReincarnatorEquipConfig_TypeDefinitionIndex = 19473;

	class GridFightModifierAddReincarnatorEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
