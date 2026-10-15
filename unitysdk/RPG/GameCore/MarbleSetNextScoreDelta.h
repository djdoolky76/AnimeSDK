#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetNextScoreDelta; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D848640)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D848650)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8485F0)

namespace RPG::GameCore
{
	class MarbleSetNextScoreDelta : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 Score; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ScoreDynamic; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetNextScoreDelta* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetNextScoreDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetNextScoreDelta* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetNextScoreDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
