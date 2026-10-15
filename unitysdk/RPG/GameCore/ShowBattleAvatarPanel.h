#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPanelShowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleAvatarPanel; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD74D0)
#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD74E0)
#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD74A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleAvatarPanel_TypeDefinitionIndex = 22816;

	class ShowBattleAvatarPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AvatarPanelShowType ShowType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x20
		::System::Boolean DisableNotShowPanelUltraBtn; // 0x28
		::System::Byte _padding1[0x7];
		::RPG::GameCore::TargetEvaluator* ShowWithAnimTargetType; // 0x30
		::System::String* UniqueKey; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
