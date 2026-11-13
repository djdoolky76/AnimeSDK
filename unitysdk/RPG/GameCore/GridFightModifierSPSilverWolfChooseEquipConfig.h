#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSPSilverWolfChooseEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPSILVERWOLFCHOOSEEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BB1F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPSILVERWOLFCHOOSEEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BB200)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPSILVERWOLFCHOOSEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BB1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSPSilverWolfChooseEquipConfig_TypeDefinitionIndex = 19794;

	class GridFightModifierSPSilverWolfChooseEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPSILVERWOLFCHOOSEEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSPSilverWolfChooseEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSPSilverWolfChooseEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPSILVERWOLFCHOOSEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSPSilverWolfChooseEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSPSilverWolfChooseEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPSILVERWOLFCHOOSEEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
