#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPuzzleHudWolfBro; }

#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5360)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB5370)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB5330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPuzzleHudWolfBro_TypeDefinitionIndex = 22300;

	class ShowPuzzleHudWolfBro : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPuzzleHudWolfBro* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPuzzleHudWolfBro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPuzzleHudWolfBro* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPuzzleHudWolfBro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
