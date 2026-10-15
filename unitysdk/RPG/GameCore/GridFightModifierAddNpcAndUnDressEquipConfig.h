#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddNpcAndUnDressEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D732F70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D732F80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D732F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndUnDressEquipConfig_TypeDefinitionIndex = 19429;

	class GridFightModifierAddNpcAndUnDressEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndUnDressEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDUNDRESSEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
