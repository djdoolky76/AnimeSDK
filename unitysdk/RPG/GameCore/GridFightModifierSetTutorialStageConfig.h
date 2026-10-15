#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialStageConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735AE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735AF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735AA0)

namespace RPG::GameCore
{
	class GridFightModifierSetTutorialStageConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
