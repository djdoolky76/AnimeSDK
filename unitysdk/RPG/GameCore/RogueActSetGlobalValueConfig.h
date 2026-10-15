#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActSetGlobalValueConfig; }

#define RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973E80)
#define RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973E90)
#define RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetGlobalValueConfig_TypeDefinitionIndex = 19710;

	class RogueActSetGlobalValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetGlobalValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetGlobalValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetGlobalValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetGlobalValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
