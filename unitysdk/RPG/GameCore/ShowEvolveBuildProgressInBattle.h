#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEvolveBuildProgressInBattle; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADBD70)
#define RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADBD80)
#define RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADBD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildProgressInBattle_TypeDefinitionIndex = 22516;

	class ShowEvolveBuildProgressInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ShowNextStageProgress; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildProgressInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildProgressInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
