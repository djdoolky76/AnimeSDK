#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAcceptPrayQuestConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D704E10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D704E20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D704DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAcceptPrayQuestConfig_TypeDefinitionIndex = 19497;

	class GridFightModifierAcceptPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
