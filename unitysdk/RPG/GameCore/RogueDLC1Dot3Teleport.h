#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3Teleport; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B3BB0)
#define RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B3BC0)
#define RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B3B80)

namespace RPG::GameCore
{
	class RogueDLC1Dot3Teleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeTeleport; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3Teleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3Teleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3Teleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3Teleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
