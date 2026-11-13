#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAcceptRandomPrayQuestConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTRANDOMPRAYQUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060AA30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTRANDOMPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060AA40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTRANDOMPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060A9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAcceptRandomPrayQuestConfig_TypeDefinitionIndex = 19756;

	class GridFightModifierAcceptRandomPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTRANDOMPRAYQUESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAcceptRandomPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAcceptRandomPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTRANDOMPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAcceptRandomPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAcceptRandomPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTRANDOMPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
