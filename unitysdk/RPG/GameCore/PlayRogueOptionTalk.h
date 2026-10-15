#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayRogueOptionTalk; }
namespace RPG::GameCore { class RogueOptionTalkInfo; }

#define RPG_GAMECORE_PLAYROGUEOPTIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D903070)
#define RPG_GAMECORE_PLAYROGUEOPTIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D903080)
#define RPG_GAMECORE_PLAYROGUEOPTIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D903040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayRogueOptionTalk_TypeDefinitionIndex = 21117;

	class PlayRogueOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueOptionTalkInfo*>* OptionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUEOPTIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayRogueOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayRogueOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUEOPTIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayRogueOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayRogueOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUEOPTIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
