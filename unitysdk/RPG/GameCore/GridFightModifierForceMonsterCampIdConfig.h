#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceMonsterCampIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734830)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734840)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7347F0)

namespace RPG::GameCore
{
	class GridFightModifierForceMonsterCampIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
