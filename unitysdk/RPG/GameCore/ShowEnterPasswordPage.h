#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEnterPasswordPage; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAD440)
#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAD450)
#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAD400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEnterPasswordPage_TypeDefinitionIndex = 21953;

	class ShowEnterPasswordPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Password; // 0x18
		::RPG::Client::TextID TitleText; // 0x20
		::RPG::Client::TextID DescText; // 0x30
		::System::UInt32 TalkSentenceID; // 0x40
		::System::Boolean MustSucceed; // 0x44
		::System::Boolean SkipResultTips; // 0x45
		::System::Byte _padding0[0x2];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEnterPasswordPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEnterPasswordPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEnterPasswordPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEnterPasswordPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
