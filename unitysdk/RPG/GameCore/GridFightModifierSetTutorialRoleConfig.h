#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735A80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735A90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735A40)

namespace RPG::GameCore
{
	class GridFightModifierSetTutorialRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
