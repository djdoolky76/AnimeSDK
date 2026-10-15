#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }
namespace RPG::GameCore { class ResetAllPuzzleStatesClientOnlyV2; }

#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98A390)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98A3A0)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98A360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAllPuzzleStatesClientOnlyV2_TypeDefinitionIndex = 21207;

	class ResetAllPuzzleStatesClientOnlyV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x18
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
