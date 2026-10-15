#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingCheckCanEnterGame; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB48AA0)
#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB48AB0)
#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB48A70)

namespace RPG::GameCore
{
	class SwordTrainingCheckCanEnterGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPermitted; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotPermitted; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
