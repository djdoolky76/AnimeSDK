#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommonBoardPuzzleInBoard; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59E580)
#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59E590)
#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59E540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonBoardPuzzleInBoard_TypeDefinitionIndex = 22016;

	class CommonBoardPuzzleInBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LoopCheck; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerLeave; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
