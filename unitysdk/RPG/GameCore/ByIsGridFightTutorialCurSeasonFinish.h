#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsGridFightTutorialCurSeasonFinish; }

#define RPG_GAMECORE_BYISGRIDFIGHTTUTORIALCURSEASONFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20ADA0)
#define RPG_GAMECORE_BYISGRIDFIGHTTUTORIALCURSEASONFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E20ADB0)
#define RPG_GAMECORE_BYISGRIDFIGHTTUTORIALCURSEASONFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E20AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsGridFightTutorialCurSeasonFinish_TypeDefinitionIndex = 22061;

	class ByIsGridFightTutorialCurSeasonFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGRIDFIGHTTUTORIALCURSEASONFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsGridFightTutorialCurSeasonFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsGridFightTutorialCurSeasonFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGRIDFIGHTTUTORIALCURSEASONFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsGridFightTutorialCurSeasonFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsGridFightTutorialCurSeasonFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGRIDFIGHTTUTORIALCURSEASONFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
