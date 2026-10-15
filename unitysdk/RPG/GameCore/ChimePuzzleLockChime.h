#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimePuzzleLockChime; }

#define RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D595D70)
#define RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D595D80)
#define RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D595CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleLockChime_TypeDefinitionIndex = 21978;

	class ChimePuzzleLockChime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimePuzzleLockChime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimePuzzleLockChime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimePuzzleLockChime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimePuzzleLockChime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
