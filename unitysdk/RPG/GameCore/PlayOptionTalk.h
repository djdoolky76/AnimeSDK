#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayOptionTalk; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYOPTIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92F5B0)
#define RPG_GAMECORE_PLAYOPTIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92F5C0)
#define RPG_GAMECORE_PLAYOPTIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92F580)

namespace RPG::GameCore
{
	class PlayOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::System::Boolean HideSelected; // 0x20
		::System::Boolean HideButtonAuto; // 0x21
		::System::Boolean TriggerStringWhenAllSelected; // 0x22
		::System::Byte _padding0[0x5];
		::System::String* TriggerString; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYOPTIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
