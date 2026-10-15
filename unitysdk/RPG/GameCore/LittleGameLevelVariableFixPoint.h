#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVariableFixPoint; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4520)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E4530)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E4DA0)

namespace RPG::GameCore
{
	class LittleGameLevelVariableFixPoint : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::RPG::GameCore::FixPoint DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableFixPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableFixPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
