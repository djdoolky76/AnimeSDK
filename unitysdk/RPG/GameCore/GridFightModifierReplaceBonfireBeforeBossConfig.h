#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceBonfireBeforeBossConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIREBEFOREBOSSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BAD10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIREBEFOREBOSSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BAD20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIREBEFOREBOSSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceBonfireBeforeBossConfig_TypeDefinitionIndex = 19669;

	class GridFightModifierReplaceBonfireBeforeBossConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIREBEFOREBOSSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceBonfireBeforeBossConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceBonfireBeforeBossConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIREBEFOREBOSSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceBonfireBeforeBossConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceBonfireBeforeBossConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIREBEFOREBOSSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
