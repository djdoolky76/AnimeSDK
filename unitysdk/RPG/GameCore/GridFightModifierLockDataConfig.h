#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierLockDataConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7072D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7072E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLockDataConfig_TypeDefinitionIndex = 19348;

	class GridFightModifierLockDataConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLockDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLockDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLockDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLockDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
