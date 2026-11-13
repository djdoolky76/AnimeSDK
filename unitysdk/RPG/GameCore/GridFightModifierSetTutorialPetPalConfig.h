#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialPetPalConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPETPALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BB8B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPETPALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BB8C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPETPALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BB870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialPetPalConfig_TypeDefinitionIndex = 19684;

	class GridFightModifierSetTutorialPetPalConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPETPALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialPetPalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialPetPalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPETPALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialPetPalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialPetPalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPETPALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
