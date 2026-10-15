#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayTarotBookOptionTalk; }

#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D904710)
#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D904720)
#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9046E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTarotBookOptionTalk_TypeDefinitionIndex = 21143;

	class PlayTarotBookOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTarotBookOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTarotBookOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTarotBookOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTarotBookOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
