#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionEnum.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimChenLingEmotionAudioPostEventAction; }

#define RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B4470)
#define RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B4480)
#define RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B4440)

namespace RPG::GameCore
{
	class FiveDimChenLingEmotionAudioPostEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::EmotionEnum>* EmotionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
