#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetAllRogueBuffInGroupConfig; }

#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99DC70)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99DC80)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99DC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetAllRogueBuffInGroupConfig_TypeDefinitionIndex = 19592;

	class RogueActGetAllRogueBuffInGroupConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
