#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariableShort.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLevelVariableShort; }

#define RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C68E0)
#define RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C68F0)
#define RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C68B0)

namespace RPG::GameCore
{
	class FiveDimLevelVariableShort : public ::RPG::GameCore::LittleGameLevelVariableShort
	{
	public:
		::System::Boolean ResetOnExit; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 PuzzleID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelVariableShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelVariableShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelVariableShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelVariableShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARIABLESHORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
