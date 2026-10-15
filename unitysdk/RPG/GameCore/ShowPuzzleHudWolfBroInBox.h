#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPuzzleHudWolfBroInBox; }

#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2D80)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE2D90)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPuzzleHudWolfBroInBox_TypeDefinitionIndex = 22301;

	class ShowPuzzleHudWolfBroInBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
