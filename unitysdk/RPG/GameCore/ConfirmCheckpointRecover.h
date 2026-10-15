#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfirmCheckpointRecover; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6200)
#define RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D6210)
#define RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D61D0)

namespace RPG::GameCore
{
	class ConfirmCheckpointRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfirmCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfirmCheckpointRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfirmCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfirmCheckpointRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
