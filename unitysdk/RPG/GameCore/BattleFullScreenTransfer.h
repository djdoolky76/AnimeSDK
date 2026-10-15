#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleFullScreenTransfer; }
namespace RPG::GameCore { class ScreenTransferFullDuration; }

#define RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45F5C0)
#define RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45F5D0)
#define RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45F580)

namespace RPG::GameCore
{
	class BattleFullScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferType Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ScreenTransferFullDuration* TransferFullDuration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleFullScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleFullScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFULLSCREENTRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
