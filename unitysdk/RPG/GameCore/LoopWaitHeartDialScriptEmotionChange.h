#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitHeartDialScriptEmotionChange; }

#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8D80)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C8D90)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitHeartDialScriptEmotionChange_TypeDefinitionIndex = 21219;

	class LoopWaitHeartDialScriptEmotionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitHeartDialScriptEmotionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTEMOTIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
