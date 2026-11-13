#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialPresetChimeraConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPRESETCHIMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BB970)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPRESETCHIMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BB980)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPRESETCHIMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BB930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialPresetChimeraConfig_TypeDefinitionIndex = 19811;

	class GridFightModifierSetTutorialPresetChimeraConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPRESETCHIMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialPresetChimeraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialPresetChimeraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPRESETCHIMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialPresetChimeraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialPresetChimeraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPRESETCHIMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
