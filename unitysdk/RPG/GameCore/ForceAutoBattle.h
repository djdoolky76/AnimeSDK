#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForceAutoBattle; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_FORCEAUTOBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E8BD0)
#define RPG_GAMECORE_FORCEAUTOBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E8BE0)
#define RPG_GAMECORE_FORCEAUTOBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E8BA0)

namespace RPG::GameCore
{
	class ForceAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::RPG::Client::TextID OperationTip; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
