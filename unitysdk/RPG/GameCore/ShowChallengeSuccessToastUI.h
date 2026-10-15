#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowChallengeSuccessToastUI; }

#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9F60)
#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9F70)
#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD9F30)

namespace RPG::GameCore
{
	class ShowChallengeSuccessToastUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID MainText; // 0x18
		::RPG::Client::TextID SubText; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowChallengeSuccessToastUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowChallengeSuccessToastUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
