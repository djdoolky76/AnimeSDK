#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRemoveAffixConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735360)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735370)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRemoveAffixConfig_TypeDefinitionIndex = 19483;

	class GridFightModifierRemoveAffixConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRemoveAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRemoveAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRemoveAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRemoveAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
