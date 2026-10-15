#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GravityBallPuzzleStart; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5FA0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F5FB0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F5EE0)

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
