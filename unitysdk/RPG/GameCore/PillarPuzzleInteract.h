#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PillarPuzzleInteract; }

#define RPG_GAMECORE_PILLARPUZZLEINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E6F00)
#define RPG_GAMECORE_PILLARPUZZLEINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E6F10)
#define RPG_GAMECORE_PILLARPUZZLEINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E6E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PillarPuzzleInteract_TypeDefinitionIndex = 20376;

	class PillarPuzzleInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PILLARPUZZLEINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PillarPuzzleInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PillarPuzzleInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PILLARPUZZLEINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PillarPuzzleInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PillarPuzzleInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PILLARPUZZLEINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
