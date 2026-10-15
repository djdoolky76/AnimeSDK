#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityValueGetterContextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DCC10)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DCC20)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DCBC0)

namespace RPG::GameCore
{
	class LittleGameAbilityValueGetterContextConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::System::String* Key; // 0x10
		::RPG::GameCore::FixPoint DefaultValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
