#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingCheckIfGameStarted; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1B390)
#define RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1B3A0)
#define RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1B360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckIfGameStarted_TypeDefinitionIndex = 20997;

	class SwordTrainingCheckIfGameStarted : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGameStarted; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGameNotStart; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
