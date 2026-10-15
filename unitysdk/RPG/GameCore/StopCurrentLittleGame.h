#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopCurrentLittleGame; }

#define RPG_GAMECORE_STOPCURRENTLITTLEGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24D20)
#define RPG_GAMECORE_STOPCURRENTLITTLEGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB24D30)
#define RPG_GAMECORE_STOPCURRENTLITTLEGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopCurrentLittleGame_TypeDefinitionIndex = 20994;

	class StopCurrentLittleGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCURRENTLITTLEGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopCurrentLittleGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopCurrentLittleGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCURRENTLITTLEGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopCurrentLittleGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopCurrentLittleGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCURRENTLITTLEGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
