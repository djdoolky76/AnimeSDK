#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcPerfStatConfig; }

#define RPG_GAMECORE_NPCPERFSTATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD5D0)
#define RPG_GAMECORE_NPCPERFSTATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DD590)

namespace RPG::GameCore
{
	class NpcPerfStatConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPERFSTATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcPerfStatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcPerfStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPERFSTATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
