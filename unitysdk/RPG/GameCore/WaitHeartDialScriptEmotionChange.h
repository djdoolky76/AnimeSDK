#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitHeartDialScriptEmotionChange; }

#define RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6CD10)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6CD20)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6CCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHeartDialScriptEmotionChange_TypeDefinitionIndex = 21217;

	class WaitHeartDialScriptEmotionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHeartDialScriptEmotionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHeartDialScriptEmotionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHeartDialScriptEmotionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHeartDialScriptEmotionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTEMOTIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
