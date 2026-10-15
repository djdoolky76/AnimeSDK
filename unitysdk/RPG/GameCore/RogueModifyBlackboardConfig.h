#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifyBlackboardConfig; }

#define RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1ADC0)
#define RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1AD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifyBlackboardConfig_TypeDefinitionIndex = 19790;

	class RogueModifyBlackboardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifyBlackboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifyBlackboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
