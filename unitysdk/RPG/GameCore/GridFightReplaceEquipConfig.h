#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightReplaceEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94CBF0)
#define RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E94CBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightReplaceEquipConfig_TypeDefinitionIndex = 19723;

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
