#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarBindingExtraInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLevelVarBindingExtraInfo; }

#define RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C67A0)
#define RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C67B0)
#define RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C6770)

namespace RPG::GameCore
{
	class FiveDimLevelVarBindingExtraInfo : public ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo
	{
	public:
		::System::Boolean ResetOnExit; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 PuzzleID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
