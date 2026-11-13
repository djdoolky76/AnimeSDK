#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierModifySupplyDropConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYSUPPLYDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BA5F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYSUPPLYDROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BA600)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYSUPPLYDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BA5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierModifySupplyDropConfig_TypeDefinitionIndex = 19777;

	class GridFightModifierModifySupplyDropConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYSUPPLYDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierModifySupplyDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierModifySupplyDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYSUPPLYDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierModifySupplyDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierModifySupplyDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYSUPPLYDROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
