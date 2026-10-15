#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayTarotBookTalk; }
namespace RPG::GameCore { class TarotBookTalkInfo; }

#define RPG_GAMECORE_PLAYTAROTBOOKTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9321E0)
#define RPG_GAMECORE_PLAYTAROTBOOKTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9321F0)
#define RPG_GAMECORE_PLAYTAROTBOOKTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9321B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTarotBookTalk_TypeDefinitionIndex = 21141;

	class PlayTarotBookTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TarotBookTalkInfo*>* TalkInfoList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
