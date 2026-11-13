#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimePuzzleDimAllBoard; }

#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91D7C0)
#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F91D7D0)
#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F91D700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleDimAllBoard_TypeDefinitionIndex = 22367;

	class ChimePuzzleDimAllBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimePuzzleDimAllBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimePuzzleDimAllBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimePuzzleDimAllBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimePuzzleDimAllBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
