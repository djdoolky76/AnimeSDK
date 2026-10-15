#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightReplaceEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73C2A0)
#define RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73C260)

namespace RPG::GameCore
{
	class GridFightReplaceEquipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightReplaceEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightReplaceEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
