#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeSkillUIDisplay; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGESKILLUIDISPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D568010)
#define RPG_GAMECORE_CHANGESKILLUIDISPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D568050)
#define RPG_GAMECORE_CHANGESKILLUIDISPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D567FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeSkillUIDisplay_TypeDefinitionIndex = 23681;

	class ChangeSkillUIDisplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::System::Boolean IsReset; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID SkillName; // 0x30
		::RPG::Client::TextID SkillTag; // 0x40
		::RPG::Client::TextID SkillTypeDesc; // 0x50
		::System::String* SkillIcon; // 0x60
		::System::String* UltraSkillIcon; // 0x68
		::RPG::Client::TextID SkillDesc; // 0x70
		::RPG::Client::TextID SimpleSkillDesc; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGESKILLUIDISPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeSkillUIDisplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeSkillUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGESKILLUIDISPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeSkillUIDisplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeSkillUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGESKILLUIDISPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
