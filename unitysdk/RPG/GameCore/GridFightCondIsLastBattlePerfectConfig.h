#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondIsLastBattlePerfectConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FA6A0)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FA6B0)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FA660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsLastBattlePerfectConfig_TypeDefinitionIndex = 19330;

	class GridFightCondIsLastBattlePerfectConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
