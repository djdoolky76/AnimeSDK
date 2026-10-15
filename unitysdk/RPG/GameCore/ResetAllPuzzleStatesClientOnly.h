#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }
namespace RPG::GameCore { class ResetAllPuzzleStatesClientOnly; }

#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C820)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95C830)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAllPuzzleStatesClientOnly_TypeDefinitionIndex = 21206;

	class ResetAllPuzzleStatesClientOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x18
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
