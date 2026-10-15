#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceEndBlackText; }

#define RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FBD40)
#define RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8FBD50)
#define RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FBD00)

namespace RPG::GameCore
{
	class PerformanceEndBlackText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TextEnabled; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 TalkSentenceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceEndBlackText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceEndBlackText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceEndBlackText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceEndBlackText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
