#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopCharacterAllSound; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPCHARACTERALLSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24B40)
#define RPG_GAMECORE_STOPCHARACTERALLSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB24B50)
#define RPG_GAMECORE_STOPCHARACTERALLSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopCharacterAllSound_TypeDefinitionIndex = 22501;

	class StopCharacterAllSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCHARACTERALLSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopCharacterAllSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopCharacterAllSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCHARACTERALLSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopCharacterAllSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopCharacterAllSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCHARACTERALLSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
