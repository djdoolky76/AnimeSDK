#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialPortalConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707F90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707FA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialPortalConfig_TypeDefinitionIndex = 19442;

	class GridFightModifierSetTutorialPortalConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
