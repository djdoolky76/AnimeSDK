#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowDreamLandPage; }

#define RPG_GAMECORE_SHOWDREAMLANDPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADA770)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_GET_PUZZLEITEMRESULT_OFFSET UNITYSDK_OFFSET(0x1DADA960)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADA780)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADA740)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_SET_PUZZLEITEMRESULT_OFFSET UNITYSDK_OFFSET(0x1DADA970)

namespace RPG::GameCore
{
	class ShowDreamLandPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PuzzleID; // 0x18
		::System::Boolean IsShowRewardPage; // 0x1C
		::System::Boolean CloseAfterCheck; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 _PuzzleItemResult_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowDreamLandPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowDreamLandPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowDreamLandPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowDreamLandPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::UInt32 get_PuzzleItemResult()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_GET_PUZZLEITEMRESULT_OFFSET))(this);
		}

		::System::Void set_PuzzleItemResult(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_SET_PUZZLEITEMRESULT_OFFSET))(this, a1);
		}

	};
}
