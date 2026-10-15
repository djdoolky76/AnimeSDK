#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEnterGame; }

#define RPG_GAMECORE_SWORDTRAININGENTERGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49790)
#define RPG_GAMECORE_SWORDTRAININGENTERGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB497A0)
#define RPG_GAMECORE_SWORDTRAININGENTERGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB49760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEnterGame_TypeDefinitionIndex = 20329;

	class SwordTrainingEnterGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENTERGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingEnterGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENTERGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingEnterGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENTERGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
