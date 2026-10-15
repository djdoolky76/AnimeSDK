#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddUnlockedRolesConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705900)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705910)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7058C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddUnlockedRolesConfig_TypeDefinitionIndex = 19455;

	class GridFightModifierAddUnlockedRolesConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
