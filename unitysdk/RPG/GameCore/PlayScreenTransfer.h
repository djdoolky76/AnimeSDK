#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class ScreenTransferFullDuration; }

#define RPG_GAMECORE_PLAYSCREENTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D931220)
#define RPG_GAMECORE_PLAYSCREENTRANSFER_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D931230)
#define RPG_GAMECORE_PLAYSCREENTRANSFER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9311E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayScreenTransfer_TypeDefinitionIndex = 23813;

	class PlayScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferReason Reason; // 0x18
		::RPG::GameCore::ScreenTransferType Type; // 0x1C
		::RPG::GameCore::ScreenTransferMode Mode; // 0x20
		::System::Single CustomTime; // 0x24
		::RPG::GameCore::ScreenTransferFullDuration* TransferFullDuration; // 0x28
		::System::Single MaskAlpha; // 0x30
		::System::Single TextAlpha; // 0x34
		::System::Boolean KeepDisplay; // 0x38
		::System::Boolean TextEnabled; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 TalkSentenceID; // 0x3C
		::System::Boolean NotAuto; // 0x40
		::System::Boolean PlayVoice; // 0x41
		::System::Boolean SwitchInEndTaskAfterUIClose; // 0x42
		::System::Byte _padding1[0x5];
		::Il2CppArray<::System::UInt32>* TalkSentenceIDList; // 0x48
		::System::UInt32 MissionFullLockID; // 0x50
		::System::Boolean ForceTextCanClick; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENTRANSFER_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENTRANSFER_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
