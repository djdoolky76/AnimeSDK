#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPerformanceRollingSubtitles; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2470)
#define RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE2480)
#define RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2430)

namespace RPG::GameCore
{
	class ShowPerformanceRollingSubtitles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single PrevDuration; // 0x18
		::System::Single PostDuration; // 0x1C
		::System::Boolean IsGoNextImmediately; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* JsonConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPerformanceRollingSubtitles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPerformanceRollingSubtitles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPerformanceRollingSubtitles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPerformanceRollingSubtitles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
