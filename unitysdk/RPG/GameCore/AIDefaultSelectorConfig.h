#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AITargetSelectorType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDefaultSelectorConfig; }
namespace RPG::GameCore { class AISelector; }

#define RPG_GAMECORE_AIDEFAULTSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D339860)
#define RPG_GAMECORE_AIDEFAULTSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D339770)

namespace RPG::GameCore
{
	class AIDefaultSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AITargetSelectorType SelectorType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::AISelector* Selector; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDEFAULTSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDefaultSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDefaultSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDEFAULTSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
