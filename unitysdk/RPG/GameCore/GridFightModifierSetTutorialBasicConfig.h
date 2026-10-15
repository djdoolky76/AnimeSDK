#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialBasicConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735960)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735970)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735920)

namespace RPG::GameCore
{
	class GridFightModifierSetTutorialBasicConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
