#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetPlayerLevelConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BB4F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BB500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BB4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetPlayerLevelConfig_TypeDefinitionIndex = 19652;

	class GridFightModifierSetPlayerLevelConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPlayerLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPlayerLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPlayerLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPlayerLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
