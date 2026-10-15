#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PuzzleBoxmanInBoard; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PUZZLEBOXMANINBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95DF60)
#define RPG_GAMECORE_PUZZLEBOXMANINBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95DF70)
#define RPG_GAMECORE_PUZZLEBOXMANINBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95DF20)

namespace RPG::GameCore
{
	class PuzzleBoxmanInBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LoopCheck; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerLeave; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEBOXMANINBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuzzleBoxmanInBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuzzleBoxmanInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEBOXMANINBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuzzleBoxmanInBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuzzleBoxmanInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEBOXMANINBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
