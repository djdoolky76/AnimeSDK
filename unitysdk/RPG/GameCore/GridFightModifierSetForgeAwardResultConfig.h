#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetForgeAwardResultConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735780)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735790)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetForgeAwardResultConfig_TypeDefinitionIndex = 19445;

	class GridFightModifierSetForgeAwardResultConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
