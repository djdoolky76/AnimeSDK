#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimePuzzleDimAllBoard; }

#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D595AA0)
#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D595AB0)
#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5959E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleDimAllBoard_TypeDefinitionIndex = 21976;

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
