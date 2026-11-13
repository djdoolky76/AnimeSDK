#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddEquipAndDressConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDEQUIPANDDRESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F9410)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDEQUIPANDDRESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9420)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDEQUIPANDDRESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F93D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddEquipAndDressConfig_TypeDefinitionIndex = 19532;

	class GridFightActionAddEquipAndDressConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDEQUIPANDDRESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddEquipAndDressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddEquipAndDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDEQUIPANDDRESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddEquipAndDressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddEquipAndDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDEQUIPANDDRESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
