#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GravityBallPuzzleStart; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723A20)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D723A30)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleStart_TypeDefinitionIndex = 20380;

	class GravityBallPuzzleStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
