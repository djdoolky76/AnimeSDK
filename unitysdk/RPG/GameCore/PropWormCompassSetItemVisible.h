#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropWormCompassSetItemVisible; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WormCompassItemXY; }

#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C4B0)
#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95C4E0)
#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C460)

namespace RPG::GameCore
{
	class PropWormCompassSetItemVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::WormCompassItemXY*>* Items; // 0x20
		::Il2CppArray<::RPG::GameCore::WormCompassItemXY*>* Blocks; // 0x28
		::System::Boolean Visible; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropWormCompassSetItemVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropWormCompassSetItemVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropWormCompassSetItemVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropWormCompassSetItemVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
