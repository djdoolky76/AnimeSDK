#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialCampConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7359C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7359D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735980)

namespace RPG::GameCore
{
	class GridFightModifierSetTutorialCampConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
