#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayFullScreenTransfer; }
namespace RPG::GameCore { class ScreenTransferBaseAction; }
namespace RPG::GameCore { class ScreenTransferTextInfo; }

#define RPG_GAMECORE_PLAYFULLSCREENTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FFAA0)
#define RPG_GAMECORE_PLAYFULLSCREENTRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8FFAC0)
#define RPG_GAMECORE_PLAYFULLSCREENTRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FFA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayFullScreenTransfer_TypeDefinitionIndex = 20862;

	class PlayFullScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferReason Reason; // 0x18
		::RPG::GameCore::ScreenTransferType Type; // 0x1C
		::System::Single PrevDuration; // 0x20
		::System::Single KeepDuration; // 0x24
		::System::Single PostDuration; // 0x28
		::System::Boolean EndTaskAfterUIClose; // 0x2C
		::System::Boolean KeepDisplay; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ScreenTransferTextInfo* TextInfo; // 0x30
		::Il2CppArray<::RPG::GameCore::ScreenTransferBaseAction*>* Action; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYFULLSCREENTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayFullScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYFULLSCREENTRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayFullScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYFULLSCREENTRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
