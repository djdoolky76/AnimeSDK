#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA463D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46390)

namespace RPG::GameCore
{
	class RogueWorkbenchFuncConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
