#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierFinishAllPrayQuestConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706CE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706CF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFinishAllPrayQuestConfig_TypeDefinitionIndex = 19495;

	class GridFightModifierFinishAllPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
