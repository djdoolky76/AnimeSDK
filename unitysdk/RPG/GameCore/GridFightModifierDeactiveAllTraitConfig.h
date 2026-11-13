#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierDeactiveAllTraitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDEACTIVEALLTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060C640)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDEACTIVEALLTRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060C650)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDEACTIVEALLTRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDeactiveAllTraitConfig_TypeDefinitionIndex = 19582;

	class GridFightModifierDeactiveAllTraitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDEACTIVEALLTRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDeactiveAllTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDeactiveAllTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDEACTIVEALLTRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDeactiveAllTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDeactiveAllTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDEACTIVEALLTRAITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
