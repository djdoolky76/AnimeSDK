#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchMagicUnitRandomConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA466A0)
#define RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchMagicUnitRandomConfig_TypeDefinitionIndex = 18030;

	class RogueWorkbenchMagicUnitRandomConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchMagicUnitRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchMagicUnitRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
