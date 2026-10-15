#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideFinishActionAutoTransfer; }

#define RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7500)
#define RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E7510)
#define RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E74D0)

namespace RPG::GameCore
{
	class OverrideFinishActionAutoTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::RPG::GameCore::ScreenTransferType TransferType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
