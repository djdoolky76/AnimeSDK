#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEnterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TeleportToFiveDimGame; }

#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7F660)
#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7F670)
#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7F630)

namespace RPG::GameCore
{
	class TeleportToFiveDimGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x18
		::System::Boolean DisableCameraBlend; // 0x20
		::System::Boolean NeedWaitFinish; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FiveDimEnterType EnterType; // 0x24
		::System::Boolean WaitFullStreaming; // 0x28
		::System::Boolean WaitCameraBlendFinish; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeleportToFiveDimGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeleportToFiveDimGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeleportToFiveDimGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeleportToFiveDimGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
