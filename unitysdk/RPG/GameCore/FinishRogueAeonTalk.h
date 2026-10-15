#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishRogueAeonTalk; }

#define RPG_GAMECORE_FINISHROGUEAEONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9BD0)
#define RPG_GAMECORE_FINISHROGUEAEONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9BE0)
#define RPG_GAMECORE_FINISHROGUEAEONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A9B10)

namespace RPG::GameCore
{
	class FinishRogueAeonTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishRogueAeonTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishRogueAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishRogueAeonTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishRogueAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
