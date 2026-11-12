#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSpecifyRoleAddRecommendEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDRECOMMENDEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944570)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDRECOMMENDEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E944580)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDRECOMMENDEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecifyRoleAddRecommendEquipConfig_TypeDefinitionIndex = 19762;

	class GridFightModifierSpecifyRoleAddRecommendEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDRECOMMENDEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyRoleAddRecommendEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyRoleAddRecommendEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDRECOMMENDEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyRoleAddRecommendEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyRoleAddRecommendEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDRECOMMENDEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
